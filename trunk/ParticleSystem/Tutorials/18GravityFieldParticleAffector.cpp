// General OpenSG configuration, needed everywhere
#include <OpenSG/OSGConfig.h>

// A little helper to simplify scene management and interaction
#include <OpenSG/OSGSimpleSceneManager.h>
#include <OpenSG/OSGNode.h>
#include <OpenSG/OSGGroup.h>
#include <OpenSG/OSGViewport.h>
#include <OpenSG/Input/OSGWindowUtils.h>

// Input
#include <OpenSG/Input/OSGKeyListener.h>
#include <OpenSG/Input/OSGWindowAdapter.h>

#include <OpenSG/OSGBlendChunk.h>
#include <OpenSG/OSGPointChunk.h>
#include <OpenSG/OSGChunkMaterial.h>
#include <OpenSG/OSGMaterialChunk.h>
#include <OpenSG/ParticleSystem/OSGParticleSystem.h>
#include <OpenSG/ParticleSystem/OSGParticleSystemCore.h>
#include <OpenSG/ParticleSystem/OSGPointParticleSystemDrawer.h>
#include <OpenSG/ParticleSystem/OSGRateParticleGenerator.h>
#include <OpenSG/Dynamics/OSGConeDistribution3D.h>
#include <OpenSG/ParticleSystem/OSGGravityParticleAffector.h>

#include <OpenSG/Dynamics/OSGDataConverter.h>
#include <OpenSG/Dynamics/OSGCompoundFunction.h>

#include <OpenSG/Dynamics/OSGGaussianNormalDistribution1D.h>


// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;

bool ExitApp = false;

// Forward declaration so we can have the interesting stuff upfront
void display(void);
void reshape(Vec2f Size);

FunctionPtr createPositionDistribution(void);
FunctionPtr createLifespanDistribution(void);
FunctionPtr createVelocityDistribution(void);

// Create a class to allow for the use of the Ctrl+q
class TutorialKeyListener : public KeyListener
{
public:

   virtual void keyPressed(const KeyEvent& e)
   {
       if(e.getKey() == KeyEvent::KEY_Q && e.getModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
       {
           ExitApp = true;
       }
   }

   virtual void keyReleased(const KeyEvent& e)
   {

   }

   virtual void keyTyped(const KeyEvent& e)
   {
   }
};

class TutorialWindowListener : public WindowAdapter
{
public:
    virtual void windowClosing(const WindowEvent& e)
    {
        ExitApp = true;
    }

    virtual void windowClosed(const WindowEvent& e)
    {
        ExitApp = true;
    }
};

class TutorialMouseListener : public MouseListener
{
  public:
    virtual void mouseClicked(const MouseEvent& e)
    {
    }
    virtual void mouseEntered(const MouseEvent& e)
    {
    }
    virtual void mouseExited(const MouseEvent& e)
    {
    }
    virtual void mousePressed(const MouseEvent& e)
    {
            mgr->mouseButtonPress(e.getButton(), e.getLocation().x(), e.getLocation().y());
    }
    virtual void mouseReleased(const MouseEvent& e)
    {
           mgr->mouseButtonRelease(e.getButton(), e.getLocation().x(), e.getLocation().y());
    }
};

class TutorialMouseMotionListener : public MouseMotionListener
{
  public:
    virtual void mouseMoved(const MouseEvent& e)
    {
            mgr->mouseMove(e.getLocation().x(), e.getLocation().y());
    }

    virtual void mouseDragged(const MouseEvent& e)
    {
            mgr->mouseMove(e.getLocation().x(), e.getLocation().y());
    }
};
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    // Set up Window
    WindowEventProducerPtr TutorialWindowEventProducer = createDefaultWindowEventProducer();
    WindowPtr MainWindow = TutorialWindowEventProducer->initWindow();

	beginEditCP(TutorialWindowEventProducer, WindowEventProducer::UseCallbackForDrawFieldMask | WindowEventProducer::UseCallbackForReshapeFieldMask);
		TutorialWindowEventProducer->setUseCallbackForDraw(true);
		TutorialWindowEventProducer->setUseCallbackForReshape(true);
	endEditCP(TutorialWindowEventProducer, WindowEventProducer::UseCallbackForDrawFieldMask | WindowEventProducer::UseCallbackForReshapeFieldMask);

    TutorialWindowEventProducer->setDisplayCallback(display);
    TutorialWindowEventProducer->setReshapeCallback(reshape);

    //Add Window Listener
    TutorialWindowListener TheTutorialWindowListener;
    TutorialWindowEventProducer->addWindowListener(&TheTutorialWindowListener);
    TutorialKeyListener TheKeyListener;
    TutorialWindowEventProducer->addKeyListener(&TheKeyListener);
    TutorialMouseListener TheTutorialMouseListener;
    TutorialMouseMotionListener TheTutorialMouseMotionListener;
    TutorialWindowEventProducer->addMouseListener(&TheTutorialMouseListener);
    TutorialWindowEventProducer->addMouseMotionListener(&TheTutorialMouseMotionListener);

