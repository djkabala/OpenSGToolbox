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
 **     class PerlinNoiseDistribution3D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGPerlinNoiseDistribution3DBase.h"
#include "OSGPerlinNoiseDistribution3D.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PerlinNoiseDistribution3D
    A PerlinNoiseDistribution3D.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Real32          PerlinNoiseDistribution3DBase::_sfFrequency
    
*/

/*! \var Real32          PerlinNoiseDistribution3DBase::_sfPersistance
    
*/

/*! \var UInt32          PerlinNoiseDistribution3DBase::_sfOctaves
    
*/

/*! \var Real32          PerlinNoiseDistribution3DBase::_sfAmplitude
    
*/

/*! \var UInt32          PerlinNoiseDistribution3DBase::_sfInterpolationType
    This enum is used to determine the interpolation method used for the distribution
    COSINE uses cosine interpolation
    LINEAR uses linear interpolation    
*/

/*! \var Vec3f           PerlinNoiseDistribution3DBase::_sfPhase
    
*/

/*! \var bool            PerlinNoiseDistribution3DBase::_sfUseSmoothing
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PerlinNoiseDistribution3D *>::_type("PerlinNoiseDistribution3DPtr", "Distribution3DPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PerlinNoiseDistribution3D *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           PerlinNoiseDistribution3D *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           PerlinNoiseDistribution3D *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void PerlinNoiseDistribution3DBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Frequency",
        "",
        FrequencyFieldId, FrequencyFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PerlinNoiseDistribution3D::editHandleFrequency),
        static_cast<FieldGetMethodSig >(&PerlinNoiseDistribution3D::getHandleFrequency));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Persistance",
        "",
        PersistanceFieldId, PersistanceFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PerlinNoiseDistribution3D::editHandlePersistance),
        static_cast<FieldGetMethodSig >(&PerlinNoiseDistribution3D::getHandlePersistance));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "Octaves",
        "",
        OctavesFieldId, OctavesFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PerlinNoiseDistribution3D::editHandleOctaves),
        static_cast<FieldGetMethodSig >(&PerlinNoiseDistribution3D::getHandleOctaves));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "Amplitude",
        "",
        AmplitudeFieldId, AmplitudeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PerlinNoiseDistribution3D::editHandleAmplitude),
        static_cast<FieldGetMethodSig >(&PerlinNoiseDistribution3D::getHandleAmplitude));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "InterpolationType",
        "This enum is used to determine the interpolation method used for the distribution\n"
        "COSINE uses cosine interpolation\n"
        "LINEAR uses linear interpolation\t\n",
        InterpolationTypeFieldId, InterpolationTypeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PerlinNoiseDistribution3D::editHandleInterpolationType),
        static_cast<FieldGetMethodSig >(&PerlinNoiseDistribution3D::getHandleInterpolationType));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec3f::Description(
        SFVec3f::getClassType(),
        "Phase",
        "",
        PhaseFieldId, PhaseFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PerlinNoiseDistribution3D::editHandlePhase),
        static_cast<FieldGetMethodSig >(&PerlinNoiseDistribution3D::getHandlePhase));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "UseSmoothing",
        "",
        UseSmoothingFieldId, UseSmoothingFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PerlinNoiseDistribution3D::editHandleUseSmoothing),
        static_cast<FieldGetMethodSig >(&PerlinNoiseDistribution3D::getHandleUseSmoothing));

    oType.addInitialDesc(pDesc);
}


PerlinNoiseDistribution3DBase::TypeObject PerlinNoiseDistribution3DBase::_type(
    PerlinNoiseDistribution3DBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&PerlinNoiseDistribution3DBase::createEmptyLocal),
    PerlinNoiseDistribution3D::initMethod,
    PerlinNoiseDistribution3D::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&PerlinNoiseDistribution3D::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PerlinNoiseDistribution3D\"\n"
    "\tparent=\"Distribution3D\"\n"
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
    "A PerlinNoiseDistribution3D.\n"
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
    "\t\tname=\"Persistance\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"0.25\"\n"
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
    "\t<Field\n"
    "\t\tname=\"Amplitude\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"1.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"InterpolationType\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"PerlinNoiseDistribution3D::COSINE\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThis enum is used to determine the interpolation method used for the distribution\n"
    "\tCOSINE uses cosine interpolation\n"
    "\tLINEAR uses linear interpolation\t\n"
    "\t</Field>\n"
    "\t\t<Field\n"
    "\t\tname=\"Phase\"\n"
    "\t\ttype=\"Vec3f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"0.0f,0.0f,0.0f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"UseSmoothing\"\n"
    "\t\ttype=\"bool\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "A PerlinNoiseDistribution3D.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PerlinNoiseDistribution3DBase::getType(void)
{
    return _type;
}

const FieldContainerType &PerlinNoiseDistribution3DBase::getType(void) const
{
    return _type;
}

UInt32 PerlinNoiseDistribution3DBase::getContainerSize(void) const
{
    return sizeof(PerlinNoiseDistribution3D);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *PerlinNoiseDistribution3DBase::editSFFrequency(void)
{
    editSField(FrequencyFieldMask);

    return &_sfFrequency;
}

const SFReal32 *PerlinNoiseDistribution3DBase::getSFFrequency(void) const
{
    return &_sfFrequency;
}


SFReal32 *PerlinNoiseDistribution3DBase::editSFPersistance(void)
{
    editSField(PersistanceFieldMask);

    return &_sfPersistance;
}

const SFReal32 *PerlinNoiseDistribution3DBase::getSFPersistance(void) const
{
    return &_sfPersistance;
}


SFUInt32 *PerlinNoiseDistribution3DBase::editSFOctaves(void)
{
    editSField(OctavesFieldMask);

    return &_sfOctaves;
}

const SFUInt32 *PerlinNoiseDistribution3DBase::getSFOctaves(void) const
{
    return &_sfOctaves;
}


SFReal32 *PerlinNoiseDistribution3DBase::editSFAmplitude(void)
{
    editSField(AmplitudeFieldMask);

    return &_sfAmplitude;
}

const SFReal32 *PerlinNoiseDistribution3DBase::getSFAmplitude(void) const
{
    return &_sfAmplitude;
}


SFUInt32 *PerlinNoiseDistribution3DBase::editSFInterpolationType(void)
{
    editSField(InterpolationTypeFieldMask);

    return &_sfInterpolationType;
}

const SFUInt32 *PerlinNoiseDistribution3DBase::getSFInterpolationType(void) const
{
    return &_sfInterpolationType;
}


SFVec3f *PerlinNoiseDistribution3DBase::editSFPhase(void)
{
    editSField(PhaseFieldMask);

    return &_sfPhase;
}

const SFVec3f *PerlinNoiseDistribution3DBase::getSFPhase(void) const
{
    return &_sfPhase;
}


SFBool *PerlinNoiseDistribution3DBase::editSFUseSmoothing(void)
{
    editSField(UseSmoothingFieldMask);

    return &_sfUseSmoothing;
}

const SFBool *PerlinNoiseDistribution3DBase::getSFUseSmoothing(void) const
{
    return &_sfUseSmoothing;
}






/*------------------------------ access -----------------------------------*/

