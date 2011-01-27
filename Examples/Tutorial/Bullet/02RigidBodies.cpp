// General OpenSG configuration, needed everywhere
#include "OSGConfig.h"

// A little helper to simplify scene management and interaction
#include "OSGSimpleSceneManager.h"
#include "OSGNode.h"
#include "OSGGroup.h"
#include "OSGViewport.h"
#include "OSGWindowUtils.h"
#include "OSGSimpleGeometry.h"
#include "OSGSimpleMaterial.h"

//Shadow
#include "OSGShadowStage.h"
#include "OSGPointLight.h"

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
#include "OSGBulletCylinderShape.h"
#include "OSGBulletConeShape.h"
#include "OSGBulletCapsuleShape.h"
#include "OSGBulletBoxShape.h"
#include "OSGBulletConvexHullShape.h"
#include "OSGBulletCompoundShape.h"
#include "OSGBulletGImpactMeshShape.h"
#include "OSGBulletBvhTriangleMeshShape.h"
#include "OSGBulletDiscreteDynamicsWorld.h"
#include "OSGBulletDbvtBroadphase.h"
#include "OSGBulletDebugForeground.h"

#include <boost/scoped_ptr.hpp>

// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// Forward declaration so we can have the interesting stuff upfront
void display(SimpleSceneManager *mgr);
void reshape(Vec2f Size, SimpleSceneManager *mgr);

Real32 randf(Real32 Min, Real32 Max)
{
    return Min + (static_cast<Real32>(rand())/static_cast<Real32>(RAND_MAX)) * (Max - Min);
}

Vec3f randVec(const Vec3f& Min, const Vec3f& Max)
{
    return Vec3f(randf(Min.x(), Max.x()),
                 randf(Min.y(), Max.y()),
                 randf(Min.z(), Max.z()));
}

MaterialTransitPtr createColoredMaterial(const Color3f& color)
{
    SimpleMaterialRecPtr TheSimpleMat = SimpleMaterial::create();
    TheSimpleMat->setAmbient(color * 0.1f);
    TheSimpleMat->setDiffuse(color * 1.0f);
    //TheSimpleMat->setSpecular(Color3f(1.0f,1.0f,1.0f * 0.0f));

    return MaterialTransitPtr(TheSimpleMat);
}

void createSphere(Node* const root,
                  BulletDynamicsWorld* const world)
{
    Vec3f  Center(0.0f,30.0f,0.0f);
    Vec3f  Range(30.0f,0.0f,30.0f);

    Real32 Radius(randf(0.5f, 2.0f));
    Vec3f  Location(randVec(Center - Range * 0.5f,
                            Center + Range * 0.5f));

    //Make a sphere
    NodeRecPtr SphereGeoNode = makeSphere(2, Radius);
    MaterialRecPtr TheSimpleMat = createColoredMaterial(Color3f(1.0f,0.0f,1.0f));
    dynamic_cast<Geometry*>(SphereGeoNode->getCore())->setMaterial(TheSimpleMat);

    //Sphere Rigid Body node
    BulletRigidBodyRecPtr SphereBody = BulletRigidBody::create();
    NodeRecPtr SphereBodyNode = makeNodeFor(SphereBody);
    SphereBodyNode->addChild(SphereGeoNode);

    //Add the rigid body node to the scene
    root->addChild(SphereBodyNode);

    //create a dynamic rigidbody
    BulletSphereShapeRecPtr SphereBodyShape = BulletSphereShape::create();
    SphereBodyShape->setRadius(Radius);

    // Create Dynamic Object
    Real32 mass((4.0f/3.0f) * 3.14195f * Radius * Radius * Radius);

    Vec3f localInertia(0,0,0);
    SphereBodyShape->calculateLocalInertia(mass,localInertia);

    Matrix trans;
    trans.setTranslate(Location);

    SphereBody->setMass(mass);
    SphereBody->setInertia(localInertia);
    SphereBody->setRestitution(0.5f);
    SphereBody->setWorldTransform(trans);
    SphereBody->setCollisionShape(SphereBodyShape);

    world->pushToRigidBodies(SphereBody);
}

