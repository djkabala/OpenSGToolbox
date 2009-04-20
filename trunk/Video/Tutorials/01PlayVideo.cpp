// OpenSG Tutorial Example: Show an animated texture in hte background
//
// This example shows how to use the TextureBackground to show animated
// pictures behind the 3D graphics, and how to do it as efficiently as 
// possible
//
// Most video is not a power-of-two (POT) size, which makes it interesting.
// OpenSG handles most of that behind the scenes, but you have to set some
// options to make it efficient (see below).
//
// Based on 02move.cpp

// Headers
#include <OpenSG/OSGGLUT.h>
#include <OpenSG/OSGConfig.h>
#include <OpenSG/OSGSimpleGeometry.h>
#include <OpenSG/OSGGLUTWindow.h>
#include <OpenSG/OSGSimpleSceneManager.h>
#include <OpenSG/OSGBaseFunctions.h>
#include <OpenSG/OSGTransform.h>

// new headers: 

// For the access to OpenGL extensions
#include <OpenSG/OSGGLEXT.h>

// For the image(s) to display
#include <OpenSG/OSGImage.h>

// For textures
#include <OpenSG/OSGTextureChunk.h>
#include <OpenSG/OSGMaterialChunk.h>
#include <OpenSG/OSGChunkMaterial.h>

// To put a texture into the background
#include <OpenSG/Video/OSGVideoManager.h>


// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// The pointer to the transformation
TransformPtr trans;

// The pointer to the dynamic image and the texture
ImagePtr        image;
TextureChunkPtr tex;

// Some helper flags for different code pathes

// flag to indicate whether the images are power-of-two (POT) in size or not
bool  isPOT = true;

// flag to indicate whether NPOT textures are available
// Purely informative, the code doesn't really care.
bool  hasNPOT = false;


// flag to indicate that only a small part of the image should be changed
// per frame. The random image generation can get slow for large
// images.
bool  changeOnlyPart = false;
VideoWrapperPtr TheVideo;

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;

// forward declaration so we can have the interesting stuff upfront
int setupGLUT( int *argc, char *argv[] );
MaterialPtr createVideoMaterial(void);

class TutorialVideoListener : public VideoListener
{
  public:
  
    virtual void paused(const VideoEvent& e)
	{
		std::cout << "Paused" << std::endl;
	}

    virtual void unpaused(const VideoEvent& e)
	{
		std::cout << "Unpaused" << std::endl;
	}

    virtual void played(const VideoEvent& e)
	{
		std::cout << "Played" << std::endl;
	}

    virtual void stopped(const VideoEvent& e)
	{
		std::cout << "Stopped" << std::endl;
	}

    virtual void opened(const VideoEvent& e)
	{
		std::cout << "Opened" << std::endl;
	}

    virtual void closed(const VideoEvent& e)
	{
		std::cout << "Closed" << std::endl;
	}

    virtual void reachedEnd(const VideoEvent& e)
	{
		std::cout << "Reached End" << std::endl;
	}

    virtual void seeked(const VideoEvent& e)
	{
		std::cout << "Seeked" << std::endl;
	}

};

// Grab/update the image
// This just update the image's data and tells the texture that it changed.
// For a video this would grab the next frame
void grabImage(ImagePtr img)
{

    ImagePtr TheImage = TheVideo->getImage();

    if(TheImage != NullFC)
    {
		if(!hasNPOT)
		{
			TheImage->scaleNextPower2(TheImage);
		}
		if(tex->getImage() != TheImage)
		{
			beginEditCP(tex, TextureChunk::ImageFieldMask);
				tex->setImage(TheImage);
			endEditCP(tex, TextureChunk::ImageFieldMask);
		}
		else
		{
			tex->imageContentChanged();
		}
    }
}


// redraw the window
void display( void )
{   
    // update the image
    grabImage(image);
    
    // redraw the screen
    mgr->redraw();
}

void update(void)
{
	TheVideo->updateImage();
	glutPostRedisplay();
}

