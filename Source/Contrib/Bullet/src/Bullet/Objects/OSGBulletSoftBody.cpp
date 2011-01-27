/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#include "OSGRenderAction.h"
#include "OSGIntersectAction.h"
#include "OSGBulletMathUtils.h"
#include "OSGBulletHandler.h"
#include "OSGBulletSimulationEventDetails.h"
#include "OSGBulletDynamicsWorld.h"
#include "OSGBulletTypedConstraint.h"
#include "OSGTriangleIterator.h"

#include "BulletSoftBody/btSoftBodyHelpers.h"
#include "BulletSoftBody/btSoftRigidDynamicsWorld.h"

#include "OSGBulletSoftBody.h"

#include <boost/bind.hpp>

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBulletSoftBodyBase.cpp file.
// To modify it, please change the .fcd file (OSGBulletSoftBody.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BulletSoftBody::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
        IntersectAction::registerEnterDefault(
            getClassType(),
            reinterpret_cast<Action::Callback>(&Geometry::intersect));

        RenderAction::registerEnterDefault(
            getClassType(),
            reinterpret_cast<Action::Callback>(
                &MaterialDrawable::renderActionEnterHandler));
                
        RenderAction::registerLeaveDefault(
            getClassType(),
            reinterpret_cast<Action::Callback>(
                &MaterialDrawable::renderActionLeaveHandler));
    }
}