void createBox(Node* const root,
                  BulletDynamicsWorld* const world)
{
    Vec3f  Center(0.0f,30.0f,0.0f);
    Vec3f  Range(30.0f,0.0f,30.0f);

    Vec3f  BoxSize(randVec(Vec3f(1.0f,1.0f,1.0f),
                           Vec3f(3.0f,3.0f,3.0f)));
    Vec3f  Location(randVec(Center - Range * 0.5f,
                            Center + Range * 0.5f));

    //Make a box
    NodeRecPtr BoxGeoNode = makeBox(BoxSize.x(),BoxSize.y(),BoxSize.z(),
                                      2,2,2);
    MaterialRecPtr TheSimpleMat = createColoredMaterial(Color3f(1.0f,0.0f,0.0f));
    dynamic_cast<Geometry*>(BoxGeoNode->getCore())->setMaterial(TheSimpleMat);

    //Box Rigid Body node
    BulletRigidBodyRecPtr BoxBody = BulletRigidBody::create();
    NodeRecPtr BoxBodyNode = makeNodeFor(BoxBody);
    BoxBodyNode->addChild(BoxGeoNode);

    //Add the rigid body node to the scene
    root->addChild(BoxBodyNode);

    //create a dynamic rigidbody
    BulletBoxShapeRecPtr BoxBodyShape = BulletBoxShape::create();
    BoxBodyShape->setHalfExtents(BoxSize * 0.5f);

    // Create Dynamic Object
    Real32 mass(BoxSize.x() * BoxSize.y() * BoxSize.z());

    Vec3f localInertia(0,0,0);
    BoxBodyShape->calculateLocalInertia(mass,localInertia);

    Matrix trans;
    trans.setTranslate(Location);

    BoxBody->setMass(mass);
    BoxBody->setInertia(localInertia);
    BoxBody->setRestitution(0.5f);
    BoxBody->setWorldTransform(trans);
    BoxBody->setCollisionShape(BoxBodyShape);

    world->pushToRigidBodies(BoxBody);
}

void createCylinder(Node* const root,
                    BulletDynamicsWorld* const world)
{
    Vec3f  Center(0.0f,30.0f,0.0f);
    Vec3f  Range(30.0f,0.0f,30.0f);

    Vec3f  CylinderSize(randVec(Vec3f(0.5f,2.0f,1.0f),
                                Vec3f(1.0f,3.0f,1.0f)));
    Vec3f  Location(randVec(Center - Range * 0.5f,
                            Center + Range * 0.5f));

    //Make a cylinder
    NodeRecPtr CylinderGeoNode = makeCylinder(CylinderSize.y(),
                                              CylinderSize.x() * 0.5f,
                                              24,
                                              true,true,true);
    MaterialRecPtr TheSimpleMat = createColoredMaterial(Color3f(1.0f,1.0f,0.0f));
    dynamic_cast<Geometry*>(CylinderGeoNode->getCore())->setMaterial(TheSimpleMat);

    //Cylinder Rigid Body node
    BulletRigidBodyRecPtr CylinderBody = BulletRigidBody::create();
    NodeRecPtr CylinderBodyNode = makeNodeFor(CylinderBody);
    CylinderBodyNode->addChild(CylinderGeoNode);

    //Add the rigid body node to the scene
    root->addChild(CylinderBodyNode);

    //create a dynamic rigidbody
    BulletCylinderShapeRecPtr CylinderBodyShape = BulletCylinderShape::create();
    CylinderBodyShape->setHalfExtents(CylinderSize * 0.5f);

    // Create Dynamic Object
    Real32 mass(CylinderSize.x() * CylinderSize.y() * CylinderSize.z());

    Vec3f localInertia(0,0,0);
    CylinderBodyShape->calculateLocalInertia(mass,localInertia);

    Matrix trans;
    trans.setTranslate(Location);

    CylinderBody->setMass(mass);
    CylinderBody->setInertia(localInertia);
    CylinderBody->setRestitution(0.5f);
    CylinderBody->setWorldTransform(trans);
    CylinderBody->setCollisionShape(CylinderBodyShape);

    world->pushToRigidBodies(CylinderBody);
}

