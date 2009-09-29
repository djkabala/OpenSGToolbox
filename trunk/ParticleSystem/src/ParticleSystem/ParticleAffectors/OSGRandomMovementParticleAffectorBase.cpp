/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
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
 **     class RandomMovementParticleAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILERANDOMMOVEMENTPARTICLEAFFECTORINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGRandomMovementParticleAffectorBase.h"
#include "OSGRandomMovementParticleAffector.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  RandomMovementParticleAffectorBase::AttributeAffectedFieldMask = 
    (TypeTraits<BitVector>::One << RandomMovementParticleAffectorBase::AttributeAffectedFieldId);

const OSG::BitVector  RandomMovementParticleAffectorBase::PerlinDistributionFieldMask = 
    (TypeTraits<BitVector>::One << RandomMovementParticleAffectorBase::PerlinDistributionFieldId);

const OSG::BitVector  RandomMovementParticleAffectorBase::AmplitudeFieldMask = 
    (TypeTraits<BitVector>::One << RandomMovementParticleAffectorBase::AmplitudeFieldId);

const OSG::BitVector  RandomMovementParticleAffectorBase::InterpolationTypeFieldMask = 
    (TypeTraits<BitVector>::One << RandomMovementParticleAffectorBase::InterpolationTypeFieldId);

const OSG::BitVector  RandomMovementParticleAffectorBase::PhaseFieldMask = 
    (TypeTraits<BitVector>::One << RandomMovementParticleAffectorBase::PhaseFieldId);

const OSG::BitVector  RandomMovementParticleAffectorBase::PersistanceFieldMask = 
    (TypeTraits<BitVector>::One << RandomMovementParticleAffectorBase::PersistanceFieldId);

const OSG::BitVector  RandomMovementParticleAffectorBase::FrequencyFieldMask = 
    (TypeTraits<BitVector>::One << RandomMovementParticleAffectorBase::FrequencyFieldId);

const OSG::BitVector  RandomMovementParticleAffectorBase::OctavesFieldMask = 
    (TypeTraits<BitVector>::One << RandomMovementParticleAffectorBase::OctavesFieldId);

const OSG::BitVector RandomMovementParticleAffectorBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var UInt32          RandomMovementParticleAffectorBase::_sfAttributeAffected
    
*/
/*! \var PerlinNoiseDistribution3DPtr RandomMovementParticleAffectorBase::_sfPerlinDistribution
    
*/
/*! \var Real32          RandomMovementParticleAffectorBase::_sfAmplitude
    
*/
/*! \var UInt32          RandomMovementParticleAffectorBase::_sfInterpolationType
    
*/
/*! \var Vec3f           RandomMovementParticleAffectorBase::_sfPhase
    
*/
/*! \var Real32          RandomMovementParticleAffectorBase::_sfPersistance
    
*/
/*! \var Real32          RandomMovementParticleAffectorBase::_sfFrequency
    
*/
/*! \var UInt32          RandomMovementParticleAffectorBase::_sfOctaves
    
*/

//! RandomMovementParticleAffector description

FieldDescription *RandomMovementParticleAffectorBase::_desc[] = 
{
    new FieldDescription(SFUInt32::getClassType(), 
                     "AttributeAffected", 
                     AttributeAffectedFieldId, AttributeAffectedFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&RandomMovementParticleAffectorBase::editSFAttributeAffected)),
    new FieldDescription(SFPerlinNoiseDistribution3DPtr::getClassType(), 
                     "PerlinDistribution", 
                     PerlinDistributionFieldId, PerlinDistributionFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&RandomMovementParticleAffectorBase::editSFPerlinDistribution)),
    new FieldDescription(SFReal32::getClassType(), 
                     "Amplitude", 
                     AmplitudeFieldId, AmplitudeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&RandomMovementParticleAffectorBase::editSFAmplitude)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "InterpolationType", 
                     InterpolationTypeFieldId, InterpolationTypeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&RandomMovementParticleAffectorBase::editSFInterpolationType)),
    new FieldDescription(SFVec3f::getClassType(), 
                     "Phase", 
                     PhaseFieldId, PhaseFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&RandomMovementParticleAffectorBase::editSFPhase)),
    new FieldDescription(SFReal32::getClassType(), 
                     "Persistance", 
                     PersistanceFieldId, PersistanceFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&RandomMovementParticleAffectorBase::editSFPersistance)),
    new FieldDescription(SFReal32::getClassType(), 
                     "Frequency", 
                     FrequencyFieldId, FrequencyFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&RandomMovementParticleAffectorBase::editSFFrequency)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "Octaves", 
                     OctavesFieldId, OctavesFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&RandomMovementParticleAffectorBase::editSFOctaves))
};


