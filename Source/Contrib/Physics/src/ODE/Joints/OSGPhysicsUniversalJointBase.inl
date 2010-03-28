/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com),  Behboud Kalantary         *
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
 **     class PhysicsUniversalJoint!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PhysicsUniversalJointBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 PhysicsUniversalJointBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 PhysicsUniversalJointBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the PhysicsUniversalJoint::_sfAnchor field.

inline
Vec3f &PhysicsUniversalJointBase::editAnchor(void)
{
    editSField(AnchorFieldMask);

    return _sfAnchor.getValue();
}

//! Get the value of the PhysicsUniversalJoint::_sfAnchor field.
inline
const Vec3f &PhysicsUniversalJointBase::getAnchor(void) const
{
    return _sfAnchor.getValue();
}

//! Set the value of the PhysicsUniversalJoint::_sfAnchor field.
inline
void PhysicsUniversalJointBase::setAnchor(const Vec3f &value)
{
    editSField(AnchorFieldMask);

    _sfAnchor.setValue(value);
}
//! Get the value of the PhysicsUniversalJoint::_sfAxis1 field.

inline
Vec3f &PhysicsUniversalJointBase::editAxis1(void)
{
    editSField(Axis1FieldMask);

    return _sfAxis1.getValue();
}

//! Get the value of the PhysicsUniversalJoint::_sfAxis1 field.
inline
const Vec3f &PhysicsUniversalJointBase::getAxis1(void) const
{
    return _sfAxis1.getValue();
}

//! Set the value of the PhysicsUniversalJoint::_sfAxis1 field.
inline
void PhysicsUniversalJointBase::setAxis1(const Vec3f &value)
{
    editSField(Axis1FieldMask);

    _sfAxis1.setValue(value);
}
//! Get the value of the PhysicsUniversalJoint::_sfAxis2 field.

inline
Vec3f &PhysicsUniversalJointBase::editAxis2(void)
{
    editSField(Axis2FieldMask);

    return _sfAxis2.getValue();
}

//! Get the value of the PhysicsUniversalJoint::_sfAxis2 field.
inline
const Vec3f &PhysicsUniversalJointBase::getAxis2(void) const
{
    return _sfAxis2.getValue();
}

//! Set the value of the PhysicsUniversalJoint::_sfAxis2 field.
inline
void PhysicsUniversalJointBase::setAxis2(const Vec3f &value)
{
    editSField(Axis2FieldMask);

    _sfAxis2.setValue(value);
}
//! Get the value of the PhysicsUniversalJoint::_sfHiStop field.

inline
Real32 &PhysicsUniversalJointBase::editHiStop(void)
{
    editSField(HiStopFieldMask);

    return _sfHiStop.getValue();
}

//! Get the value of the PhysicsUniversalJoint::_sfHiStop field.
inline
      Real32  PhysicsUniversalJointBase::getHiStop(void) const
{
    return _sfHiStop.getValue();
}

//! Set the value of the PhysicsUniversalJoint::_sfHiStop field.
inline
void PhysicsUniversalJointBase::setHiStop(const Real32 value)
{
    editSField(HiStopFieldMask);

    _sfHiStop.setValue(value);
}
//! Get the value of the PhysicsUniversalJoint::_sfLoStop field.

inline
Real32 &PhysicsUniversalJointBase::editLoStop(void)
{
    editSField(LoStopFieldMask);

    return _sfLoStop.getValue();
}

//! Get the value of the PhysicsUniversalJoint::_sfLoStop field.
inline
      Real32  PhysicsUniversalJointBase::getLoStop(void) const
{
    return _sfLoStop.getValue();
}

//! Set the value of the PhysicsUniversalJoint::_sfLoStop field.
inline
void PhysicsUniversalJointBase::setLoStop(const Real32 value)
{
    editSField(LoStopFieldMask);

    _sfLoStop.setValue(value);
}
//! Get the value of the PhysicsUniversalJoint::_sfBounce field.

inline
Real32 &PhysicsUniversalJointBase::editBounce(void)
{
    editSField(BounceFieldMask);

    return _sfBounce.getValue();
}

//! Get the value of the PhysicsUniversalJoint::_sfBounce field.
inline
      Real32  PhysicsUniversalJointBase::getBounce(void) const
{
    return _sfBounce.getValue();
}

//! Set the value of the PhysicsUniversalJoint::_sfBounce field.
inline
void PhysicsUniversalJointBase::setBounce(const Real32 value)
{
    editSField(BounceFieldMask);

    _sfBounce.setValue(value);
}
//! Get the value of the PhysicsUniversalJoint::_sfCFM field.

