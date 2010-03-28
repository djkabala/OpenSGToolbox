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
 **     class RateParticleGenerator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGRateParticleGeneratorBase.h"
#include "OSGRateParticleGenerator.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::RateParticleGenerator
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Real32          RateParticleGeneratorBase::_sfGenerationRate
    
*/

/*! \var Real32          RateParticleGeneratorBase::_sfTimeSinceLastGeneration
    
*/

/*! \var Real32          RateParticleGeneratorBase::_sfRateSpread
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<RateParticleGenerator *>::_type("RateParticleGeneratorPtr", "DynamicsParticleGeneratorPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(RateParticleGenerator *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           RateParticleGenerator *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           RateParticleGenerator *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void RateParticleGeneratorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "GenerationRate",
        "",
        GenerationRateFieldId, GenerationRateFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RateParticleGenerator::editHandleGenerationRate),
        static_cast<FieldGetMethodSig >(&RateParticleGenerator::getHandleGenerationRate));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "TimeSinceLastGeneration",
        "",
        TimeSinceLastGenerationFieldId, TimeSinceLastGenerationFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RateParticleGenerator::editHandleTimeSinceLastGeneration),
        static_cast<FieldGetMethodSig >(&RateParticleGenerator::getHandleTimeSinceLastGeneration));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "RateSpread",
        "",
        RateSpreadFieldId, RateSpreadFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&RateParticleGenerator::editHandleRateSpread),
        static_cast<FieldGetMethodSig >(&RateParticleGenerator::getHandleRateSpread));

    oType.addInitialDesc(pDesc);
}


RateParticleGeneratorBase::TypeObject RateParticleGeneratorBase::_type(
    RateParticleGeneratorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&RateParticleGeneratorBase::createEmptyLocal),
    RateParticleGenerator::initMethod,
    RateParticleGenerator::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&RateParticleGenerator::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"RateParticleGenerator\"\n"
    "\tparent=\"DynamicsParticleGenerator\"\n"
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
    "\t\tname=\"GenerationRate\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"1.0f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"TimeSinceLastGeneration\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"0.0f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "    <Field\n"
    "\t\tname=\"RateSpread\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t\tdefaultValue=\"0.0f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &RateParticleGeneratorBase::getType(void)
{
    return _type;
}

const FieldContainerType &RateParticleGeneratorBase::getType(void) const
{
    return _type;
}

UInt32 RateParticleGeneratorBase::getContainerSize(void) const
{
    return sizeof(RateParticleGenerator);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *RateParticleGeneratorBase::editSFGenerationRate(void)
{
    editSField(GenerationRateFieldMask);

    return &_sfGenerationRate;
}

const SFReal32 *RateParticleGeneratorBase::getSFGenerationRate(void) const
{
    return &_sfGenerationRate;
}


SFReal32 *RateParticleGeneratorBase::editSFTimeSinceLastGeneration(void)
{
    editSField(TimeSinceLastGenerationFieldMask);

    return &_sfTimeSinceLastGeneration;
}

const SFReal32 *RateParticleGeneratorBase::getSFTimeSinceLastGeneration(void) const
{
    return &_sfTimeSinceLastGeneration;
}


SFReal32 *RateParticleGeneratorBase::editSFRateSpread(void)
{
    editSField(RateSpreadFieldMask);

    return &_sfRateSpread;
}

const SFReal32 *RateParticleGeneratorBase::getSFRateSpread(void) const
{
    return &_sfRateSpread;
}






/*------------------------------ access -----------------------------------*/

UInt32 RateParticleGeneratorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (GenerationRateFieldMask & whichField))
    {
        returnValue += _sfGenerationRate.getBinSize();
    }
    if(FieldBits::NoField != (TimeSinceLastGenerationFieldMask & whichField))
    {
        returnValue += _sfTimeSinceLastGeneration.getBinSize();
    }
    if(FieldBits::NoField != (RateSpreadFieldMask & whichField))
    {
        returnValue += _sfRateSpread.getBinSize();
    }

    return returnValue;
}

void RateParticleGeneratorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (GenerationRateFieldMask & whichField))
    {
        _sfGenerationRate.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TimeSinceLastGenerationFieldMask & whichField))
    {
        _sfTimeSinceLastGeneration.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RateSpreadFieldMask & whichField))
    {
        _sfRateSpread.copyToBin(pMem);
    }
}

void RateParticleGeneratorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (GenerationRateFieldMask & whichField))
    {
        _sfGenerationRate.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TimeSinceLastGenerationFieldMask & whichField))
    {
        _sfTimeSinceLastGeneration.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RateSpreadFieldMask & whichField))
    {
        _sfRateSpread.copyFromBin(pMem);
    }
}

//! create a new instance of the class
RateParticleGeneratorTransitPtr RateParticleGeneratorBase::createLocal(BitVector bFlags)
{
    RateParticleGeneratorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<RateParticleGenerator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
RateParticleGeneratorTransitPtr RateParticleGeneratorBase::createDependent(BitVector bFlags)
{
    RateParticleGeneratorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<RateParticleGenerator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
RateParticleGeneratorTransitPtr RateParticleGeneratorBase::create(void)
{
    RateParticleGeneratorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<RateParticleGenerator>(tmpPtr);
    }

    return fc;
}

RateParticleGenerator *RateParticleGeneratorBase::createEmptyLocal(BitVector bFlags)
{
    RateParticleGenerator *returnValue;

    newPtr<RateParticleGenerator>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
RateParticleGenerator *RateParticleGeneratorBase::createEmpty(void)
{
    RateParticleGenerator *returnValue;

    newPtr<RateParticleGenerator>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr RateParticleGeneratorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    RateParticleGenerator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RateParticleGenerator *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr RateParticleGeneratorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    RateParticleGenerator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const RateParticleGenerator *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr RateParticleGeneratorBase::shallowCopy(void) const
{
    RateParticleGenerator *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const RateParticleGenerator *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

RateParticleGeneratorBase::RateParticleGeneratorBase(void) :
    Inherited(),
    _sfGenerationRate         (Real32(1.0f)),
    _sfTimeSinceLastGeneration(Real32(0.0f)),
    _sfRateSpread             (Real32(0.0f))
{
}

RateParticleGeneratorBase::RateParticleGeneratorBase(const RateParticleGeneratorBase &source) :
    Inherited(source),
    _sfGenerationRate         (source._sfGenerationRate         ),
    _sfTimeSinceLastGeneration(source._sfTimeSinceLastGeneration),
    _sfRateSpread             (source._sfRateSpread             )
{
}


/*-------------------------- destructors ----------------------------------*/

RateParticleGeneratorBase::~RateParticleGeneratorBase(void)
{
}


GetFieldHandlePtr RateParticleGeneratorBase::getHandleGenerationRate  (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfGenerationRate,
             this->getType().getFieldDesc(GenerationRateFieldId),
             const_cast<RateParticleGeneratorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RateParticleGeneratorBase::editHandleGenerationRate (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfGenerationRate,
             this->getType().getFieldDesc(GenerationRateFieldId),
             this));


    editSField(GenerationRateFieldMask);

    return returnValue;
}

GetFieldHandlePtr RateParticleGeneratorBase::getHandleTimeSinceLastGeneration (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfTimeSinceLastGeneration,
             this->getType().getFieldDesc(TimeSinceLastGenerationFieldId),
             const_cast<RateParticleGeneratorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RateParticleGeneratorBase::editHandleTimeSinceLastGeneration(void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfTimeSinceLastGeneration,
             this->getType().getFieldDesc(TimeSinceLastGenerationFieldId),
             this));


    editSField(TimeSinceLastGenerationFieldMask);

    return returnValue;
}

GetFieldHandlePtr RateParticleGeneratorBase::getHandleRateSpread      (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfRateSpread,
             this->getType().getFieldDesc(RateSpreadFieldId),
             const_cast<RateParticleGeneratorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr RateParticleGeneratorBase::editHandleRateSpread     (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfRateSpread,
             this->getType().getFieldDesc(RateSpreadFieldId),
             this));


    editSField(RateSpreadFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void RateParticleGeneratorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    RateParticleGenerator *pThis = static_cast<RateParticleGenerator *>(this);

    pThis->execSync(static_cast<RateParticleGenerator *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *RateParticleGeneratorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    RateParticleGenerator *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const RateParticleGenerator *>(pRefAspect),
                  dynamic_cast<const RateParticleGenerator *>(this));

    return returnValue;
}
#endif

void RateParticleGeneratorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
