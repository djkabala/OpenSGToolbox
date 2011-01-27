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

#include "OSGBulletBoxShape.h"
#include "OSGBulletMathUtils.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBulletBoxShapeBase.cpp file.
// To modify it, please change the .fcd file (OSGBulletBoxShape.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BulletBoxShape::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

btBoxShape* BulletBoxShape::getBoxShape(void) const
{
    return dynamic_cast<btBoxShape*>(getShape());
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

Vec3f BulletBoxShape::getExternalHalfExtents(void)
{
    return OSG::bullet::convert(getBoxShape()->getHalfExtentsWithoutMargin());
}

void BulletBoxShape::setExternalHalfExtents(const Vec3f& value)
{
    _HalfExtents = value;
    _shape.reset(new btBoxShape(OSG::bullet::convert(_HalfExtents)));
    _shape->setUserPointer(this);
    resetParent();
}

void BulletBoxShape::onCreate(const BulletBoxShape *Id)
{
    Inherited::onCreate(Id);

    if(Id != NULL)
    {
        _shape.reset(new btBoxShape(OSG::bullet::convert(_HalfExtents)));
        _shape->setUserPointer(this);
    }
}

void BulletBoxShape::onDestroy(void)
{
}

/*----------------------- constructors & destructors ----------------------*/

BulletBoxShape::BulletBoxShape(void) :
    Inherited(),
    _HalfExtents(0.5f,0.5f,0.5f)
{
}

BulletBoxShape::BulletBoxShape(const BulletBoxShape &source) :
    Inherited(source),
    _HalfExtents(source._HalfExtents)
{
}

BulletBoxShape::~BulletBoxShape(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BulletBoxShape::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void BulletBoxShape::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump BulletBoxShape NI" << std::endl;
}

OSG_END_NAMESPACE
