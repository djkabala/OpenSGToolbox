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

#include "OSGBulletGpu3DGridBroadphase.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBulletGpu3DGridBroadphaseBase.cpp file.
// To modify it, please change the .fcd file (OSGBulletGpu3DGridBroadphase.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BulletGpu3DGridBroadphase::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

btBroadphaseInterface* BulletGpu3DGridBroadphase::getBroadphase(void) const
{
    return getGpu3DGridBroadphase();
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

void BulletGpu3DGridBroadphase::onCreate(const BulletGpu3DGridBroadphase *Id)
{
    Inherited::onCreate(Id);

    if(Id != NULL)
    {
        //Use default values
        _broadphase.reset(new btGpu3DGridBroadphase(btVector3(-1.0f, -1.0f, -1.0f),
                                                    btVector3( 1.0f,  1.0f,  1.0f),
                                                    8, // X grid size
                                                    8, // Y grid size
                                                    8, // Z grid size
                                                    8, // Max small proxies
                                                    8, // Max large proxies
                                                    8, // Max bodies per cell
                                                    btScalar(1.0f) // Aabb cell factor
                                                    ));
    }
}

void BulletGpu3DGridBroadphase::onDestroy(void)
{
}

/*----------------------- constructors & destructors ----------------------*/

BulletGpu3DGridBroadphase::BulletGpu3DGridBroadphase(void) :
    Inherited(),
    _broadphase(NULL)
{
}

BulletGpu3DGridBroadphase::BulletGpu3DGridBroadphase(const BulletGpu3DGridBroadphase &source) :
    Inherited(source),
    _broadphase(NULL)
{
}

BulletGpu3DGridBroadphase::~BulletGpu3DGridBroadphase(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BulletGpu3DGridBroadphase::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void BulletGpu3DGridBroadphase::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump BulletGpu3DGridBroadphase NI" << std::endl;
}

OSG_END_NAMESPACE