void createCone(Node* const root,
                  BulletDynamicsWorld* const world)
{
    Vec3f  Center(0.0f,30.0f,0.0f);
    Vec3f  Range(30.0f,0.0f,30.0f);

    Real32 Radius(randf(0.5f, 1.0f));
    Real32 Height(randf(2.0f, 4.0f));
    Vec3f  Location(randVec(Center - Range * 0.5f,
                            Center + Range * 0.5f));

    //Make a cone
    NodeRecPtr ConeGeoNode = makeCone(Height, Radius,
                                      24,
                                      true, true);
    MaterialRecPtr TheSimpleMat = createColoredMaterial(Color3f(0.0f,0.0f,1.0f));
    dynamic_cast<Geometry*>(ConeGeoNode->getCore())->setMaterial(TheSimpleMat);

    //Cone Rigid Body node
    BulletRigidBodyRecPtr ConeBody = BulletRigidBody::create();
    NodeRecPtr ConeBodyNode = makeNodeFor(ConeBody);
    ConeBodyNode->addChild(ConeGeoNode);

    //Add the rigid body node to the scene
    root->addChild(ConeBodyNode);

    //create a dynamic rigidbody
    BulletConeShapeRecPtr ConeBodyShape = BulletConeShape::create();
    ConeBodyShape->setRadius(Radius);
    ConeBodyShape->setHeight(Height);

    // Create Dynamic Object
    Real32 mass((4.0f/3.0f) * 3.14195f * Radius * Radius * Radius);

    Vec3f localInertia(0,0,0);
    ConeBodyShape->calculateLocalInertia(mass,localInertia);

    Matrix trans;
    trans.setTranslate(Location);

    ConeBody->setMass(mass);
    ConeBody->setInertia(localInertia);
    ConeBody->setRestitution(0.5f);
    ConeBody->setWorldTransform(trans);
    ConeBody->setCollisionShape(ConeBodyShape);

    world->pushToRigidBodies(ConeBody);
}

void createCapsule(Node* const root,
                  BulletDynamicsWorld* const world)
{
    Vec3f  Center(0.0f,30.0f,0.0f);
    Vec3f  Range(30.0f,0.0f,30.0f);

    Real32 Radius(randf(0.5f, 1.0f));
    Real32 Height(randf(2.0f, 4.0f));
    Vec3f  Location(randVec(Center - Range * 0.5f,
                            Center + Range * 0.5f));

    MaterialRecPtr TheSimpleMat = createColoredMaterial(Color3f(0.0f,1.0f,1.0f));

    //Make a cylinder
    NodeRecPtr CylinderGeoNode = makeCylinder(Height,
                                             Radius,
                                             24,
                                             true,false,false);
    dynamic_cast<Geometry*>(CylinderGeoNode->getCore())->setMaterial(TheSimpleMat);

    //Make Sphere
    GeometryRecPtr SphereGeometry   = makeSphereGeo(2, Radius);
    SphereGeometry->setMaterial(TheSimpleMat);

    Matrix CapMatrix;

    //Top Cap
    NodeRecPtr TopCapGeoNode           = makeNodeFor(SphereGeometry);

    CapMatrix.setTranslate(Vec3f(0.0f, Height*0.5, 0.0f));
    TransformRecPtr TopCapTransform = Transform::create();
    TopCapTransform->setMatrix(CapMatrix);

    NodeRecPtr TopCapNode = makeNodeFor(TopCapTransform);
    TopCapNode->addChild(TopCapGeoNode);

    //Bottom Cap
    NodeRecPtr BottomCapGeoNode           = makeNodeFor(SphereGeometry);

    CapMatrix.setTranslate(Vec3f(0.0f, Height*-0.5f, 0.0f));
    TransformRecPtr BottomCapTransform = Transform::create();
    BottomCapTransform->setMatrix(CapMatrix);

    NodeRecPtr BottomCapNode = makeNodeFor(BottomCapTransform);
    BottomCapNode->addChild(BottomCapGeoNode);

    //Capsule Rigid Body node
    BulletRigidBodyRecPtr CapsuleBody = BulletRigidBody::create();
    NodeRecPtr CapsuleBodyNode = makeNodeFor(CapsuleBody);
    CapsuleBodyNode->addChild(CylinderGeoNode);
    CapsuleBodyNode->addChild(TopCapNode);
    CapsuleBodyNode->addChild(BottomCapNode);

    //Add the rigid body node to the scene
    root->addChild(CapsuleBodyNode);

    //create a dynamic rigidbody
    BulletCapsuleShapeRecPtr CapsuleBodyShape = BulletCapsuleShape::create();
    CapsuleBodyShape->setRadius(Radius);
    CapsuleBodyShape->setHeight(Height);

    // Create Dynamic Object
    Real32 mass((4.0f/3.0f) * 3.14195f * Radius * Radius * Radius);

    Vec3f localInertia(0,0,0);
    CapsuleBodyShape->calculateLocalInertia(mass,localInertia);

    Matrix trans;
    trans.setTranslate(Location);

    CapsuleBody->setMass(mass);
    CapsuleBody->setInertia(localInertia);
    CapsuleBody->setRestitution(0.5f);
    CapsuleBody->setWorldTransform(trans);
    CapsuleBody->setCollisionShape(CapsuleBodyShape);

    world->pushToRigidBodies(CapsuleBody);
}

