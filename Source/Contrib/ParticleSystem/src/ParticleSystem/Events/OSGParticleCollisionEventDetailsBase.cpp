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
 **     class ParticleCollisionEventDetails!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGParticleSystem.h"          // PrimarySystem Class

#include "OSGParticleCollisionEventDetailsBase.h"
#include "OSGParticleCollisionEventDetails.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ParticleCollisionEventDetails
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var ParticleSystem * ParticleCollisionEventDetailsBase::_sfPrimarySystem
    
*/

/*! \var UInt32          ParticleCollisionEventDetailsBase::_sfPrimaryParticleIndex
    
*/

/*! \var ParticleSystem * ParticleCollisionEventDetailsBase::_sfSecondarySystem
    
*/

/*! \var UInt32          ParticleCollisionEventDetailsBase::_sfSecondaryParticleIndex
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ParticleCollisionEventDetails *>::_type("ParticleCollisionEventDetailsPtr", "EventDetailsPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ParticleCollisionEventDetails *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ParticleCollisionEventDetails *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ParticleCollisionEventDetails *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ParticleCollisionEventDetailsBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecParticleSystemPtr::Description(
        SFUnrecParticleSystemPtr::getClassType(),
        "PrimarySystem",
        "",
        PrimarySystemFieldId, PrimarySystemFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleCollisionEventDetails::editHandlePrimarySystem),
        static_cast<FieldGetMethodSig >(&ParticleCollisionEventDetails::getHandlePrimarySystem));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "PrimaryParticleIndex",
        "",
        PrimaryParticleIndexFieldId, PrimaryParticleIndexFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleCollisionEventDetails::editHandlePrimaryParticleIndex),
        static_cast<FieldGetMethodSig >(&ParticleCollisionEventDetails::getHandlePrimaryParticleIndex));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecParticleSystemPtr::Description(
        SFUnrecParticleSystemPtr::getClassType(),
        "SecondarySystem",
        "",
        SecondarySystemFieldId, SecondarySystemFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleCollisionEventDetails::editHandleSecondarySystem),
        static_cast<FieldGetMethodSig >(&ParticleCollisionEventDetails::getHandleSecondarySystem));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "SecondaryParticleIndex",
        "",
        SecondaryParticleIndexFieldId, SecondaryParticleIndexFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleCollisionEventDetails::editHandleSecondaryParticleIndex),
        static_cast<FieldGetMethodSig >(&ParticleCollisionEventDetails::getHandleSecondaryParticleIndex));

    oType.addInitialDesc(pDesc);
}


ParticleCollisionEventDetailsBase::TypeObject ParticleCollisionEventDetailsBase::_type(
    ParticleCollisionEventDetailsBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ParticleCollisionEventDetailsBase::createEmptyLocal),
    ParticleCollisionEventDetails::initMethod,
    ParticleCollisionEventDetails::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ParticleCollisionEventDetails::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ParticleCollisionEventDetails\"\n"
    "\tparent=\"EventDetails\"\n"
    "    library=\"ContribParticleSystem\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "\tsupportUnregisteredCreate=\"true\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"PrimarySystem\"\n"
    "\t\ttype=\"ParticleSystem\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "        defaultValue=\"NULL\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"PrimaryParticleIndex\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "        defaultValue=\"0\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"SecondarySystem\"\n"
    "\t\ttype=\"ParticleSystem\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "        defaultValue=\"NULL\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"SecondaryParticleIndex\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"protected\"\n"
    "        defaultValue=\"0\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ParticleCollisionEventDetailsBase::getType(void)
{
    return _type;
}

const FieldContainerType &ParticleCollisionEventDetailsBase::getType(void) const
{
    return _type;
}

UInt32 ParticleCollisionEventDetailsBase::getContainerSize(void) const
{
    return sizeof(ParticleCollisionEventDetails);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ParticleCollisionEventDetails::_sfPrimarySystem field.
const SFUnrecParticleSystemPtr *ParticleCollisionEventDetailsBase::getSFPrimarySystem(void) const
{
    return &_sfPrimarySystem;
}

SFUnrecParticleSystemPtr *ParticleCollisionEventDetailsBase::editSFPrimarySystem  (void)
{
    editSField(PrimarySystemFieldMask);

    return &_sfPrimarySystem;
}

SFUInt32 *ParticleCollisionEventDetailsBase::editSFPrimaryParticleIndex(void)
{
    editSField(PrimaryParticleIndexFieldMask);

    return &_sfPrimaryParticleIndex;
}

const SFUInt32 *ParticleCollisionEventDetailsBase::getSFPrimaryParticleIndex(void) const
{
    return &_sfPrimaryParticleIndex;
}


//! Get the ParticleCollisionEventDetails::_sfSecondarySystem field.
const SFUnrecParticleSystemPtr *ParticleCollisionEventDetailsBase::getSFSecondarySystem(void) const
{
    return &_sfSecondarySystem;
}

SFUnrecParticleSystemPtr *ParticleCollisionEventDetailsBase::editSFSecondarySystem(void)
{
    editSField(SecondarySystemFieldMask);

    return &_sfSecondarySystem;
}

SFUInt32 *ParticleCollisionEventDetailsBase::editSFSecondaryParticleIndex(void)
{
    editSField(SecondaryParticleIndexFieldMask);

    return &_sfSecondaryParticleIndex;
}

const SFUInt32 *ParticleCollisionEventDetailsBase::getSFSecondaryParticleIndex(void) const
{
    return &_sfSecondaryParticleIndex;
}






/*------------------------------ access -----------------------------------*/

UInt32 ParticleCollisionEventDetailsBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (PrimarySystemFieldMask & whichField))
    {
        returnValue += _sfPrimarySystem.getBinSize();
    }
    if(FieldBits::NoField != (PrimaryParticleIndexFieldMask & whichField))
    {
        returnValue += _sfPrimaryParticleIndex.getBinSize();
    }
    if(FieldBits::NoField != (SecondarySystemFieldMask & whichField))
    {
        returnValue += _sfSecondarySystem.getBinSize();
    }
    if(FieldBits::NoField != (SecondaryParticleIndexFieldMask & whichField))
    {
        returnValue += _sfSecondaryParticleIndex.getBinSize();
    }

    return returnValue;
}

void ParticleCollisionEventDetailsBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (PrimarySystemFieldMask & whichField))
    {
        _sfPrimarySystem.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PrimaryParticleIndexFieldMask & whichField))
    {
        _sfPrimaryParticleIndex.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SecondarySystemFieldMask & whichField))
    {
        _sfSecondarySystem.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SecondaryParticleIndexFieldMask & whichField))
    {
        _sfSecondaryParticleIndex.copyToBin(pMem);
    }
}

void ParticleCollisionEventDetailsBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (PrimarySystemFieldMask & whichField))
    {
        _sfPrimarySystem.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PrimaryParticleIndexFieldMask & whichField))
    {
        _sfPrimaryParticleIndex.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SecondarySystemFieldMask & whichField))
    {
        _sfSecondarySystem.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SecondaryParticleIndexFieldMask & whichField))
    {
        _sfSecondaryParticleIndex.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ParticleCollisionEventDetailsTransitPtr ParticleCollisionEventDetailsBase::createLocal(BitVector bFlags)
{
    ParticleCollisionEventDetailsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ParticleCollisionEventDetails>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
ParticleCollisionEventDetailsTransitPtr ParticleCollisionEventDetailsBase::createDependent(BitVector bFlags)
{
    ParticleCollisionEventDetailsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<ParticleCollisionEventDetails>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ParticleCollisionEventDetailsTransitPtr ParticleCollisionEventDetailsBase::create(void)
{
    ParticleCollisionEventDetailsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<ParticleCollisionEventDetails>(tmpPtr);
    }

    return fc;
}

ParticleCollisionEventDetails *ParticleCollisionEventDetailsBase::createEmptyLocal(BitVector bFlags)
{
    ParticleCollisionEventDetails *returnValue;

    newPtr<ParticleCollisionEventDetails>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ParticleCollisionEventDetails *ParticleCollisionEventDetailsBase::createEmpty(void)
{
    ParticleCollisionEventDetails *returnValue;

    newPtr<ParticleCollisionEventDetails>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}

ParticleCollisionEventDetails *ParticleCollisionEventDetailsBase::createUnregistered(void)
{
    ParticleCollisionEventDetails *returnValue = new ParticleCollisionEventDetails;

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

FieldContainerTransitPtr ParticleCollisionEventDetailsBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ParticleCollisionEventDetails *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ParticleCollisionEventDetails *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ParticleCollisionEventDetailsBase::shallowCopyDependent(
    BitVector bFlags) const
{
    ParticleCollisionEventDetails *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ParticleCollisionEventDetails *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr ParticleCollisionEventDetailsBase::shallowCopy(void) const
{
    ParticleCollisionEventDetails *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const ParticleCollisionEventDetails *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ParticleCollisionEventDetailsBase::ParticleCollisionEventDetailsBase(void) :
    Inherited(),
    _sfPrimarySystem          (NULL),
    _sfPrimaryParticleIndex   (UInt32(0)),
    _sfSecondarySystem        (NULL),
    _sfSecondaryParticleIndex (UInt32(0))
{
}

ParticleCollisionEventDetailsBase::ParticleCollisionEventDetailsBase(const ParticleCollisionEventDetailsBase &source) :
    Inherited(source),
    _sfPrimarySystem          (NULL),
    _sfPrimaryParticleIndex   (source._sfPrimaryParticleIndex   ),
    _sfSecondarySystem        (NULL),
    _sfSecondaryParticleIndex (source._sfSecondaryParticleIndex )
{
}


/*-------------------------- destructors ----------------------------------*/

ParticleCollisionEventDetailsBase::~ParticleCollisionEventDetailsBase(void)
{
}

void ParticleCollisionEventDetailsBase::onCreate(const ParticleCollisionEventDetails *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ParticleCollisionEventDetails *pThis = static_cast<ParticleCollisionEventDetails *>(this);

        pThis->setPrimarySystem(source->getPrimarySystem());

        pThis->setSecondarySystem(source->getSecondarySystem());
    }
}

GetFieldHandlePtr ParticleCollisionEventDetailsBase::getHandlePrimarySystem   (void) const
{
    SFUnrecParticleSystemPtr::GetHandlePtr returnValue(
        new  SFUnrecParticleSystemPtr::GetHandle(
             &_sfPrimarySystem,
             this->getType().getFieldDesc(PrimarySystemFieldId),
             const_cast<ParticleCollisionEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleCollisionEventDetailsBase::editHandlePrimarySystem  (void)
{
    SFUnrecParticleSystemPtr::EditHandlePtr returnValue(
        new  SFUnrecParticleSystemPtr::EditHandle(
             &_sfPrimarySystem,
             this->getType().getFieldDesc(PrimarySystemFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ParticleCollisionEventDetails::setPrimarySystem,
                    static_cast<ParticleCollisionEventDetails *>(this), _1));

    editSField(PrimarySystemFieldMask);

    return returnValue;
}

GetFieldHandlePtr ParticleCollisionEventDetailsBase::getHandlePrimaryParticleIndex (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfPrimaryParticleIndex,
             this->getType().getFieldDesc(PrimaryParticleIndexFieldId),
             const_cast<ParticleCollisionEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleCollisionEventDetailsBase::editHandlePrimaryParticleIndex(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfPrimaryParticleIndex,
             this->getType().getFieldDesc(PrimaryParticleIndexFieldId),
             this));


    editSField(PrimaryParticleIndexFieldMask);

    return returnValue;
}

GetFieldHandlePtr ParticleCollisionEventDetailsBase::getHandleSecondarySystem (void) const
{
    SFUnrecParticleSystemPtr::GetHandlePtr returnValue(
        new  SFUnrecParticleSystemPtr::GetHandle(
             &_sfSecondarySystem,
             this->getType().getFieldDesc(SecondarySystemFieldId),
             const_cast<ParticleCollisionEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleCollisionEventDetailsBase::editHandleSecondarySystem(void)
{
    SFUnrecParticleSystemPtr::EditHandlePtr returnValue(
        new  SFUnrecParticleSystemPtr::EditHandle(
             &_sfSecondarySystem,
             this->getType().getFieldDesc(SecondarySystemFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&ParticleCollisionEventDetails::setSecondarySystem,
                    static_cast<ParticleCollisionEventDetails *>(this), _1));

    editSField(SecondarySystemFieldMask);

    return returnValue;
}

GetFieldHandlePtr ParticleCollisionEventDetailsBase::getHandleSecondaryParticleIndex (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfSecondaryParticleIndex,
             this->getType().getFieldDesc(SecondaryParticleIndexFieldId),
             const_cast<ParticleCollisionEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleCollisionEventDetailsBase::editHandleSecondaryParticleIndex(void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfSecondaryParticleIndex,
             this->getType().getFieldDesc(SecondaryParticleIndexFieldId),
             this));


    editSField(SecondaryParticleIndexFieldMask);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void ParticleCollisionEventDetailsBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ParticleCollisionEventDetails *pThis = static_cast<ParticleCollisionEventDetails *>(this);

    pThis->execSync(static_cast<ParticleCollisionEventDetails *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ParticleCollisionEventDetailsBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    ParticleCollisionEventDetails *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ParticleCollisionEventDetails *>(pRefAspect),
                  dynamic_cast<const ParticleCollisionEventDetails *>(this));

    return returnValue;
}
#endif

void ParticleCollisionEventDetailsBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ParticleCollisionEventDetails *>(this)->setPrimarySystem(NULL);

    static_cast<ParticleCollisionEventDetails *>(this)->setSecondarySystem(NULL);


}


OSG_END_NAMESPACE
