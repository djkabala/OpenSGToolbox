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
 **     class BoundedRangeModel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEBOUNDEDRANGEMODELINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGBoundedRangeModelBase.h"
#include "OSGBoundedRangeModel.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  BoundedRangeModelBase::EventProducerFieldMask =
    (TypeTraits<BitVector>::One << BoundedRangeModelBase::EventProducerFieldId);
const OSG::BitVector BoundedRangeModelBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


//! BoundedRangeModel description

FieldDescription *BoundedRangeModelBase::_desc[] = 
{
    new FieldDescription(SFEventProducerPtr::getClassType(), 
                     "EventProducer", 
                     EventProducerFieldId,EventProducerFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&BoundedRangeModelBase::editSFEventProducer))
};


FieldContainerType BoundedRangeModelBase::_type(
    "BoundedRangeModel",
    "FieldContainer",
    NULL,
    NULL, 
    BoundedRangeModel::initMethod,
    _desc,
    sizeof(_desc));

//! BoundedRangeModel Produced Methods

MethodDescription *BoundedRangeModelBase::_methodDesc[] =
{
    new MethodDescription("StateChanged", 
                     StateChangedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod())
};

EventProducerType BoundedRangeModelBase::_producerType(
    "BoundedRangeModelProducerType",
    "EventProducerType",
    NULL,
    InitEventProducerFunctor(),
    _methodDesc,
    sizeof(_methodDesc));
//OSG_FIELD_CONTAINER_DEF(BoundedRangeModelBase, BoundedRangeModelPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &BoundedRangeModelBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &BoundedRangeModelBase::getType(void) const 
{
    return _type;
} 

const EventProducerType &BoundedRangeModelBase::getProducerType(void) const
{
    return _producerType;
}


UInt32 BoundedRangeModelBase::getContainerSize(void) const 
{ 
    return sizeof(BoundedRangeModel); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void BoundedRangeModelBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<BoundedRangeModelBase *>(&other),
                          whichField);
}
#else
void BoundedRangeModelBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((BoundedRangeModelBase *) &other, whichField, sInfo);
}
void BoundedRangeModelBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void BoundedRangeModelBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

BoundedRangeModelBase::BoundedRangeModelBase(void) :
    _Producer(&getProducerType()),
    _sfEventProducer(&_Producer),
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

BoundedRangeModelBase::BoundedRangeModelBase(const BoundedRangeModelBase &source) :
    _Producer(&source.getProducerType()),
    _sfEventProducer(&_Producer),
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

BoundedRangeModelBase::~BoundedRangeModelBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 BoundedRangeModelBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        returnValue += _sfEventProducer.getBinSize();
    }


    return returnValue;
}

void BoundedRangeModelBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyToBin(pMem);
    }


}

void BoundedRangeModelBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void BoundedRangeModelBase::executeSyncImpl(      BoundedRangeModelBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
        _sfEventProducer.syncWith(pOther->_sfEventProducer);


}
#else
void BoundedRangeModelBase::executeSyncImpl(      BoundedRangeModelBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void BoundedRangeModelBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<BoundedRangeModelPtr>::_type("BoundedRangeModelPtr", "FieldContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(BoundedRangeModelPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(BoundedRangeModelPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

