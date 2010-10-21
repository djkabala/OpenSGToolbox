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
 **     class AdjustmentEventDetails!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGAdjustmentEventDetailsBase.h"
#include "OSGAdjustmentEventDetails.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::AdjustmentEventDetails
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt32          AdjustmentEventDetailsBase::_sfValue
    
*/

/*! \var bool            AdjustmentEventDetailsBase::_sfValueIsAdjusting
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<AdjustmentEventDetails *>::_type("AdjustmentEventDetailsPtr", "EventDetailsPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(AdjustmentEventDetails *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           AdjustmentEventDetails *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           AdjustmentEventDetails *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void AdjustmentEventDetailsBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "Value",
        "",
        ValueFieldId, ValueFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&AdjustmentEventDetails::editHandleValue),
        static_cast<FieldGetMethodSig >(&AdjustmentEventDetails::getHandleValue));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "ValueIsAdjusting",
        "",
        ValueIsAdjustingFieldId, ValueIsAdjustingFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&AdjustmentEventDetails::editHandleValueIsAdjusting),
        static_cast<FieldGetMethodSig >(&AdjustmentEventDetails::getHandleValueIsAdjusting));

    oType.addInitialDesc(pDesc);
}


AdjustmentEventDetailsBase::TypeObject AdjustmentEventDetailsBase::_type(
    AdjustmentEventDetailsBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&AdjustmentEventDetailsBase::createEmptyLocal),
    AdjustmentEventDetails::initMethod,
    AdjustmentEventDetails::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&AdjustmentEventDetails::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"AdjustmentEventDetails\"\n"
    "\tparent=\"EventDetails\"\n"
    "    library=\"ContribUserInterface\"\n"
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
    "\t\tname=\"Value\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ValueIsAdjusting\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &AdjustmentEventDetailsBase::getType(void)
{
    return _type;
}

const FieldContainerType &AdjustmentEventDetailsBase::getType(void) const
{
    return _type;
}

UInt32 AdjustmentEventDetailsBase::getContainerSize(void) const
{
    return sizeof(AdjustmentEventDetails);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *AdjustmentEventDetailsBase::editSFValue(void)
{
    editSField(ValueFieldMask);

    return &_sfValue;
}

const SFUInt32 *AdjustmentEventDetailsBase::getSFValue(void) const
{
    return &_sfValue;
}


SFBool *AdjustmentEventDetailsBase::editSFValueIsAdjusting(void)
{
    editSField(ValueIsAdjustingFieldMask);

    return &_sfValueIsAdjusting;
}

const SFBool *AdjustmentEventDetailsBase::getSFValueIsAdjusting(void) const
{
    return &_sfValueIsAdjusting;
}






/*------------------------------ access -----------------------------------*/

UInt32 AdjustmentEventDetailsBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        returnValue += _sfValue.getBinSize();
    }
    if(FieldBits::NoField != (ValueIsAdjustingFieldMask & whichField))
    {
        returnValue += _sfValueIsAdjusting.getBinSize();
    }

    return returnValue;
}

void AdjustmentEventDetailsBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ValueIsAdjustingFieldMask & whichField))
    {
        _sfValueIsAdjusting.copyToBin(pMem);
    }
}

void AdjustmentEventDetailsBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ValueFieldMask & whichField))
    {
        _sfValue.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ValueIsAdjustingFieldMask & whichField))
    {
        _sfValueIsAdjusting.copyFromBin(pMem);
    }
}

//! create a new instance of the class
AdjustmentEventDetailsTransitPtr AdjustmentEventDetailsBase::createLocal(BitVector bFlags)
{
    AdjustmentEventDetailsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<AdjustmentEventDetails>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
AdjustmentEventDetailsTransitPtr AdjustmentEventDetailsBase::createDependent(BitVector bFlags)
{
    AdjustmentEventDetailsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<AdjustmentEventDetails>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
AdjustmentEventDetailsTransitPtr AdjustmentEventDetailsBase::create(void)
{
    AdjustmentEventDetailsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<AdjustmentEventDetails>(tmpPtr);
    }

    return fc;
}

AdjustmentEventDetails *AdjustmentEventDetailsBase::createEmptyLocal(BitVector bFlags)
{
    AdjustmentEventDetails *returnValue;

    newPtr<AdjustmentEventDetails>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
AdjustmentEventDetails *AdjustmentEventDetailsBase::createEmpty(void)
{
    AdjustmentEventDetails *returnValue;

    newPtr<AdjustmentEventDetails>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}

AdjustmentEventDetails *AdjustmentEventDetailsBase::createUnregistered(void)
{
    AdjustmentEventDetails *returnValue = new AdjustmentEventDetails;

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

FieldContainerTransitPtr AdjustmentEventDetailsBase::shallowCopyLocal(
    BitVector bFlags) const
{
    AdjustmentEventDetails *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AdjustmentEventDetails *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr AdjustmentEventDetailsBase::shallowCopyDependent(
    BitVector bFlags) const
{
    AdjustmentEventDetails *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const AdjustmentEventDetails *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr AdjustmentEventDetailsBase::shallowCopy(void) const
{
    AdjustmentEventDetails *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const AdjustmentEventDetails *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

AdjustmentEventDetailsBase::AdjustmentEventDetailsBase(void) :
    Inherited(),
    _sfValue                  (UInt32(0)),
    _sfValueIsAdjusting       (bool(false))
{
}

AdjustmentEventDetailsBase::AdjustmentEventDetailsBase(const AdjustmentEventDetailsBase &source) :
    Inherited(source),
    _sfValue                  (source._sfValue                  ),
    _sfValueIsAdjusting       (source._sfValueIsAdjusting       )
{
}


/*-------------------------- destructors ----------------------------------*/

AdjustmentEventDetailsBase::~AdjustmentEventDetailsBase(void)
{
}


GetFieldHandlePtr AdjustmentEventDetailsBase::getHandleValue           (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId),
             const_cast<AdjustmentEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AdjustmentEventDetailsBase::editHandleValue          (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfValue,
             this->getType().getFieldDesc(ValueFieldId),
             this));


    editSField(ValueFieldMask);

    return returnValue;
}

GetFieldHandlePtr AdjustmentEventDetailsBase::getHandleValueIsAdjusting (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfValueIsAdjusting,
             this->getType().getFieldDesc(ValueIsAdjustingFieldId),
             const_cast<AdjustmentEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr AdjustmentEventDetailsBase::editHandleValueIsAdjusting(void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfValueIsAdjusting,
             this->getType().getFieldDesc(ValueIsAdjustingFieldId),
             this));


    editSField(ValueIsAdjustingFieldMask);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void AdjustmentEventDetailsBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    AdjustmentEventDetails *pThis = static_cast<AdjustmentEventDetails *>(this);

    pThis->execSync(static_cast<AdjustmentEventDetails *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *AdjustmentEventDetailsBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    AdjustmentEventDetails *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const AdjustmentEventDetails *>(pRefAspect),
                  dynamic_cast<const AdjustmentEventDetails *>(this));

    return returnValue;
}
#endif

void AdjustmentEventDetailsBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