UInt32 PerlinNoiseDistribution3DBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
    {
        returnValue += _sfFrequency.getBinSize();
    }
    if(FieldBits::NoField != (PersistanceFieldMask & whichField))
    {
        returnValue += _sfPersistance.getBinSize();
    }
    if(FieldBits::NoField != (OctavesFieldMask & whichField))
    {
        returnValue += _sfOctaves.getBinSize();
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
    if(FieldBits::NoField != (UseSmoothingFieldMask & whichField))
    {
        returnValue += _sfUseSmoothing.getBinSize();
    }

    return returnValue;
}

void PerlinNoiseDistribution3DBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
    {
        _sfFrequency.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PersistanceFieldMask & whichField))
    {
        _sfPersistance.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OctavesFieldMask & whichField))
    {
        _sfOctaves.copyToBin(pMem);
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
    if(FieldBits::NoField != (UseSmoothingFieldMask & whichField))
    {
        _sfUseSmoothing.copyToBin(pMem);
    }
}

void PerlinNoiseDistribution3DBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FrequencyFieldMask & whichField))
    {
        _sfFrequency.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PersistanceFieldMask & whichField))
    {
        _sfPersistance.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OctavesFieldMask & whichField))
    {
        _sfOctaves.copyFromBin(pMem);
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
    if(FieldBits::NoField != (UseSmoothingFieldMask & whichField))
    {
        _sfUseSmoothing.copyFromBin(pMem);
    }
}