void createConvexHull(Node* const root,
                      BulletDynamicsWorld* const world)
{
    Vec3f  Center(0.0f,30.0f,0.0f);
    Vec3f  Range(30.0f,0.0f,30.0f);

    Vec3f  ConvexHullSize(randVec(Vec3f(1.0f,1.0f,1.0f),
                                  Vec3f(3.0f,3.0f,3.0f)));
    Vec3f  Location(randVec(Center - Range * 0.5f,
                            Center + Range * 0.5f));

    //Make a box
    NodeRecPtr ConvexHullGeoNode = makeSphere(2, 1.0f);
    MaterialRecPtr TheSimpleMat = createColoredMaterial(Color3f(1.0f,0.0f,0.0f));
    dynamic_cast<Geometry*>(ConvexHullGeoNode->getCore())->setMaterial(TheSimpleMat);

    //ConvexHull Rigid Body node
    BulletRigidBodyRecPtr ConvexHullBody = BulletRigidBody::create();
    NodeRecPtr ConvexHullBodyNode = makeNodeFor(ConvexHullBody);
    ConvexHullBodyNode->addChild(ConvexHullGeoNode);

    //Add the rigid body node to the scene
    root->addChild(ConvexHullBodyNode);

    //create a dynamic rigidbody
    BulletConvexHullShapeRecPtr ConvexHullBodyShape = BulletConvexHullShape::create();

    GeometryRecPtr HullGeo = makeSphereGeo(2, 1.0f);
    GeoVectorProperty* positions = HullGeo->getPositions();
    for(UInt32 i = 0; i < positions->size(); ++i)
    {
        ConvexHullBodyShape->editMFPoints()->push_back(positions->getValue<Pnt3f>(i));
    }

    // Create Dynamic Object
    Real32 mass(ConvexHullSize.x() * ConvexHullSize.y() * ConvexHullSize.z());

    Vec3f localInertia(0,0,0);
    ConvexHullBodyShape->calculateLocalInertia(mass,localInertia);

    Matrix trans;
    trans.setTranslate(Location);

    ConvexHullBody->setMass(mass);
    ConvexHullBody->setInertia(localInertia);
    ConvexHullBody->setRestitution(0.5f);
    ConvexHullBody->setWorldTransform(trans);
    ConvexHullBody->setCollisionShape(ConvexHullBodyShape);

    world->pushToRigidBodies(ConvexHullBody);
}