    // Create the SimpleSceneManager helper
    mgr = new SimpleSceneManager;

    // Tell the Manager what to manage
    mgr->setWindow(MainWindow);
	
    TutorialWindowEventProducer->openWindow(Pnt2f(0,0),
                                        Vec2f(1280,1024),
                                        "OpenSG 18GravityFieldAffector Window");
										

	//Particle System Material
	PointChunkPtr PSPointChunk = PointChunk::create();
	beginEditCP(PSPointChunk);
		PSPointChunk->setSize(5.0f);
		PSPointChunk->setSmooth(true);
	endEditCP(PSPointChunk);
	BlendChunkPtr PSBlendChunk = BlendChunk::create();
	PSBlendChunk->setSrcFactor(GL_SRC_ALPHA);
	PSBlendChunk->setDestFactor(GL_ONE_MINUS_SRC_ALPHA);

	MaterialChunkPtr PSMaterialChunkChunk = MaterialChunk::create();
	beginEditCP(PSMaterialChunkChunk);
		PSMaterialChunkChunk->setAmbient(Color4f(0.3f,0.3f,0.3f,1.0f));
		PSMaterialChunkChunk->setDiffuse(Color4f(0.7f,0.7f,0.7f,1.0f));
		PSMaterialChunkChunk->setSpecular(Color4f(0.9f,0.9f,0.9f,1.0f));
		PSMaterialChunkChunk->setColorMaterial(GL_NONE);
	endEditCP(PSMaterialChunkChunk);

	ChunkMaterialPtr PSMaterial = ChunkMaterial::create();
	beginEditCP(PSMaterial, ChunkMaterial::ChunksFieldMask);
		PSMaterial->addChunk(PSPointChunk);
		PSMaterial->addChunk(PSMaterialChunkChunk);
		PSMaterial->addChunk(PSBlendChunk);
	endEditCP(PSMaterial, ChunkMaterial::ChunksFieldMask);

	//Particle System
    ParticleSystemPtr ExampleParticleSystem = osg::ParticleSystem::create();
		ExampleParticleSystem->addParticle(Pnt3f(0,-150,0),
			Vec3f(0.0,0.0f,1.0f),
			Color4f(1.0,1.0,1.0,1.0), 
			Vec3f(1.0,1.0,1.0), 
			0.1, 
			Vec3f(0.0f,0.0f,0.0f), //Velocity
			Vec3f(0.0f,0.0f,0.0f)
			,0);
		ExampleParticleSystem->addParticle(Pnt3f(0,150,0),
			Vec3f(0.0,0.0f,1.0f),
			Color4f(1.0,1.0,1.0,1.0), 
			Vec3f(1.0,1.0,1.0), 
			0.1, 
			Vec3f(0.0f,0.0f,0.0f), //Velocity
			Vec3f(0.0f,0.0f,0.0f)
			,0);
    ExampleParticleSystem->attachUpdateListener(TutorialWindowEventProducer);

	//Particle System Drawer (Point)
	PointParticleSystemDrawerPtr ExampleParticleSystemDrawer = osg::PointParticleSystemDrawer::create();


	//Create a Rate Particle Generator
	RateParticleGeneratorPtr ExampleGenerator = osg::RateParticleGenerator::create();

	//Attach the function objects to the Generator
	beginEditCP(ExampleGenerator, RateParticleGenerator::PositionFunctionFieldMask | RateParticleGenerator::LifespanFunctionFieldMask | RateParticleGenerator::GenerationRateFieldMask);
		ExampleGenerator->setPositionFunction(createPositionDistribution());
		ExampleGenerator->setLifespanFunction(createLifespanDistribution());
		ExampleGenerator->setGenerationRate(100.0);
		ExampleGenerator->setVelocityFunction(createVelocityDistribution());
	endEditCP(ExampleGenerator, RateParticleGenerator::PositionFunctionFieldMask | RateParticleGenerator::LifespanFunctionFieldMask | RateParticleGenerator::GenerationRateFieldMask);
	
	GravityParticleAffectorPtr ExampleGravityAffector = osg::GravityParticleAffector::create();
	beginEditCP(ExampleGravityAffector);
		ExampleGravityAffector->setMagnitude(9.8); // Earth's gravitational pull
		ExampleGravityAffector->setDirection(Vec3f(0.0,-1.0,0.0)); // field pulls in downward direction
		ExampleGravityAffector->setBeacon(osg::Node::create()); // set to 'emulate' from (0,0,0)
		ExampleGravityAffector->setMaxDistance(-1.0); // no max distance, all particles affected regardless of distance from (0,0,0)
		ExampleGravityAffector->setAttenuation(0.0); // strength of field does not diminish
	endEditCP(ExampleGravityAffector);

		

