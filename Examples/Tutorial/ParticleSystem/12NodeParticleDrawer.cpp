// General OpenSG configuration, needed everywhere
#include "OSGConfig.h"

// A little helper to simplify scene management and interaction
#include "OSGSimpleSceneManager.h"
#include "OSGNode.h"
#include "OSGGroup.h"
#include "OSGViewport.h"
#include "OSGSimpleGeometry.h"
#include "OSGWindowUtils.h"

// Input
#include "OSGParticleSystem.h"
#include "OSGNodeParticleSystemCore.h"
#include "OSGCollectiveGravityParticleSystemAffector.h"

#include "OSGGaussianNormalDistribution1D.h"
#include "OSGCylinderDistribution3D.h"

#include "OSGSceneFileHandler.h"

// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// Forward declaration so we can have the interesting stuff upfront
void display(SimpleSceneManager *mgr);
void reshape(Vec2f Size, SimpleSceneManager *mgr);

Distribution3DRefPtr createPositionDistribution(void);
Distribution1DRefPtr createLifespanDistribution(void);

void keyTyped(KeyEventDetails* const details,
              SimpleSceneManager *mgr
             )
{
    if(details->getKey() == KeyEventDetails::KEY_Q &&
       details->getModifiers() & KeyEventDetails::KEY_MODIFIER_COMMAND)
    {
        dynamic_cast<WindowEventProducer*>(details->getSource())->closeWindow();
    }
}

void mousePressed(MouseEventDetails* const details, SimpleSceneManager *mgr)
{
    mgr->mouseButtonPress(details->getButton(), details->getLocation().x(), details->getLocation().y());
}
void mouseReleased(MouseEventDetails* const details, SimpleSceneManager *mgr)
{
    mgr->mouseButtonRelease(details->getButton(), details->getLocation().x(), details->getLocation().y());
}

void mouseMoved(MouseEventDetails* const details, SimpleSceneManager *mgr)
{
    mgr->mouseMove(details->getLocation().x(), details->getLocation().y());
}

void mouseDragged(MouseEventDetails* const details, SimpleSceneManager *mgr)
{
    mgr->mouseMove(details->getLocation().x(), details->getLocation().y());
}

