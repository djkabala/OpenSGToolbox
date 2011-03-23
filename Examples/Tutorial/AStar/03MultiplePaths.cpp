// OpenSG Tutorial Example: Hello World
//
// Minimalistic OpenSG program
// 
// This is the shortest useful OpenSG program 
// (if you remove all the comments ;)
//
// It shows how to use OpenSG together with GLUT to create a little
// interactive rootNode viewer.
//

// General OpenSG configuration, needed everywhere
#include "OSGConfig.h"

// Methods to create simple geometry: boxes, spheres, tori etc.
#include "OSGSimpleGeometry.h"

// A little helper to simplify rootNode management and interaction
#include "OSGSimpleSceneManager.h"
#include "OSGSceneFileHandler.h"

#include "OSGSolidBackground.h"

#include "OSGComponentTransform.h"
#include "OSGTransform.h"
#include "OSGTypeFactory.h"


#include "OSGFieldContainerFactory.h"
#include "OSGNameAttachment.h"

// Input
#include "OSGWindowUtils.h"

//Text Foreground
#include "OSGSimpleTextForeground.h"

//Animation
#include "OSGKeyframeSequences.h"
#include "OSGKeyframeAnimator.h"
#include "OSGFieldAnimation.h"

#include "OSGOctree.h"
#include "OSGOctreeUtils.h"
#include "OSGOctreeAStarAlgorithm.h"
#include <boost/filesystem/convenience.hpp>
#include "OSGTypedGeoIntegralProperty.h"
#include "OSGTypedGeoVectorProperty.h"

//Animation
#include "OSGKeyframeSequences.h"
#include "OSGKeyframeAnimator.h"
#include "OSGFieldAnimation.h"
#include "OSGAnimationGroup.h"

#include "OSGLineChunk.h"
#include "OSGMaterialChunk.h"
#include "OSGChunkMaterial.h"

#include "OSGRandomPoolManager.h"
// Activate the OpenSG namespace
// This is not strictly necessary, you can also prefix all OpenSG symbols
// with OSG::, but that would be a bit tedious for this example
OSG_USING_NAMESPACE

Vec3f ShrinkFactor(3.0f,3.0f,3.0f);

struct NanobotDetails
{
  public:
    NodeRecPtr _Node;
    TransformRecPtr _Transform;
    AnimationRecPtr _Animation;
    NodeRecPtr _PathVisNode;
};

typedef std::vector<NanobotDetails> NanobotVector;

// forward declaration so we can have the interesting stuff upfront
std::vector<Pnt3f> smooth(const std::vector<Pnt3f>& Path, UInt32 SubDivs = 1);

GeometryTransitPtr createPathGeometry(const std::vector<Pnt3f>& Path);

AnimationTransitPtr setupAnimation(const std::vector<Pnt3f>& Path,
                                   Transform* const transCore);

void makeNanobotPath(NanobotDetails& Nanobot,
                     OctreePtr TheOctree,
                     WindowEventProducer* TheWindow,
                     const Pnt3f& Min,
                     const Pnt3f& Max);

Pnt3f randomOpenPosition(const Pnt3f& Min,
                         const Pnt3f& Max,
                         OctreePtr TheOctree);

void display(SimpleSceneManager *mgr);
void reshape(Vec2f Size, SimpleSceneManager *mgr);

void keyPressed(KeyEventDetails* const details,
                WindowEventProducer* const TutorialWindow,
                Node* const SceneGeometryNode,
                OctreePtr TheOctree,
                NanobotVector& Nanobots)
{
    if(details->getKey() == KeyEventDetails::KEY_Q && details->getModifiers() & KeyEventDetails::KEY_MODIFIER_COMMAND)
    {
        dynamic_cast<WindowEventProducer*>(details->getSource())->closeWindow();
    }
    switch(details->getKey())
    {
        case KeyEventDetails::KEY_1:
            {
                Pnt3f Min,Max;
                SceneGeometryNode->getVolume().getBounds(Min,Max);
                Min = Min + ShrinkFactor;
                Max = Max - ShrinkFactor;
                UInt32 Index(RandomPoolManager::getRandomInt32(0,Nanobots.size()));
                makeNanobotPath(Nanobots[Index], TheOctree, TutorialWindow, Min,Max);
            }
            break;
        case KeyEventDetails::KEY_2:
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
    DocForeground->addLine("of \\{\\color=AAAA00FF OctreeAStarAlgorithm} to create several animation paths.");
    
    DocForeground->addLine("");
    DocForeground->addLine("\\{\\color=AAAAAAFF Key Controls}:");
    DocForeground->addLine("         \\{\\color=AAAAFFFF 1}: Randomly change the target location of one of the agents.");
    DocForeground->addLine("            This will require AStar to be applied,");
    DocForeground->addLine("            so it may take some time.");
    DocForeground->addLine("     \\{\\color=AAAAFFFF Cmd+q}: Close the application");
    DocForeground->addLine("         \\{\\color=AAAAFFFF ?}: Show/hide this documentation");

    DocForeground->addLine("");
    DocForeground->addLine("\\{\\color=AAAAAAFF Mouse Controls}:");
    DocForeground->addLine("   \\{\\color=AAAAFFFF Scroll wheel}: Zoom in/out");
    DocForeground->addLine("      \\{\\color=AAAAFFFF Left+drag}: Rotate");
    DocForeground->addLine("     \\{\\color=AAAAFFFF Right+drag}: Translate");

    return SimpleTextForegroundTransitPtr(DocForeground);
}

// Initialize GLUT & OpenSG and set up the rootNode
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    {
        // Set up Window
        WindowEventProducerRecPtr TutorialWindow = createNativeWindow();
        TutorialWindow->initWindow();

        SimpleSceneManager sceneManager;
        TutorialWindow->setDisplayCallback(boost::bind(display, &sceneManager));
        TutorialWindow->setReshapeCallback(boost::bind(reshape, _1, &sceneManager));

        //Attach to events
        TutorialWindow->connectMousePressed(boost::bind(mousePressed, _1, &sceneManager));
        TutorialWindow->connectMouseReleased(boost::bind(mouseReleased, _1, &sceneManager));
        TutorialWindow->connectMouseDragged(boost::bind(mouseDragged, _1, &sceneManager));
        TutorialWindow->connectMouseWheelMoved(boost::bind(mouseWheelMoved, _1, &sceneManager));

        // Tell the Manager what to manage
        sceneManager.setWindow(TutorialWindow);

        UInt32 SceneMask(1),
               NanobotMask(2),
               PathMask(4);

        BoostPath SceneFilePath(".//Data//CellParts.osb");

        if(argc >= 2)
        {
            SceneFilePath = BoostPath(argv[1]);
            if(!boost::filesystem::exists(SceneFilePath))
            {
                SceneFilePath = BoostPath(".//Data//CellParts.osb");
            }
        }

        //Make Base Geometry Node
        NodeRecPtr SceneGeometryNode =
            SceneFileHandler::the()->read(SceneFilePath.string().c_str());
        SceneGeometryNode->setTravMask(SceneMask);
        if(SceneGeometryNode == NULL)
        {
            SceneGeometryNode = makeTorus(1.0, 10.0, 24, 24);
        }
        //Construct the Root Node
        NodeRecPtr RootNode = makeCoredNode<Group>();
        RootNode->addChild(SceneGeometryNode);

        commitChanges();

        //Create the Octree

        SLOG << "Started Building Octree" << std::endl;
        SLOG << "This may take some time ..." << std::endl;
        Time StartTime;
        StartTime = getSystemTime();
        OctreePtr TheOctree =
            Octree::buildTree(RootNode,SceneMask,6,0.5,true);

        SLOG << "Building Octree: " << getSystemTime() - StartTime << " s" << std::endl;
        Pnt3f Min,Max;
        TheOctree->getRoot()->getVolume();
        SLOG << "Octree: "<< std::endl
             << "    Depth: " << TheOctree->getDepth() << std::endl
             << "    Bounds: " << TheOctree->getRoot()->getVolume().getMin() << "  :  " << TheOctree->getRoot()->getVolume().getMax() << std::endl
             << "    NodeCount: " << TheOctree->getNodeCount() << std::endl
             << "    LeafNodeCount: " << TheOctree->getLeafNodeCount() << std::endl
             << "    BranchNodeCount: " << TheOctree->getBranchNodeCount() << std::endl
             << "    IntersectingNodeCount: " << TheOctree->getIntersectingNodeCount() << std::endl
             << "    IntersectingLeafNodeCount: " << TheOctree->getIntersectingLeafNodeCount() << std::endl;

        //Make the Nanobot Nodes
        BoostPath NanobotFilePath(".//Data//Nanobot.osb");
        NodeRecPtr NanobotGeoNode =
            SceneFileHandler::the()->read(NanobotFilePath.string().c_str());

        NanobotVector Nanobots;

        UInt32 NumNanobots(3);
        for(UInt32 i(0) ; i<NumNanobots ; ++i)
        {
            NanobotDetails TheDetails;

            //Get the Transform node for the Nanobot
            TheDetails._Transform = Transform::create();
            Matrix NanobotMatrix;
            
            Pnt3f Min,Max;
            SceneGeometryNode->getVolume().getBounds(Min,Max);
            Min = Min + ShrinkFactor;
            Max = Max - ShrinkFactor;
            NanobotMatrix.setTranslate(randomOpenPosition(Min,Max,TheOctree).subZero());
            NanobotMatrix.setScale(0.06f);
            TheDetails._Transform->setMatrix(NanobotMatrix);

            TheDetails._Node = makeNodeFor(TheDetails._Transform);
            TheDetails._Node->addChild(cloneTree(NanobotGeoNode));
            TheDetails._Node->setTravMask(NanobotMask);
            
            TheDetails._PathVisNode = Node::create();

            Nanobots.push_back(TheDetails);

            makeNanobotPath(Nanobots.back(), TheOctree, TutorialWindow, Min,Max);
        }

        for(UInt32 i(0) ; i<Nanobots.size() ; ++i)
        {
            RootNode->addChild(Nanobots[i]._Node);
            RootNode->addChild(Nanobots[i]._PathVisNode);
        }
        commitChanges();


        //NodeRecPtr StartNode = makeSphere(1.0, 2);
        //TransformRecPtr StartNodeTransform = Transform::create();
        //Matrix StartNodeMatrix;
        //StartNodeMatrix.setTranslate(Start);
        //StartNodeMatrix.setScale(0.1f);
        //StartNodeTransform->setMatrix(StartNodeMatrix);
        //NodeRecPtr StartNodeTransformNode = makeNodeFor(StartNodeTransform);
        //StartNodeTransformNode->addChild(StartNode);
        //StartNodeTransformNode->setTravMask(PathMask);
        //RootNode->addChild(StartNodeTransformNode);

        //NodeRecPtr GoalNode = makeSphere(1.0, 2);
        //TransformRecPtr GoalNodeTransform = Transform::create();
        //Matrix GoalNodeMatrix;
        //GoalNodeMatrix.setScale(0.1f);
        //GoalNodeMatrix.setTranslate(Goal);
        //GoalNodeTransform->setMatrix(GoalNodeMatrix);
        //NodeRecPtr GoalNodeTransformNode = makeNodeFor(GoalNodeTransform);
        //GoalNodeTransformNode->addChild(GoalNode);
        //GoalNodeTransformNode->setTravMask(PathMask);
        //RootNode->addChild(GoalNodeTransformNode);

        TutorialWindow->connectKeyPressed(boost::bind(keyPressed, _1,
                                                      TutorialWindow.get(),
                                                      SceneGeometryNode.get(),
                                                      TheOctree,
                                                      Nanobots));


        //Set the background
        SolidBackgroundRecPtr TheBackground = SolidBackground::create();
        TheBackground->setColor(Color3f(0.0f,0.0f,0.0f));

        // tell the manager what to manage
        sceneManager.setRoot  (RootNode);
        sceneManager.getWindow()->getPort(0)->setBackground(TheBackground);

        //Create the Documentation Foreground and add it to the viewport
        SimpleScreenDoc TheSimpleScreenDoc(&sceneManager, TutorialWindow);

        // show the whole RootNode
        sceneManager.showAll();

        Vec2f WinSize(TutorialWindow->getDesktopSize() * 0.85f);
        Pnt2f WinPos((TutorialWindow->getDesktopSize() - WinSize) *0.5);
        TutorialWindow->openWindow(WinPos,
                                   WinSize,
                                   "01AStarPathing");

        //Enter main Loop
        TutorialWindow->mainLoop();
    }

    osgExit();

    return 0;
}

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

