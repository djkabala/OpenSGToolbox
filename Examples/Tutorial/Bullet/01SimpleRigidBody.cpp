// General OpenSG configuration, needed everywhere
#include "OSGConfig.h"

// A little helper to simplify scene management and interaction
#include "OSGSimpleSceneManager.h"
#include "OSGNode.h"
#include "OSGGroup.h"
#include "OSGViewport.h"
#include "OSGWindowUtils.h"
#include "OSGSimpleGeometry.h"

//Text Foreground
#include "OSGSimpleTextForeground.h"

//Animation
#include "OSGKeyframeSequences.h"
#include "OSGKeyframeAnimator.h"
#include "OSGFieldAnimation.h"

//Physics
#include "OSGBulletMathUtils.h"
#include "OSGBulletHandler.h"
#include "OSGBulletRigidBody.h"
#include "OSGBulletSphereShape.h"
#include "OSGBulletBoxShape.h"
#include "OSGBulletDiscreteDynamicsWorld.h"
#include "OSGBulletDbvtBroadphase.h"
#include "OSGBulletDebugForeground.h"

#include <boost/scoped_ptr.hpp>

// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// Forward declaration so we can have the interesting stuff upfront
void display(SimpleSceneManager *mgr);
void reshape(Vec2f Size, SimpleSceneManager *mgr);


