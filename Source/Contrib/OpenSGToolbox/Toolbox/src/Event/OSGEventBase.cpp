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
 **     class Event!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEEVENTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGEventBase.h"
#include "OSGEvent.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  EventBase::SourceFieldMask = 
    (TypeTraits<BitVector>::One << EventBase::SourceFieldId);

const OSG::BitVector  EventBase::TimeStampFieldMask = 
    (TypeTraits<BitVector>::One << EventBase::TimeStampFieldId);

const OSG::BitVector EventBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var FieldContainerPtr EventBase::_sfSource
    
*/
/*! \var Time            EventBase::_sfTimeStamp
    
*/

//! Event description

FieldDescription *EventBase::_desc[] = 
{
    new FieldDescription(SFFieldContainerPtr::getClassType(), 
                     "Source", 
                     SourceFieldId, SourceFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&EventBase::editSFSource)),
    new FieldDescription(SFTime::getClassType(), 
                     "TimeStamp", 
                     TimeStampFieldId, TimeStampFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&EventBase::editSFTimeStamp))
};


FieldContainerType EventBase::_type(
    "Event",
    "FieldContainer",
    NULL,
    NULL, 
    Event::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(EventBase, EventPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &EventBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &EventBase::getType(void) const 
{
    return _type;
} 


UInt32 EventBase::getContainerSize(void) const 
{ 
    return sizeof(Event); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void EventBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<EventBase *>(&other),
                          whichField);
}
#else
void EventBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((EventBase *) &other, whichField, sInfo);
}
void EventBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void EventBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

EventBase::EventBase(void) :
    _sfSource                 (FieldContainerPtr(NullFC)), 
    _sfTimeStamp              (Time(0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

EventBase::EventBase(const EventBase &source) :
    _sfSource                 (source._sfSource                 ), 
    _sfTimeStamp              (source._sfTimeStamp              ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

EventBase::~EventBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 EventBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SourceFieldMask & whichField))
    {
        returnValue += _sfSource.getBinSize();
    }

    if(FieldBits::NoField != (TimeStampFieldMask & whichField))
    {
        returnValue += _sfTimeStamp.getBinSize();
    }


    return returnValue;
}

void EventBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SourceFieldMask & whichField))
    {
        _sfSource.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TimeStampFieldMask & whichField))
    {
        _sfTimeStamp.copyToBin(pMem);
    }


}

void EventBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SourceFieldMask & whichField))
    {
        _sfSource.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TimeStampFieldMask & whichField))
    {
        _sfTimeStamp.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void EventBase::executeSyncImpl(      EventBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (SourceFieldMask & whichField))
        _sfSource.syncWith(pOther->_sfSource);

    if(FieldBits::NoField != (TimeStampFieldMask & whichField))
        _sfTimeStamp.syncWith(pOther->_sfTimeStamp);


}
#else
void EventBase::executeSyncImpl(      EventBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (SourceFieldMask & whichField))
        _sfSource.syncWith(pOther->_sfSource);

    if(FieldBits::NoField != (TimeStampFieldMask & whichField))
        _sfTimeStamp.syncWith(pOther->_sfTimeStamp);



}

void EventBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<EventPtr>::_type("EventPtr", "FieldContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(EventPtr, OSG_TOOLBOXLIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE
