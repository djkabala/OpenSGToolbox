/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com),                            *
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
 **     class CollisionContactParameters!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &CollisionContactParametersBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 CollisionContactParametersBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 CollisionContactParametersBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the CollisionContactParameters::_sfMode field.

inline
Int32 &CollisionContactParametersBase::editMode(void)
{
    editSField(ModeFieldMask);

    return _sfMode.getValue();
}

//! Get the value of the CollisionContactParameters::_sfMode field.
inline
      Int32  CollisionContactParametersBase::getMode(void) const
{
    return _sfMode.getValue();
}

//! Set the value of the CollisionContactParameters::_sfMode field.
inline
void CollisionContactParametersBase::setMode(const Int32 value)
{
    editSField(ModeFieldMask);

    _sfMode.setValue(value);
}
//! Get the value of the CollisionContactParameters::_sfMu field.

inline
Real32 &CollisionContactParametersBase::editMu(void)
{
    editSField(MuFieldMask);

    return _sfMu.getValue();
}

//! Get the value of the CollisionContactParameters::_sfMu field.
inline
      Real32  CollisionContactParametersBase::getMu(void) const
{
    return _sfMu.getValue();
}

//! Set the value of the CollisionContactParameters::_sfMu field.
inline
void CollisionContactParametersBase::setMu(const Real32 value)
{
    editSField(MuFieldMask);

    _sfMu.setValue(value);
}
//! Get the value of the CollisionContactParameters::_sfMu2 field.

inline
Real32 &CollisionContactParametersBase::editMu2(void)
{
    editSField(Mu2FieldMask);

    return _sfMu2.getValue();
}

//! Get the value of the CollisionContactParameters::_sfMu2 field.
inline
      Real32  CollisionContactParametersBase::getMu2(void) const
{
    return _sfMu2.getValue();
}

//! Set the value of the CollisionContactParameters::_sfMu2 field.
inline
void CollisionContactParametersBase::setMu2(const Real32 value)
{
    editSField(Mu2FieldMask);

    _sfMu2.setValue(value);
}
//! Get the value of the CollisionContactParameters::_sfBounce field.

inline
Real32 &CollisionContactParametersBase::editBounce(void)
{
    editSField(BounceFieldMask);

    return _sfBounce.getValue();
}

//! Get the value of the CollisionContactParameters::_sfBounce field.
inline
      Real32  CollisionContactParametersBase::getBounce(void) const
{
    return _sfBounce.getValue();
}

//! Set the value of the CollisionContactParameters::_sfBounce field.
inline
void CollisionContactParametersBase::setBounce(const Real32 value)
{
    editSField(BounceFieldMask);

    _sfBounce.setValue(value);
}
//! Get the value of the CollisionContactParameters::_sfBounceSpeedThreshold field.

inline
Real32 &CollisionContactParametersBase::editBounceSpeedThreshold(void)
{
    editSField(BounceSpeedThresholdFieldMask);

    return _sfBounceSpeedThreshold.getValue();
}

//! Get the value of the CollisionContactParameters::_sfBounceSpeedThreshold field.
inline
      Real32  CollisionContactParametersBase::getBounceSpeedThreshold(void) const
{
    return _sfBounceSpeedThreshold.getValue();
}

//! Set the value of the CollisionContactParameters::_sfBounceSpeedThreshold field.
inline
void CollisionContactParametersBase::setBounceSpeedThreshold(const Real32 value)
{
    editSField(BounceSpeedThresholdFieldMask);

    _sfBounceSpeedThreshold.setValue(value);
}
//! Get the value of the CollisionContactParameters::_sfSoftCFM field.

inline
Real32 &CollisionContactParametersBase::editSoftCFM(void)
{
    editSField(SoftCFMFieldMask);

    return _sfSoftCFM.getValue();
}

//! Get the value of the CollisionContactParameters::_sfSoftCFM field.
inline
      Real32  CollisionContactParametersBase::getSoftCFM(void) const
{
    return _sfSoftCFM.getValue();
}

//! Set the value of the CollisionContactParameters::_sfSoftCFM field.
inline
void CollisionContactParametersBase::setSoftCFM(const Real32 value)
{
    editSField(SoftCFMFieldMask);

    _sfSoftCFM.setValue(value);
}
//! Get the value of the CollisionContactParameters::_sfSoftERP field.

inline
Real32 &CollisionContactParametersBase::editSoftERP(void)
{
    editSField(SoftERPFieldMask);

    return _sfSoftERP.getValue();
}

//! Get the value of the CollisionContactParameters::_sfSoftERP field.
inline
      Real32  CollisionContactParametersBase::getSoftERP(void) const
{
    return _sfSoftERP.getValue();
}

//! Set the value of the CollisionContactParameters::_sfSoftERP field.
inline
void CollisionContactParametersBase::setSoftERP(const Real32 value)
{
    editSField(SoftERPFieldMask);

    _sfSoftERP.setValue(value);
}
//! Get the value of the CollisionContactParameters::_sfMotion1 field.

inline
Real32 &CollisionContactParametersBase::editMotion1(void)
{
    editSField(Motion1FieldMask);

    return _sfMotion1.getValue();
}

