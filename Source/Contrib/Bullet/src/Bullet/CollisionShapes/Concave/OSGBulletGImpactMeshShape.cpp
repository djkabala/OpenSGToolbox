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

#include "OSGBulletGImpactMeshShape.h"
#include "OSGGeometry.h"
#include "OSGTriangleIterator.h"
#include "OSGBulletMathUtils.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBulletGImpactMeshShapeBase.cpp file.
// To modify it, please change the .fcd file (OSGBulletGImpactMeshShape.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BulletGImpactMeshShape::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

btGImpactMeshShape* BulletGImpactMeshShape::getGImpactMeshShape(void) const
{
    return dynamic_cast<btGImpactMeshShape*>(getShape());
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/
void BulletGImpactMeshShape::makeBulletShape(void)
{
    if(getGeometryNode() != NULL &&
       dynamic_cast<Geometry*>(getGeometryNode()->getCore()) !=NULL)
    {
        GeometryUnrecPtr geo = dynamic_cast<Geometry*>(getGeometryNode()->getCore());

        _TriIndexes.clear();
        TriangleIterator TriItor;
        for(TriItor = geo->beginTriangles() ; TriItor != geo->endTriangles() ; ++TriItor)
        {
            _TriIndexes.push_back(TriItor.getPositionIndex(0));
            _TriIndexes.push_back(TriItor.getPositionIndex(1));
            _TriIndexes.push_back(TriItor.getPositionIndex(2));
        }

        UInt32 TriCount     = _TriIndexes.size()/3;
        UInt32 IndexStride  = 3*sizeof(UInt32);
        UInt32 VertexStride = geo->getPositions()->getDimension()*geo->getPositions()->getFormatSize();
        UInt32 VertexCount  = geo->getPositions()->size();

        _BulletTriWrapper.reset(new btTriangleIndexVertexArray(TriCount,
                                                               &_TriIndexes[0],
                                                               IndexStride,
                                                               VertexCount,
                                                               reinterpret_cast<btScalar*>(geo->getPositions()->editData()),
                                                               VertexStride));

        _shape.reset(new btGImpactMeshShape(_BulletTriWrapper.get()));

        getGImpactMeshShape()->setUserPointer(this);
        getGImpactMeshShape()->setLocalScaling(OSG::bullet::convert(getLocalScaling()));
        getGImpactMeshShape()->updateBound();
    }
    else
    {
        _shape.reset(NULL);
    }
}

void BulletGImpactMeshShape::onCreate(const BulletGImpactMeshShape *Id)
{
    Inherited::onCreate(Id);

    if(Id != NULL)
    {
        makeBulletShape();
    }
}

void BulletGImpactMeshShape::onDestroy(void)
{
}

/*----------------------- constructors & destructors ----------------------*/

BulletGImpactMeshShape::BulletGImpactMeshShape(void) :
    Inherited(),
    _BulletTriWrapper(NULL)
{
}

BulletGImpactMeshShape::BulletGImpactMeshShape(const BulletGImpactMeshShape &source) :
    Inherited(source),
    _BulletTriWrapper(NULL)
{
}

BulletGImpactMeshShape::~BulletGImpactMeshShape(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BulletGImpactMeshShape::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);

    if(whichField & GeometryNodeFieldMask)
    {
        makeBulletShape();
        resetParent();
    }
}

void BulletGImpactMeshShape::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump BulletGImpactMeshShape NI" << std::endl;
}

OSG_END_NAMESPACE
