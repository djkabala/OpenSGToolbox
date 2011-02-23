// OpenSG Tutorial Example: Minimalistic OpenSG cluster client program
// 
// To test it, run 
//   ./clusterserver -geometry 300x300+200+100 -m -w test1 &
//   ./clusterserver -geometry 300x300+500+100 -m -w test2 &
//   ./clusterclient -m -fData/tie.wrl test1 test2
//
// If you have trouble with multicasting, you can alternatively try
//   ./clusterserver -geometry 300x300+200+100 -w 127.0.0.1:30000 &
//   ./clusterserver -geometry 300x300+500+100 -w 127.0.0.1:30001 &
//   ./clusterclient -m -fData/tie.wrl 127.0.0.1:30000 127.0.0.1:30001
// 
// The client will open an empty window that you can use to navigate. The
// display is shown in the server windows.
//
// This will run all three on the same machine, but you can also start the 
// servers anywhere else, as long as you can reach them via multicast.
//
// Note: This will run two VERY active OpenGL programs on one screen. Not all
// OpenGL drivers are happy with that, so if it crashes your X, it's not our
// fault! ;)
//
// Libs: Cluster

#ifdef OSG_BUILD_ACTIVE

// General OpenSG configuration, needed everywhere
#include <OSGConfig.h>

// Methods to create simple geometry: boxes, spheres, tori etc.
#include <OSGSimpleGeometry.h>

// A little helper to simplify scene management and interaction
#include <OSGSimpleSceneManager.h>

// A little helper to simplify scene management and interaction
#include <OSGMultiDisplayWindow.h>

// Scene file handler for loading geometry files
#include <OSGSceneFileHandler.h>

#include <OSGWindowUtils.h>
#else

// General OpenSG configuration, needed everywhere
#include <OpenSG/OSGConfig.h>

// Methods to create simple geometry: boxes, spheres, tori etc.
#include <OpenSG/OSGSimpleGeometry.h>

// A little helper to simplify scene management and interaction
#include <OpenSG/OSGSimpleSceneManager.h>

// A little helper to simplify scene management and interaction
#include <OpenSG/OSGMultiDisplayWindow.h>

// Scene file handler for loading geometry files
#include <OpenSG/OSGSceneFileHandler.h>

#include <OpenSG/OSGWindowUtils.h>
#endif

#include "OSGTransform.h"
#include "OSGComponentTransform.h"
#include "OSGNameAttachment.h"
#include "OSGImageForeground.h"
#include "OSGImageFileHandler.h"

//Animation
#include "OSGKeyframeSequences.h"
#include "OSGTransformAnimator.h"
#include "OSGFieldAnimation.h"

// UserInterface Headers
#include "OSGUIForeground.h"
#include "OSGLayers.h"
#include "OSGInternalWindow.h"
#include "OSGUIDrawingSurface.h"
#include "OSGGraphics2D.h"
#include "OSGLookAndFeelManager.h"
#include "OSGButton.h"
#include "OSGFlowLayout.h"
#include "OSGPanel.h"
#include "OSGUIRectangle.h"
#include "OSGFCFileHandler.h"
#include <boost/filesystem/convenience.hpp>

#include "OSGBlendChunk.h"
#include "OSGPointChunk.h"
#include "OSGChunkMaterial.h"
#include "OSGMaterialChunk.h"
#include "OSGParticleSystem.h"
#include "OSGParticleSystemCore.h"
#include "OSGPointParticleSystemDrawer.h"
#include "OSGLineParticleSystemDrawer.h"
#include "OSGQuadParticleSystemDrawer.h"
#include "OSGDiscParticleSystemDrawer.h"
#include "OSGLineDistribution3D.h"
#include "OSGGaussianNormalDistribution1D.h"
#include "OSGDiscDistribution3D.h"
#include "OSGRateParticleGenerator.h"

#include "OSGVideoManager.h"

// Activate the OpenSG namespace
// This is not strictly necessary, you can also prefix all OpenSG symbols
// with OSG::, but that would be a bit tedious for this example
OSG_USING_NAMESPACE

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;

