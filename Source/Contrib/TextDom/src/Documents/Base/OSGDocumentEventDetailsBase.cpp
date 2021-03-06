/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: Achyuthan Vasanth (vasanth.achyuthan@gmail.com)                  *
 *          David Kabala (djkabala@gmail.com)                                *
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
 **     class DocumentEventDetails!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGDocument.h"                // Document Class

#include "OSGDocumentEventDetailsBase.h"
#include "OSGDocumentEventDetails.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::DocumentEventDetails
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Document *      DocumentEventDetailsBase::_sfDocument
    
*/

/*! \var Int32           DocumentEventDetailsBase::_sfOffset
    
*/

/*! \var UInt32          DocumentEventDetailsBase::_sfLength
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<DocumentEventDetails *>::_type("DocumentEventDetailsPtr", "EventDetailsPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(DocumentEventDetails *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           DocumentEventDetails *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           DocumentEventDetails *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void DocumentEventDetailsBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecDocumentPtr::Description(
        SFUnrecDocumentPtr::getClassType(),
        "Document",
        "",
        DocumentFieldId, DocumentFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DocumentEventDetails::editHandleDocument),
        static_cast<FieldGetMethodSig >(&DocumentEventDetails::getHandleDocument));

    oType.addInitialDesc(pDesc);

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "Offset",
        "",
        OffsetFieldId, OffsetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DocumentEventDetails::editHandleOffset),
        static_cast<FieldGetMethodSig >(&DocumentEventDetails::getHandleOffset));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "Length",
        "",
        LengthFieldId, LengthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DocumentEventDetails::editHandleLength),
        static_cast<FieldGetMethodSig >(&DocumentEventDetails::getHandleLength));

    oType.addInitialDesc(pDesc);
}


DocumentEventDetailsBase::TypeObject DocumentEventDetailsBase::_type(
    DocumentEventDetailsBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&DocumentEventDetailsBase::createEmptyLocal),
    DocumentEventDetails::initMethod,
    DocumentEventDetails::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&DocumentEventDetails::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"DocumentEventDetails\"\n"
    "\tparent=\"EventDetails\"\n"
    "    library=\"ContribTextDom\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    "\tsupportUnregisteredCreate=\"true\"\n"
    "    authors=\"Achyuthan Vasanth (vasanth.achyuthan@gmail.com), David Kabala (djkabala@gmail.com)\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"Document\"\n"
    "\t\ttype=\"Document\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Offset\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"-1\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Length\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DocumentEventDetailsBase::getType(void)
{
    return _type;
}

const FieldContainerType &DocumentEventDetailsBase::getType(void) const
{
    return _type;
}

UInt32 DocumentEventDetailsBase::getContainerSize(void) const
{
    return sizeof(DocumentEventDetails);
}

/*------------------------- decorator get ------------------------------*/


//! Get the DocumentEventDetails::_sfDocument field.
const SFUnrecDocumentPtr *DocumentEventDetailsBase::getSFDocument(void) const
{
    return &_sfDocument;
}

SFUnrecDocumentPtr  *DocumentEventDetailsBase::editSFDocument       (void)
{
    editSField(DocumentFieldMask);

    return &_sfDocument;
}

SFInt32 *DocumentEventDetailsBase::editSFOffset(void)
{
    editSField(OffsetFieldMask);

    return &_sfOffset;
}

const SFInt32 *DocumentEventDetailsBase::getSFOffset(void) const
{
    return &_sfOffset;
}


SFUInt32 *DocumentEventDetailsBase::editSFLength(void)
{
    editSField(LengthFieldMask);

    return &_sfLength;
}

const SFUInt32 *DocumentEventDetailsBase::getSFLength(void) const
{
    return &_sfLength;
}






/*------------------------------ access -----------------------------------*/

UInt32 DocumentEventDetailsBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DocumentFieldMask & whichField))
    {
        returnValue += _sfDocument.getBinSize();
    }
    if(FieldBits::NoField != (OffsetFieldMask & whichField))
    {
        returnValue += _sfOffset.getBinSize();
    }
    if(FieldBits::NoField != (LengthFieldMask & whichField))
    {
        returnValue += _sfLength.getBinSize();
    }

    return returnValue;
}

void DocumentEventDetailsBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DocumentFieldMask & whichField))
    {
        _sfDocument.copyToBin(pMem);
    }
    if(FieldBits::NoField != (OffsetFieldMask & whichField))
    {
        _sfOffset.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LengthFieldMask & whichField))
    {
        _sfLength.copyToBin(pMem);
    }
}

void DocumentEventDetailsBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DocumentFieldMask & whichField))
    {
        editSField(DocumentFieldMask);
        _sfDocument.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (OffsetFieldMask & whichField))
    {
        editSField(OffsetFieldMask);
        _sfOffset.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LengthFieldMask & whichField))
    {
        editSField(LengthFieldMask);
        _sfLength.copyFromBin(pMem);
    }
}

