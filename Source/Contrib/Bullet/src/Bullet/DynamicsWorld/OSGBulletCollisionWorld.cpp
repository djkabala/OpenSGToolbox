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

#include "OSGBulletCollisionWorld.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBulletCollisionWorldBase.cpp file.
// To modify it, please change the .fcd file (OSGBulletCollisionWorld.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BulletCollisionWorld::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

bool BulletCollisionWorld::getExternalForceUpdateAllAabbs(void)
{
    return getWorld()->getForceUpdateAllAabbs();
}

void BulletCollisionWorld::setExternalForceUpdateAllAabbs(bool value)
{
    getWorld()->setForceUpdateAllAabbs(value);
}

BulletBroadphaseInterface * BulletCollisionWorld::getBroadphase(void) const
{
    return getInternalBroadphase();
}

void BulletCollisionWorld::setBroadphase(BulletBroadphaseInterface * const value)
{
    setInternalBroadphase(value);
    if(getInternalBroadphase() != NULL)
    {
        if(_world->getBroadphase() != getInternalBroadphase()->getBroadphase())
        {
            _world->setBroadphase(getInternalBroadphase()->getBroadphase());
        }
    }
    else
    {
        _world->setBroadphase(NULL);
    }
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

BulletCollisionWorld::BulletCollisionWorld(void) :
    Inherited(),
    _world(NULL),
    _collisionConfiguration(NULL),
    _dispatcher(NULL),
    _solver(NULL)
{
}

BulletCollisionWorld::BulletCollisionWorld(const BulletCollisionWorld &source) :
    Inherited(source),
    _world(NULL),
    _collisionConfiguration(NULL),
    _dispatcher(NULL),
    _solver(NULL)
{
}

BulletCollisionWorld::~BulletCollisionWorld(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BulletCollisionWorld::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);

    if(whichField & InternalBroadphaseFieldMask)
    {
        if(getInternalBroadphase() != NULL)
        {
            if(_world->getBroadphase() != getInternalBroadphase()->getBroadphase())
            {
                _world->setBroadphase(getInternalBroadphase()->getBroadphase());
            }
        }
        else
        {
            _world->setBroadphase(NULL);
        }
    }
}

void BulletCollisionWorld::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump BulletCollisionWorld NI" << std::endl;
}

OSG_END_NAMESPACE
