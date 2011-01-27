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

#include "OSGBulletCylinderShape.h"
#include "OSGBulletMathUtils.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBulletCylinderShapeBase.cpp file.
// To modify it, please change the .fcd file (OSGBulletCylinderShape.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BulletCylinderShape::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

btCylinderShape* BulletCylinderShape::getCylinderShape(void) const
{
    return dynamic_cast<btCylinderShape*>(getShape());
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

Vec3f BulletCylinderShape::getExternalHalfExtents(void)
{
    return OSG::bullet::convert(getCylinderShape()->getHalfExtentsWithoutMargin());
}

void BulletCylinderShape::setExternalHalfExtents(const Vec3f& value)
{
    _HalfExtents = value;
    _shape.reset(new btCylinderShape(OSG::bullet::convert(_HalfExtents)));
    _shape->setUserPointer(this);
    resetParent();
}

void BulletCylinderShape::onCreate(const BulletCylinderShape *Id)
{
    Inherited::onCreate(Id);

    if(Id != NULL)
    {
        _shape.reset(new btCylinderShape(OSG::bullet::convert(_HalfExtents)));
        _shape->setUserPointer(this);
    }
}

void BulletCylinderShape::onDestroy(void)
{
}

/*----------------------- constructors & destructors ----------------------*/

BulletCylinderShape::BulletCylinderShape(void) :
    Inherited(),
    _HalfExtents(1.0f, 1.0f, 1.0f)
{
}

BulletCylinderShape::BulletCylinderShape(const BulletCylinderShape &source) :
    Inherited(source),
    _HalfExtents(source._HalfExtents)
{
}

BulletCylinderShape::~BulletCylinderShape(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BulletCylinderShape::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void BulletCylinderShape::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump BulletCylinderShape NI" << std::endl;
}

OSG_END_NAMESPACE