// forward declaration so we can have the interesting stuff upfront
void display(SimpleSceneManager *LocalMgr);
void reshape(Vec2f Size, SimpleSceneManager *LocalMgr);
void keyPressed(KeyEventDetails* const details,
                UIForeground* const TutorialUIForeground);
void mousePressed(MouseEventDetails* const details, SimpleSceneManager *LocalMgr);
void mouseReleased(MouseEventDetails* const details, SimpleSceneManager *LocalMgr);
void mouseDragged(MouseEventDetails* const details, SimpleSceneManager *LocalMgr);
void mouseWheelMoved(MouseWheelEventDetails* const details, SimpleSceneManager *LocalMgr);
void update(UpdateEventDetails* const details);

FieldAnimationTransitPtr setupAnimation(Transform* const transCore, WindowEventProducer* const win);
void initUI(void);
NodeTransitPtr createNodeUI(WindowEventProducer* const win);
UIForegroundTransitPtr createForegroundUI(WindowEventProducer* const win);
UIDrawingSurfaceTransitPtr createMainUIDrawingSurface(WindowEventProducer* const win);
NodeTransitPtr createPS(WindowEventProducer* const win);
Distribution3DRefPtr createPositionDistribution(void);
Distribution1DRefPtr createLifespanDistribution(void);
Distribution3DRefPtr createVelocityDistribution(void);
//NodeTransitPtr createVideoGeo(WindowEventProducer* const win);
//void handleVideoEnded(VideoEventDetails* const details);

