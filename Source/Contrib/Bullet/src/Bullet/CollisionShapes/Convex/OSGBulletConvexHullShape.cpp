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

#include "OSGBulletConvexHullShape.h"
#include "OSGBulletMathUtils.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBulletConvexHullShapeBase.cpp file.
// To modify it, please change the .fcd file (OSGBulletConvexHullShape.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BulletConvexHullShape::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

btConvexHullShape* BulletConvexHullShape::getConvexHullShape(void) const
{
    return dynamic_cast<btConvexHullShape*>(getShape());
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

void BulletConvexHullShape::onCreate(const BulletConvexHullShape *Id)
{
    Inherited::onCreate(Id);

    if(Id != NULL)
    {
        _shape.reset(new btConvexHullShape());
        _shape->setUserPointer(this);
    }
}

void BulletConvexHullShape::onDestroy(void)
{
}

/*----------------------- constructors & destructors ----------------------*/

BulletConvexHullShape::BulletConvexHullShape(void) :
    Inherited()
{
}

BulletConvexHullShape::BulletConvexHullShape(const BulletConvexHullShape &source) :
    Inherited(source)
{
}

BulletConvexHullShape::~BulletConvexHullShape(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BulletConvexHullShape::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);

    if(whichField && PointsFieldMask)
    {
        if(getMFPoints()->size() != 0)
        {
            std::vector<btVector3> BulletPoints;
            BulletPoints.reserve(getMFPoints()->size());
            for(UInt32 i(0) ; i<getMFPoints()->size() ; ++i)
            {
                BulletPoints.push_back(OSG::bullet::convert(getPoints(i)));
            }
            _shape.reset(new btConvexHullShape(&(BulletPoints[0][0]),
                                               BulletPoints.size()));
        }
        else
        {
            _shape.reset(new btConvexHullShape());
        }
        _shape->setUserPointer(this);
        resetParent();
    }
}

void BulletConvexHullShape::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump BulletConvexHullShape NI" << std::endl;
}

OSG_END_NAMESPACE