inline
Real32 &PhysicsUniversalJointBase::editCFM(void)
{
    editSField(CFMFieldMask);

    return _sfCFM.getValue();
}

//! Get the value of the PhysicsUniversalJoint::_sfCFM field.
inline
      Real32  PhysicsUniversalJointBase::getCFM(void) const
{
    return _sfCFM.getValue();
}

//! Set the value of the PhysicsUniversalJoint::_sfCFM field.
inline
void PhysicsUniversalJointBase::setCFM(const Real32 value)
{
    editSField(CFMFieldMask);

    _sfCFM.setValue(value);
}
//! Get the value of the PhysicsUniversalJoint::_sfStopERP field.

inline
Real32 &PhysicsUniversalJointBase::editStopERP(void)
{
    editSField(StopERPFieldMask);

    return _sfStopERP.getValue();
}

//! Get the value of the PhysicsUniversalJoint::_sfStopERP field.
inline
      Real32  PhysicsUniversalJointBase::getStopERP(void) const
{
    return _sfStopERP.getValue();
}

//! Set the value of the PhysicsUniversalJoint::_sfStopERP field.
inline
void PhysicsUniversalJointBase::setStopERP(const Real32 value)
{
    editSField(StopERPFieldMask);

    _sfStopERP.setValue(value);
}
//! Get the value of the PhysicsUniversalJoint::_sfStopCFM field.

inline
Real32 &PhysicsUniversalJointBase::editStopCFM(void)
{
    editSField(StopCFMFieldMask);

    return _sfStopCFM.getValue();
}

//! Get the value of the PhysicsUniversalJoint::_sfStopCFM field.
inline
      Real32  PhysicsUniversalJointBase::getStopCFM(void) const
{
    return _sfStopCFM.getValue();
}

//! Set the value of the PhysicsUniversalJoint::_sfStopCFM field.
inline
void PhysicsUniversalJointBase::setStopCFM(const Real32 value)
{
    editSField(StopCFMFieldMask);

    _sfStopCFM.setValue(value);
}
//! Get the value of the PhysicsUniversalJoint::_sfHiStop2 field.

inline
Real32 &PhysicsUniversalJointBase::editHiStop2(void)
{
    editSField(HiStop2FieldMask);

    return _sfHiStop2.getValue();
}

//! Get the value of the PhysicsUniversalJoint::_sfHiStop2 field.
inline
      Real32  PhysicsUniversalJointBase::getHiStop2(void) const
{
    return _sfHiStop2.getValue();
}

//! Set the value of the PhysicsUniversalJoint::_sfHiStop2 field.
inline
void PhysicsUniversalJointBase::setHiStop2(const Real32 value)
{
    editSField(HiStop2FieldMask);

    _sfHiStop2.setValue(value);
}
//! Get the value of the PhysicsUniversalJoint::_sfLoStop2 field.

inline
Real32 &PhysicsUniversalJointBase::editLoStop2(void)
{
    editSField(LoStop2FieldMask);

    return _sfLoStop2.getValue();
}

//! Get the value of the PhysicsUniversalJoint::_sfLoStop2 field.
inline
      Real32  PhysicsUniversalJointBase::getLoStop2(void) const
{
    return _sfLoStop2.getValue();
}

//! Set the value of the PhysicsUniversalJoint::_sfLoStop2 field.
inline
void PhysicsUniversalJointBase::setLoStop2(const Real32 value)
{
    editSField(LoStop2FieldMask);

    _sfLoStop2.setValue(value);
}
//! Get the value of the PhysicsUniversalJoint::_sfBounce2 field.

inline
Real32 &PhysicsUniversalJointBase::editBounce2(void)
{
    editSField(Bounce2FieldMask);

    return _sfBounce2.getValue();
}

//! Get the value of the PhysicsUniversalJoint::_sfBounce2 field.
inline
      Real32  PhysicsUniversalJointBase::getBounce2(void) const
{
    return _sfBounce2.getValue();
}

//! Set the value of the PhysicsUniversalJoint::_sfBounce2 field.
inline
void PhysicsUniversalJointBase::setBounce2(const Real32 value)
{
    editSField(Bounce2FieldMask);

    _sfBounce2.setValue(value);
}
//! Get the value of the PhysicsUniversalJoint::_sfCFM2 field.

inline
Real32 &PhysicsUniversalJointBase::editCFM2(void)
{
    editSField(CFM2FieldMask);

    return _sfCFM2.getValue();
}