// Initialize GLUT & OpenSG and set up the scene
int main(int argc, char **argv)
{
    char *opt;

    // OSG init
    osgInit(argc,argv);

    //Create a Window object
    WindowEventProducerRefPtr window = createNativeWindow();

    NodeRefPtr               scene;
    UIForegroundRecPtr TutorialUIForeground;
    // open a new scope, because the pointers below should go out of scope
    // Otherwise OpenSG will complain about objects being alive after shutdown.
    {
        // the connection between this client and the servers
        MultiDisplayWindowRefPtr mwin  = MultiDisplayWindow::create();
    
        // evaluate params
        for(int a=1 ; a<argc ; ++a)
        {
            if(argv[a][0] == '-')
            {
                switch(argv[a][1])
                {
                case 'm': mwin->setConnectionType("Multicast");
                          std::cout << "Connection type set to Multicast"
                                    << std::endl;
                          break;
                case 'p': mwin->setConnectionType("SockPipeline");
                          std::cout << "Connection type set to SockPipeline"
                                    << std::endl;
                          break;
                case 'i': opt = argv[a][2] ? argv[a]+2 : argv[++a];
                          if(opt != argv[argc])
                              mwin->setConnectionInterface(opt);
                          break;
                case 'a': opt = argv[a][2] ? argv[a]+2 : argv[++a];
                          if(opt != argv[argc])
                              mwin->setServiceAddress(opt);
                          break;
                case 'f': opt = argv[a][2] ? argv[a]+2 : argv[++a];
                          if(opt != argv[argc])
                              scene = SceneFileHandler::the()->read(opt, 
                                                                         0);
                          break;
                case 'x': opt = argv[a][2] ? argv[a]+2 : argv[++a];
                          if(opt != argv[argc])
                              mwin->setHServers(atoi(opt));
                          break;
                case 'y': opt = argv[a][2] ? argv[a]+2 : argv[++a];
                          if(opt != argv[argc])
                              mwin->setVServers(atoi(opt));
                          break;
                default:  std::cout << argv[0]  
                                    << " -m"
                                    << " -p"
                                    << " -i interface"
                                    << " -f file"
                                    << " -x horizontal server cnt"
                                    << " -y vertical server cnt"
                                    << std::endl;
                          return 0;
                }
            }
            else
            {
                printf("%s\n",argv[a]);
                mwin->editMFServers()->push_back(argv[a]);
            }
        }
    
        // dummy size for navigator
        mwin->setSize(300,300);
    
        // create default scene
        if(scene == NULL)
        {
            //scene = makeTorus(.5, 2, 32, 32);
            GeometryRecPtr TorusGeometry = makeTorusGeo(.5, 2, 32, 32);

            NodeRecPtr TorusGeometryNode = Node::create();
            TorusGeometryNode->setCore(TorusGeometry);

            NodeRecPtr TorusNode = Node::create();
            TransformRecPtr TorusNodeTrans = Transform::create();
            setName(TorusNodeTrans, std::string("TorusNodeTransformationCore"));

            TorusNode->setCore(TorusNodeTrans);
            TorusNode->addChild(TorusGeometryNode);

            //Make Main Scene Node
            scene = Node::create();
            TransformRecPtr Trans = Transform::create();
            setName(Trans, std::string("MainTransformationCore"));

            scene->setCore(Trans);
            scene->addChild(TorusNode);

            //NodeRecPtr PSNode = createPS(window);
            //scene->addChild(PSNode);

            //NodeRecPtr VideoNode = createVideoGeo(window);
            //scene->addChild(VideoNode);
            
            initUI();

            //NodeRecPtr UINode = createNodeUI(window);
            //scene->addChild(UINode);
        }
    
        commitChanges();
    
        // create the SimpleSceneManager helper
        mgr = new SimpleSceneManager;
    
        // tell the manager what to manage
        mgr->setWindow(mwin );
        mgr->setRoot  (scene);

        TutorialUIForeground =  createForegroundUI(window);
        //

        //ImageRecPtr AnImage
            //=ImageFileHandler::the()->read("/Users/davidkabala/Pictures/LookAndFeel.jpg");
        //ImageForegroundRecPtr ImageFore = ImageForeground::create();

        //ImageFore->addImage(AnImage, Pnt2f( 10.0f,10.0f));
        

        // Add the UI Foreground Object to the Scene
        ViewportRefPtr TutorialViewport = mgr->getWindow()->getPort(0);
        TutorialViewport->addForeground(TutorialUIForeground);
        //TutorialViewport->addForeground(ImageFore);
    
        // show the whole scene
        mgr->showAll();
        
        // initialize window
        mwin->init();
    }

    //Apply window settings
    window->setUseCallbackForDraw(true);
    window->setUseCallbackForReshape(true);
    window->initWindow();


    // tell the manager what to manage
    SimpleSceneManager LocalMgr;
    LocalMgr.setWindow(window );
    //NodeRecPtr LocalNode = makeNodeFor(scene->getCore());
    NodeRecPtr LocalNode = makeCoredNode<Group>();
    LocalMgr.setRoot  (LocalNode);

    ViewportRefPtr TutorialViewport = LocalMgr.getWindow()->getPort(0);
    TutorialViewport->addForeground(TutorialUIForeground);

    // show the whole scene
    LocalMgr.showAll();
    
    // create the SimpleSceneManager helper
    window->setDisplayCallback(boost::bind(display, &LocalMgr));
    window->setReshapeCallback(boost::bind(reshape, _1, &LocalMgr));

    //Attach to events
    window->connectMousePressed(boost::bind(mousePressed, _1, &LocalMgr));
    window->connectMouseReleased(boost::bind(mouseReleased, _1, &LocalMgr));
    window->connectMouseDragged(boost::bind(mouseDragged, _1, &LocalMgr));
    window->connectMouseWheelMoved(boost::bind(mouseWheelMoved, _1, &LocalMgr));
    window->connectKeyPressed(boost::bind(keyPressed, _1, TutorialUIForeground.get()));
    //window->connectUpdate(boost::bind(update, _1));

    //FieldAnimationRecPtr TheAnimation =
        //setupAnimation(dynamic_cast<Transform*>(scene->getCore()), window);

    Vec2f WinSize(300.0f,300.0f);
    Pnt2f WinPos(10.0f,30.0f);
    window->openWindow(WinPos,
                       WinSize,
                       "Client Window");
    
    window->mainLoop();

    return 0;
}

//
// callback functions
//

void display(SimpleSceneManager *localMgr)
{
    mgr->redraw();
    localMgr->redraw();

    // clear change list. If you don't clear the changelist,
    // then the same changes will be transmitted a second time
    // in the next frame. 
    Thread::getCurrentChangeList()->clear();

    //osgSleep(10);
}