//! create a new instance of the class
DocumentEventDetailsTransitPtr DocumentEventDetailsBase::createLocal(BitVector bFlags)
{
    DocumentEventDetailsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<DocumentEventDetails>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
DocumentEventDetailsTransitPtr DocumentEventDetailsBase::createDependent(BitVector bFlags)
{
    DocumentEventDetailsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<DocumentEventDetails>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
DocumentEventDetailsTransitPtr DocumentEventDetailsBase::create(void)
{
    return createLocal();
}

DocumentEventDetails *DocumentEventDetailsBase::createEmptyLocal(BitVector bFlags)
{
    DocumentEventDetails *returnValue;

    newPtr<DocumentEventDetails>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
DocumentEventDetails *DocumentEventDetailsBase::createEmpty(void)
{
    return createEmptyLocal();
}

DocumentEventDetails *DocumentEventDetailsBase::createUnregistered(void)
{
    DocumentEventDetails *returnValue = new DocumentEventDetails;

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

FieldContainerTransitPtr DocumentEventDetailsBase::shallowCopyLocal(
    BitVector bFlags) const
{
    DocumentEventDetails *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DocumentEventDetails *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr DocumentEventDetailsBase::shallowCopyDependent(
    BitVector bFlags) const
{
    DocumentEventDetails *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DocumentEventDetails *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr DocumentEventDetailsBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}



/*------------------------- constructors ----------------------------------*/

DocumentEventDetailsBase::DocumentEventDetailsBase(void) :
    Inherited(),
    _sfDocument               (NULL),
    _sfOffset                 (Int32(-1)),
    _sfLength                 (UInt32(0))
{
}

DocumentEventDetailsBase::DocumentEventDetailsBase(const DocumentEventDetailsBase &source) :
    Inherited(source),
    _sfDocument               (NULL),
    _sfOffset                 (source._sfOffset                 ),
    _sfLength                 (source._sfLength                 )
{
}


/*-------------------------- destructors ----------------------------------*/

DocumentEventDetailsBase::~DocumentEventDetailsBase(void)
{
}

void DocumentEventDetailsBase::onCreate(const DocumentEventDetails *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        DocumentEventDetails *pThis = static_cast<DocumentEventDetails *>(this);

        pThis->setDocument(source->getDocument());
    }
}

GetFieldHandlePtr DocumentEventDetailsBase::getHandleDocument        (void) const
{
    SFUnrecDocumentPtr::GetHandlePtr returnValue(
        new  SFUnrecDocumentPtr::GetHandle(
             &_sfDocument,
             this->getType().getFieldDesc(DocumentFieldId),
             const_cast<DocumentEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DocumentEventDetailsBase::editHandleDocument       (void)
{
    SFUnrecDocumentPtr::EditHandlePtr returnValue(
        new  SFUnrecDocumentPtr::EditHandle(
             &_sfDocument,
             this->getType().getFieldDesc(DocumentFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&DocumentEventDetails::setDocument,
                    static_cast<DocumentEventDetails *>(this), _1));

    editSField(DocumentFieldMask);

    return returnValue;
}

GetFieldHandlePtr DocumentEventDetailsBase::getHandleOffset          (void) const
{
    SFInt32::GetHandlePtr returnValue(
        new  SFInt32::GetHandle(
             &_sfOffset,
             this->getType().getFieldDesc(OffsetFieldId),
             const_cast<DocumentEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DocumentEventDetailsBase::editHandleOffset         (void)
{
    SFInt32::EditHandlePtr returnValue(
        new  SFInt32::EditHandle(
             &_sfOffset,
             this->getType().getFieldDesc(OffsetFieldId),
             this));


    editSField(OffsetFieldMask);

    return returnValue;
}

GetFieldHandlePtr DocumentEventDetailsBase::getHandleLength          (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfLength,
             this->getType().getFieldDesc(LengthFieldId),
             const_cast<DocumentEventDetailsBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DocumentEventDetailsBase::editHandleLength         (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfLength,
             this->getType().getFieldDesc(LengthFieldId),
             this));


    editSField(LengthFieldMask);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void DocumentEventDetailsBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    DocumentEventDetails *pThis = static_cast<DocumentEventDetails *>(this);

    pThis->execSync(static_cast<DocumentEventDetails *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *DocumentEventDetailsBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    DocumentEventDetails *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const DocumentEventDetails *>(pRefAspect),
                  dynamic_cast<const DocumentEventDetails *>(this));

    return returnValue;
}
#endif

void DocumentEventDetailsBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<DocumentEventDetails *>(this)->setDocument(NULL);


}


OSG_END_NAMESPACE
