/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class CollisionEventDetails!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGPhysicsGeom.h"             // Object1Geom Class

#include "OSGCollisionEventDetailsBase.h"
#include "OSGCollisionEventDetails.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CollisionEventDetails
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Pnt3f           CollisionEventDetailsBase::_sfPosition
    
*/

/*! \var Vec3f           CollisionEventDetailsBase::_sfNormal
    
*/

/*! \var PhysicsGeom *   CollisionEventDetailsBase::_sfObject1Geom
    
*/

/*! \var PhysicsGeom *   CollisionEventDetailsBase::_sfObject2Geom
    
*/

/*! \var UInt64          CollisionEventDetailsBase::_sfObject1CategoryBits
    
*/

/*! \var UInt64          CollisionEventDetailsBase::_sfObject1CollideBits
    
*/

/*! \var UInt64          CollisionEventDetailsBase::_sfObject2CategoryBits
    
*/

/*! \var UInt64          CollisionEventDetailsBase::_sfObject2CollideBits
    
*/

/*! \var Vec3f           CollisionEventDetailsBase::_sfObject1Velocity
    
*/

/*! \var Vec3f           CollisionEventDetailsBase::_sfObject2Velocity
    
*/

/*! \var Real32          CollisionEventDetailsBase::_sfProjectedNormalSpeed
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CollisionEventDetails *>::_type("CollisionEventDetailsPtr", "EventDetailsPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(CollisionEventDetails *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CollisionEventDetails *,
                           0);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CollisionEventDetailsBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFPnt3f::Description(
        SFPnt3f::getClassType(),
        "Position",
        "",
        PositionFieldId, PositionFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionEventDetails::editHandlePosition),
        static_cast<FieldGetMethodSig >(&CollisionEventDetails::getHandlePosition));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "Normal",
        "",
        NormalFieldId, NormalFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionEventDetails::editHandleNormal),
        static_cast<FieldGetMethodSig >(&CollisionEventDetails::getHandleNormal));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecPhysicsGeomPtr::Description(
        SFUnrecPhysicsGeomPtr::getClassType(),
        "Object1Geom",
        "",
        Object1GeomFieldId, Object1GeomFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionEventDetails::editHandleObject1Geom),
        static_cast<FieldGetMethodSig >(&CollisionEventDetails::getHandleObject1Geom));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecPhysicsGeomPtr::Description(
        SFUnrecPhysicsGeomPtr::getClassType(),
        "Object2Geom",
        "",
        Object2GeomFieldId, Object2GeomFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionEventDetails::editHandleObject2Geom),
        static_cast<FieldGetMethodSig >(&CollisionEventDetails::getHandleObject2Geom));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt64::Description(
        SFUInt64::getClassType(),
        "Object1CategoryBits",
        "",
        Object1CategoryBitsFieldId, Object1CategoryBitsFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionEventDetails::editHandleObject1CategoryBits),
        static_cast<FieldGetMethodSig >(&CollisionEventDetails::getHandleObject1CategoryBits));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt64::Description(
        SFUInt64::getClassType(),
        "Object1CollideBits",
        "",
        Object1CollideBitsFieldId, Object1CollideBitsFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionEventDetails::editHandleObject1CollideBits),
        static_cast<FieldGetMethodSig >(&CollisionEventDetails::getHandleObject1CollideBits));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt64::Description(
        SFUInt64::getClassType(),
        "Object2CategoryBits",
        "",
        Object2CategoryBitsFieldId, Object2CategoryBitsFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionEventDetails::editHandleObject2CategoryBits),
        static_cast<FieldGetMethodSig >(&CollisionEventDetails::getHandleObject2CategoryBits));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt64::Description(
        SFUInt64::getClassType(),
        "Object2CollideBits",
        "",
        Object2CollideBitsFieldId, Object2CollideBitsFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionEventDetails::editHandleObject2CollideBits),
        static_cast<FieldGetMethodSig >(&CollisionEventDetails::getHandleObject2CollideBits));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "Object1Velocity",
        "",
        Object1VelocityFieldId, Object1VelocityFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionEventDetails::editHandleObject1Velocity),
        static_cast<FieldGetMethodSig >(&CollisionEventDetails::getHandleObject1Velocity));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "Object2Velocity",
        "",
        Object2VelocityFieldId, Object2VelocityFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionEventDetails::editHandleObject2Velocity),
        static_cast<FieldGetMethodSig >(&CollisionEventDetails::getHandleObject2Velocity));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "ProjectedNormalSpeed",
        "",
        ProjectedNormalSpeedFieldId, ProjectedNormalSpeedFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&CollisionEventDetails::editHandleProjectedNormalSpeed),
        static_cast<FieldGetMethodSig >(&CollisionEventDetails::getHandleProjectedNormalSpeed));

    oType.addInitialDesc(pDesc);
}


CollisionEventDetailsBase::TypeObject CollisionEventDetailsBase::_type(
    CollisionEventDetailsBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&CollisionEventDetailsBase::createEmptyLocal),
    CollisionEventDetails::initMethod,
    CollisionEventDetails::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CollisionEventDetails::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"CollisionEventDetails\"\n"
    "\tparent=\"EventDetails\"\n"
    "    library=\"ContribPhysics\"\n"
    "    pointerfieldtypes=\"single\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    "\tsupportUnregisteredCreate=\"true\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"Position\"\n"
    "\t\ttype=\"Pnt3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"0.0f,0.0f,0.0f\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Normal\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"0.0f,0.0f,0.0f\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Object1Geom\"\n"
    "\t\ttype=\"PhysicsGeom\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Object2Geom\"\n"
    "\t\ttype=\"PhysicsGeom\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Object1CategoryBits\"\n"
    "\t\ttype=\"UInt64\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Object1CollideBits\"\n"
    "\t\ttype=\"UInt64\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Object2CategoryBits\"\n"
    "\t\ttype=\"UInt64\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Object2CollideBits\"\n"
    "\t\ttype=\"UInt64\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Object1Velocity\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"0.0f,0.0f,0.0f\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Object2Velocity\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"0.0f,0.0f,0.0f\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ProjectedNormalSpeed\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"0.0f\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CollisionEventDetailsBase::getType(void)
{
    return _type;
}

const FieldContainerType &CollisionEventDetailsBase::getType(void) const
{
    return _type;
}

UInt32 CollisionEventDetailsBase::getContainerSize(void) const
{
    return sizeof(CollisionEventDetails);
}

/*------------------------- decorator get ------------------------------*/