// react to size changes
void reshape(Vec2f Size, SimpleSceneManager *localMgr)
{
    std::cout << "Reshape" << std::endl;
}

void update(UpdateEventDetails* const details)
{
    std::cout << "Update" << std::endl;
}

void keyPressed(KeyEventDetails* const details,
                UIForeground* const TutorialUIForeground)
{
    if(details->getKey() == KeyEventDetails::KEY_Q &&
       details->getModifiers() & KeyEventDetails::KEY_MODIFIER_COMMAND)
    {
        dynamic_cast<WindowEventProducer*>(details->getSource())->closeWindow();
    }
    switch(details->getKey())
    {
    case KeyEventDetails::KEY_T:
        TutorialUIForeground->setTile(!TutorialUIForeground->getTile());
        break;

    }
}

void mousePressed(MouseEventDetails* const details, SimpleSceneManager *localMgr)
{
    mgr->mouseButtonPress(details->getButton(), details->getLocation().x(), details->getLocation().y());
}

void mouseReleased(MouseEventDetails* const details, SimpleSceneManager *localMgr)
{
    mgr->mouseButtonRelease(details->getButton(), details->getLocation().x(), details->getLocation().y());
}

void mouseDragged(MouseEventDetails* const details, SimpleSceneManager *localMgr)
{
    mgr->mouseMove(details->getLocation().x(), details->getLocation().y());
}

void mouseWheelMoved(MouseWheelEventDetails* const details, SimpleSceneManager *localMgr)
{
    if(details->getUnitsToScroll() > 0)
    {
        for(UInt32 i(0) ; i<details->getUnitsToScroll() ;++i)
        {
            mgr->mouseButtonPress(Navigator::DOWN_MOUSE,details->getLocation().x(),details->getLocation().y());
        }
    }
    else if(details->getUnitsToScroll() < 0)
    {
        for(UInt32 i(0) ; i<abs(details->getUnitsToScroll()) ;++i)
        {
            mgr->mouseButtonPress(Navigator::UP_MOUSE,details->getLocation().x(),details->getLocation().y());
        }
    }
}

FieldAnimationTransitPtr setupAnimation(Transform* const transCore, WindowEventProducer* const win)
{
    //Number Keyframe Sequence
    KeyframeNumberSequenceReal32RecPtr XTransKeyframes = KeyframeNumberSequenceReal32::create();
    XTransKeyframes->addKeyframe(1.0,0.0f);
    XTransKeyframes->addKeyframe(5.0,2.0f);
    XTransKeyframes->addKeyframe(-5.0,4.0f);
    XTransKeyframes->addKeyframe(1.0,6.0f);

    KeyframeNumberSequenceReal32RecPtr YRotKeyframes = KeyframeNumberSequenceReal32::create();
    YRotKeyframes->addKeyframe(0.0,0.0f);
    YRotKeyframes->addKeyframe(45.0,2.0f);
    YRotKeyframes->addKeyframe(0.0,4.0f);

    KeyframeNumberSequenceReal32RecPtr ZScaleKeyframes = KeyframeNumberSequenceReal32::create();
    ZScaleKeyframes->addKeyframe(1.0,0.0f);
    ZScaleKeyframes->addKeyframe(2.0,2.0f);
    ZScaleKeyframes->addKeyframe(3.0,4.0f);
    ZScaleKeyframes->addKeyframe(1.0,6.0f);

    //Animator
    TransformAnimatorRecPtr TheAnimator = TransformAnimator::create();
    TheAnimator->setXTranslationSequence(XTransKeyframes);
    TheAnimator->setXRotationSequence(YRotKeyframes);
    TheAnimator->setYRotationSequence(YRotKeyframes);
    //TheAnimator->setZRotationSequence(YRotKeyframes);
    TheAnimator->setZScaleSequence(ZScaleKeyframes);

    //Animation
    FieldAnimationRecPtr TheAnimation = FieldAnimation::create();
    TheAnimation->setAnimator(TheAnimator);
    TheAnimation->setInterpolationType(Animator::LINEAR_INTERPOLATION);
    TheAnimation->setCycling(-1);
    TheAnimation->setAnimatedField(transCore, std::string("matrix"));

    std::cout << transCore << std::endl;

    TheAnimation->attachUpdateProducer(win);
    TheAnimation->start();

    return FieldAnimationTransitPtr(TheAnimation);
}