Pnt3f randomOpenPosition(const Pnt3f& Min,
                         const Pnt3f& Max,
                         OctreePtr TheOctree)
{
    Pnt3f Result;
    do
    {
        Result.setValues(RandomPoolManager::getRandomReal32(Min.x(),Max.x()),
                         RandomPoolManager::getRandomReal32(Min.y(),Max.y()),
                         RandomPoolManager::getRandomReal32(Min.z(),Max.z()));
    }while(!TheOctree->getNodeThatContains(Result)->isEmpty());

    return Result;
}

void makeNanobotPath(NanobotDetails& Nanobot,
                     OctreePtr TheOctree,
                     WindowEventProducer* TheWindow,
                     const Pnt3f& Min,
                     const Pnt3f& Max)
{
    //Get the nanobots current location
    Pnt3f NonobotLoc(Nanobot._Transform->getMatrix() * Pnt3f(0.0f,0.0f,0.0f));

    std::vector<Pnt3f> NanobotPath;
    do
    {
        //Randomly find a destination location
        Pnt3f Goal(randomOpenPosition(Min,Max,TheOctree));

        //Try and find a path to that location
        OctreeAStarAlgorithm AlgorithmObj;
        SLOG << "Started AStar Search" << std::endl;
        Time StartTime = getSystemTime();
        NanobotPath = AlgorithmObj.search(TheOctree,NonobotLoc,Goal);
        SLOG << "Finished AStar Search: " << getSystemTime() - StartTime << " s" << std::endl;
        if(NanobotPath.size() > 2)
        {
            NanobotPath.front() = NonobotLoc;
            NanobotPath.back() = Goal;
            NanobotPath = smooth(NanobotPath,4);

            //Make an animation for the nanobot to that location
            if(Nanobot._Animation != NULL)
            {
                Nanobot._Animation->stop();
                Nanobot._Animation->detachUpdateProducer();
            }
            Nanobot._Animation = setupAnimation(NanobotPath, Nanobot._Transform);
            Nanobot._Animation->attachUpdateProducer(TheWindow);
            Nanobot._Animation->start();

            Nanobot._PathVisNode->setCore(createPathGeometry(NanobotPath));
        }
    }while(NanobotPath.size() <= 2);
}