SFPnt3f *CollisionEventDetailsBase::editSFPosition(void)
{
    editSField(PositionFieldMask);

    return &_sfPosition;
}

const SFPnt3f *CollisionEventDetailsBase::getSFPosition(void) const
{
    return &_sfPosition;
}


SFVec3f *CollisionEventDetailsBase::editSFNormal(void)
{
    editSField(NormalFieldMask);

    return &_sfNormal;
}

const SFVec3f *CollisionEventDetailsBase::getSFNormal(void) const
{
    return &_sfNormal;
}


//! Get the CollisionEventDetails::_sfObject1Geom field.
const SFUnrecPhysicsGeomPtr *CollisionEventDetailsBase::getSFObject1Geom(void) const
{
    return &_sfObject1Geom;
}

SFUnrecPhysicsGeomPtr *CollisionEventDetailsBase::editSFObject1Geom    (void)
{
    editSField(Object1GeomFieldMask);

    return &_sfObject1Geom;
}

//! Get the CollisionEventDetails::_sfObject2Geom field.
const SFUnrecPhysicsGeomPtr *CollisionEventDetailsBase::getSFObject2Geom(void) const
{
    return &_sfObject2Geom;
}

SFUnrecPhysicsGeomPtr *CollisionEventDetailsBase::editSFObject2Geom    (void)
{
    editSField(Object2GeomFieldMask);

    return &_sfObject2Geom;
}

SFUInt64 *CollisionEventDetailsBase::editSFObject1CategoryBits(void)
{
    editSField(Object1CategoryBitsFieldMask);

    return &_sfObject1CategoryBits;
}

const SFUInt64 *CollisionEventDetailsBase::getSFObject1CategoryBits(void) const
{
    return &_sfObject1CategoryBits;
}


SFUInt64 *CollisionEventDetailsBase::editSFObject1CollideBits(void)
{
    editSField(Object1CollideBitsFieldMask);

    return &_sfObject1CollideBits;
}