void initUI(void)
{
    // Initialize the LookAndFeelManager to enable default settings
    LookAndFeelManager::the()->getLookAndFeel()->init();
}

NodeTransitPtr createNodeUI(WindowEventProducer* const win)
{
    // Create the Graphics
    GraphicsRecPtr TutorialGraphics = Graphics2D::create();


    UIDrawingSurfaceRecPtr TutorialDrawingSurface =
        createMainUIDrawingSurface(win);

    UIRectangleRecPtr ExampleUIRectangle = UIRectangle::create();
    Vec2f UIRectSize(1200.0f,800.0f);
    ExampleUIRectangle->setPoint(Pnt3f(UIRectSize.x() * -0.5f, UIRectSize.y() * -0.5f, 100.0f));
    ExampleUIRectangle->setWidth(UIRectSize.x());
    ExampleUIRectangle->setHeight(UIRectSize.y());
    ExampleUIRectangle->setDrawingSurface(TutorialDrawingSurface);

    NodeRecPtr ExampleUIRectangleNode = makeNodeFor(ExampleUIRectangle);
    return NodeTransitPtr(ExampleUIRectangleNode);
}

UIForegroundTransitPtr createForegroundUI(WindowEventProducer* const win)
{
    // Create the Graphics
    GraphicsRecPtr TutorialGraphics = Graphics2D::create();

    UIDrawingSurfaceRecPtr TutorialDrawingSurface =
        createMainUIDrawingSurface(win);
    TutorialDrawingSurface->setSize(Vec2f(1280.0f, 800.0f));

    UIForegroundRefPtr TutorialUIForeground = OSG::UIForeground::create();
    TutorialUIForeground->setDrawingSurface(TutorialDrawingSurface);

    return UIForegroundTransitPtr(TutorialUIForeground);
}

UIDrawingSurfaceTransitPtr createMainUIDrawingSurface(WindowEventProducer* const win)
{

    BoostPath UIFilePath("../UserInterface/Data/53LoadGUI.xml");

    FCFileType::FCPtrStore NewContainers;
    NewContainers = FCFileHandler::the()->read(UIFilePath);

    //Store each window found in the XML in the vector
    std::vector<InternalWindowRecPtr> StoreWindows;
    FCFileType::FCPtrStore::iterator Itor;
    for(Itor = NewContainers.begin(); Itor != NewContainers.end(); ++Itor)
    {
        if( (*Itor)->getType() == (InternalWindow::getClassType()))
        {
            StoreWindows.push_back(dynamic_pointer_cast<InternalWindow>(*Itor));
        }
    }
    // Create the Graphics
    GraphicsRecPtr TutorialGraphics = Graphics2D::create();

    // Create the Drawing Surface
    UIDrawingSurfaceRecPtr TutorialDrawingSurface = UIDrawingSurface::create();
    TutorialDrawingSurface->setGraphics(TutorialGraphics);
    TutorialDrawingSurface->setEventProducer(win);

    //Loop through the vector and output each window
    std::vector<InternalWindowRecPtr>::iterator WindowItor;
    for(WindowItor = StoreWindows.begin(); WindowItor != StoreWindows.end(); ++WindowItor)
    {
        TutorialDrawingSurface->openWindow(*WindowItor);
    }	

    return UIDrawingSurfaceTransitPtr(TutorialDrawingSurface);
}


