/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), Daniel Guilliams           *
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
 **     class PerlinNoiseDistribution1D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PerlinNoiseDistribution1DBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 PerlinNoiseDistribution1DBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 PerlinNoiseDistribution1DBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the PerlinNoiseDistribution1D::_sfFrequency field.

inline
Real32 &PerlinNoiseDistribution1DBase::editFrequency(void)
{
    editSField(FrequencyFieldMask);

    return _sfFrequency.getValue();
}

//! Get the value of the PerlinNoiseDistribution1D::_sfFrequency field.
inline
      Real32  PerlinNoiseDistribution1DBase::getFrequency(void) const
{
    return _sfFrequency.getValue();
}

//! Set the value of the PerlinNoiseDistribution1D::_sfFrequency field.
inline
void PerlinNoiseDistribution1DBase::setFrequency(const Real32 value)
{
    editSField(FrequencyFieldMask);

    _sfFrequency.setValue(value);
}
//! Get the value of the PerlinNoiseDistribution1D::_sfPersistance field.

inline
Real32 &PerlinNoiseDistribution1DBase::editPersistance(void)
{
    editSField(PersistanceFieldMask);

    return _sfPersistance.getValue();
}

//! Get the value of the PerlinNoiseDistribution1D::_sfPersistance field.
inline
      Real32  PerlinNoiseDistribution1DBase::getPersistance(void) const
{
    return _sfPersistance.getValue();
}

//! Set the value of the PerlinNoiseDistribution1D::_sfPersistance field.
inline
void PerlinNoiseDistribution1DBase::setPersistance(const Real32 value)
{
    editSField(PersistanceFieldMask);

    _sfPersistance.setValue(value);
}
//! Get the value of the PerlinNoiseDistribution1D::_sfOctaves field.

inline
UInt32 &PerlinNoiseDistribution1DBase::editOctaves(void)
{
    editSField(OctavesFieldMask);

    return _sfOctaves.getValue();
}

//! Get the value of the PerlinNoiseDistribution1D::_sfOctaves field.
inline
      UInt32  PerlinNoiseDistribution1DBase::getOctaves(void) const
{
    return _sfOctaves.getValue();
}

//! Set the value of the PerlinNoiseDistribution1D::_sfOctaves field.
inline
void PerlinNoiseDistribution1DBase::setOctaves(const UInt32 value)
{
    editSField(OctavesFieldMask);

    _sfOctaves.setValue(value);
}
//! Get the value of the PerlinNoiseDistribution1D::_sfAmplitude field.

inline
Real32 &PerlinNoiseDistribution1DBase::editAmplitude(void)
{
    editSField(AmplitudeFieldMask);

    return _sfAmplitude.getValue();
}

//! Get the value of the PerlinNoiseDistribution1D::_sfAmplitude field.
inline
      Real32  PerlinNoiseDistribution1DBase::getAmplitude(void) const
{
    return _sfAmplitude.getValue();
}

//! Set the value of the PerlinNoiseDistribution1D::_sfAmplitude field.
inline
void PerlinNoiseDistribution1DBase::setAmplitude(const Real32 value)
{
    editSField(AmplitudeFieldMask);

    _sfAmplitude.setValue(value);
}
//! Get the value of the PerlinNoiseDistribution1D::_sfInterpolationType field.

inline
UInt32 &PerlinNoiseDistribution1DBase::editInterpolationType(void)
{
    editSField(InterpolationTypeFieldMask);

    return _sfInterpolationType.getValue();
}

//! Get the value of the PerlinNoiseDistribution1D::_sfInterpolationType field.
inline
      UInt32  PerlinNoiseDistribution1DBase::getInterpolationType(void) const
{
    return _sfInterpolationType.getValue();
}

//! Set the value of the PerlinNoiseDistribution1D::_sfInterpolationType field.
inline
void PerlinNoiseDistribution1DBase::setInterpolationType(const UInt32 value)
{
    editSField(InterpolationTypeFieldMask);

    _sfInterpolationType.setValue(value);
}
//! Get the value of the PerlinNoiseDistribution1D::_sfPhase field.

inline
Real32 &PerlinNoiseDistribution1DBase::editPhase(void)
{
    editSField(PhaseFieldMask);

    return _sfPhase.getValue();
}

//! Get the value of the PerlinNoiseDistribution1D::_sfPhase field.
inline
      Real32  PerlinNoiseDistribution1DBase::getPhase(void) const
{
    return _sfPhase.getValue();
}

//! Set the value of the PerlinNoiseDistribution1D::_sfPhase field.
inline
void PerlinNoiseDistribution1DBase::setPhase(const Real32 value)
{
    editSField(PhaseFieldMask);

    _sfPhase.setValue(value);
}
//! Get the value of the PerlinNoiseDistribution1D::_sfUseSmoothing field.

inline
bool &PerlinNoiseDistribution1DBase::editUseSmoothing(void)
{
    editSField(UseSmoothingFieldMask);

    return _sfUseSmoothing.getValue();
}

//! Get the value of the PerlinNoiseDistribution1D::_sfUseSmoothing field.
inline
      bool  PerlinNoiseDistribution1DBase::getUseSmoothing(void) const
{
    return _sfUseSmoothing.getValue();
}

//! Set the value of the PerlinNoiseDistribution1D::_sfUseSmoothing field.
inline
void PerlinNoiseDistribution1DBase::setUseSmoothing(const bool value)
{
    editSField(UseSmoothingFieldMask);

    _sfUseSmoothing.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void PerlinNoiseDistribution1DBase::execSync (      PerlinNoiseDistribution1DBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
        _sfFrequency.syncWith(pFrom->_sfFrequency);

    if(FieldBits::NoField != (PersistanceFieldMask & whichField))
        _sfPersistance.syncWith(pFrom->_sfPersistance);

    if(FieldBits::NoField != (OctavesFieldMask & whichField))
        _sfOctaves.syncWith(pFrom->_sfOctaves);

    if(FieldBits::NoField != (AmplitudeFieldMask & whichField))
        _sfAmplitude.syncWith(pFrom->_sfAmplitude);

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
        _sfInterpolationType.syncWith(pFrom->_sfInterpolationType);

    if(FieldBits::NoField != (PhaseFieldMask & whichField))
        _sfPhase.syncWith(pFrom->_sfPhase);

    if(FieldBits::NoField != (UseSmoothingFieldMask & whichField))
        _sfUseSmoothing.syncWith(pFrom->_sfUseSmoothing);
}
#endif


inline
const Char8 *PerlinNoiseDistribution1DBase::getClassname(void)
{
    return "PerlinNoiseDistribution1D";
}
OSG_GEN_CONTAINERPTR(PerlinNoiseDistribution1D);

OSG_END_NAMESPACE