//! create a new instance of the class
PerlinNoiseDistribution3DTransitPtr PerlinNoiseDistribution3DBase::createLocal(BitVector bFlags)
{
    PerlinNoiseDistribution3DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PerlinNoiseDistribution3D>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
PerlinNoiseDistribution3DTransitPtr PerlinNoiseDistribution3DBase::createDependent(BitVector bFlags)
{
    PerlinNoiseDistribution3DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<PerlinNoiseDistribution3D>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PerlinNoiseDistribution3DTransitPtr PerlinNoiseDistribution3DBase::create(void)
{
    PerlinNoiseDistribution3DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PerlinNoiseDistribution3D>(tmpPtr);
    }

    return fc;
}

PerlinNoiseDistribution3D *PerlinNoiseDistribution3DBase::createEmptyLocal(BitVector bFlags)
{
    PerlinNoiseDistribution3D *returnValue;

    newPtr<PerlinNoiseDistribution3D>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
PerlinNoiseDistribution3D *PerlinNoiseDistribution3DBase::createEmpty(void)
{
    PerlinNoiseDistribution3D *returnValue;

    newPtr<PerlinNoiseDistribution3D>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr PerlinNoiseDistribution3DBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PerlinNoiseDistribution3D *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PerlinNoiseDistribution3D *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PerlinNoiseDistribution3DBase::shallowCopyDependent(
    BitVector bFlags) const
{
    PerlinNoiseDistribution3D *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PerlinNoiseDistribution3D *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr PerlinNoiseDistribution3DBase::shallowCopy(void) const
{
    PerlinNoiseDistribution3D *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const PerlinNoiseDistribution3D *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

PerlinNoiseDistribution3DBase::PerlinNoiseDistribution3DBase(void) :
    Inherited(),
    _sfFrequency              (Real32(1.0f)),
    _sfPersistance            (Real32(0.25)),
    _sfOctaves                (UInt32(4)),
    _sfAmplitude              (Real32(1.0)),
    _sfInterpolationType      (UInt32(PerlinNoiseDistribution3D::COSINE)),
    _sfPhase                  (Vec3f(0.0f,0.0f,0.0f)),
    _sfUseSmoothing           (bool(true))
{
}

PerlinNoiseDistribution3DBase::PerlinNoiseDistribution3DBase(const PerlinNoiseDistribution3DBase &source) :
    Inherited(source),
    _sfFrequency              (source._sfFrequency              ),
    _sfPersistance            (source._sfPersistance            ),
    _sfOctaves                (source._sfOctaves                ),
    _sfAmplitude              (source._sfAmplitude              ),
    _sfInterpolationType      (source._sfInterpolationType      ),
    _sfPhase                  (source._sfPhase                  ),
    _sfUseSmoothing           (source._sfUseSmoothing           )
{
}


/*-------------------------- destructors ----------------------------------*/

PerlinNoiseDistribution3DBase::~PerlinNoiseDistribution3DBase(void)
{
}


GetFieldHandlePtr PerlinNoiseDistribution3DBase::getHandleFrequency       (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfFrequency,
             this->getType().getFieldDesc(FrequencyFieldId),
             const_cast<PerlinNoiseDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PerlinNoiseDistribution3DBase::editHandleFrequency      (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfFrequency,
             this->getType().getFieldDesc(FrequencyFieldId),
             this));


    editSField(FrequencyFieldMask);

    return returnValue;
}

GetFieldHandlePtr PerlinNoiseDistribution3DBase::getHandlePersistance     (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfPersistance,
             this->getType().getFieldDesc(PersistanceFieldId),
             const_cast<PerlinNoiseDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PerlinNoiseDistribution3DBase::editHandlePersistance    (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfPersistance,
             this->getType().getFieldDesc(PersistanceFieldId),
             this));


    editSField(PersistanceFieldMask);

    return returnValue;
}

GetFieldHandlePtr PerlinNoiseDistribution3DBase::getHandleOctaves         (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfOctaves,
             this->getType().getFieldDesc(OctavesFieldId),
             const_cast<PerlinNoiseDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PerlinNoiseDistribution3DBase::editHandleOctaves        (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfOctaves,
             this->getType().getFieldDesc(OctavesFieldId),
             this));


    editSField(OctavesFieldMask);

    return returnValue;
}

GetFieldHandlePtr PerlinNoiseDistribution3DBase::getHandleAmplitude       (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfAmplitude,
             this->getType().getFieldDesc(AmplitudeFieldId),
             const_cast<PerlinNoiseDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PerlinNoiseDistribution3DBase::editHandleAmplitude      (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfAmplitude,
             this->getType().getFieldDesc(AmplitudeFieldId),
             this));


    editSField(AmplitudeFieldMask);

    return returnValue;
}

GetFieldHandlePtr PerlinNoiseDistribution3DBase::getHandleInterpolationType (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfInterpolationType,
             this->getType().getFieldDesc(InterpolationTypeFieldId),
             const_cast<PerlinNoiseDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PerlinNoiseDistribution3DBase::editHandleInterpolationType(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfInterpolationType,
             this->getType().getFieldDesc(InterpolationTypeFieldId),
             this));


    editSField(InterpolationTypeFieldMask);

    return returnValue;
}

