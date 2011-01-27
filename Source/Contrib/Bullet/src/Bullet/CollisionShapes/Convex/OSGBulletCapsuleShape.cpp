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

#include "OSGBulletCapsuleShape.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBulletCapsuleShapeBase.cpp file.
// To modify it, please change the .fcd file (OSGBulletCapsuleShape.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BulletCapsuleShape::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

btCapsuleShape* BulletCapsuleShape::getCapsuleShape(void) const
{
    return dynamic_cast<btCapsuleShape*>(getShape());
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

Real32 BulletCapsuleShape::getExternalRadius(void)
{
    return getCapsuleShape()->getRadius();
}

void BulletCapsuleShape::setExternalRadius(const Real32& value)
{
    _Radius = value;
    _shape.reset(new btCapsuleShape(_Radius, _Height));
    _shape->setUserPointer(this);
    resetParent();
}

Real32 BulletCapsuleShape::getExternalHeight(void)
{
    return 2.0f * getCapsuleShape()->getHalfHeight();
}

void BulletCapsuleShape::setExternalHeight(const Real32& value)
{
    _Height = value;
    _shape.reset(new btCapsuleShape(_Radius, _Height));
    _shape->setUserPointer(this);
    resetParent();
}

void BulletCapsuleShape::onCreate(const BulletCapsuleShape *Id)
{
    Inherited::onCreate(Id);

    if(Id != NULL)
    {
        _shape.reset(new btCapsuleShape(_Radius, _Height));
        _shape->setUserPointer(this);
    }
}

void BulletCapsuleShape::onDestroy(void)
{
}

/*----------------------- constructors & destructors ----------------------*/

BulletCapsuleShape::BulletCapsuleShape(void) :
    Inherited(),
    _Radius(1.0f),
    _Height(1.0f)
{
}

BulletCapsuleShape::BulletCapsuleShape(const BulletCapsuleShape &source) :
    Inherited(source),
    _Radius(source._Radius),
    _Height(source._Height)
{
}

BulletCapsuleShape::~BulletCapsuleShape(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BulletCapsuleShape::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void BulletCapsuleShape::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump BulletCapsuleShape NI" << std::endl;
}

OSG_END_NAMESPACE