GeometryTransitPtr createPathGeometry(const std::vector<Pnt3f>& Path)
{

    //*******************Create the Geometry for the box
    GeoUInt8PropertyRecPtr type = GeoUInt8Property::create();
    //Volume bound box
    type->push_back(GL_LINE_STRIP);

    GeoUInt32PropertyRefPtr lens = GeoUInt32Property::create();
    //Volume bound box
    lens->push_back(Path.size());

    Color3f CoolColor(0.0f,0.0f,1.0f),
            HotColor(1.0f,0.0f,0.0f);

    GeoUInt32PropertyRefPtr index = GeoUInt32Property::create();
    GeoPnt3fPropertyRefPtr points = GeoPnt3fProperty::create();
    GeoVec3fPropertyRefPtr colors = GeoVec3fProperty::create();

    //Volume bound box
    Color3f Color;
    Real32 t;
    for(UInt32 i(0) ; i<Path.size() ; ++i)
    {
        t = static_cast<Real32>(i)/static_cast<Real32>(Path.size());
        Color = (t*CoolColor) + ((1.0f-t)*HotColor);
        index->push_back(i);
        points->push_back(Path[i]);
        colors->push_back(Color);
    }

    GeometryRecPtr PathGeo = Geometry::create();
    PathGeo->setTypes     (type);
    PathGeo->setLengths   (lens);
    PathGeo->setIndices   (index);
    PathGeo->setPositions (points);
    PathGeo->setColors    (colors);

    //Create the material for the line
    LineChunkRecPtr DefaultLineChunk = LineChunk::create();
    DefaultLineChunk->setWidth(2.0f);

    MaterialChunkRecPtr DefaultMaterialChunk = MaterialChunk::create();
    DefaultMaterialChunk->setLit(false);

    ChunkMaterialRecPtr DefaultChunkMaterial = ChunkMaterial::create();
    DefaultChunkMaterial->addChunk(DefaultMaterialChunk);
    DefaultChunkMaterial->addChunk(DefaultLineChunk);

    PathGeo->setMaterial(DefaultChunkMaterial);

    return GeometryTransitPtr(PathGeo);
}