const SFUInt64 *CollisionEventDetailsBase::getSFObject1CollideBits(void) const
{
    return &_sfObject1CollideBits;
}


SFUInt64 *CollisionEventDetailsBase::editSFObject2CategoryBits(void)
{
    editSField(Object2CategoryBitsFieldMask);

    return &_sfObject2CategoryBits;
}

const SFUInt64 *CollisionEventDetailsBase::getSFObject2CategoryBits(void) const
{
    return &_sfObject2CategoryBits;
}


SFUInt64 *CollisionEventDetailsBase::editSFObject2CollideBits(void)
{
    editSField(Object2CollideBitsFieldMask);

    return &_sfObject2CollideBits;
}

const SFUInt64 *CollisionEventDetailsBase::getSFObject2CollideBits(void) const
{
    return &_sfObject2CollideBits;
}


SFVec3f *CollisionEventDetailsBase::editSFObject1Velocity(void)
{
    editSField(Object1VelocityFieldMask);

    return &_sfObject1Velocity;
}

const SFVec3f *CollisionEventDetailsBase::getSFObject1Velocity(void) const
{
    return &_sfObject1Velocity;
}


SFVec3f *CollisionEventDetailsBase::editSFObject2Velocity(void)
{
    editSField(Object2VelocityFieldMask);

    return &_sfObject2Velocity;
}

const SFVec3f *CollisionEventDetailsBase::getSFObject2Velocity(void) const
{
    return &_sfObject2Velocity;
}


SFReal32 *CollisionEventDetailsBase::editSFProjectedNormalSpeed(void)
{
    editSField(ProjectedNormalSpeedFieldMask);

    return &_sfProjectedNormalSpeed;
}

const SFReal32 *CollisionEventDetailsBase::getSFProjectedNormalSpeed(void) const
{
    return &_sfProjectedNormalSpeed;
}






/*------------------------------ access -----------------------------------*/

UInt32 CollisionEventDetailsBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        returnValue += _sfPosition.getBinSize();
    }
    if(FieldBits::NoField != (NormalFieldMask & whichField))
    {
        returnValue += _sfNormal.getBinSize();
    }
    if(FieldBits::NoField != (Object1GeomFieldMask & whichField))
    {
        returnValue += _sfObject1Geom.getBinSize();
    }
    if(FieldBits::NoField != (Object2GeomFieldMask & whichField))
    {
        returnValue += _sfObject2Geom.getBinSize();
    }
    if(FieldBits::NoField != (Object1CategoryBitsFieldMask & whichField))
    {
        returnValue += _sfObject1CategoryBits.getBinSize();
    }
    if(FieldBits::NoField != (Object1CollideBitsFieldMask & whichField))
    {
        returnValue += _sfObject1CollideBits.getBinSize();
    }
    if(FieldBits::NoField != (Object2CategoryBitsFieldMask & whichField))
    {
        returnValue += _sfObject2CategoryBits.getBinSize();
    }
    if(FieldBits::NoField != (Object2CollideBitsFieldMask & whichField))
    {
        returnValue += _sfObject2CollideBits.getBinSize();
    }
    if(FieldBits::NoField != (Object1VelocityFieldMask & whichField))
    {
        returnValue += _sfObject1Velocity.getBinSize();
    }
    if(FieldBits::NoField != (Object2VelocityFieldMask & whichField))
    {
        returnValue += _sfObject2Velocity.getBinSize();
    }
    if(FieldBits::NoField != (ProjectedNormalSpeedFieldMask & whichField))
    {
        returnValue += _sfProjectedNormalSpeed.getBinSize();
    }

    return returnValue;
}

void CollisionEventDetailsBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyToBin(pMem);
    }
    if(FieldBits::NoField != (NormalFieldMask & whichField))
    {
        _sfNormal.copyToBin(pMem);
    }
    if(FieldBits::NoField != (Object1GeomFieldMask & whichField))
    {
        _sfObject1Geom.copyToBin(pMem);
    }
    if(FieldBits::NoField != (Object2GeomFieldMask & whichField))
    {
        _sfObject2Geom.copyToBin(pMem);
    }
    if(FieldBits::NoField != (Object1CategoryBitsFieldMask & whichField))
    {
        _sfObject1CategoryBits.copyToBin(pMem);
    }
    if(FieldBits::NoField != (Object1CollideBitsFieldMask & whichField))
    {
        _sfObject1CollideBits.copyToBin(pMem);
    }
    if(FieldBits::NoField != (Object2CategoryBitsFieldMask & whichField))
    {
        _sfObject2CategoryBits.copyToBin(pMem);
    }
    if(FieldBits::NoField != (Object2CollideBitsFieldMask & whichField))
    {
        _sfObject2CollideBits.copyToBin(pMem);
    }
    if(FieldBits::NoField != (Object1VelocityFieldMask & whichField))
    {
        _sfObject1Velocity.copyToBin(pMem);
    }
    if(FieldBits::NoField != (Object2VelocityFieldMask & whichField))
    {
        _sfObject2Velocity.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ProjectedNormalSpeedFieldMask & whichField))
    {
        _sfProjectedNormalSpeed.copyToBin(pMem);
    }
}

void CollisionEventDetailsBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PositionFieldMask & whichField))
    {
        _sfPosition.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (NormalFieldMask & whichField))
    {
        _sfNormal.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (Object1GeomFieldMask & whichField))
    {
        _sfObject1Geom.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (Object2GeomFieldMask & whichField))
    {
        _sfObject2Geom.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (Object1CategoryBitsFieldMask & whichField))
    {
        _sfObject1CategoryBits.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (Object1CollideBitsFieldMask & whichField))
    {
        _sfObject1CollideBits.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (Object2CategoryBitsFieldMask & whichField))
    {
        _sfObject2CategoryBits.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (Object2CollideBitsFieldMask & whichField))
    {
        _sfObject2CollideBits.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (Object1VelocityFieldMask & whichField))
    {
        _sfObject1Velocity.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (Object2VelocityFieldMask & whichField))
    {
        _sfObject2Velocity.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ProjectedNormalSpeedFieldMask & whichField))
    {
        _sfProjectedNormalSpeed.copyFromBin(pMem);
    }
}