void createDynamicTriMesh(Node* const root,
                          BulletDynamicsWorld* const world)
{
    Vec3f  Center(0.0f,30.0f,0.0f);
    Vec3f  Range(30.0f,0.0f,30.0f);

    Vec3f  GImpactMeshSize(randVec(Vec3f(1.0f,1.0f,1.0f),
                                  Vec3f(3.0f,3.0f,3.0f)));
    Vec3f  Location(randVec(Center - Range * 0.5f,
                            Center + Range * 0.5f));

    //Make a box
    NodeRecPtr GImpactMeshGeoNode = makeTorus(1.0f, 2.0f, 12, 12);
    MaterialRecPtr TheSimpleMat = createColoredMaterial(Color3f(1.0f,0.0f,0.0f));
    dynamic_cast<Geometry*>(GImpactMeshGeoNode->getCore())->setMaterial(TheSimpleMat);

    //GImpactMesh Rigid Body node
    BulletRigidBodyRecPtr GImpactMeshBody = BulletRigidBody::create();
    NodeRecPtr GImpactMeshBodyNode = makeNodeFor(GImpactMeshBody);
    GImpactMeshBodyNode->addChild(GImpactMeshGeoNode);

    //Add the rigid body node to the scene
    root->addChild(GImpactMeshBodyNode);

    //create a dynamic rigidbody
    BulletGImpactMeshShapeRecPtr GImpactMeshBodyShape = BulletGImpactMeshShape::create();
    GImpactMeshBodyShape->setGeometryNode(GImpactMeshGeoNode);
    //TODO: Remove need for this
    commitChanges();

    // Create Dynamic Object
    Real32 mass(GImpactMeshSize.x() * GImpactMeshSize.y() * GImpactMeshSize.z());

    Vec3f localInertia(0,0,0);
    GImpactMeshBodyShape->calculateLocalInertia(mass,localInertia);

    Matrix trans;
    trans.setTranslate(Location);

    GImpactMeshBody->setMass(mass);
    GImpactMeshBody->setInertia(localInertia);
    GImpactMeshBody->setRestitution(0.5f);
    GImpactMeshBody->setWorldTransform(trans);
    GImpactMeshBody->setCollisionShape(GImpactMeshBodyShape);

    world->pushToRigidBodies(GImpactMeshBody);
}

void createStaticTriMesh(Node* const root,
                          BulletDynamicsWorld* const world)
{
    Vec3f  Center(0.0f,1.0f,0.0f);
    Vec3f  Range(30.0f,0.0f,30.0f);

    Vec3f  BvhTriangleMeshSize(randVec(Vec3f(1.0f,1.0f,1.0f),
                                  Vec3f(3.0f,3.0f,3.0f)));
    Vec3f  Location(randVec(Center - Range * 0.5f,
                            Center + Range * 0.5f));

    //Make a box
    NodeRecPtr BvhTriangleMeshGeoNode = makeTorus(1.0f, 2.0f, 12, 12);
    MaterialRecPtr TheSimpleMat = createColoredMaterial(Color3f(0.0f,1.0f,0.0f));
    dynamic_cast<Geometry*>(BvhTriangleMeshGeoNode->getCore())->setMaterial(TheSimpleMat);

    //BvhTriangleMesh Rigid Body node
    BulletRigidBodyRecPtr BvhTriangleMeshBody = BulletRigidBody::create();
    NodeRecPtr BvhTriangleMeshBodyNode = makeNodeFor(BvhTriangleMeshBody);
    BvhTriangleMeshBodyNode->addChild(BvhTriangleMeshGeoNode);

    //Add the rigid body node to the scene
    root->addChild(BvhTriangleMeshBodyNode);

    //create a rigidbody
    BulletBvhTriangleMeshShapeRecPtr BvhTriangleMeshBodyShape = BulletBvhTriangleMeshShape::create();
    BvhTriangleMeshBodyShape->setGeometryNode(BvhTriangleMeshGeoNode);
    //TODO: Remove need for this
    commitChanges();

    Matrix trans;
    trans.setTranslate(Location);

    BvhTriangleMeshBody->setMass(0.0f);
    BvhTriangleMeshBody->setRestitution(0.5f);
    BvhTriangleMeshBody->setWorldTransform(trans);
    BvhTriangleMeshBody->setCollisionShape(BvhTriangleMeshBodyShape);

    world->pushToRigidBodies(BvhTriangleMeshBody);
}