std::vector<Pnt3f> smooth(const std::vector<Pnt3f>& Path, UInt32 SubDivs)
{
    assert(Path.size() >= 2);

    std::vector<Pnt3f> Result;
    Result.push_back(Path.front());
    Pnt3f prevPos, curPos, nextPos;
    Vec3f curTan;
    Vec3f nextTan;
    Real32 c(0.1f);
    for(UInt32 i(1) ; i<Path.size()-2 ; ++i)
    {
        prevPos = Path[i-1];
        curPos = Path[i];
        nextPos = Path[i+1];
        curTan = (1.0f - c)*(nextPos - prevPos);
        nextTan = (1.0f - c)*(Path[i+2] - curPos);
        Real32 h00,h01,h02,h03;

        Result.push_back(Path[i]);
        //tangent.normalize();
        for(UInt32 j = 0; j < SubDivs; ++j)
        {
            Real32 t(static_cast<Real32>(j+1)/static_cast<Real32>(SubDivs+1)),
                   t2(t*t),
                   t3(t2*t);;

            h00 = 2.0f*t3 - 3.0f*t2 + 1.0f;
            h01 = t3 - 2.0*t2 + t;
            h02 = -2.0f*t3 + 3.0f*t2;
            h03 = t3 - t2;             

            Pnt3f Pos = (h00 * curPos
                      + h01 * curTan).subZero() 
                      + (h02 * nextPos 
                      + h03 * nextTan).subZero();
            Result.push_back(Pos);
        }
    }
    Result.push_back(Path.back());

    return Result;
}

AnimationTransitPtr setupAnimation(const std::vector<Pnt3f>& Path, Transform* const transCore)
{
    //Transformation Keyframe Sequence
    KeyframeTransformationSequenceRecPtr TransformationKeyframes = KeyframeTransformationSequenceMatrix4f::create();
    Matrix TempMat;
    TempMat.setScale(0.06f);
    Real32 Speed(1.0f);
    Real32 SeqTime;
    Real32 TotalPathDistance(0.0f);
    for(UInt32 i(0) ; i<Path.size()-1 ; ++i)
    {
        TotalPathDistance += Path[i].dist(Path[(i+1)]);
    }

    Real32 CumPathDistance(0.0f);
    Quaternion Rotation;
    Vec3f Direction;
    for(UInt32 i(0) ; i<Path.size() ; ++i)
    {
        SeqTime = CumPathDistance / Speed;
        Direction = Path[(i+1)%Path.size()]-Path[i];
        Direction[1] = 0.0f;
        Direction.normalize();
        Rotation = Quaternion(Vec3f(0.0f,0.0f,1.0f),Direction);
        TempMat.setTransform(Vec3f(Path[i]),Rotation,Vec3f(0.1f,0.1f,0.1f));
        TransformationKeyframes->addKeyframe(TempMat,SeqTime);

        if(i<Path.size()-1)
        {
            CumPathDistance += Path[i].dist(Path[(i+1)]);
        }
    }

    //Animator
    KeyframeAnimatorRecPtr TheAnimator = KeyframeAnimator::create();
    TheAnimator->setKeyframeSequence(TransformationKeyframes);

    //Animation
    FieldAnimationRecPtr TheAnimation = FieldAnimation::create();
    TheAnimation->setAnimator(TheAnimator);
    TheAnimation->setInterpolationType(Animator::LINEAR_INTERPOLATION);
    TheAnimation->setCycling(1);
    TheAnimation->setAnimatedField(transCore, std::string("matrix"));

    return AnimationTransitPtr(TheAnimation);
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

