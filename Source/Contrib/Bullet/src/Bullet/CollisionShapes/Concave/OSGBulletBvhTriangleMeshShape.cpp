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

#include "OSGBulletBvhTriangleMeshShape.h"
#include "OSGGeometry.h"
#include "OSGTriangleIterator.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBulletBvhTriangleMeshShapeBase.cpp file.
// To modify it, please change the .fcd file (OSGBulletBvhTriangleMeshShape.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BulletBvhTriangleMeshShape::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

btBvhTriangleMeshShape* BulletBvhTriangleMeshShape::getBvhTriangleMeshShape(void) const
{
    return dynamic_cast<btBvhTriangleMeshShape*>(getShape());
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

void BulletBvhTriangleMeshShape::makeBulletShape(void)
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

        _shape.reset(new btBvhTriangleMeshShape(_BulletTriWrapper.get(), true));

        getBvhTriangleMeshShape()->setUserPointer(this);
    }
    else
    {
        _shape.reset(NULL);
    }
}

void BulletBvhTriangleMeshShape::onCreate(const BulletBvhTriangleMeshShape *Id)
{
    Inherited::onCreate(Id);

    if(Id != NULL)
    {
        makeBulletShape();
    }
}

void BulletBvhTriangleMeshShape::onDestroy(void)
{
}

/*----------------------- constructors & destructors ----------------------*/

BulletBvhTriangleMeshShape::BulletBvhTriangleMeshShape(void) :
    Inherited()
{
}

BulletBvhTriangleMeshShape::BulletBvhTriangleMeshShape(const BulletBvhTriangleMeshShape &source) :
    Inherited(source)
{
}

BulletBvhTriangleMeshShape::~BulletBvhTriangleMeshShape(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BulletBvhTriangleMeshShape::changed(ConstFieldMaskArg whichField, 
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

void BulletBvhTriangleMeshShape::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump BulletBvhTriangleMeshShape NI" << std::endl;
}

OSG_END_NAMESPACE