//! Get the value of the CollisionContactParameters::_sfMotion1 field.
inline
      Real32  CollisionContactParametersBase::getMotion1(void) const
{
    return _sfMotion1.getValue();
}

//! Set the value of the CollisionContactParameters::_sfMotion1 field.
inline
void CollisionContactParametersBase::setMotion1(const Real32 value)
{
    editSField(Motion1FieldMask);

    _sfMotion1.setValue(value);
}
//! Get the value of the CollisionContactParameters::_sfMotion2 field.

inline
Real32 &CollisionContactParametersBase::editMotion2(void)
{
    editSField(Motion2FieldMask);

    return _sfMotion2.getValue();
}

//! Get the value of the CollisionContactParameters::_sfMotion2 field.
inline
      Real32  CollisionContactParametersBase::getMotion2(void) const
{
    return _sfMotion2.getValue();
}

//! Set the value of the CollisionContactParameters::_sfMotion2 field.
inline
void CollisionContactParametersBase::setMotion2(const Real32 value)
{
    editSField(Motion2FieldMask);

    _sfMotion2.setValue(value);
}
//! Get the value of the CollisionContactParameters::_sfMotionN field.

inline
Real32 &CollisionContactParametersBase::editMotionN(void)
{
    editSField(MotionNFieldMask);

    return _sfMotionN.getValue();
}

//! Get the value of the CollisionContactParameters::_sfMotionN field.
inline
      Real32  CollisionContactParametersBase::getMotionN(void) const
{
    return _sfMotionN.getValue();
}

//! Set the value of the CollisionContactParameters::_sfMotionN field.
inline
void CollisionContactParametersBase::setMotionN(const Real32 value)
{
    editSField(MotionNFieldMask);

    _sfMotionN.setValue(value);
}
//! Get the value of the CollisionContactParameters::_sfSlip1 field.

inline
Real32 &CollisionContactParametersBase::editSlip1(void)
{
    editSField(Slip1FieldMask);

    return _sfSlip1.getValue();
}

//! Get the value of the CollisionContactParameters::_sfSlip1 field.
inline
      Real32  CollisionContactParametersBase::getSlip1(void) const
{
    return _sfSlip1.getValue();
}

//! Set the value of the CollisionContactParameters::_sfSlip1 field.
inline
void CollisionContactParametersBase::setSlip1(const Real32 value)
{
    editSField(Slip1FieldMask);

    _sfSlip1.setValue(value);
}
//! Get the value of the CollisionContactParameters::_sfSlip2 field.

inline
Real32 &CollisionContactParametersBase::editSlip2(void)
{
    editSField(Slip2FieldMask);

    return _sfSlip2.getValue();
}

//! Get the value of the CollisionContactParameters::_sfSlip2 field.
inline
      Real32  CollisionContactParametersBase::getSlip2(void) const
{
    return _sfSlip2.getValue();
}

//! Set the value of the CollisionContactParameters::_sfSlip2 field.
inline
void CollisionContactParametersBase::setSlip2(const Real32 value)
{
    editSField(Slip2FieldMask);

    _sfSlip2.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void CollisionContactParametersBase::execSync (      CollisionContactParametersBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
        _sfMode.syncWith(pFrom->_sfMode);

    if(FieldBits::NoField != (MuFieldMask & whichField))
        _sfMu.syncWith(pFrom->_sfMu);

    if(FieldBits::NoField != (Mu2FieldMask & whichField))
        _sfMu2.syncWith(pFrom->_sfMu2);

    if(FieldBits::NoField != (BounceFieldMask & whichField))
        _sfBounce.syncWith(pFrom->_sfBounce);

    if(FieldBits::NoField != (BounceSpeedThresholdFieldMask & whichField))
        _sfBounceSpeedThreshold.syncWith(pFrom->_sfBounceSpeedThreshold);

    if(FieldBits::NoField != (SoftCFMFieldMask & whichField))
        _sfSoftCFM.syncWith(pFrom->_sfSoftCFM);

    if(FieldBits::NoField != (SoftERPFieldMask & whichField))
        _sfSoftERP.syncWith(pFrom->_sfSoftERP);

    if(FieldBits::NoField != (Motion1FieldMask & whichField))
        _sfMotion1.syncWith(pFrom->_sfMotion1);

    if(FieldBits::NoField != (Motion2FieldMask & whichField))
        _sfMotion2.syncWith(pFrom->_sfMotion2);

    if(FieldBits::NoField != (MotionNFieldMask & whichField))
        _sfMotionN.syncWith(pFrom->_sfMotionN);

    if(FieldBits::NoField != (Slip1FieldMask & whichField))
        _sfSlip1.syncWith(pFrom->_sfSlip1);

    if(FieldBits::NoField != (Slip2FieldMask & whichField))
        _sfSlip2.syncWith(pFrom->_sfSlip2);
}
#endif


inline
const Char8 *CollisionContactParametersBase::getClassname(void)
{
    return "CollisionContactParameters";
}
OSG_GEN_CONTAINERPTR(CollisionContactParameters);

OSG_END_NAMESPACE

