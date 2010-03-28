/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class RandomMovementParticleAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"


#include "Distributions/1D/OSGPerlinNoiseDistribution1D.h"   // InterpolationType default header

#include "OSGPerlinNoiseDistribution1D.h" // PerlinDistribution Class

#include "OSGRandomMovementParticleAffectorBase.h"
#include "OSGRandomMovementParticleAffector.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::RandomMovementParticleAffector
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt32          RandomMovementParticleAffectorBase::_sfAttributeAffected
    
*/

/*! \var PerlinNoiseDistribution1D * RandomMovementParticleAffectorBase::_sfPerlinDistribution
    
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


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<RandomMovementParticleAffector *>::_type("RandomMovementParticleAffectorPtr", "ParticleAffectorPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(RandomMovementParticleAffector *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           RandomMovementParticleAffector *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           RandomMovementParticleAffector *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void RandomMovementParticleAffectorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "AttributeAffected",
        "",
        AttributeAffectedFieldId, AttributeAffectedFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RandomMovementParticleAffector::editHandleAttributeAffected),
        static_cast<FieldGetMethodSig >(&RandomMovementParticleAffector::getHandleAttributeAffected));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecPerlinNoiseDistribution1DPtr::Description(
        SFUnrecPerlinNoiseDistribution1DPtr::getClassType(),
        "PerlinDistribution",
        "",
        PerlinDistributionFieldId, PerlinDistributionFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RandomMovementParticleAffector::editHandlePerlinDistribution),
        static_cast<FieldGetMethodSig >(&RandomMovementParticleAffector::getHandlePerlinDistribution));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Amplitude",
        "",
        AmplitudeFieldId, AmplitudeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RandomMovementParticleAffector::editHandleAmplitude),
        static_cast<FieldGetMethodSig >(&RandomMovementParticleAffector::getHandleAmplitude));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "InterpolationType",
        "",
        InterpolationTypeFieldId, InterpolationTypeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RandomMovementParticleAffector::editHandleInterpolationType),
        static_cast<FieldGetMethodSig >(&RandomMovementParticleAffector::getHandleInterpolationType));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "Phase",
        "",
        PhaseFieldId, PhaseFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RandomMovementParticleAffector::editHandlePhase),
        static_cast<FieldGetMethodSig >(&RandomMovementParticleAffector::getHandlePhase));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Persistance",
        "",
        PersistanceFieldId, PersistanceFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RandomMovementParticleAffector::editHandlePersistance),
        static_cast<FieldGetMethodSig >(&RandomMovementParticleAffector::getHandlePersistance));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Frequency",
        "",
        FrequencyFieldId, FrequencyFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RandomMovementParticleAffector::editHandleFrequency),
        static_cast<FieldGetMethodSig >(&RandomMovementParticleAffector::getHandleFrequency));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "Octaves",
        "",
        OctavesFieldId, OctavesFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RandomMovementParticleAffector::editHandleOctaves),
        static_cast<FieldGetMethodSig >(&RandomMovementParticleAffector::getHandleOctaves));

    oType.addInitialDesc(pDesc);
}


RandomMovementParticleAffectorBase::TypeObject RandomMovementParticleAffectorBase::_type(
    RandomMovementParticleAffectorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&RandomMovementParticleAffectorBase::createEmptyLocal),
    RandomMovementParticleAffector::initMethod,
    RandomMovementParticleAffector::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&RandomMovementParticleAffector::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"RandomMovementParticleAffector\"\n"
    "\tparent=\"ParticleAffector\"\n"
    "    library=\"ContribParticleSystem\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com), Daniel Guilliams           \"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"AttributeAffected\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"RandomMovementParticleAffector::POSITION_ATTRIBUTE\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"PerlinDistribution\"\n"
    "\t\ttype=\"PerlinNoiseDistribution1D\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Amplitude\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"3.000\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"InterpolationType\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"PerlinNoiseDistribution1D::LINEAR\"\n"
    "\t\tdefaultHeader=\"Distributions/1D/OSGPerlinNoiseDistribution1D.h\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\t\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Phase\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"0.0,0.0,0.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Persistance\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"0.25f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Frequency\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"1.0f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Octaves\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"4\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &RandomMovementParticleAffectorBase::getType(void)
{
    return _type;
}

const FieldContainerType &RandomMovementParticleAffectorBase::getType(void) const
{
    return _type;
}

UInt32 RandomMovementParticleAffectorBase::getContainerSize(void) const
{
    return sizeof(RandomMovementParticleAffector);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *RandomMovementParticleAffectorBase::editSFAttributeAffected(void)
{
    editSField(AttributeAffectedFieldMask);

    return &_sfAttributeAffected;
}

const SFUInt32 *RandomMovementParticleAffectorBase::getSFAttributeAffected(void) const
{
    return &_sfAttributeAffected;
}


//! Get the RandomMovementParticleAffector::_sfPerlinDistribution field.
const SFUnrecPerlinNoiseDistribution1DPtr *RandomMovementParticleAffectorBase::getSFPerlinDistribution(void) const
{
    return &_sfPerlinDistribution;
}

SFUnrecPerlinNoiseDistribution1DPtr *RandomMovementParticleAffectorBase::editSFPerlinDistribution(void)
{
    editSField(PerlinDistributionFieldMask);

    return &_sfPerlinDistribution;
}

SFReal32 *RandomMovementParticleAffectorBase::editSFAmplitude(void)
{
    editSField(AmplitudeFieldMask);

    return &_sfAmplitude;
}

const SFReal32 *RandomMovementParticleAffectorBase::getSFAmplitude(void) const
{
    return &_sfAmplitude;
}


SFUInt32 *RandomMovementParticleAffectorBase::editSFInterpolationType(void)
{
    editSField(InterpolationTypeFieldMask);

    return &_sfInterpolationType;
}

const SFUInt32 *RandomMovementParticleAffectorBase::getSFInterpolationType(void) const
{
    return &_sfInterpolationType;
}


SFVec3f *RandomMovementParticleAffectorBase::editSFPhase(void)
{
    editSField(PhaseFieldMask);

    return &_sfPhase;
}

const SFVec3f *RandomMovementParticleAffectorBase::getSFPhase(void) const
{
    return &_sfPhase;
}


SFReal32 *RandomMovementParticleAffectorBase::editSFPersistance(void)
{
    editSField(PersistanceFieldMask);

    return &_sfPersistance;
}

const SFReal32 *RandomMovementParticleAffectorBase::getSFPersistance(void) const
{
    return &_sfPersistance;
}


SFReal32 *RandomMovementParticleAffectorBase::editSFFrequency(void)
{
    editSField(FrequencyFieldMask);

    return &_sfFrequency;
}

const SFReal32 *RandomMovementParticleAffectorBase::getSFFrequency(void) const
{
    return &_sfFrequency;
}


SFUInt32 *RandomMovementParticleAffectorBase::editSFOctaves(void)
{
    editSField(OctavesFieldMask);

    return &_sfOctaves;
}

const SFUInt32 *RandomMovementParticleAffectorBase::getSFOctaves(void) const
{
    return &_sfOctaves;
}






/*------------------------------ access -----------------------------------*/