void keyTyped(KeyEventDetails* const details,
              BulletRigidBody* const planeBody,
              BulletDebugForeground* const DebugForeground)
{
    static bool StatisticsOn(false);
    if(details->getKey() == KeyEventDetails::KEY_Q && details->getModifiers() & KeyEventDetails::KEY_MODIFIER_COMMAND)
    {
        dynamic_cast<WindowEventProducer*>(details->getSource())->closeWindow();
    }
    switch(details->getKey())
    {
        case KeyEventDetails::KEY_D:
            DebugForeground->setActive(!DebugForeground->getActive());
            break;
        case KeyEventDetails::KEY_A:
            dynamic_cast<BulletDynamicsWorld*>(DebugForeground->getWorld())->clearRigidBodies();
            break;
        case KeyEventDetails::KEY_UP:
            {
                Matrix OrigMat = planeBody->getWorldTransform();

                Pnt3f Translate(OrigMat * Pnt3f(0.0f,0.0f,0.0f));

                OrigMat.setTranslate(Translate + Vec3f(1.0f,0.0f,0.0f));

                planeBody->setWorldTransform(OrigMat);
                planeBody->getBody()->getMotionState()->setWorldTransform(OSG::bullet::convert(OrigMat));
            }
            break;
        case KeyEventDetails::KEY_DOWN:
            {
                Matrix OrigMat = planeBody->getWorldTransform();

                Pnt3f Translate(OrigMat * Pnt3f(0.0f,0.0f,0.0f));

                OrigMat.setTranslate(Translate + Vec3f(-1.0f,0.0f,0.0f));

                planeBody->setWorldTransform(OrigMat);
                planeBody->getBody()->getMotionState()->setWorldTransform(OSG::bullet::convert(OrigMat));
            }
            break;
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
    DocForeground->addLine("of \\{\\color=AAAA00FF BulletRigidBody}, \\{\\color=AAAA00FF BulletHandler}");

    DocForeground->addLine("");
    DocForeground->addLine("\\{\\color=AAAAAAFF Key Controls}:");
    DocForeground->addLine("         \\{\\color=AAAAFFFF d}: Show/hide debug drawing");
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

        //Make a sphere
        NodeRecPtr SphereGeoNode = makeSphere(2, 1.0f);

        //Sphere Rigid Body node
        BulletRigidBodyRecPtr SphereBody = BulletRigidBody::create();
        NodeRecPtr SphereBodyNode = makeNodeFor(SphereBody);
        SphereBodyNode->addChild(SphereGeoNode);

        //Plane Node
        Vec3f BoxSize(50.0f,50.0f,50.0f);
        NodeRecPtr PlaneGeoNode = makeBox(BoxSize.x(),BoxSize.y(),BoxSize.z(),2,2,2);

        //Plane Transform node
        Matrix PlaneTrans;
        PlaneTrans.setTransform(Vec3f(0.0f, 0.0f, 0.0f),
                                Quaternion(Vec3f(0.0f,0.0f,1.0f), osgDegree2Rad(2.0f)));

        TransformRecPtr PlaneTransform = Transform::create();
        PlaneTransform->setMatrix(PlaneTrans);
        NodeRecPtr PlaneTransformNode = makeNodeFor(PlaneTransform);
        PlaneTransformNode->addChild(PlaneGeoNode);

        //Plane Transform node
        //Sphere Rigid Body node
        BulletRigidBodyRecPtr PlaneBody = BulletRigidBody::create();
        NodeRecPtr PlaneBodyNode = makeNodeFor(PlaneBody);
        PlaneBodyNode->addChild(PlaneGeoNode);

        // Make Main Scene Node
        NodeRecPtr scene = makeCoredNode<Group>();
        scene->addChild(SphereBodyNode);
        scene->addChild(PlaneBodyNode);
        //scene->addChild(PlaneTransformNode);
        
        //DbvtBroadphase is a good general purpose broadphase.
        //You can also try out Axis3Sweep.
        BulletDbvtBroadphaseRecPtr worldBroadphase = BulletDbvtBroadphase::create();

        BulletDiscreteDynamicsWorldRecPtr dynamicsWorld = BulletDiscreteDynamicsWorld::create();
        dynamicsWorld->setBroadphase(worldBroadphase);
        dynamicsWorld->setGravity(Vec3f(0,-10,0));

        //create a few basic rigid bodies
        BulletBoxShapeRecPtr PlaneBodyShape;
        {
            PlaneBodyShape = BulletBoxShape::create();
            PlaneBodyShape->setHalfExtents(BoxSize * 0.5f);

            Matrix trans;
            trans.setRotate(Quaternion(Vec3f(0.0f,0.0f,1.0f),0.05f));

            //Create a static rigid body
            PlaneBody->setMass(0.0f);
            PlaneBody->setInertia(Vec3f(0.0f,0.0f,0.0f));
            PlaneBody->setRestitution(1.0f);
            PlaneBody->setWorldTransform(trans);
            PlaneBody->setFriction(100.0f);

            PlaneBody->setCollisionShape(PlaneBodyShape);

            dynamicsWorld->pushToRigidBodies(PlaneBody);
        }


        BulletSphereShapeRecPtr SphereBodyShape;
        {
            //create a dynamic rigidbody

            SphereBodyShape = BulletSphereShape::create();
            SphereBodyShape->setRadius(1.0f);

            /// Create Dynamic Objects
            Real32 mass(1.f);

            //rigidbody is dynamic if and only if mass is non zero, otherwise static
            bool isDynamic = (mass != 0.f);

            Vec3f localInertia(0,0,0);
            if (isDynamic)
                SphereBodyShape->calculateLocalInertia(mass,localInertia);

            Matrix trans;
            trans.setTranslate(Vec3f(2.0f,80.0f,0.0f));

            SphereBody->setMass(mass);
            SphereBody->setInertia(localInertia);
            SphereBody->setRestitution(0.5f);
            SphereBody->setWorldTransform(trans);
            SphereBody->setCollisionShape(SphereBodyShape);

            dynamicsWorld->pushToRigidBodies(SphereBody);
        }

        BulletHandlerRecPtr TheBulletHandler = BulletHandler::create();
        TheBulletHandler->setMaxStepsPerUpdate(10);
        TheBulletHandler->setStepSize(1.0f/60.0f);
        TheBulletHandler->setDynamicsWorld(dynamicsWorld);
        TheBulletHandler->attachUpdateProducer(TutorialWindow);

        sceneManager.setRoot(scene);

        //Make the debug foreground
        BulletDebugForegroundRecPtr DebugForeground = BulletDebugForeground::create();
        DebugForeground->setWorld(TheBulletHandler->getDynamicsWorld());
        DebugForeground->setDrawOccluded(true);
        DebugForeground->setOccludedAlpha(0.4f);
        DebugForeground->setLineWidth(1.0f);
        DebugForeground->setMode(btIDebugDraw::DBG_DrawWireframe |
                                 btIDebugDraw::DBG_DrawAabb |
                                 btIDebugDraw::DBG_DrawFeaturesText |
                                 btIDebugDraw::DBG_DrawContactPoints |
                                 btIDebugDraw::DBG_NoDeactivation |
                                 btIDebugDraw::DBG_NoHelpText |
                                 btIDebugDraw::DBG_DrawText |
                                 btIDebugDraw::DBG_ProfileTimings |
                                 btIDebugDraw::DBG_EnableSatComparison |
                                 btIDebugDraw::DBG_DisableBulletLCP |
                                 btIDebugDraw::DBG_EnableCCD |
                                 btIDebugDraw::DBG_DrawConstraints |
                                 btIDebugDraw::DBG_DrawConstraintLimits |
                                 btIDebugDraw::DBG_FastWireframe
                                );

        TutorialWindow->connectKeyTyped(boost::bind(keyTyped, _1,
                                                    PlaneBody.get(),
                                                    DebugForeground.get()));

        // Show the whole Scene
        sceneManager.showAll();
        sceneManager.getWindow()->getPort(0)->addForeground(DebugForeground);

        //Create the Documentation
        SimpleScreenDoc TheSimpleScreenDoc(&sceneManager, TutorialWindow);

        //Open Window
        Vec2f WinSize(TutorialWindow->getDesktopSize() * 0.85f);
        Pnt2f WinPos((TutorialWindow->getDesktopSize() - WinSize) *0.5);
        TutorialWindow->openWindow(WinPos,
                                   WinSize,
                                   "01SimpleRigidBody");

        commitChanges();
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

