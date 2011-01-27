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

#include "OSGBulletCollisionShape.h"
#include "OSGBulletRigidBody.h"
#include "OSGBulletMathUtils.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBulletCollisionShapeBase.cpp file.
// To modify it, please change the .fcd file (OSGBulletCollisionShape.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BulletCollisionShape::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

void BulletCollisionShape::calculateLocalInertia(Real32 mass,
                                                 Vec3f& localInertia)
{
    btVector3 bulletVec;
    getShape()->calculateLocalInertia(mass, bulletVec);
    localInertia = OSG::bullet::convert(bulletVec);
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*!
 * \brief This method is overridden so that the bullet btCollisionShape is
 * added/removed from the bullet btCollisionObject whenever this OpenSG-based
 * wrapper adds/removes the CollisionShape.
 */
bool BulletCollisionShape::linkParent(FieldContainer * const pParent,
                                 UInt16           const childFieldId,
                                 UInt16           const parentFieldId )
{
    if(parentFieldId == ParentObjectFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            FieldContainer *pOldParent = _sfParentObject.getValue();

            UInt16 oldChildFieldId     = _sfParentObject.getParentFieldPos();

            if(pOldParent != NULL)
            {
                dynamic_cast<BulletRigidBody*>(pOldParent)->getBody()->setCollisionShape(NULL);
            }

            dynamic_cast<BulletRigidBody*>(pParent)->getBody()->setCollisionShape(getShape());
        }
    }
    return Inherited::linkParent(pParent, childFieldId, parentFieldId);
}

/*!
 * \brief This method is overridden so that the bullet btCollisionShape is
 * added/removed from the bullet btCollisionObject whenever this OpenSG-based
 * wrapper adds/removes the CollisionShape.
 */
bool BulletCollisionShape::unlinkParent(FieldContainer * const pParent,
                                   UInt16           const parentFieldId)
{
    if(parentFieldId == ParentObjectFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            if(_sfParentObject.getValue() == pTypedParent)
            {
                dynamic_cast<BulletRigidBody*>(pTypedParent)->getBody()->setCollisionShape(NULL);
            }
        }
    }

    return Inherited::unlinkParent(pParent, parentFieldId);
}

Vec3f BulletCollisionShape::getExternalLocalScaling(void)
{
    return OSG::bullet::convert(getShape()->getLocalScaling());
}

void BulletCollisionShape::setExternalLocalScaling(const Vec3f& value)
{
    getShape()->setLocalScaling(OSG::bullet::convert(value));
}

Real32 BulletCollisionShape::getExternalMargin(void)
{
    return getShape()->getMargin();
}

void BulletCollisionShape::setExternalMargin(const Real32& value)
{
    getShape()->setMargin(value);
}

void BulletCollisionShape::resetParent(void)
{
    if(_sfParentObject.getValue() != NULL)
    {
        dynamic_cast<BulletRigidBody*>(_sfParentObject.getValue())->getBody()->setCollisionShape(getShape());
    }
}

/*----------------------- constructors & destructors ----------------------*/

BulletCollisionShape::BulletCollisionShape(void) :
    Inherited(),
    _shape(NULL)
{
}

BulletCollisionShape::BulletCollisionShape(const BulletCollisionShape &source) :
    Inherited(source),
    _shape(NULL)
{
}

BulletCollisionShape::~BulletCollisionShape(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BulletCollisionShape::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void BulletCollisionShape::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump BulletCollisionShape NI" << std::endl;
}

OSG_END_NAMESPACE
