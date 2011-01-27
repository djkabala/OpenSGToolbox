// General OpenSG configuration, needed everywhere
#include "OSGConfig.h"

// A little helper to simplify scene management and interaction
#include "OSGSimpleSceneManager.h"
#include "OSGNode.h"
#include "OSGGroup.h"
#include "OSGViewport.h"
#include "OSGWindowUtils.h"
#include "OSGSimpleGeometry.h"
#include "OSGTriangleIterator.h"
#include "OSGSceneFileHandler.h"

#include "OSGBulletHandler.h"
#include "OSGBulletMathUtils.h"
#include "OSGBulletSoftBody.h"
#include "OSGBulletDebugForeground.h"

#include "btBulletDynamicsCommon.h"
#include "BulletSoftBody/btSoftBody.h"
#include "BulletSoftBody/btSoftBodyRigidBodyCollisionConfiguration.h"
#include "BulletSoftBody/btSoftBodyHelpers.h"
#include "BulletSoftBody/btSoftRigidDynamicsWorld.h"
#include <boost/scoped_ptr.hpp>
#include <boost/filesystem/convenience.hpp>

#include <math.h>

// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// Forward declaration so we can have the interesting stuff upfront
void display(SimpleSceneManager *mgr);
void reshape(Vec2f Size, SimpleSceneManager *mgr);
void updateSoftBody(Geometry* TheGeo,btSoftBody*  TheSoftBody);