void createCompoundShape(Node* const root,
                         BulletDynamicsWorld* const world)
{
    Vec3f  Center(0.0f,30.0f,0.0f);
    Vec3f  Range(30.0f,0.0f,30.0f);

    Real32 BarRadius(randf(0.2f, 0.4f));
    Real32 DumbellRadius(randf(0.8f, 1.0f));
    Real32 Height(randf(2.0f, 4.0f));
    Vec3f  Location(randVec(Center - Range * 0.5f,
                            Center + Range * 0.5f));

    MaterialRecPtr TheSimpleMat = createColoredMaterial(Color3f(0.0f,1.0f,1.0f));

    //Make a cylinder
    NodeRecPtr CylinderGeoNode = makeCylinder(Height,
                                             BarRadius,
                                             24,
                                             true,false,false);
    dynamic_cast<Geometry*>(CylinderGeoNode->getCore())->setMaterial(TheSimpleMat);

    //Make Sphere
    GeometryRecPtr SphereGeometry   = makeSphereGeo(2, DumbellRadius);
    SphereGeometry->setMaterial(TheSimpleMat);

    Matrix TopCapMatrix;
    Matrix BottomCapMatrix;

    //Top Cap
    NodeRecPtr TopCapGeoNode           = makeNodeFor(SphereGeometry);

    TopCapMatrix.setTranslate(Vec3f(0.0f, Height*0.5, 0.0f));
    TransformRecPtr TopCapTransform = Transform::create();
    TopCapTransform->setMatrix(TopCapMatrix);

    NodeRecPtr TopCapNode = makeNodeFor(TopCapTransform);
    TopCapNode->addChild(TopCapGeoNode);

    //Bottom Cap
    NodeRecPtr BottomCapGeoNode           = makeNodeFor(SphereGeometry);

    BottomCapMatrix.setTranslate(Vec3f(0.0f, Height*-0.5f, 0.0f));
    TransformRecPtr BottomCapTransform = Transform::create();
    BottomCapTransform->setMatrix(BottomCapMatrix);

    NodeRecPtr BottomCapNode = makeNodeFor(BottomCapTransform);
    BottomCapNode->addChild(BottomCapGeoNode);

    //Compound Rigid Body node
    BulletRigidBodyRecPtr CompoundBody = BulletRigidBody::create();
    NodeRecPtr CompoundBodyNode = makeNodeFor(CompoundBody);
    CompoundBodyNode->addChild(CylinderGeoNode);
    CompoundBodyNode->addChild(TopCapNode);
    CompoundBodyNode->addChild(BottomCapNode);

    //Add the rigid body node to the scene
    root->addChild(CompoundBodyNode);

    //create a dynamic rigidbody
    BulletCylinderShapeRecPtr CylinderBodyShape = BulletCylinderShape::create();
    CylinderBodyShape->setHalfExtents(Vec3f(BarRadius, Height * 0.5f, Height * 0.5f));

    BulletSphereShapeRecPtr TopSphereBodyShape = BulletSphereShape::create();
    TopSphereBodyShape->setRadius(DumbellRadius);

    BulletSphereShapeRecPtr BottomSphereBodyShape = BulletSphereShape::create();
    BottomSphereBodyShape->setRadius(DumbellRadius);

    BulletCompoundShapeRecPtr CompoundBodyShape = BulletCompoundShape::create();
    CompoundBodyShape->addChildShape(Matrix::identity(), CylinderBodyShape);
    CompoundBodyShape->addChildShape(TopCapMatrix, TopSphereBodyShape);
    CompoundBodyShape->addChildShape(BottomCapMatrix, BottomSphereBodyShape);
    //TODO: Remove need for calling commitChanges
    commitChanges();

    // Create Dynamic Object
    Real32 mass(2.0f * (4.0f/3.0f) * 3.14195f * DumbellRadius * DumbellRadius * DumbellRadius);

    Vec3f localInertia(0,0,0);
    CompoundBodyShape->calculateLocalInertia(mass,localInertia);

    Matrix trans;
    trans.setTranslate(Location);

    CompoundBody->setMass(mass);
    CompoundBody->setInertia(localInertia);
    CompoundBody->setRestitution(0.5f);
    CompoundBody->setWorldTransform(trans);
    CompoundBody->setCollisionShape(CompoundBodyShape);

    world->pushToRigidBodies(CompoundBody);
}