UInt32 RandomMovementParticleAffectorBase::getBinSize(ConstFieldMaskArg whichField)
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

void RandomMovementParticleAffectorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
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

void RandomMovementParticleAffectorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
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

//! create a new instance of the class
RandomMovementParticleAffectorTransitPtr RandomMovementParticleAffectorBase::createLocal(BitVector bFlags)
{
    RandomMovementParticleAffectorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<RandomMovementParticleAffector>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
RandomMovementParticleAffectorTransitPtr RandomMovementParticleAffectorBase::createDependent(BitVector bFlags)
{
    RandomMovementParticleAffectorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<RandomMovementParticleAffector>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
RandomMovementParticleAffectorTransitPtr RandomMovementParticleAffectorBase::create(void)
{
    RandomMovementParticleAffectorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<RandomMovementParticleAffector>(tmpPtr);
    }

    return fc;
}

RandomMovementParticleAffector *RandomMovementParticleAffectorBase::createEmptyLocal(BitVector bFlags)
{
    RandomMovementParticleAffector *returnValue;

    newPtr<RandomMovementParticleAffector>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
RandomMovementParticleAffector *RandomMovementParticleAffectorBase::createEmpty(void)
{
    RandomMovementParticleAffector *returnValue;

    newPtr<RandomMovementParticleAffector>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr RandomMovementParticleAffectorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    RandomMovementParticleAffector *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RandomMovementParticleAffector *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr RandomMovementParticleAffectorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    RandomMovementParticleAffector *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RandomMovementParticleAffector *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr RandomMovementParticleAffectorBase::shallowCopy(void) const
{
    RandomMovementParticleAffector *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const RandomMovementParticleAffector *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

RandomMovementParticleAffectorBase::RandomMovementParticleAffectorBase(void) :
    Inherited(),
    _sfAttributeAffected      (UInt32(RandomMovementParticleAffector::POSITION_ATTRIBUTE)),
    _sfPerlinDistribution     (NULL),
    _sfAmplitude              (Real32(3.000)),
    _sfInterpolationType      (UInt32(PerlinNoiseDistribution1D::LINEAR)),
    _sfPhase                  (Vec3f(0.0,0.0,0.0)),
    _sfPersistance            (Real32(0.25f)),
    _sfFrequency              (Real32(1.0f)),
    _sfOctaves                (UInt32(4))
{
}

RandomMovementParticleAffectorBase::RandomMovementParticleAffectorBase(const RandomMovementParticleAffectorBase &source) :
    Inherited(source),
    _sfAttributeAffected      (source._sfAttributeAffected      ),
    _sfPerlinDistribution     (NULL),
    _sfAmplitude              (source._sfAmplitude              ),
    _sfInterpolationType      (source._sfInterpolationType      ),
    _sfPhase                  (source._sfPhase                  ),
    _sfPersistance            (source._sfPersistance            ),
    _sfFrequency              (source._sfFrequency              ),
    _sfOctaves                (source._sfOctaves                )
{
}


/*-------------------------- destructors ----------------------------------*/

RandomMovementParticleAffectorBase::~RandomMovementParticleAffectorBase(void)
{
}

void RandomMovementParticleAffectorBase::onCreate(const RandomMovementParticleAffector *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        RandomMovementParticleAffector *pThis = static_cast<RandomMovementParticleAffector *>(this);

        pThis->setPerlinDistribution(source->getPerlinDistribution());
    }
}

GetFieldHandlePtr RandomMovementParticleAffectorBase::getHandleAttributeAffected (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfAttributeAffected,
             this->getType().getFieldDesc(AttributeAffectedFieldId),
             const_cast<RandomMovementParticleAffectorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RandomMovementParticleAffectorBase::editHandleAttributeAffected(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfAttributeAffected,
             this->getType().getFieldDesc(AttributeAffectedFieldId),
             this));


    editSField(AttributeAffectedFieldMask);

    return returnValue;
}

GetFieldHandlePtr RandomMovementParticleAffectorBase::getHandlePerlinDistribution (void) const
{
    SFUnrecPerlinNoiseDistribution1DPtr::GetHandlePtr returnValue(
        new  SFUnrecPerlinNoiseDistribution1DPtr::GetHandle(
             &_sfPerlinDistribution,
             this->getType().getFieldDesc(PerlinDistributionFieldId),
             const_cast<RandomMovementParticleAffectorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RandomMovementParticleAffectorBase::editHandlePerlinDistribution(void)
{
    SFUnrecPerlinNoiseDistribution1DPtr::EditHandlePtr returnValue(
        new  SFUnrecPerlinNoiseDistribution1DPtr::EditHandle(
             &_sfPerlinDistribution,
             this->getType().getFieldDesc(PerlinDistributionFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&RandomMovementParticleAffector::setPerlinDistribution,
                    static_cast<RandomMovementParticleAffector *>(this), _1));

    editSField(PerlinDistributionFieldMask);

    return returnValue;
}

GetFieldHandlePtr RandomMovementParticleAffectorBase::getHandleAmplitude       (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfAmplitude,
             this->getType().getFieldDesc(AmplitudeFieldId),
             const_cast<RandomMovementParticleAffectorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RandomMovementParticleAffectorBase::editHandleAmplitude      (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfAmplitude,
             this->getType().getFieldDesc(AmplitudeFieldId),
             this));


    editSField(AmplitudeFieldMask);

    return returnValue;
}

GetFieldHandlePtr RandomMovementParticleAffectorBase::getHandleInterpolationType (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfInterpolationType,
             this->getType().getFieldDesc(InterpolationTypeFieldId),
             const_cast<RandomMovementParticleAffectorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RandomMovementParticleAffectorBase::editHandleInterpolationType(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfInterpolationType,
             this->getType().getFieldDesc(InterpolationTypeFieldId),
             this));


    editSField(InterpolationTypeFieldMask);

    return returnValue;
}

GetFieldHandlePtr RandomMovementParticleAffectorBase::getHandlePhase           (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfPhase,
             this->getType().getFieldDesc(PhaseFieldId),
             const_cast<RandomMovementParticleAffectorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RandomMovementParticleAffectorBase::editHandlePhase          (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfPhase,
             this->getType().getFieldDesc(PhaseFieldId),
             this));


    editSField(PhaseFieldMask);

    return returnValue;
}

GetFieldHandlePtr RandomMovementParticleAffectorBase::getHandlePersistance     (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfPersistance,
             this->getType().getFieldDesc(PersistanceFieldId),
             const_cast<RandomMovementParticleAffectorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RandomMovementParticleAffectorBase::editHandlePersistance    (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfPersistance,
             this->getType().getFieldDesc(PersistanceFieldId),
             this));


    editSField(PersistanceFieldMask);

    return returnValue;
}

GetFieldHandlePtr RandomMovementParticleAffectorBase::getHandleFrequency       (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfFrequency,
             this->getType().getFieldDesc(FrequencyFieldId),
             const_cast<RandomMovementParticleAffectorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RandomMovementParticleAffectorBase::editHandleFrequency      (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfFrequency,
             this->getType().getFieldDesc(FrequencyFieldId),
             this));


    editSField(FrequencyFieldMask);

    return returnValue;
}

GetFieldHandlePtr RandomMovementParticleAffectorBase::getHandleOctaves         (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfOctaves,
             this->getType().getFieldDesc(OctavesFieldId),
             const_cast<RandomMovementParticleAffectorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RandomMovementParticleAffectorBase::editHandleOctaves        (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfOctaves,
             this->getType().getFieldDesc(OctavesFieldId),
             this));


    editSField(OctavesFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void RandomMovementParticleAffectorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    RandomMovementParticleAffector *pThis = static_cast<RandomMovementParticleAffector *>(this);

    pThis->execSync(static_cast<RandomMovementParticleAffector *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *RandomMovementParticleAffectorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    RandomMovementParticleAffector *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const RandomMovementParticleAffector *>(pRefAspect),
                  dynamic_cast<const RandomMovementParticleAffector *>(this));

    return returnValue;
}
#endif

void RandomMovementParticleAffectorBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<RandomMovementParticleAffector *>(this)->setPerlinDistribution(NULL);


}


OSG_END_NAMESPACE
