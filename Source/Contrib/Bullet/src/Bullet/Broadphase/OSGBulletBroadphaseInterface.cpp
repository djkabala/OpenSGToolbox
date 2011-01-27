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

#include "OSGBulletBroadphaseInterface.h"
#include "OSGBulletMathUtils.h"

#include "OSGBulletCollisionWorld.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBulletBroadphaseInterfaceBase.cpp file.
// To modify it, please change the .fcd file (OSGBulletBroadphaseInterface.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BulletBroadphaseInterface::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

BoxVolume BulletBroadphaseInterface::getExternalAabb(void)
{
    btVector3 Min, Max;
    getBroadphase()->getAabb(NULL, Min, Max);

    return BoxVolume(OSG::bullet::convert(Min), OSG::bullet::convert(Max));
}

void BulletBroadphaseInterface::setExternalAabb(const BoxVolume& value)
{
    btVector3 Min(OSG::bullet::convert(value.getMin())),
              Max(OSG::bullet::convert(value.getMax()));

    btDispatcher* Disp(NULL);
    if(_sfParentWorld.getValue() != NULL)
    {
        Disp =
            dynamic_cast<BulletCollisionWorld*>(_sfParentWorld.getValue())->getWorld()->getDispatcher();
    }
    getBroadphase()->setAabb(NULL, Min, Max, Disp);
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

BulletBroadphaseInterface::BulletBroadphaseInterface(void) :
    Inherited()
{
}

BulletBroadphaseInterface::BulletBroadphaseInterface(const BulletBroadphaseInterface &source) :
    Inherited(source)
{
}

BulletBroadphaseInterface::~BulletBroadphaseInterface(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BulletBroadphaseInterface::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void BulletBroadphaseInterface::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump BulletBroadphaseInterface NI" << std::endl;
}

OSG_END_NAMESPACE
