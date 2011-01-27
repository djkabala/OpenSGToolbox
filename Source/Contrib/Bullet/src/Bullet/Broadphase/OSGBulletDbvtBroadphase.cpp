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

#include "OSGBulletDbvtBroadphase.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBulletDbvtBroadphaseBase.cpp file.
// To modify it, please change the .fcd file (OSGBulletDbvtBroadphase.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BulletDbvtBroadphase::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

btBroadphaseInterface* BulletDbvtBroadphase::getBroadphase(void) const
{
    return getDbvtBroadphase();
}

Real32 BulletDbvtBroadphase::getExternalVelocityPrediction(void)
{
    return getDbvtBroadphase()->getVelocityPrediction();
}

void BulletDbvtBroadphase::setExternalVelocityPrediction(const Real32& value)
{
    getDbvtBroadphase()->setVelocityPrediction(value);
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

void BulletDbvtBroadphase::onCreate(const BulletDbvtBroadphase *Id)
{
    Inherited::onCreate(Id);

    if(Id != NULL)
    {
        _broadphase.reset(new btDbvtBroadphase());
    }
}

void BulletDbvtBroadphase::onDestroy(void)
{
}

/*----------------------- constructors & destructors ----------------------*/

BulletDbvtBroadphase::BulletDbvtBroadphase(void) :
    Inherited(),
    _broadphase(NULL)
{
}

BulletDbvtBroadphase::BulletDbvtBroadphase(const BulletDbvtBroadphase &source) :
    Inherited(source),
    _broadphase(NULL)
{
}

BulletDbvtBroadphase::~BulletDbvtBroadphase(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BulletDbvtBroadphase::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void BulletDbvtBroadphase::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump BulletDbvtBroadphase NI" << std::endl;
}

OSG_END_NAMESPACE