// Initialize GLUT & OpenSG and set up the scene
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);
    getDefaultVideoManager()->init(argc, argv);
    
    TheVideo = getDefaultVideoManager()->createVideoWrapper();
    
    TheVideo->open(Path("C:\\Test.avi"));
	TheVideo->pause();

	TutorialVideoListener TheVideoListener;
	TheVideo->addVideoListener(&TheVideoListener);


    // GLUT init
    int winid = setupGLUT(&argc, argv);

    // the connection between GLUT and OpenSG
    GLUTWindowPtr gwin= GLUTWindow::create();
    gwin->setId(winid);
    gwin->init();

    // create the scene
	GeometryPtr SceneGeometry = makePlaneGeo(10.0,10.0,10,10);
	beginEditCP(SceneGeometry, Geometry::MaterialFieldMask);
		SceneGeometry->setMaterial(createVideoMaterial());
	endEditCP(SceneGeometry, Geometry::MaterialFieldMask);
	
    NodePtr SceneGeometryNode = Node::create();
	beginEditCP(SceneGeometryNode, Node::CoreFieldMask);
        SceneGeometryNode->setCore(SceneGeometry);
	endEditCP(SceneGeometryNode, Node::CoreFieldMask);

    NodePtr scene = Node::create();
    trans = Transform::create();
	beginEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);
    {
        scene->setCore(trans);
		scene->addChild(SceneGeometryNode);
    }
    endEditCP  (scene, Node::CoreFieldMask | Node::ChildrenFieldMask);
    
    // Create the parts needed for the video background
    
    UInt32 width = 640;
    UInt32 height = 480;
    
    // get the desired size from the command line
    if(argc >= 3)
    {
        width = atoi(argv[1]);
        height = atoi(argv[2]);
    }    
    
    // To check OpenGL extensions, the Window needs to have run through
    // frameInit at least once. This automatically happens when rendering,
    // but we don't don't to wait for that here.
    gwin->activate();
    gwin->frameInit();
    
    // Now we can check for OpenGL extensions    
    hasNPOT = gwin->hasExtension("GL_ARB_texture_rectangle");
   
    // Print what we've got
    SLOG << "Got " << (isPOT?"":"non-") << "power-of-two images and "
         << (hasNPOT?"can":"cannot") << " use NPOT textures, changing " 
         << (changeOnlyPart?"part":"all") 
         << " of the screen"
         << endLog;
    
    
    

    // create the SimpleSceneManager helper
    mgr = new SimpleSceneManager;

    // tell the manager what to manage
    mgr->setWindow(gwin );
    mgr->setRoot  (scene);
    mgr->setStatistics(true);
    
    // show the whole scene
    mgr->showAll();

    // GLUT main loop
    glutMainLoop();

    //DeInit
    getDefaultVideoManager()->exit();
    osgExit();

    return 0;
}

//
// GLUT callback functions
//

// react to size changes
void reshape(int w, int h)
{
    mgr->resize(w, h);
    glutPostRedisplay();
}

// react to mouse button presses
void mouse(int button, int state, int x, int y)
{
    if (state)
        mgr->mouseButtonRelease(button, x, y);
    else
        mgr->mouseButtonPress(button, x, y);
        
    glutPostRedisplay();
}

// react to mouse motions with pressed buttons
void motion(int x, int y)
{
    mgr->mouseMove(x, y);
    glutPostRedisplay();
}

// react to keys
void keyboard(unsigned char k, int x, int y)
{
    switch(k)
    {
        case 27:  
        {
            OSG::osgExit();
            exit(0);
        }
        break;
		case 'p':
			TheVideo->pauseToggle();
			break;
		case 's':
			TheVideo->stop();
			break;
		case 'r':
			TheVideo->stop();
			TheVideo->seek(0);
			break;
    }
}

// setup the GLUT library which handles the windows for us
int setupGLUT(int *argc, char *argv[])
{
    glutInit(argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    
    int winid = glutCreateWindow("OpenSG");
	glutPositionWindow(50,50);
	glutReshapeWindow(800,600);
    
    glutReshapeFunc(reshape);
    glutDisplayFunc(display);
    glutMouseFunc(mouse);
    glutMotionFunc(motion);
    glutKeyboardFunc(keyboard);

    // call the redraw function whenever there's nothing else to do
    glutIdleFunc(update);

    return winid;
}

MaterialPtr createVideoMaterial(void)
{
    // Ok, now for the meat of the code...
    // first we need an Image to hold the picture(s) to show
    image = Image::create();
    
    beginEditCP(image);
    {
        // set the image's size and type, and allocate memory
        // this example uses RGB. On some systems (e.g. Windows) BGR
        // or BGRA might be faster, it depends on how the images are 
        // acquired
        image->set(Image::OSG_RGB_PF, 2, 2);
    }
    endEditCP(image);
    
    // Now create the texture to be used for the background
    tex = TextureChunk::create();
    
    beginEditCP(tex);
    {
        // Associate image and texture
        tex->setImage(image);
        
        // Set filtering modes. LINEAR is cheap and good if the image size
        // changes very little (i.e. the window is about the same size as 
        // the images).
        tex->setMinFilter(GL_LINEAR);
        tex->setMagFilter(GL_LINEAR);        
        
        // Set the wrapping modes. We don't need repetition, it might actually
        // introduce artifactes at the borders, so switch it off.
        tex->setWrapS(GL_CLAMP_TO_EDGE);
        tex->setWrapT(GL_CLAMP_TO_EDGE);             
        
        // Newer versions of OpenGl can handle NPOT textures directly.
        // OpenSG will do that internally automatically.
        //
        // Older versions need POT textures. By default OpenSG
        // will scale an NPOT texture to POT while defining it.
        // For changing textures that's too slow.
        // So tell OpenSG not to scale the image, but use the texture
        // matrix to scale. This only works if we're not using the
        // texture matrix for anything else, which is fine for video
        // backgrounds.
        // This does not do anything if NPOT textures are supported, so
        // it is safe to just set it.
        
        tex->setScale(false);            
        tex->setNPOTMatrixScale(true);
    }
    endEditCP(tex);

	ChunkMaterialPtr TheMaterial = ChunkMaterial::create();

	beginEditCP(TheMaterial, ChunkMaterial::ChunksFieldMask);
		TheMaterial->addChunk(tex);
		TheMaterial->addChunk(MaterialChunk::create());
	endEditCP(TheMaterial, ChunkMaterial::ChunksFieldMask);

	return TheMaterial;
}