FieldContainerType RandomMovementParticleAffectorBase::_type(
    "RandomMovementParticleAffector",
    "ParticleAffector",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&RandomMovementParticleAffectorBase::createEmpty),
    RandomMovementParticleAffector::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(RandomMovementParticleAffectorBase, RandomMovementParticleAffectorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &RandomMovementParticleAffectorBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &RandomMovementParticleAffectorBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr RandomMovementParticleAffectorBase::shallowCopy(void) const 
{ 
    RandomMovementParticleAffectorPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const RandomMovementParticleAffector *>(this)); 

    return returnValue; 
}

UInt32 RandomMovementParticleAffectorBase::getContainerSize(void) const 
{ 
    return sizeof(RandomMovementParticleAffector); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void RandomMovementParticleAffectorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<RandomMovementParticleAffectorBase *>(&other),
                          whichField);
}
#else
void RandomMovementParticleAffectorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((RandomMovementParticleAffectorBase *) &other, whichField, sInfo);
}
void RandomMovementParticleAffectorBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void RandomMovementParticleAffectorBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

RandomMovementParticleAffectorBase::RandomMovementParticleAffectorBase(void) :
    _sfAttributeAffected      (UInt32(RandomMovementParticleAffector::POSITION_ATTRIBUTE)), 
    _sfPerlinDistribution     (PerlinNoiseDistribution3DPtr(NullFC)), 
    _sfAmplitude              (Real32(3.000)), 
    _sfInterpolationType      (UInt32(PerlinNoiseDistribution3D::LINEAR)), 
    _sfPhase                  (Vec3f(0.0,0.0,0.0)), 
    _sfPersistance            (Real32(0.25f)), 
    _sfFrequency              (Real32(1.0f)), 
    _sfOctaves                (UInt32(4)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

RandomMovementParticleAffectorBase::RandomMovementParticleAffectorBase(const RandomMovementParticleAffectorBase &source) :
    _sfAttributeAffected      (source._sfAttributeAffected      ), 
    _sfPerlinDistribution     (source._sfPerlinDistribution     ), 
    _sfAmplitude              (source._sfAmplitude              ), 
    _sfInterpolationType      (source._sfInterpolationType      ), 
    _sfPhase                  (source._sfPhase                  ), 
    _sfPersistance            (source._sfPersistance            ), 
    _sfFrequency              (source._sfFrequency              ), 
    _sfOctaves                (source._sfOctaves                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

RandomMovementParticleAffectorBase::~RandomMovementParticleAffectorBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 RandomMovementParticleAffectorBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (AttributeAffectedFieldMask & whichField))
    {
        returnValue += _sfAttributeAffected.getBinSize();
    }

    if(FieldBits::NoField != (PerlinDistributionFieldMask & whichField))
    {
        returnValue += _sfPerlinDistribution.getBinSize();
    }

    if(FieldBits::NoField != (AmplitudeFieldMask & whichField))
    {
        returnValue += _sfAmplitude.getBinSize();
    }

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
    {
        returnValue += _sfInterpolationType.getBinSize();
    }

    if(FieldBits::NoField != (PhaseFieldMask & whichField))
    {
        returnValue += _sfPhase.getBinSize();
    }

    if(FieldBits::NoField != (PersistanceFieldMask & whichField))
    {
        returnValue += _sfPersistance.getBinSize();
    }

    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
    {
        returnValue += _sfFrequency.getBinSize();
    }

    if(FieldBits::NoField != (OctavesFieldMask & whichField))
    {
        returnValue += _sfOctaves.getBinSize();
    }


    return returnValue;
}

void RandomMovementParticleAffectorBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (AttributeAffectedFieldMask & whichField))
    {
        _sfAttributeAffected.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PerlinDistributionFieldMask & whichField))
    {
        _sfPerlinDistribution.copyToBin(pMem);
    }

    if(FieldBits::NoField != (AmplitudeFieldMask & whichField))
    {
        _sfAmplitude.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
    {
        _sfInterpolationType.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PhaseFieldMask & whichField))
    {
        _sfPhase.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PersistanceFieldMask & whichField))
    {
        _sfPersistance.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
    {
        _sfFrequency.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OctavesFieldMask & whichField))
    {
        _sfOctaves.copyToBin(pMem);
    }


}

void RandomMovementParticleAffectorBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (AttributeAffectedFieldMask & whichField))
    {
        _sfAttributeAffected.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PerlinDistributionFieldMask & whichField))
    {
        _sfPerlinDistribution.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (AmplitudeFieldMask & whichField))
    {
        _sfAmplitude.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
    {
        _sfInterpolationType.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PhaseFieldMask & whichField))
    {
        _sfPhase.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PersistanceFieldMask & whichField))
    {
        _sfPersistance.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
    {
        _sfFrequency.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OctavesFieldMask & whichField))
    {
        _sfOctaves.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void RandomMovementParticleAffectorBase::executeSyncImpl(      RandomMovementParticleAffectorBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (AttributeAffectedFieldMask & whichField))
        _sfAttributeAffected.syncWith(pOther->_sfAttributeAffected);

    if(FieldBits::NoField != (PerlinDistributionFieldMask & whichField))
        _sfPerlinDistribution.syncWith(pOther->_sfPerlinDistribution);

    if(FieldBits::NoField != (AmplitudeFieldMask & whichField))
        _sfAmplitude.syncWith(pOther->_sfAmplitude);

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
        _sfInterpolationType.syncWith(pOther->_sfInterpolationType);

    if(FieldBits::NoField != (PhaseFieldMask & whichField))
        _sfPhase.syncWith(pOther->_sfPhase);

    if(FieldBits::NoField != (PersistanceFieldMask & whichField))
        _sfPersistance.syncWith(pOther->_sfPersistance);

    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
        _sfFrequency.syncWith(pOther->_sfFrequency);

    if(FieldBits::NoField != (OctavesFieldMask & whichField))
        _sfOctaves.syncWith(pOther->_sfOctaves);


}
#else
void RandomMovementParticleAffectorBase::executeSyncImpl(      RandomMovementParticleAffectorBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (AttributeAffectedFieldMask & whichField))
        _sfAttributeAffected.syncWith(pOther->_sfAttributeAffected);

    if(FieldBits::NoField != (PerlinDistributionFieldMask & whichField))
        _sfPerlinDistribution.syncWith(pOther->_sfPerlinDistribution);

    if(FieldBits::NoField != (AmplitudeFieldMask & whichField))
        _sfAmplitude.syncWith(pOther->_sfAmplitude);

    if(FieldBits::NoField != (InterpolationTypeFieldMask & whichField))
        _sfInterpolationType.syncWith(pOther->_sfInterpolationType);

    if(FieldBits::NoField != (PhaseFieldMask & whichField))
        _sfPhase.syncWith(pOther->_sfPhase);

    if(FieldBits::NoField != (PersistanceFieldMask & whichField))
        _sfPersistance.syncWith(pOther->_sfPersistance);

    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
        _sfFrequency.syncWith(pOther->_sfFrequency);

    if(FieldBits::NoField != (OctavesFieldMask & whichField))
        _sfOctaves.syncWith(pOther->_sfOctaves);



}

void RandomMovementParticleAffectorBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<RandomMovementParticleAffectorPtr>::_type("RandomMovementParticleAffectorPtr", "ParticleAffectorPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(RandomMovementParticleAffectorPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(RandomMovementParticleAffectorPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