	//Attach the Generator and Affector to the Particle System
	beginEditCP(ExampleParticleSystem);
		ExampleParticleSystem->getGenerators().push_back(ExampleGenerator);
		ExampleParticleSystem->getAffectors().push_back(ExampleGravityAffector);
		ExampleParticleSystem->setMaxParticles(800);
	endEditCP(ExampleParticleSystem);


	//Particle System Node
    ParticleSystemCorePtr ParticleNodeCore = osg::ParticleSystemCore::create();
    beginEditCP(ParticleNodeCore, ParticleSystemCore::SystemFieldMask | ParticleSystemCore::DrawerFieldMask | ParticleSystemCore::MaterialFieldMask);
		ParticleNodeCore->setSystem(ExampleParticleSystem);
		ParticleNodeCore->setDrawer(ExampleParticleSystemDrawer);
		ParticleNodeCore->setMaterial(PSMaterial);
    endEditCP(ParticleNodeCore, ParticleSystemCore::SystemFieldMask | ParticleSystemCore::DrawerFieldMask | ParticleSystemCore::MaterialFieldMask);
    
	NodePtr ParticleNode = osg::Node::create();
    beginEditCP(ParticleNode, Node::CoreFieldMask);
        ParticleNode->setCore(ParticleNodeCore);
    endEditCP(ParticleNode, Node::CoreFieldMask);


    // Make Main Scene Node and add the Torus
    NodePtr scene = osg::Node::create();
    beginEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);
        scene->setCore(osg::Group::create());
        scene->addChild(ParticleNode);
    endEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);

    mgr->setRoot(scene);

    // Show the whole Scene
    mgr->showAll();
	
	mgr->getCamera()->setFar(1000.0);

    while(!ExitApp)
    {
        TutorialWindowEventProducer->update();
        TutorialWindowEventProducer->draw();
    }
    osgExit();

    return 0;
}


// Callback functions


// Redraw the window
void display(void)
{
    mgr->redraw();
}

// React to size changes
void reshape(Vec2f Size)
{
    mgr->resize(Size.x(), Size.y());
}

FunctionPtr createPositionDistribution(void)
{
	//Cone distribution
   ConeDistribution3DPtr TheConeDistribution = ConeDistribution3D::create();
    beginEditCP(TheConeDistribution);
      TheConeDistribution->setPosition(Pnt3f(0.0,0.0,0.0));
      TheConeDistribution->setDirection(Vec3f(0.0,1.0,0.0));
      TheConeDistribution->setSpread(0.25);
	  TheConeDistribution->setMin(0.0);
	  TheConeDistribution->setMax(0.1);
	  TheConeDistribution->setSurfaceOrVolume(ConeDistribution3D::VOLUME);
    endEditCP(TheConeDistribution);


    return TheConeDistribution;
}

FunctionPtr createLifespanDistribution(void)
{
    GaussianNormalDistribution1DPtr TheLifespanDistribution = GaussianNormalDistribution1D::create();
    beginEditCP(TheLifespanDistribution);
      TheLifespanDistribution->setMean(15.0f);
      TheLifespanDistribution->setStandardDeviation(3.0);
    endEditCP(TheLifespanDistribution);
	
	return TheLifespanDistribution;
}

FunctionPtr createVelocityDistribution(void)
{
	 ConeDistribution3DPtr TheConeDistribution = ConeDistribution3D::create();
    beginEditCP(TheConeDistribution);
      TheConeDistribution->setPosition(Pnt3f(0.0,0.0,0.0));
      TheConeDistribution->setDirection(Vec3f(0.0,1.0,0.0));
      TheConeDistribution->setSpread(1.5);
	  TheConeDistribution->setMin(30.0);
	  TheConeDistribution->setMax(40.0);
	  TheConeDistribution->setSurfaceOrVolume(ConeDistribution3D::VOLUME);
    endEditCP(TheConeDistribution);

	DataConverterPtr TheVec3fConverter = DataConverter::create();
	beginEditCP(TheVec3fConverter);
		TheVec3fConverter->setToType(&FieldDataTraits<Vec3f>::getType());
	endEditCP(TheVec3fConverter);

	CompoundFunctionPtr TheVelocityDistribution = CompoundFunction::create();
	beginEditCP(TheVelocityDistribution);
		TheVelocityDistribution->getFunctions().push_back(TheConeDistribution);
		TheVelocityDistribution->getFunctions().push_back(TheVec3fConverter);
	endEditCP(TheVelocityDistribution);

    return TheVelocityDistribution;
}