void mouseWheelMoved(MouseWheelEventDetails* const details, SimpleSceneManager *mgr)
{
    if(details->getUnitsToScroll() > 0)
    {
        for(UInt32 i(0) ; i<details->getUnitsToScroll() ;++i)
        {
            mgr->mouseButtonPress(Navigator::DOWN_MOUSE,details->getLocation().x(),details->getLocation().y());
            mgr->mouseButtonRelease(Navigator::DOWN_MOUSE,details->getLocation().x(),details->getLocation().y());
        }
    }
    else if(details->getUnitsToScroll() < 0)
    {
        for(UInt32 i(0) ; i<abs(details->getUnitsToScroll()) ;++i)
        {
            mgr->mouseButtonPress(Navigator::UP_MOUSE,details->getLocation().x(),details->getLocation().y());
            mgr->mouseButtonRelease(Navigator::UP_MOUSE,details->getLocation().x(),details->getLocation().y());
        }
    }
}
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    {
        // Set up Window
        WindowEventProducerRecPtr TutorialWindow = createNativeWindow();
        TutorialWindow->initWindow();

        // Create the SimpleSceneManager helper
        SimpleSceneManager sceneManager;
        TutorialWindow->setDisplayCallback(boost::bind(display, &sceneManager));
        TutorialWindow->setReshapeCallback(boost::bind(reshape, _1, &sceneManager));

        // Tell the Manager what to manage
        sceneManager.setWindow(TutorialWindow);

        //Attach to events
        TutorialWindow->connectMousePressed(boost::bind(mousePressed, _1, &sceneManager));
        TutorialWindow->connectMouseReleased(boost::bind(mouseReleased, _1, &sceneManager));
        TutorialWindow->connectMouseMoved(boost::bind(mouseMoved, _1, &sceneManager));
        TutorialWindow->connectMouseDragged(boost::bind(mouseDragged, _1, &sceneManager));
        TutorialWindow->connectMouseWheelMoved(boost::bind(mouseWheelMoved, _1, &sceneManager));
        TutorialWindow->connectKeyTyped(boost::bind(keyTyped, _1, &sceneManager));

        Distribution3DRefPtr PositionDistribution = createPositionDistribution();
        Distribution1DRefPtr LifespanDistribution = createLifespanDistribution();

        Pnt3f PositionReturnValue;
        Time LifespanReturnValue = -1;

        //Particle System
        ParticleSystemRefPtr ExampleParticleSystem = ParticleSystem::create();
        for(UInt32 i(0) ; i<200 ; ++i)//controls how many particles are created
        {
            if(PositionDistribution != NULL)
            {
                PositionReturnValue = Pnt3f(PositionDistribution->generate());
            }
            if(LifespanDistribution != NULL)
            {
                LifespanReturnValue = LifespanDistribution->generate();
            }

            ExampleParticleSystem->addParticle(
                                               PositionReturnValue,
                                               Vec3f(1.0f,0.0f,0.0f),
                                               Color4f(1.0,0.0,0.0,1.0), 
                                               Vec3f(1.0,1.0,1.0), 
                                               LifespanReturnValue, 
                                               Vec3f(0.0f,0.0f,0.0f), //Velocity
                                               Vec3f(0.0f,0.0f,0.0f)    //acceleration
                                              );
        }
        ExampleParticleSystem->attachUpdateProducer(TutorialWindow);

        //NodeRefPtr ParticlePrototypeNode = makeTorus(1.0,4.0,16,16);
        NodeRefPtr ParticlePrototypeNode = SceneFileHandler::the()->read("Data/rocket.obj");
        if(ParticlePrototypeNode == NULL)
        {
            ParticlePrototypeNode = makeTorus(.5, 2, 16, 16);
        }
        //Particle System Node
        NodeParticleSystemCoreRefPtr NodeParticleNodeCore = NodeParticleSystemCore::create();
        NodeParticleNodeCore->setSystem(ExampleParticleSystem);
        NodeParticleNodeCore->setPrototypeNode(ParticlePrototypeNode);
        NodeParticleNodeCore->setNormalSource(NodeParticleSystemCore::NORMAL_VELOCITY);
        NodeParticleNodeCore->setUpSource(NodeParticleSystemCore::UP_STATIC);
        NodeParticleNodeCore->setUp(Vec3f(0.0f,1.0f,0.0f));

        NodeRefPtr ParticleNode = Node::create();
        ParticleNode->setCore(NodeParticleNodeCore);

        //Create an CollectiveGravityParticleSystemAffector
        CollectiveGravityParticleSystemAffectorRefPtr ExampleCollectiveGravityParticleSystemAffector = CollectiveGravityParticleSystemAffector::create();
        ExampleCollectiveGravityParticleSystemAffector->setParticleMass(1000000.0f);

        ExampleParticleSystem->pushToSystemAffectors(ExampleCollectiveGravityParticleSystemAffector);


        // Make Main Scene Node and add the Torus
        NodeRefPtr scene = Node::create();
        scene->setCore(Group::create());
        scene->addChild(ParticleNode);

        sceneManager.setRoot(scene);

        // Show the whole Scene
        sceneManager.showAll();


        //Open Window
        Vec2f WinSize(TutorialWindow->getDesktopSize() * 0.85f);
        Pnt2f WinPos((TutorialWindow->getDesktopSize() - WinSize) *0.5);
        TutorialWindow->openWindow(WinPos,
                                   WinSize,
                                   "12NodeParticleDrawer");

        //Enter main Loop
        TutorialWindow->mainLoop();

    }
    osgExit();

    return 0;
}


// Callback functions


// Redraw the window
void display(SimpleSceneManager *mgr)
{
    mgr->redraw();
}

// React to size changes
void reshape(Vec2f Size, SimpleSceneManager *mgr)
{
    mgr->resize(Size.x(), Size.y());
}

Distribution3DRefPtr createPositionDistribution(void)
{
    //Cylinder Distribution
    CylinderDistribution3DRefPtr TheCylinderDistribution = CylinderDistribution3D::create();
    TheCylinderDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
    TheCylinderDistribution->setInnerRadius(30.0);
    TheCylinderDistribution->setOuterRadius(100.0);
    TheCylinderDistribution->setMinTheta(0.0);
    TheCylinderDistribution->setMaxTheta(6.283185);
    TheCylinderDistribution->setHeight(400.0);
    TheCylinderDistribution->setNormal(Vec3f(0.0,0.0,1.0));
    TheCylinderDistribution->setSurfaceOrVolume(CylinderDistribution3D::SURFACE);

    return TheCylinderDistribution;
}

Distribution1DRefPtr createLifespanDistribution(void)
{
    GaussianNormalDistribution1DRefPtr TheLifespanDistribution = GaussianNormalDistribution1D::create();
    TheLifespanDistribution->setMean(100.0f);
    TheLifespanDistribution->setStandardDeviation(2.0);

    return TheLifespanDistribution;
}