void keyTyped(KeyEventDetails* const details,
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

class SphereMotionState : public btMotionState {
public:
    SphereMotionState(Transform *TransCore) {
        mTransformCore = TransCore;
    }

    virtual ~SphereMotionState() {
    }

    virtual void getWorldTransform(btTransform &worldTrans) const {
        OSG::bullet::convert(mTransformCore->getMatrix(), worldTrans);
    }

    virtual void setWorldTransform(const btTransform &worldTrans) {
        if(NULL == mTransformCore) return; // silently return before we set a node

        mTransformCore->setMatrix(OSG::bullet::convert(worldTrans));
    }

protected:
    TransformRecPtr mTransformCore;
};

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

        Vec3f BoxSize(350.0f,1.0f,350.0f);

        ///collision configuration contains default setup for memory, collision setup. Advanced users can create their own configuration.
        boost::scoped_ptr<btDefaultCollisionConfiguration>
            collisionConfiguration(new btSoftBodyRigidBodyCollisionConfiguration());

        ///use the default collision dispatcher. For parallel processing you can use a diffent dispatcher (see Extras/BulletMultiThreaded)
        boost::scoped_ptr<btCollisionDispatcher> dispatcher(new
            btCollisionDispatcher(collisionConfiguration.get()));

        ///btDbvtBroadphase is a good general purpose broadphase. You can also try out btAxis3Sweep.
        boost::scoped_ptr<btBroadphaseInterface> overlappingPairCache(new btDbvtBroadphase());

        ///the default constraint solver. For parallel processing you can use a different solver (see Extras/BulletMultiThreaded)
        boost::scoped_ptr<btSequentialImpulseConstraintSolver> solver(new btSequentialImpulseConstraintSolver);

        boost::scoped_ptr<btSoftRigidDynamicsWorld> dynamicsWorld(new btSoftRigidDynamicsWorld(dispatcher.get(),
                                                                                             overlappingPairCache.get(),
                                                                                             solver.get(),
                                                                                             collisionConfiguration.get()));

        btSoftBodyWorldInfo	m_softBodyWorldInfo;
        m_softBodyWorldInfo.m_dispatcher = dispatcher.get();
        m_softBodyWorldInfo.m_broadphase = overlappingPairCache.get();
        m_softBodyWorldInfo.m_gravity.setValue(0,-10,0);
        m_softBodyWorldInfo.m_sparsesdf.Initialize();

        dynamicsWorld->setGravity(btVector3(0,-10,0));

        //Plane Node
        NodeRecPtr PlaneGeoNode = makeBox(BoxSize.x(),BoxSize.y(),BoxSize.z(),2,2,2);

        //Plane Transform node
        Matrix PlaneTrans;
        PlaneTrans.setTransform(Vec3f(0.0f, 0.0f, 0.0f),
                                Quaternion(Vec3f(0.0f,0.0f,1.0f), osgDegree2Rad(2.0f)));

        TransformRecPtr PlaneTransform = Transform::create();
        PlaneTransform->setMatrix(PlaneTrans);
        NodeRecPtr PlaneTransformNode = makeNodeFor(PlaneTransform);
        PlaneTransformNode->addChild(PlaneGeoNode);

        ///create a few basic rigid bodies
        btCollisionShape* groundShape = new
            btBoxShape(btVector3(btScalar(BoxSize.x()/2.0f),btScalar(BoxSize.y()/2.0f),btScalar(BoxSize.z()/2.0f)));

        //keep track of the shapes, we release memory at exit.
        //make sure to re-use collision shapes among rigid bodies whenever possible!
        btAlignedObjectArray<btCollisionShape*> collisionShapes;

        collisionShapes.push_back(groundShape);

        btTransform groundTransform;
        groundTransform.setIdentity();
        groundTransform.setOrigin(btVector3(0,-56,0));

        {
            btScalar mass(0.);

            //rigidbody is dynamic if and only if mass is non zero, otherwise static
            bool isDynamic = (mass != 0.f);

            btVector3 localInertia(0,0,0);
            if (isDynamic)
                groundShape->calculateLocalInertia(mass,localInertia);

            //using motionstate is recommended, it provides interpolation capabilities, and only synchronizes 'active' objects
            btMotionState* myMotionState = new SphereMotionState(PlaneTransform);
            btRigidBody::btRigidBodyConstructionInfo rbInfo(mass,myMotionState,groundShape,localInertia);
            //rbInfo.m_restitution = 1.0f;
            btRigidBody* body = new btRigidBody(rbInfo);

            //add the body to the dynamics world
            dynamicsWorld->addRigidBody(body);
        }

        //Create the Physics handler
        BulletHandlerRecPtr TheBulletHandler = BulletHandler::create();
        TheBulletHandler->setMaxStepsPerUpdate(10);
        TheBulletHandler->setStepSize(1.0f/60.0f);
        TheBulletHandler->setDynamicsWorld(dynamicsWorld.get());
        TheBulletHandler->attachUpdateProducer(TutorialWindow);

        //Make the scene graph
        
        //Make a sphere
        BoostPath ModelFilePath("..//AStar//Data//Vacuole.osb");

        if(argc >= 2)
        {
            ModelFilePath = BoostPath(argv[1]);
            if(!boost::filesystem::exists(ModelFilePath))
            {
                ModelFilePath = BoostPath("..//AStar//Data//Vacuole.osb");
            }
        }

        //Make Base Geometry Node
        NodeRecPtr SoftGeometryNode;
        //SoftGeometryNode =
            //SceneFileHandler::the()->read(ModelFilePath.string().c_str());
        if(SoftGeometryNode == NULL ||
           dynamic_cast<Geometry*>(SoftGeometryNode->getCore()) == NULL)
        {
            SoftGeometryNode = makeSphere(3, 1.0f);
        }

        GeometryRecPtr   SoftGeometry = dynamic_cast<Geometry*>(SoftGeometryNode->getCore());

        //Make the Soft Body
        BulletSoftBodyRecPtr   SoftBody = BulletSoftBody::create(SoftGeometry,
                                                                 dynamicsWorld.get());
        //SoftBody->attachHandler(TheBulletHandler);

        NodeRecPtr SoftBodyNode = makeNodeFor(SoftBody);


        // Make Main Scene Node
        NodeRecPtr scene = makeCoredNode<Group>();
        scene->addChild(SoftBodyNode);
        scene->addChild(PlaneTransformNode);


        //Make the debug foreground
        BulletDebugForegroundRecPtr DebugForeground = BulletDebugForeground::create();
        DebugForeground->setWorld(dynamicsWorld.get());
        DebugForeground->setDrawOccluded(true);
        DebugForeground->setOccludedAlpha(0.4f);
        DebugForeground->setMode(btIDebugDraw::DBG_DrawWireframe |
                                 //btIDebugDraw::DBG_DrawAabb |
                                 btIDebugDraw::DBG_DrawFeaturesText |
                                 btIDebugDraw::DBG_DrawContactPoints |
                                 //btIDebugDraw::DBG_NoDeactivation |
                                 //btIDebugDraw::DBG_NoHelpText |
                                 btIDebugDraw::DBG_DrawText |
                                 btIDebugDraw::DBG_ProfileTimings |
                                 btIDebugDraw::DBG_EnableSatComparison |
                                 //btIDebugDraw::DBG_DisableBulletLCP |
                                 //btIDebugDraw::DBG_EnableCCD |
                                 btIDebugDraw::DBG_DrawConstraints |
                                 btIDebugDraw::DBG_DrawConstraintLimits// |
                                 //btIDebugDraw::DBG_FastWireframe
                                 );
        TutorialWindow->connectKeyTyped(boost::bind(keyTyped, _1,
                                                    DebugForeground.get()));

        sceneManager.setRoot(scene);
        sceneManager.getWindow()->getPort(0)->addForeground(DebugForeground);


        // Show the whole Scene
        sceneManager.showAll();

        //Open Window
        Vec2f WinSize(TutorialWindow->getDesktopSize() * 0.85f);
        Pnt2f WinPos((TutorialWindow->getDesktopSize() - WinSize) *0.5);
        TutorialWindow->openWindow(WinPos,
                                   WinSize,
                                   "20SimpleSoftBody");

        commitChanges();
        //Enter main Loop
        TutorialWindow->mainLoop();


        //cleanup in the reverse order of creation/initialization

        //remove the rigidbodies from the dynamics world and delete them
        for (UInt32 i=dynamicsWorld->getNumCollisionObjects()-1; i>=0 ;i--)
        {
            btCollisionObject* obj = dynamicsWorld->getCollisionObjectArray()[i];
            btRigidBody* body = btRigidBody::upcast(obj);
            if (body && body->getMotionState())
            {
                delete body->getMotionState();
            }
            dynamicsWorld->removeCollisionObject( obj );
            delete obj;
        }

        //delete collision shapes
        for (int j=0;j<collisionShapes.size();j++)
        {
            btCollisionShape* shape = collisionShapes[j];
            collisionShapes[j] = 0;
            delete shape;
        }

        //next line is optional: it will be cleared by the destructor when the array goes out of scope
        collisionShapes.clear();
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