//! create a new instance of the class
CollisionEventDetailsTransitPtr CollisionEventDetailsBase::createLocal(BitVector bFlags)
{
    CollisionEventDetailsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CollisionEventDetails>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
CollisionEventDetailsTransitPtr CollisionEventDetailsBase::createDependent(BitVector bFlags)
{
    CollisionEventDetailsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<CollisionEventDetails>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CollisionEventDetailsTransitPtr CollisionEventDetailsBase::create(void)
{
    return createLocal();
}

CollisionEventDetails *CollisionEventDetailsBase::createEmptyLocal(BitVector bFlags)
{
    CollisionEventDetails *returnValue;

    newPtr<CollisionEventDetails>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CollisionEventDetails *CollisionEventDetailsBase::createEmpty(void)
{
    return createEmptyLocal();
}

CollisionEventDetails *CollisionEventDetailsBase::createUnregistered(void)
{
    CollisionEventDetails *returnValue = new CollisionEventDetails;

#ifdef OSG_MT_CPTR_ASPECT
    returnValue->setupAspectStore();
#endif
    //Do not register with the FieldContainer Factory

    returnValue->onCreate      (      );
    returnValue->onCreateAspect(returnValue);
    
    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();
    
    return returnValue;
}

FieldContainerTransitPtr CollisionEventDetailsBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CollisionEventDetails *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CollisionEventDetails *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CollisionEventDetailsBase::shallowCopyDependent(
    BitVector bFlags) const
{
    CollisionEventDetails *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CollisionEventDetails *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr CollisionEventDetailsBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}



/*------------------------- constructors ----------------------------------*/

CollisionEventDetailsBase::CollisionEventDetailsBase(void) :
    Inherited(),
    _sfPosition               (Pnt3f(0.0f,0.0f,0.0f)),
    _sfNormal                 (Vec3f(0.0f,0.0f,0.0f)),
    _sfObject1Geom            (NULL),
    _sfObject2Geom            (NULL),
    _sfObject1CategoryBits    (),
    _sfObject1CollideBits     (),
    _sfObject2CategoryBits    (),
    _sfObject2CollideBits     (),
    _sfObject1Velocity        (Vec3f(0.0f,0.0f,0.0f)),
    _sfObject2Velocity        (Vec3f(0.0f,0.0f,0.0f)),
    _sfProjectedNormalSpeed   (Real32(0.0f))
{
}

CollisionEventDetailsBase::CollisionEventDetailsBase(const CollisionEventDetailsBase &source) :
    Inherited(source),
    _sfPosition               (source._sfPosition               ),
    _sfNormal                 (source._sfNormal                 ),
    _sfObject1Geom            (NULL),
    _sfObject2Geom            (NULL),
    _sfObject1CategoryBits    (source._sfObject1CategoryBits    ),
    _sfObject1CollideBits     (source._sfObject1CollideBits     ),
    _sfObject2CategoryBits    (source._sfObject2CategoryBits    ),
    _sfObject2CollideBits     (source._sfObject2CollideBits     ),
    _sfObject1Velocity        (source._sfObject1Velocity        ),
    _sfObject2Velocity        (source._sfObject2Velocity        ),
    _sfProjectedNormalSpeed   (source._sfProjectedNormalSpeed   )
{
}


/*-------------------------- destructors ----------------------------------*/

CollisionEventDetailsBase::~CollisionEventDetailsBase(void)
{
}

void CollisionEventDetailsBase::onCreate(const CollisionEventDetails *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        CollisionEventDetails *pThis = static_cast<CollisionEventDetails *>(this);

        pThis->setObject1Geom(source->getObject1Geom());

        pThis->setObject2Geom(source->getObject2Geom());
    }
}

GetFieldHandlePtr CollisionEventDetailsBase::getHandlePosition        (void) const
{
    SFPnt3f::GetHandlePtr returnValue(
        new  SFPnt3f::GetHandle(
             &_sfPosition,
             this->getType().getFieldDesc(PositionFieldId),
             const_cast<CollisionEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionEventDetailsBase::editHandlePosition       (void)
{
    SFPnt3f::EditHandlePtr returnValue(
        new  SFPnt3f::EditHandle(
             &_sfPosition,
             this->getType().getFieldDesc(PositionFieldId),
             this));


    editSField(PositionFieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionEventDetailsBase::getHandleNormal          (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfNormal,
             this->getType().getFieldDesc(NormalFieldId),
             const_cast<CollisionEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionEventDetailsBase::editHandleNormal         (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfNormal,
             this->getType().getFieldDesc(NormalFieldId),
             this));


    editSField(NormalFieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionEventDetailsBase::getHandleObject1Geom     (void) const
{
    SFUnrecPhysicsGeomPtr::GetHandlePtr returnValue(
        new  SFUnrecPhysicsGeomPtr::GetHandle(
             &_sfObject1Geom,
             this->getType().getFieldDesc(Object1GeomFieldId),
             const_cast<CollisionEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionEventDetailsBase::editHandleObject1Geom    (void)
{
    SFUnrecPhysicsGeomPtr::EditHandlePtr returnValue(
        new  SFUnrecPhysicsGeomPtr::EditHandle(
             &_sfObject1Geom,
             this->getType().getFieldDesc(Object1GeomFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&CollisionEventDetails::setObject1Geom,
                    static_cast<CollisionEventDetails *>(this), _1));

    editSField(Object1GeomFieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionEventDetailsBase::getHandleObject2Geom     (void) const
{
    SFUnrecPhysicsGeomPtr::GetHandlePtr returnValue(
        new  SFUnrecPhysicsGeomPtr::GetHandle(
             &_sfObject2Geom,
             this->getType().getFieldDesc(Object2GeomFieldId),
             const_cast<CollisionEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionEventDetailsBase::editHandleObject2Geom    (void)
{
    SFUnrecPhysicsGeomPtr::EditHandlePtr returnValue(
        new  SFUnrecPhysicsGeomPtr::EditHandle(
             &_sfObject2Geom,
             this->getType().getFieldDesc(Object2GeomFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&CollisionEventDetails::setObject2Geom,
                    static_cast<CollisionEventDetails *>(this), _1));

    editSField(Object2GeomFieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionEventDetailsBase::getHandleObject1CategoryBits (void) const
{
    SFUInt64::GetHandlePtr returnValue(
        new  SFUInt64::GetHandle(
             &_sfObject1CategoryBits,
             this->getType().getFieldDesc(Object1CategoryBitsFieldId),
             const_cast<CollisionEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionEventDetailsBase::editHandleObject1CategoryBits(void)
{
    SFUInt64::EditHandlePtr returnValue(
        new  SFUInt64::EditHandle(
             &_sfObject1CategoryBits,
             this->getType().getFieldDesc(Object1CategoryBitsFieldId),
             this));


    editSField(Object1CategoryBitsFieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionEventDetailsBase::getHandleObject1CollideBits (void) const
{
    SFUInt64::GetHandlePtr returnValue(
        new  SFUInt64::GetHandle(
             &_sfObject1CollideBits,
             this->getType().getFieldDesc(Object1CollideBitsFieldId),
             const_cast<CollisionEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionEventDetailsBase::editHandleObject1CollideBits(void)
{
    SFUInt64::EditHandlePtr returnValue(
        new  SFUInt64::EditHandle(
             &_sfObject1CollideBits,
             this->getType().getFieldDesc(Object1CollideBitsFieldId),
             this));


    editSField(Object1CollideBitsFieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionEventDetailsBase::getHandleObject2CategoryBits (void) const
{
    SFUInt64::GetHandlePtr returnValue(
        new  SFUInt64::GetHandle(
             &_sfObject2CategoryBits,
             this->getType().getFieldDesc(Object2CategoryBitsFieldId),
             const_cast<CollisionEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionEventDetailsBase::editHandleObject2CategoryBits(void)
{
    SFUInt64::EditHandlePtr returnValue(
        new  SFUInt64::EditHandle(
             &_sfObject2CategoryBits,
             this->getType().getFieldDesc(Object2CategoryBitsFieldId),
             this));


    editSField(Object2CategoryBitsFieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionEventDetailsBase::getHandleObject2CollideBits (void) const
{
    SFUInt64::GetHandlePtr returnValue(
        new  SFUInt64::GetHandle(
             &_sfObject2CollideBits,
             this->getType().getFieldDesc(Object2CollideBitsFieldId),
             const_cast<CollisionEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionEventDetailsBase::editHandleObject2CollideBits(void)
{
    SFUInt64::EditHandlePtr returnValue(
        new  SFUInt64::EditHandle(
             &_sfObject2CollideBits,
             this->getType().getFieldDesc(Object2CollideBitsFieldId),
             this));


    editSField(Object2CollideBitsFieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionEventDetailsBase::getHandleObject1Velocity (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfObject1Velocity,
             this->getType().getFieldDesc(Object1VelocityFieldId),
             const_cast<CollisionEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionEventDetailsBase::editHandleObject1Velocity(void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfObject1Velocity,
             this->getType().getFieldDesc(Object1VelocityFieldId),
             this));


    editSField(Object1VelocityFieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionEventDetailsBase::getHandleObject2Velocity (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfObject2Velocity,
             this->getType().getFieldDesc(Object2VelocityFieldId),
             const_cast<CollisionEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionEventDetailsBase::editHandleObject2Velocity(void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfObject2Velocity,
             this->getType().getFieldDesc(Object2VelocityFieldId),
             this));


    editSField(Object2VelocityFieldMask);

    return returnValue;
}

GetFieldHandlePtr CollisionEventDetailsBase::getHandleProjectedNormalSpeed (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfProjectedNormalSpeed,
             this->getType().getFieldDesc(ProjectedNormalSpeedFieldId),
             const_cast<CollisionEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr CollisionEventDetailsBase::editHandleProjectedNormalSpeed(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfProjectedNormalSpeed,
             this->getType().getFieldDesc(ProjectedNormalSpeedFieldId),
             this));


    editSField(ProjectedNormalSpeedFieldMask);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void CollisionEventDetailsBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CollisionEventDetails *pThis = static_cast<CollisionEventDetails *>(this);

    pThis->execSync(static_cast<CollisionEventDetails *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CollisionEventDetailsBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    CollisionEventDetails *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CollisionEventDetails *>(pRefAspect),
                  dynamic_cast<const CollisionEventDetails *>(this));

    return returnValue;
}
#endif

void CollisionEventDetailsBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<CollisionEventDetails *>(this)->setObject1Geom(NULL);

    static_cast<CollisionEventDetails *>(this)->setObject2Geom(NULL);


}


OSG_END_NAMESPACE
