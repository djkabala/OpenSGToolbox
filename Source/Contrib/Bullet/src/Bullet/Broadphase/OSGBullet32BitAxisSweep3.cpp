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

#include "OSGBullet32BitAxisSweep3.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBullet32BitAxisSweep3Base.cpp file.
// To modify it, please change the .fcd file (OSGBullet32BitAxisSweep3.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void Bullet32BitAxisSweep3::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

btBroadphaseInterface* Bullet32BitAxisSweep3::getBroadphase(void) const
{
    return get32BitAxisSweep3();
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

void Bullet32BitAxisSweep3::onCreate(const Bullet32BitAxisSweep3 *Id)
{
    Inherited::onCreate(Id);

    if(Id != NULL)
    {
        _broadphase.reset(new bt32BitAxisSweep3(btVector3(-1.0f, -1.0f, -1.0f),
                                                btVector3( 1.0f,  1.0f,  1.0f)));
    }
}

void Bullet32BitAxisSweep3::onDestroy(void)
{
}

/*----------------------- constructors & destructors ----------------------*/

Bullet32BitAxisSweep3::Bullet32BitAxisSweep3(void) :
    Inherited(),
    _broadphase(NULL)
{
}

Bullet32BitAxisSweep3::Bullet32BitAxisSweep3(const Bullet32BitAxisSweep3 &source) :
    Inherited(source),
    _broadphase(NULL)
{
}

Bullet32BitAxisSweep3::~Bullet32BitAxisSweep3(void)
{
}

/*----------------------------- class specific ----------------------------*/

void Bullet32BitAxisSweep3::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void Bullet32BitAxisSweep3::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump Bullet32BitAxisSweep3 NI" << std::endl;
}

OSG_END_NAMESPACE