BulletSoftBodyTransitPtr BulletSoftBody::create(Geometry* const BaseGeometry,
                                                btSoftRigidDynamicsWorld* dynamicsWorld)
{
    BulletSoftBodyRecPtr TheSoftBody(NULL);
    if(BaseGeometry != NULL)
    {
        TheSoftBody = BulletSoftBodyBase::create();

        if(BaseGeometry->getTypes() != NULL)
        {
            GeoIntegralPropertyRecPtr values =
                dynamic_pointer_cast<GeoIntegralProperty>(BaseGeometry->getTypes()->clone());
            TheSoftBody->setTypes(values);
        }
        if(BaseGeometry->getLengths() != NULL)
        {
            GeoIntegralPropertyRecPtr values =
                dynamic_pointer_cast<GeoIntegralProperty>(BaseGeometry->getLengths()->clone());
            TheSoftBody->setLengths(values);
        }
        if(BaseGeometry->getIndices() != NULL)
        {
            GeoIntegralPropertyRecPtr values =
                dynamic_pointer_cast<GeoIntegralProperty>(BaseGeometry->getIndices()->clone());
            TheSoftBody->setIndices(values);
        }
        for(UInt32 i(0) ; i<Geometry::LastIndex ; ++i)
        {
            if(BaseGeometry->getProperty(i) != NULL)
            {
                GeoVectorPropertyRecPtr values =
                    dynamic_pointer_cast<GeoVectorProperty>(BaseGeometry->getProperty(i)->clone());
                TheSoftBody->setProperty(values, i);
            }
        }
        TheSoftBody->setMaterial(BaseGeometry->getMaterial());

        TheSoftBody->_worldInfo.m_dispatcher = dynamicsWorld->getDispatcher();
        TheSoftBody->_worldInfo.m_broadphase = dynamicsWorld->getBroadphase();
        //TheSoftBody->_worldInfo.m_gravity.setValue(0,-10,0);
        TheSoftBody->_worldInfo.m_sparsesdf.Initialize();

        //GeoVectorProperty* positions = TheSoftBody->getPositions();

        //GeoVectorProperty* normals = TheSoftBody->getNormals();

        ////Get all of the transformed Positions
        //std::vector<int> _TriIndexes;
        //std::vector<btScalar> _Positions;

        //for(UInt32 i = 0; i < positions->size(); ++i)
        //{
            //const Pnt3f& NewPos([>ToWorldMat * <]positions->getValue<Pnt3f>(i));
            //_Positions.push_back(NewPos.x());
            //_Positions.push_back(NewPos.y());
            //_Positions.push_back(NewPos.z());
        //}

        //UInt32 VertexCount = positions->size();

        ////Create a Index array that ODE can understand
        //TriangleIterator TriItor;
        //for(TriItor = BaseGeometry->beginTriangles() ; TriItor != BaseGeometry->endTriangles() ; ++TriItor)
        //{
            //_TriIndexes.push_back(TriItor.getPositionIndex(0));
            //_TriIndexes.push_back(TriItor.getPositionIndex(1));
            //_TriIndexes.push_back(TriItor.getPositionIndex(2));
        //}
        //UInt32 TriCount = _TriIndexes.size()/3;

        //if(_TriIndexes.size() > 0)
        //{
            ////create a dynamic softbody
            //TheSoftBody->_body.reset(btSoftBodyHelpers::CreateFromTriMesh(TheSoftBody->_worldInfo,
                                                                          //&_Positions[0],
                                                                          //&_TriIndexes[0],
                                                                          //TriCount));


            ////psb->m_cfg.aeromodel = 0.0f;              // Aerodynamic model (default: V_Point)
            ////psb->m_cfg.kVCF = 0.0f;                   // Velocities correction factor (Baumgarte)
            ////psb->m_cfg.kDP = 0.0f;                    // Damping coefficient [0,1]
            ////psb->m_cfg.kDG = 0.0f;                    // Drag coefficient [0,+inf]
            ////psb->m_cfg.kLF = 0.0f;                    // Lift coefficient [0,+inf]
            ////psb->m_cfg.kPR = 0.0f;                    // Pressure coefficient [-inf,+inf]
            ////psb->m_cfg.kVC = 0.0f;                    // Volume conversation coefficient [0,+inf]
            //TheSoftBody->_body->m_cfg.kDF = 0.5f;                    // Dynamic friction coefficient [0,1]
            //TheSoftBody->_body->m_cfg.kMT = 0.05f;                    // Pose matching coefficient [0,1]              
            ////psb->m_cfg.kCHR = 1.0f;                   // Rigid contacts hardness [0,1]
            ////psb->m_cfg.kKHR = 1.0f;                   // Kinetic contacts hardness [0,1]
            ////psb->m_cfg.kSHR = 0.0f;                   // Soft contacts hardness [0,1]
            ////psb->m_cfg.kAHR = 1.0f;                   // Anchors hardness [0,1]
            ////psb->m_cfg.kSRHR_CL = 0.0f;               // Soft vs rigid hardness [0,1] (cluster only)
            ////psb->m_cfg.kSKHR_CL = 0.0f;               // Soft vs kinetic hardness [0,1] (cluster only)
            ////psb->m_cfg.kSSHR_CL = 0.0f;               // Soft vs soft hardness [0,1] (cluster only)
            ////psb->m_cfg.kSR_SPLT_CL = 0.0f;    // Soft vs rigid impulse split [0,1] (cluster only)
            ////psb->m_cfg.kSK_SPLT_CL = 0.0f;    // Soft vs rigid impulse split [0,1] (cluster only)
            ////psb->m_cfg.kSS_SPLT_CL = 0.0f;    // Soft vs rigid impulse split [0,1] (cluster only)
            ////psb->m_cfg.maxvolume = 0.0f;              // Maximum volume ratio for pose
            ////psb->m_cfg.timescale = 0.0f;              // Time scale
            ////psb->m_cfg.viterations = 0.0f;    // Velocities solver iterations
            ////psb->m_cfg.piterations = 0.0f;    // Positions solver iterations
            ////psb->m_cfg.diterations = 0.0f;    // Drift solver iterations
            ////psb->m_cfg.citerations = 0.0f;    // Cluster solver iterations
            ////psb->m_cfg.collisions = 0.0f;             // Collisions flags

            //TheSoftBody->_body->m_cfg.piterations		=	5;

            //TheSoftBody->_body->randomizeConstraints();
            //TheSoftBody->_body->scale(btVector3(1,1,1));
            //TheSoftBody->_body->setTotalMass(1,true);
            //TheSoftBody->_body->setPose(false,true);

            //TheSoftBody->_body->setUserPointer(TheSoftBody);

			//dynamicsWorld->addSoftBody(TheSoftBody->_body.get());
        //}
    }

    return BulletSoftBodyTransitPtr(TheSoftBody);
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
void BulletSoftBody::attachHandler(BulletHandler* const handler)
{
    deattachHandler();

    if(handler != NULL)
    {
        _UpdateEventConnection =
            handler->connectSimulationUpdated(boost::bind(&BulletSoftBody::handleUpdate,
                                                          this,
                                                          _1)); 
    }
}

void BulletSoftBody::deattachHandler(void)
{
    _UpdateEventConnection.disconnect();
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/
void BulletSoftBody::handleUpdate(BulletSimulationEventDetails* const details)
{
    /* Each soft body contain an array of vertices (nodes/particles_mass)   */ 
    btSoftBody::tNodeArray&   nodes(_body->m_nodes);

    /* Node::m_x => position            */ 
    /* Node::m_n => normal (if meaningful)   */ 
    /*! \todo This may need optimization
     */
    if(getUpdateNormals() &&
       getNormals() != NULL)
    {
        for(int j=0;j<nodes.size();++j)
        {
            //Update Positions
            getPositions()->setValue(OSG::bullet::convert(nodes[j].m_x),j);

            //Update normals
            getNormals()->setValue(OSG::bullet::convert(nodes[j].m_n), j);
        }
    }
    else
    {
        for(int j=0;j<nodes.size();++j)
        {
            //Update Positions
            getPositions()->setValue(OSG::bullet::convert(nodes[j].m_x),j);
        }
    }
}

void BulletSoftBody::onCreate(const BulletSoftBody *Id)
{
    Inherited::onCreate(Id);

    if(Id != NULL)
    {
        _body.reset(NULL);
    }
}

void BulletSoftBody::onDestroy(void)
{
}

/*----------------------- constructors & destructors ----------------------*/

BulletSoftBody::BulletSoftBody(void) :
    Inherited()
{
}

BulletSoftBody::BulletSoftBody(const BulletSoftBody &source) :
    Inherited(source)
{
}

BulletSoftBody::~BulletSoftBody(void)
{
}

void BulletSoftBody::resolveLinks(void)
{
    Inherited::resolveLinks();

    _UpdateEventConnection.disconnect();
}

/*----------------------------- class specific ----------------------------*/

void BulletSoftBody::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void BulletSoftBody::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump BulletSoftBody NI" << std::endl;
}

OSG_END_NAMESPACE