GetFieldHandlePtr PerlinNoiseDistribution3DBase::getHandlePhase           (void) const
{
    SFVec3f::GetHandlePtr returnValue(
        new  SFVec3f::GetHandle(
             &_sfPhase,
             this->getType().getFieldDesc(PhaseFieldId),
             const_cast<PerlinNoiseDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PerlinNoiseDistribution3DBase::editHandlePhase          (void)
{
    SFVec3f::EditHandlePtr returnValue(
        new  SFVec3f::EditHandle(
             &_sfPhase,
             this->getType().getFieldDesc(PhaseFieldId),
             this));


    editSField(PhaseFieldMask);

    return returnValue;
}

GetFieldHandlePtr PerlinNoiseDistribution3DBase::getHandleUseSmoothing    (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfUseSmoothing,
             this->getType().getFieldDesc(UseSmoothingFieldId),
             const_cast<PerlinNoiseDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr PerlinNoiseDistribution3DBase::editHandleUseSmoothing   (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfUseSmoothing,
             this->getType().getFieldDesc(UseSmoothingFieldId),
             this));


    editSField(UseSmoothingFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void PerlinNoiseDistribution3DBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    PerlinNoiseDistribution3D *pThis = static_cast<PerlinNoiseDistribution3D *>(this);

    pThis->execSync(static_cast<PerlinNoiseDistribution3D *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PerlinNoiseDistribution3DBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    PerlinNoiseDistribution3D *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PerlinNoiseDistribution3D *>(pRefAspect),
                  dynamic_cast<const PerlinNoiseDistribution3D *>(this));

    return returnValue;
}
#endif

void PerlinNoiseDistribution3DBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
