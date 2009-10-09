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
 **     class Document!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDOCUMENTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGDocumentBase.h"
#include "OSGDocument.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  DocumentBase::EventProducerFieldMask =
    (TypeTraits<BitVector>::One << DocumentBase::EventProducerFieldId);
const OSG::BitVector DocumentBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


//! Document description

FieldDescription *DocumentBase::_desc[] = 
{
    new FieldDescription(SFEventProducerPtr::getClassType(), 
                     "EventProducer", 
                     EventProducerFieldId,EventProducerFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&DocumentBase::editSFEventProducer))
};


FieldContainerType DocumentBase::_type(
    "Document",
    "AttachmentContainer",
    NULL,
    NULL, 
    Document::initMethod,
    _desc,
    sizeof(_desc));

//! Document Produced Methods

MethodDescription *DocumentBase::_methodDesc[] =
{
    new MethodDescription("ChangedUpdate", 
                     ChangedUpdateMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("InsertUpdate", 
                     InsertUpdateMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("RemoveUpdate", 
                     RemoveUpdateMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("UndoableEditHappened", 
                     UndoableEditHappenedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod())
};

EventProducerType DocumentBase::_producerType(
    "DocumentProducerType",
    "EventProducerType",
    NULL,
    InitEventProducerFunctor(),
    _methodDesc,
    sizeof(_methodDesc));
//OSG_FIELD_CONTAINER_DEF(DocumentBase, DocumentPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &DocumentBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &DocumentBase::getType(void) const 
{
    return _type;
} 

const EventProducerType &DocumentBase::getProducerType(void) const
{
    return _producerType;
}


UInt32 DocumentBase::getContainerSize(void) const 
{ 
    return sizeof(Document); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void DocumentBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<DocumentBase *>(&other),
                          whichField);
}
#else
void DocumentBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((DocumentBase *) &other, whichField, sInfo);
}
void DocumentBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void DocumentBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

DocumentBase::DocumentBase(void) :
    _Producer(&getProducerType()),
    _sfEventProducer(&_Producer),
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

DocumentBase::DocumentBase(const DocumentBase &source) :
    _Producer(&source.getProducerType()),
    _sfEventProducer(&_Producer),
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

DocumentBase::~DocumentBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 DocumentBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        returnValue += _sfEventProducer.getBinSize();
    }


    return returnValue;
}

void DocumentBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyToBin(pMem);
    }


}

void DocumentBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DocumentBase::executeSyncImpl(      DocumentBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
        _sfEventProducer.syncWith(pOther->_sfEventProducer);


}
#else
void DocumentBase::executeSyncImpl(      DocumentBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void DocumentBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<DocumentPtr>::_type("DocumentPtr", "AttachmentContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(DocumentPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(DocumentPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

