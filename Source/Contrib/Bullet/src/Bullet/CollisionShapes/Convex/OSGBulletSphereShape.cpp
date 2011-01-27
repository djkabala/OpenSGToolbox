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

#include "OSGBulletSphereShape.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBulletSphereShapeBase.cpp file.
// To modify it, please change the .fcd file (OSGBulletSphereShape.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BulletSphereShape::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

btSphereShape* BulletSphereShape::getSphereShape(void) const
{
    return dynamic_cast<btSphereShape*>(getShape());
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/
Real32 BulletSphereShape::getExternalRadius(void)
{
    return getSphereShape()->getRadius();
}

void BulletSphereShape::setExternalRadius(const Real32& value)
{
    _Radius = value;
    _shape.reset(new btSphereShape(_Radius));
    _shape->setUserPointer(this);
    resetParent();
}

void BulletSphereShape::onCreate(const BulletSphereShape *Id)
{
    Inherited::onCreate(Id);

    if(Id != NULL)
    {
        _shape.reset(new btSphereShape(_Radius));
        _shape->setUserPointer(this);
    }
}

void BulletSphereShape::onDestroy(void)
{
}

/*----------------------- constructors & destructors ----------------------*/

BulletSphereShape::BulletSphereShape(void) :
    Inherited(),
    _Radius(1.0f)
{
}

BulletSphereShape::BulletSphereShape(const BulletSphereShape &source) :
    Inherited(source),
    _Radius(source._Radius)
{
}

BulletSphereShape::~BulletSphereShape(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BulletSphereShape::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void BulletSphereShape::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump BulletSphereShape NI" << std::endl;
}

OSG_END_NAMESPACE