NodeTransitPtr createPS(WindowEventProducer* const win)
{
    //Particle System Material
    PointChunkRecPtr PSPointChunk = PointChunk::create();
    PSPointChunk->setSize(5.0f);
    PSPointChunk->setSmooth(true);

    BlendChunkRecPtr PSBlendChunk = BlendChunk::create();
    PSBlendChunk->setSrcFactor(GL_SRC_ALPHA);
    PSBlendChunk->setDestFactor(GL_ONE_MINUS_SRC_ALPHA);

    MaterialChunkRecPtr PSMaterialChunkChunk = MaterialChunk::create();
    PSMaterialChunkChunk->setAmbient(Color4f(0.5f,0.5f,0.5f,0.3f));
    PSMaterialChunkChunk->setDiffuse(Color4f(0.8f,0.8f,0.8f,0.3f));
    PSMaterialChunkChunk->setSpecular(Color4f(1.0f,1.0f,1.0f,0.3f));
    PSMaterialChunkChunk->setColorMaterial(GL_AMBIENT_AND_DIFFUSE);

    ChunkMaterialRecPtr PSMaterial = ChunkMaterial::create();
    PSMaterial->addChunk(PSPointChunk);
    PSMaterial->addChunk(PSMaterialChunkChunk);
    PSMaterial->addChunk(PSBlendChunk);


    //Particle System
    ParticleSystemRecPtr ExampleParticleSystem = ParticleSystem::create();
        ExampleParticleSystem->addParticle(Pnt3f(-400,-400,0),
                                           Vec3f(0.0,0.0f,1.0f),
                                           Color4f(1.0,1.0,1.0,1.0), 
                                           Vec3f(1.0,1.0,1.0), 
                                           0.25, 
                                           Vec3f(0.0f,0.0f,0.0f), //Velocity
                                           Vec3f(0.0f,0.0f,0.0f)
                                          );
        ExampleParticleSystem->addParticle(Pnt3f(400,400,0),
                                           Vec3f(0.0,0.0f,1.0f),
                                           Color4f(1.0,1.0,1.0,1.0), 
                                           Vec3f(1.0,1.0,1.0), 
                                           0.25, 
                                           Vec3f(0.0f,0.0f,0.0f), //Velocity
                                           Vec3f(0.0f,0.0f,0.0f)
                                          ); 
    ExampleParticleSystem->attachUpdateProducer(win);

    //Particle System Drawer
    //Point
    PointParticleSystemDrawerRecPtr ExamplePointDrawer = PointParticleSystemDrawer::create();
    //ExamplePointParticleSystemDrawer->setForcePerParticleSizing(true);

    //Line
        LineParticleSystemDrawerRefPtr ExampleParticleSystemDrawer = LineParticleSystemDrawer::create();
        ExampleParticleSystemDrawer->setLineDirectionSource(LineParticleSystemDrawer::DIRECTION_VELOCITY);
        ExampleParticleSystemDrawer->setLineLengthSource(LineParticleSystemDrawer::LENGTH_SPEED);
        ExampleParticleSystemDrawer->setLineLengthScaling(0.001);
        ExampleParticleSystemDrawer->setEndPointFading(Vec2f(0.0f,1.0f));

    //Quad
    QuadParticleSystemDrawerRecPtr ExampleQuadDrawer = QuadParticleSystemDrawer::create();

    //Disc
    DiscParticleSystemDrawerRecPtr ExampleDiscDrawer = DiscParticleSystemDrawer::create();
    ExampleDiscDrawer->setSegments(16);
    ExampleDiscDrawer->setCenterAlpha(1.0);
    ExampleDiscDrawer->setEdgeAlpha(0.0);

        //Create a Rate Particle Generator
        RateParticleGeneratorRefPtr ExampleGenerator = RateParticleGenerator::create();

        //Attach the function objects to the Generator
        ExampleGenerator->setPositionDistribution(createPositionDistribution());
        ExampleGenerator->setLifespanDistribution(createLifespanDistribution());
        ExampleGenerator->setGenerationRate(300.0);
        ExampleGenerator->setVelocityDistribution(createVelocityDistribution());

        //Attach the Generator to the Particle System
        ExampleParticleSystem->pushToGenerators(ExampleGenerator);

    //Particle System Node
    ParticleSystemCoreRecPtr ParticleNodeCore = ParticleSystemCore::create();
    ParticleNodeCore->setSystem(ExampleParticleSystem);
    ParticleNodeCore->setDrawer(ExampleParticleSystemDrawer);
    ParticleNodeCore->setMaterial(PSMaterial);

    NodeRecPtr ParticleNode = Node::create();
    ParticleNode->setCore(ParticleNodeCore);
    return NodeTransitPtr(ParticleNode);
}

