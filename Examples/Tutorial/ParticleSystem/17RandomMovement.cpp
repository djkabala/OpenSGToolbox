// General OpenSG configuration, needed everywhere
#include "OSGConfig.h"

// A little helper to simplify scene management and interaction
#include "OSGSimpleSceneManager.h"
#include "OSGNode.h"
#include "OSGGroup.h"
#include "OSGViewport.h"
#include "OSGWindowUtils.h"

//Text Foreground
#include "OSGSimpleTextForeground.h"

//Animation
#include "OSGKeyframeSequences.h"
#include "OSGKeyframeAnimator.h"
#include "OSGFieldAnimation.h"


#include "OSGBlendChunk.h"
#include "OSGPointChunk.h"
#include "OSGChunkMaterial.h"
#include "OSGMaterialChunk.h"
#include "OSGParticleSystem.h"
#include "OSGParticleSystemCore.h"
#include "OSGQuadParticleSystemDrawer.h"
#include "OSGRandomMovementParticleAffector.h"
#include "OSGAttributeAttractRepelParticleAffector.h"


#include "OSGGaussianNormalDistribution1D.h"
#include "OSGCylinderDistribution3D.h"

// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// Forward declaration so we can have the interesting stuff upfront
void display(SimpleSceneManager *mgr);
void reshape(Vec2f Size, SimpleSceneManager *mgr);

Distribution3DRefPtr createPositionDistribution(void);
Distribution1DRefPtr createLifespanDistribution(void);