//! Get the value of the PhysicsUniversalJoint::_sfCFM2 field.
inline
      Real32  PhysicsUniversalJointBase::getCFM2(void) const
{
    return _sfCFM2.getValue();
}

//! Set the value of the PhysicsUniversalJoint::_sfCFM2 field.
inline
void PhysicsUniversalJointBase::setCFM2(const Real32 value)
{
    editSField(CFM2FieldMask);

    _sfCFM2.setValue(value);
}
//! Get the value of the PhysicsUniversalJoint::_sfStopERP2 field.

inline
Real32 &PhysicsUniversalJointBase::editStopERP2(void)
{
    editSField(StopERP2FieldMask);

    return _sfStopERP2.getValue();
}

//! Get the value of the PhysicsUniversalJoint::_sfStopERP2 field.
inline
      Real32  PhysicsUniversalJointBase::getStopERP2(void) const
{
    return _sfStopERP2.getValue();
}

//! Set the value of the PhysicsUniversalJoint::_sfStopERP2 field.
inline
void PhysicsUniversalJointBase::setStopERP2(const Real32 value)
{
    editSField(StopERP2FieldMask);

    _sfStopERP2.setValue(value);
}
//! Get the value of the PhysicsUniversalJoint::_sfStopCFM2 field.

inline
Real32 &PhysicsUniversalJointBase::editStopCFM2(void)
{
    editSField(StopCFM2FieldMask);

    return _sfStopCFM2.getValue();
}

//! Get the value of the PhysicsUniversalJoint::_sfStopCFM2 field.
inline
      Real32  PhysicsUniversalJointBase::getStopCFM2(void) const
{
    return _sfStopCFM2.getValue();
}

//! Set the value of the PhysicsUniversalJoint::_sfStopCFM2 field.
inline
void PhysicsUniversalJointBase::setStopCFM2(const Real32 value)
{
    editSField(StopCFM2FieldMask);

    _sfStopCFM2.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void PhysicsUniversalJointBase::execSync (      PhysicsUniversalJointBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (AnchorFieldMask & whichField))
        _sfAnchor.syncWith(pFrom->_sfAnchor);

    if(FieldBits::NoField != (Axis1FieldMask & whichField))
        _sfAxis1.syncWith(pFrom->_sfAxis1);

    if(FieldBits::NoField != (Axis2FieldMask & whichField))
        _sfAxis2.syncWith(pFrom->_sfAxis2);

    if(FieldBits::NoField != (HiStopFieldMask & whichField))
        _sfHiStop.syncWith(pFrom->_sfHiStop);

    if(FieldBits::NoField != (LoStopFieldMask & whichField))
        _sfLoStop.syncWith(pFrom->_sfLoStop);

    if(FieldBits::NoField != (BounceFieldMask & whichField))
        _sfBounce.syncWith(pFrom->_sfBounce);

    if(FieldBits::NoField != (CFMFieldMask & whichField))
        _sfCFM.syncWith(pFrom->_sfCFM);

    if(FieldBits::NoField != (StopERPFieldMask & whichField))
        _sfStopERP.syncWith(pFrom->_sfStopERP);

    if(FieldBits::NoField != (StopCFMFieldMask & whichField))
        _sfStopCFM.syncWith(pFrom->_sfStopCFM);

    if(FieldBits::NoField != (HiStop2FieldMask & whichField))
        _sfHiStop2.syncWith(pFrom->_sfHiStop2);

    if(FieldBits::NoField != (LoStop2FieldMask & whichField))
        _sfLoStop2.syncWith(pFrom->_sfLoStop2);

    if(FieldBits::NoField != (Bounce2FieldMask & whichField))
        _sfBounce2.syncWith(pFrom->_sfBounce2);

    if(FieldBits::NoField != (CFM2FieldMask & whichField))
        _sfCFM2.syncWith(pFrom->_sfCFM2);

    if(FieldBits::NoField != (StopERP2FieldMask & whichField))
        _sfStopERP2.syncWith(pFrom->_sfStopERP2);

    if(FieldBits::NoField != (StopCFM2FieldMask & whichField))
        _sfStopCFM2.syncWith(pFrom->_sfStopCFM2);
}
#endif


inline
const Char8 *PhysicsUniversalJointBase::getClassname(void)
{
    return "PhysicsUniversalJoint";
}
OSG_GEN_CONTAINERPTR(PhysicsUniversalJoint);

OSG_END_NAMESPACE