Distribution3DRefPtr createPositionDistribution(void)
{
    //Disc Distribution
    DiscDistribution3DRefPtr TheDiscDistribution = DiscDistribution3D::create();
    TheDiscDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
    TheDiscDistribution->setInnerRadius(30.0);
    TheDiscDistribution->setOuterRadius(600.0);
    TheDiscDistribution->setMinTheta(0.0);
    TheDiscDistribution->setMaxTheta(6.283185307);
    TheDiscDistribution->setNormal(Vec3f(0.0,0.0,1.0));
    TheDiscDistribution->setSurfaceOrEdge(DiscDistribution3D::SURFACE);


    return TheDiscDistribution;
}

Distribution1DRefPtr createLifespanDistribution(void)
{
    GaussianNormalDistribution1DRefPtr TheLifespanDistribution = GaussianNormalDistribution1D::create();
    TheLifespanDistribution->setMean(50.0f);
    TheLifespanDistribution->setStandardDeviation(3.0);

    return TheLifespanDistribution;
}

Distribution3DRefPtr createVelocityDistribution(void)
{
    //Line Distribution
    LineDistribution3DRefPtr TheLineDistribution = LineDistribution3D::create();
    TheLineDistribution->setPoint1(Pnt3f(0.0,0.0,150.0));
    TheLineDistribution->setPoint2(Pnt3f(0.0,0.0,300.0));

    return TheLineDistribution;
}

//NodeTransitPtr createVideoGeo(WindowEventProducer* const win)
//{
        //BoostPath VideoFilePath("../Video/Data/ExampleVideo.avi");

        //VideoWrapperRecPtr TheVideo  = getDefaultVideoManager()->createVideoWrapper();
        //TheVideo->open(VideoFilePath, win);
		//TheVideo->pause();
        //if(TheVideo->hasAudio())
        //{
			//TheVideo->enableAudio();
			//TheVideo->setAudioVolume(0.5f);
        //}
        //// Set filtering modes. LINEAR is cheap and good if the image size
        //// changes very little. In this case the video changes a lot, so using a
        //// MipMapping base filter will likely cause major performance issues.
        //TheVideo->setMinFilter(GL_NEAREST);
        //TheVideo->setMagFilter(GL_LINEAR);
        
        //// Set the wrapping modes. We don't need repetition, it might actually
        //// introduce artifactes at the borders, so switch it off.
        //TheVideo->setWrapS(GL_CLAMP_TO_EDGE);
        //TheVideo->setWrapT(GL_CLAMP_TO_EDGE);   
        //TheVideo->setScale(false);            
        //TheVideo->attachUpdateProducer(win);
		//TheVideo->connectEnded(boost::bind(handleVideoEnded, _1));

		//ChunkMaterialUnrecPtr VideoMaterial = ChunkMaterial::create();

		//VideoMaterial->addChunk(TheVideo);
        //StateChunkUnrecPtr pMChunk = MaterialChunk::create();
		//VideoMaterial->addChunk(pMChunk);

        ////Box Geometry
		//GeometryRecPtr BoxGeometry = makeBoxGeo(10.0,10.0,10.0,2,2,2);
        //BoxGeometry->setMaterial(VideoMaterial);
        
        //NodeRecPtr BoxGeometryNode = makeNodeFor(BoxGeometry);

        //return NodeTransitPtr(BoxGeometryNode);
//}

//void handleVideoEnded(VideoEventDetails* const details)
//{
	//std::cout << "Reached End" << std::endl;
	////dynamic_cast<VideoWrapper*>(details->getSource())->pause();
	//dynamic_cast<VideoWrapper*>(details->getSource())->stop();
	////dynamic_cast<VideoWrapper*>(details->getSource())->seek(0);
	//dynamic_cast<VideoWrapper*>(details->getSource())->play();
	////dynamic_cast<VideoWrapper*>(details->getSource())->unpause();
//}
