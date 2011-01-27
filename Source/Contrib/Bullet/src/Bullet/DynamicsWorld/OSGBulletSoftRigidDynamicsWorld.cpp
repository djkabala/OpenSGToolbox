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

#include "OSGBulletSoftRigidDynamicsWorld.h"
#include "OSGBulletMathUtils.h"
#include "OSGBulletBroadphaseInterface.h"

#include "BulletSoftBody/btSoftBodyRigidBodyCollisionConfiguration.h"
#include "BulletDynamics/ConstraintSolver/btSequentialImpulseConstraintSolver.h"
#include "BulletCollision/CollisionDispatch/btDefaultCollisionConfiguration.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBulletSoftRigidDynamicsWorldBase.cpp file.
// To modify it, please change the .fcd file (OSGBulletSoftRigidDynamicsWorld.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BulletSoftRigidDynamicsWorld::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

btSoftRigidDynamicsWorld* BulletSoftRigidDynamicsWorld::getSoftRigidDynamicsWorld(void) const
{
    return dynamic_cast<btSoftRigidDynamicsWorld*>(_world.get());
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/
    
Int32 BulletSoftRigidDynamicsWorld::getExternalDrawFlags(void)
{
    return getSoftRigidDynamicsWorld()->getDrawFlags();
}

void BulletSoftRigidDynamicsWorld::setExternalDrawFlags(const Int32& value)
{
    getSoftRigidDynamicsWorld()->setDrawFlags(value);
}

void BulletSoftRigidDynamicsWorld::onCreate(const BulletSoftRigidDynamicsWorld *Id)
{
    BulletDynamicsWorld::onCreate(Id);

    if(Id != NULL)
    {
        //collision configuration contains default setup for memory, collision
        //setup. Advanced users can create their own configuration.
        _collisionConfiguration.reset(new btSoftBodyRigidBodyCollisionConfiguration());

        //use the default collision dispatcher. For parallel processing you
        //can use a different dispatcher (see Extras/BulletMultiThreaded)
        _dispatcher.reset(new btCollisionDispatcher(_collisionConfiguration.get()));

        //the default constraint solver. For parallel processing you can use a
        //different solver (see Extras/BulletMultiThreaded)
        _solver.reset(new btSequentialImpulseConstraintSolver);

        _world.reset(new btSoftRigidDynamicsWorld(_dispatcher.get(),
                                                  NULL,
                                                  _solver.get(),
                                                  _collisionConfiguration.get()));
    }
}

void BulletSoftRigidDynamicsWorld::onDestroy(void)
{
}

/*----------------------- constructors & destructors ----------------------*/

BulletSoftRigidDynamicsWorld::BulletSoftRigidDynamicsWorld(void) :
    Inherited()
{
}

BulletSoftRigidDynamicsWorld::BulletSoftRigidDynamicsWorld(const BulletSoftRigidDynamicsWorld &source) :
    Inherited(source)
{
}

BulletSoftRigidDynamicsWorld::~BulletSoftRigidDynamicsWorld(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BulletSoftRigidDynamicsWorld::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void BulletSoftRigidDynamicsWorld::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump BulletSoftRigidDynamicsWorld NI" << std::endl;
}

OSG_END_NAMESPACE