void keyTyped(KeyEventDetails* const details,
              Node* const root,
              BulletDynamicsWorld* const world,
              BulletHandler* const physicsHandler,
              ShadowStage* const shadowStage,
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
        case KeyEventDetails::KEY_B:
            createBox(root, world);
            break;
        case KeyEventDetails::KEY_S:
            createSphere(root, world);
            break;
        case KeyEventDetails::KEY_O:
            createCone(root, world);
            break;
        case KeyEventDetails::KEY_Y:
            createCylinder(root, world);
            break;
        case KeyEventDetails::KEY_P:
            createCapsule(root, world);
            break;
        case KeyEventDetails::KEY_H:
            createConvexHull(root, world);
            break;
        case KeyEventDetails::KEY_I:
            createStaticTriMesh(root, world);
            break;
        case KeyEventDetails::KEY_T:
            createDynamicTriMesh(root, world);
            break;
        case KeyEventDetails::KEY_C:
            createCompoundShape(root, world);
            break;
        case KeyEventDetails::KEY_W:
            if(shadowStage->getShadowMode() == ShadowStage::NO_SHADOW)
            {
                shadowStage->setShadowMode(ShadowStage::PCF_SHADOW_MAP);
            }
            else
            {
                shadowStage->setShadowMode(ShadowStage::NO_SHADOW);
            }
            break;
        case KeyEventDetails::KEY_SPACE:
            //Pause/Unpause dynamics
            if(physicsHandler->isUpdateProducerAttached())
            {
                physicsHandler->detachUpdateProducer();
            }
            else
            {
                physicsHandler->attachUpdateProducer(dynamic_cast<WindowEventProducer*>(details->getSource()));
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

        //Plane Node
        Vec3f BoxSize(50.0f,1.0f,50.0f);
        NodeRecPtr PlaneGeoNode =
            makeBox(BoxSize.x(),BoxSize.y(),BoxSize.z(),20,20,20);
        MaterialRecPtr TheSimpleMat = createColoredMaterial(Color3f(0.0f,1.0f,0.0f));
        dynamic_cast<Geometry*>(PlaneGeoNode->getCore())->setMaterial(TheSimpleMat);

        //Plane Transform node
        Matrix PlaneTrans;

        TransformRecPtr PlaneTransform = Transform::create();
        PlaneTransform->setMatrix(PlaneTrans);
        NodeRecPtr PlaneTransformNode = makeNodeFor(PlaneTransform);
        PlaneTransformNode->addChild(PlaneGeoNode);

        //Plane Transform node
        BulletRigidBodyRecPtr PlaneBody = BulletRigidBody::create();
        NodeRecPtr PlaneBodyNode = makeNodeFor(PlaneBody);
        PlaneBodyNode->addChild(PlaneGeoNode);


        NodeRecPtr LightGeoNode = makeSphere(2, 0.2f);
        SimpleMaterialRecPtr TheLightMat = SimpleMaterial::create();
        TheLightMat->setEmission(Color3f(1.0f,1.0f,1.0f));
        dynamic_cast<Geometry*>(LightGeoNode->getCore())->setMaterial(TheLightMat);

        //Light Beacon Node
        Matrix SceneLightMatrix;
        SceneLightMatrix.setTranslate(0.0f,30.0f,0.0f);

        TransformRecPtr SceneLightTransform = Transform::create();
        SceneLightTransform->setMatrix(SceneLightMatrix);
        NodeRecPtr SceneLightBeaconNode = makeNodeFor(SceneLightTransform);
        SceneLightBeaconNode->addChild(LightGeoNode);

        //Light Node
        PointLightRecPtr ScenePointLight = PointLight::create();
        ScenePointLight->setBeacon(SceneLightBeaconNode);

        NodeRecPtr SceneLightNode = makeNodeFor(ScenePointLight);
        SceneLightNode->addChild(PlaneBodyNode);

        //Define the shadow stage
        ShadowStageRecPtr SceneShadowStage = ShadowStage::create();
        //SceneShadowStage->setShadowMode(ShadowStage::STD_SHADOW_MAP);
        //SceneShadowStage->setShadowMode(ShadowStage::PERSPECTIVE_SHADOW_MAP);
        SceneShadowStage->setShadowMode(ShadowStage::PCF_SHADOW_MAP);
        //SceneShadowStage->setShadowMode(ShadowStage::PCSS_SHADOW_MAP);
        //SceneShadowStage->setShadowMode(ShadowStage::VARIANCE_SHADOW_MAP);
        SceneShadowStage->setOffFactor(4.0);
        SceneShadowStage->setOffBias(8.0);
        //used to set global shadow intensity, ignores shadow intensity from light sources if != 0.0
        SceneShadowStage->setGlobalShadowIntensity(0.8);
        SceneShadowStage->setMapSize(2048);
        //ShadowSmoothness used for PCF_SHADOW_MAP and VARIANCE_SHADOW_MAP, defines Filter Width. Range can be 0.0 ... 1.0.
        //ShadowSmoothness also used to define the light size for PCSS_SHADOW_MAP
        SceneShadowStage->setShadowSmoothness(0.5f);
        // add light sources here
        SceneShadowStage->editMFLightNodes  ()->push_back(SceneLightNode);
        //SceneShadowStage->setAutoSearchForLights(true);

        // Make Main Scene Node
        NodeRecPtr scene = makeNodeFor(SceneShadowStage);
        scene->addChild(SceneLightNode);
        scene->addChild(SceneLightBeaconNode);
        
        //DbvtBroadphase is a good general purpose broadphase.
        //You can also try out Axis3Sweep.
        BulletDbvtBroadphaseRecPtr worldBroadphase = BulletDbvtBroadphase::create();

        BulletDiscreteDynamicsWorldRecPtr DynamicsWorld = BulletDiscreteDynamicsWorld::create();
        DynamicsWorld->setBroadphase(worldBroadphase);
        DynamicsWorld->setGravity(Vec3f(0,-10,0));

        //create a few basic rigid bodies
        BulletBoxShapeRecPtr PlaneBodyShape = BulletBoxShape::create();
        PlaneBodyShape->setHalfExtents(BoxSize * 0.5f);

        //Create a static rigid body
        PlaneBody->setMass(0.0f);
        PlaneBody->setInertia(Vec3f(0.0f,0.0f,0.0f));

        PlaneBody->setCollisionShape(PlaneBodyShape);

        DynamicsWorld->pushToRigidBodies(PlaneBody);

        BulletHandlerRecPtr TheBulletHandler = BulletHandler::create();
        TheBulletHandler->setMaxStepsPerUpdate(10);
        TheBulletHandler->setStepSize(1.0f/60.0f);
        TheBulletHandler->setDynamicsWorld(DynamicsWorld);
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
                                                    SceneLightNode.get(),
                                                    DynamicsWorld.get(),
                                                    TheBulletHandler.get(),
                                                    SceneShadowStage.get(),
                                                    DebugForeground.get()));

        // Show the whole Scene
        sceneManager.showAll();
        sceneManager.getWindow()->getPort(0)->addForeground(DebugForeground);

        sceneManager.turnHeadlightOff();

        //Create the Documentation
        SimpleScreenDoc TheSimpleScreenDoc(&sceneManager, TutorialWindow);

        //Open Window
        Vec2f WinSize(TutorialWindow->getDesktopSize() * 0.85f);
        Pnt2f WinPos((TutorialWindow->getDesktopSize() - WinSize) *0.5);
        TutorialWindow->openWindow(WinPos,
                                   WinSize,
                                   "02RigidBodies");

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