void keyTyped(KeyEventDetails* const details,
              SimpleSceneManager *mgr,
              ParticleSystem* const ExampleParticleSystem,
              RandomMovementParticleAffector* const ExampleRMA,
              AttributeAttractRepelParticleAffector* const ExampleAttributeAttractRepelParticleAffector
             )
{
    if(details->getKey() == KeyEventDetails::KEY_Q &&
       details->getModifiers() & KeyEventDetails::KEY_MODIFIER_COMMAND)
    {
        dynamic_cast<WindowEventProducer*>(details->getSource())->closeWindow();
    }
    else
    {
        switch(details->getKey())
        {
            case KeyEventDetails::KEY_R:
                ExampleRMA->setActive(!ExampleRMA->getActive());
                break;
            case KeyEventDetails::KEY_PLUS:
            case KeyEventDetails::KEY_EQUALS:
                ExampleRMA->setAmplitude(ExampleRMA->getAmplitude() + 5.0f);
                break;
            case KeyEventDetails::KEY_MINUS:
                ExampleRMA->setAmplitude(osgMax(1.0f,ExampleRMA->getAmplitude() - 5.0f));
                break;
            case KeyEventDetails::KEY_A:
                ExampleAttributeAttractRepelParticleAffector->setActive(!ExampleAttributeAttractRepelParticleAffector->getActive());
                break;
        }
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

class SimpleScreenDoc
{
  public:
    SimpleScreenDoc(SimpleSceneManager*  SceneManager,
                    WindowEventProducer* MainWindow);

  private:
    SimpleTextForegroundRecPtr _DocForeground;
    SimpleTextForegroundRecPtr _DocShowForeground;
    FieldAnimationRecPtr _ShowDocFadeOutAnimation;

    SimpleScreenDoc(void);
    SimpleScreenDoc(const SimpleScreenDoc& );

    SimpleTextForegroundTransitPtr makeDocForeground(void);
    SimpleTextForegroundTransitPtr makeDocShowForeground(void);

    void keyTyped(KeyEventDetails* const details);
};

/******************************************************

  Documentation Foreground

 ******************************************************/
SimpleTextForegroundTransitPtr SimpleScreenDoc::makeDocForeground(void)
{
    SimpleTextForegroundRecPtr DocForeground =  SimpleTextForeground::create(); 

    DocForeground->addLine("This tutorial is a simple demonstration of the use");
    DocForeground->addLine("of \\{\\color=AAAA00FF RandomMovementParticleAffector}");
    DocForeground->addLine("and \\{\\color=AAAA00FF AttributeAttractRepelParticleAffector}.");
    
    DocForeground->addLine("");
    DocForeground->addLine("\\{\\color=AAAAAAFF Key Controls}:");
    DocForeground->addLine("         \\{\\color=AAAAFFFF +}: Increase random amplitude");
    DocForeground->addLine("         \\{\\color=AAAAFFFF -}: Decrease random amplitude");
    DocForeground->addLine("         \\{\\color=AAAAFFFF r}: Enable/Disable");
    DocForeground->addLine("            RandomMovementParticleAffector");
    DocForeground->addLine("         \\{\\color=AAAAFFFF a}: Enable/Disable");
    DocForeground->addLine("            AttributeAttractRepelParticleAffector");
    DocForeground->addLine("     \\{\\color=AAAAFFFF Cmd+q}: Close the application");
    DocForeground->addLine("         \\{\\color=AAAAFFFF ?}: Show/hide this documentation");

    DocForeground->addLine("");
    DocForeground->addLine("\\{\\color=AAAAAAFF Mouse Controls}:");
    DocForeground->addLine("   \\{\\color=AAAAFFFF Scroll wheel}: Zoom in/out");
    DocForeground->addLine("      \\{\\color=AAAAFFFF Left+drag}: Rotate");
    DocForeground->addLine("     \\{\\color=AAAAFFFF Right+drag}: Translate");

    return SimpleTextForegroundTransitPtr(DocForeground);
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
        TutorialWindow->connectMouseDragged(boost::bind(mouseDragged, _1, &sceneManager));
        TutorialWindow->connectMouseWheelMoved(boost::bind(mouseWheelMoved, _1, &sceneManager));

        //Particle System Material
        MaterialChunkRefPtr PSMaterialChunkChunk = MaterialChunk::create();
        PSMaterialChunkChunk->setAmbient(Color4f(0.3f,0.3f,0.3f,1.0f));
        PSMaterialChunkChunk->setDiffuse(Color4f(0.7f,0.7f,0.7f,1.0f));
        PSMaterialChunkChunk->setSpecular(Color4f(0.9f,0.9f,0.9f,1.0f));
        PSMaterialChunkChunk->setColorMaterial(GL_AMBIENT_AND_DIFFUSE);

        ChunkMaterialRefPtr PSMaterial = ChunkMaterial::create();
        PSMaterial->addChunk(PSMaterialChunkChunk);

        Distribution3DRefPtr PositionDistribution = createPositionDistribution();

        Pnt3f PositionReturnValue;

        //Particle System

        ParticleSystemRecPtr ExampleParticleSystem = ParticleSystem::create();
        for(UInt32 i(0) ; i<500 ; ++i)//controls how many particles are created
        {
            if(PositionDistribution != NULL)
            {
                PositionReturnValue = Pnt3f(PositionDistribution->generate());
            }

            ExampleParticleSystem->addParticle(
                                               PositionReturnValue,
                                               PositionReturnValue,
                                               Vec3f(0.0f,0.0f,1.0f),
                                               Color4f(1.0,0.0,0.0,1.0), 
                                               Vec3f(1.0,1.0,1.0), 
                                               -1, 0,
                                               Vec3f(0.0,0.0,0.0),            Vec3f(0.0f,0.0f,0.0f), //Velocity
                                               Vec3f(0.0f,0.0f,0.0f),    //acceleration
                                               StringToUInt32Map()     );
        }
        ExampleParticleSystem->attachUpdateProducer(TutorialWindow);

        RandomMovementParticleAffectorRecPtr ExampleRMA = RandomMovementParticleAffector::create();
        ExampleRMA->setAmplitude(100.0f);

        AttributeAttractRepelParticleAffectorRecPtr ExampleAttributeAttractRepelParticleAffector = AttributeAttractRepelParticleAffector::create();
        ExampleAttributeAttractRepelParticleAffector->setAttributeAffected(RandomMovementParticleAffector::POSITION_ATTRIBUTE);
        ExampleAttributeAttractRepelParticleAffector->setMinDistance(0.0);
        ExampleAttributeAttractRepelParticleAffector->setMaxDistance(10000000000000.0);
        ExampleAttributeAttractRepelParticleAffector->setQuadratic(0.01);
        ExampleAttributeAttractRepelParticleAffector->setLinear(0.01);
        ExampleAttributeAttractRepelParticleAffector->setConstant(0.0);

        ExampleParticleSystem->pushToAffectors(ExampleRMA);
        ExampleParticleSystem->pushToAffectors(ExampleAttributeAttractRepelParticleAffector);
        ExampleParticleSystem->setUpdateSecAttribs(false);

        //Particle System Drawer
        QuadParticleSystemDrawerRefPtr ExampleParticleSystemDrawer = QuadParticleSystemDrawer::create();


        //Particle System Node
        ParticleSystemCoreRefPtr ParticleNodeCore = ParticleSystemCore::create();
        ParticleNodeCore->setSystem(ExampleParticleSystem);
        ParticleNodeCore->setDrawer(ExampleParticleSystemDrawer);
        ParticleNodeCore->setMaterial(PSMaterial);

        NodeRefPtr ParticleNode = Node::create();
        ParticleNode->setCore(ParticleNodeCore);


        // Make Main Scene Node
        NodeRefPtr scene = Node::create();
        scene->setCore(Group::create());
        scene->addChild(ParticleNode);


        TutorialWindow->connectKeyTyped(boost::bind(keyTyped, _1,
                                                    &sceneManager,
                                                    ExampleParticleSystem.get(),
                                                    ExampleRMA.get(),
                                                    ExampleAttributeAttractRepelParticleAffector.get()));
        sceneManager.setRoot(scene);

        //Create the Documentation
        SimpleScreenDoc TheSimpleScreenDoc(&sceneManager, TutorialWindow);

        // Show the whole Scene
        sceneManager.showAll();

        //Open Window
        Vec2f WinSize(TutorialWindow->getDesktopSize() * 0.85f);
        Pnt2f WinPos((TutorialWindow->getDesktopSize() - WinSize) *0.5);
        TutorialWindow->openWindow(WinPos,
                                   WinSize,
                                   "17RandomMovement");

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
    TheCylinderDistribution->setInnerRadius(10.0);
    TheCylinderDistribution->setOuterRadius(30.0);
    TheCylinderDistribution->setMinTheta(0.0);
    TheCylinderDistribution->setMaxTheta(6.283185);
    TheCylinderDistribution->setHeight(50.0);
    TheCylinderDistribution->setNormal(Vec3f(0.0,0.0,1.0));
    TheCylinderDistribution->setSurfaceOrVolume(CylinderDistribution3D::SURFACE);

    return TheCylinderDistribution;
}

Distribution1DRefPtr createLifespanDistribution(void)
{
    GaussianNormalDistribution1DRefPtr TheLifespanDistribution = GaussianNormalDistribution1D::create();
    TheLifespanDistribution->setMean(60.0f);
    TheLifespanDistribution->setStandardDeviation(10.0);

    return TheLifespanDistribution;
}

SimpleTextForegroundTransitPtr SimpleScreenDoc::makeDocShowForeground(void)
{
    SimpleTextForegroundRecPtr DocShowForeground =  SimpleTextForeground::create(); 

    DocShowForeground->setSize(20.0f);
    DocShowForeground->setBgColor(Color4f(0.0f,0.0f,0.0f,0.0f));
    DocShowForeground->setShadowColor(Color4f(0.0f,0.0f,0.0f,0.0f));
    DocShowForeground->setBorderColor(Color4f(1.0f,1.0f,1.0f,0.0f));
    DocShowForeground->setHorizontalAlign(SimpleTextForeground::Middle);
    DocShowForeground->setVerticalAlign(SimpleTextForeground::Top);

    DocShowForeground->addLine("Press ? for help.");

    return SimpleTextForegroundTransitPtr(DocShowForeground);
}

SimpleScreenDoc::SimpleScreenDoc(SimpleSceneManager*  SceneManager,
                                 WindowEventProducer* MainWindow)
{
    _DocForeground = makeDocForeground();
    _DocForeground->setBgColor(Color4f(0.0f,0.0f,0.0f,0.8f));
    _DocForeground->setBorderColor(Color4f(1.0f,1.0f,1.0f,1.0f));
    _DocForeground->setTextMargin(Vec2f(5.0f,5.0f));
    _DocForeground->setHorizontalAlign(SimpleTextForeground::Left);
    _DocForeground->setVerticalAlign(SimpleTextForeground::Top);
    _DocForeground->setActive(false);

    _DocShowForeground = makeDocShowForeground();

    ViewportRefPtr TutorialViewport = SceneManager->getWindow()->getPort(0);
    TutorialViewport->addForeground(_DocForeground);
    TutorialViewport->addForeground(_DocShowForeground);

    MainWindow->connectKeyTyped(boost::bind(&SimpleScreenDoc::keyTyped,
                                            this,
                                            _1));
    
    //Color Keyframe Sequence
    KeyframeColorSequenceRecPtr ColorKeyframes = KeyframeColorSequenceColor4f::create();
    ColorKeyframes->addKeyframe(Color4f(1.0f,1.0f,1.0f,1.0f),0.0f);
    ColorKeyframes->addKeyframe(Color4f(1.0f,1.0f,1.0f,1.0f),5.0f);
    ColorKeyframes->addKeyframe(Color4f(1.0f,1.0f,1.0f,0.0f),7.0f);
    
    //Animator
    KeyframeAnimatorRecPtr TheAnimator = KeyframeAnimator::create();
    TheAnimator->setKeyframeSequence(ColorKeyframes);
    
    //Animation
    _ShowDocFadeOutAnimation = FieldAnimation::create();
    _ShowDocFadeOutAnimation->setAnimator(TheAnimator);
    _ShowDocFadeOutAnimation->setInterpolationType(Animator::LINEAR_INTERPOLATION);
    _ShowDocFadeOutAnimation->setCycling(1);
    _ShowDocFadeOutAnimation->setAnimatedField(_DocShowForeground,
                                               SimpleTextForeground::ColorFieldId);

    _ShowDocFadeOutAnimation->attachUpdateProducer(MainWindow);
    _ShowDocFadeOutAnimation->start();
}

void SimpleScreenDoc::keyTyped(KeyEventDetails* const details)
{
    switch(details->getKeyChar())
    {
        case '?':
            _DocForeground->setActive(!_DocForeground->getActive());
            break;
    }
}

