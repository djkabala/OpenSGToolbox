/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)*
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
 **     class SearchWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include "OSGSearchWindowEventDetails.h"

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SearchWindowBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 SearchWindowBase::getClassTypeId(void)
{
    return _type.getId();
}
//! access the producer type of the class
inline
const EventProducerType &SearchWindowBase::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 SearchWindowBase::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
OSG::UInt16 SearchWindowBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/



#ifdef OSG_MT_CPTR_ASPECT
inline
void SearchWindowBase::execSync (      SearchWindowBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);
}
#endif


inline
const Char8 *SearchWindowBase::getClassname(void)
{
    return "SearchWindow";
}
inline
boost::signals2::connection  SearchWindowBase::connectSearchWindowClosing(const SearchWindowClosingEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _SearchWindowClosingEvent.connect(listener, at);
}

inline
boost::signals2::connection  SearchWindowBase::connectSearchWindowClosing(const SearchWindowClosingEventType::group_type &group,
                                                    const SearchWindowClosingEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _SearchWindowClosingEvent.connect(group, listener, at);
}

inline
void  SearchWindowBase::disconnectSearchWindowClosing(const SearchWindowClosingEventType::group_type &group)
{
    _SearchWindowClosingEvent.disconnect(group);
}

inline
void  SearchWindowBase::disconnectAllSlotsSearchWindowClosing(void)
{
    _SearchWindowClosingEvent.disconnect_all_slots();
}

inline
bool  SearchWindowBase::isEmptySearchWindowClosing(void) const
{
    return _SearchWindowClosingEvent.empty();
}

inline
UInt32  SearchWindowBase::numSlotsSearchWindowClosing(void) const
{
    return _SearchWindowClosingEvent.num_slots();
}

inline
void SearchWindowBase::produceSearchWindowClosing(SearchWindowClosingEventDetailsType* const e)
{
    produceEvent(SearchWindowClosingEventId, e);
}

inline
boost::signals2::connection  SearchWindowBase::connectSearchWindowClosed(const SearchWindowClosedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _SearchWindowClosedEvent.connect(listener, at);
}

inline
boost::signals2::connection  SearchWindowBase::connectSearchWindowClosed(const SearchWindowClosedEventType::group_type &group,
                                                    const SearchWindowClosedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _SearchWindowClosedEvent.connect(group, listener, at);
}

inline
void  SearchWindowBase::disconnectSearchWindowClosed(const SearchWindowClosedEventType::group_type &group)
{
    _SearchWindowClosedEvent.disconnect(group);
}

inline
void  SearchWindowBase::disconnectAllSlotsSearchWindowClosed(void)
{
    _SearchWindowClosedEvent.disconnect_all_slots();
}

inline
bool  SearchWindowBase::isEmptySearchWindowClosed(void) const
{
    return _SearchWindowClosedEvent.empty();
}

inline
UInt32  SearchWindowBase::numSlotsSearchWindowClosed(void) const
{
    return _SearchWindowClosedEvent.num_slots();
}

inline
void SearchWindowBase::produceSearchWindowClosed(SearchWindowClosedEventDetailsType* const e)
{
    produceEvent(SearchWindowClosedEventId, e);
}

inline
boost::signals2::connection  SearchWindowBase::connectSearchButtonClicked(const SearchButtonClickedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _SearchButtonClickedEvent.connect(listener, at);
}

inline
boost::signals2::connection  SearchWindowBase::connectSearchButtonClicked(const SearchButtonClickedEventType::group_type &group,
                                                    const SearchButtonClickedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _SearchButtonClickedEvent.connect(group, listener, at);
}

inline
void  SearchWindowBase::disconnectSearchButtonClicked(const SearchButtonClickedEventType::group_type &group)
{
    _SearchButtonClickedEvent.disconnect(group);
}

inline
void  SearchWindowBase::disconnectAllSlotsSearchButtonClicked(void)
{
    _SearchButtonClickedEvent.disconnect_all_slots();
}

inline
bool  SearchWindowBase::isEmptySearchButtonClicked(void) const
{
    return _SearchButtonClickedEvent.empty();
}

inline
UInt32  SearchWindowBase::numSlotsSearchButtonClicked(void) const
{
    return _SearchButtonClickedEvent.num_slots();
}

inline
void SearchWindowBase::produceSearchButtonClicked(SearchButtonClickedEventDetailsType* const e)
{
    produceEvent(SearchButtonClickedEventId, e);
}

inline
boost::signals2::connection  SearchWindowBase::connectReplaceButtonClicked(const ReplaceButtonClickedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ReplaceButtonClickedEvent.connect(listener, at);
}

inline
boost::signals2::connection  SearchWindowBase::connectReplaceButtonClicked(const ReplaceButtonClickedEventType::group_type &group,
                                                    const ReplaceButtonClickedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ReplaceButtonClickedEvent.connect(group, listener, at);
}

inline
void  SearchWindowBase::disconnectReplaceButtonClicked(const ReplaceButtonClickedEventType::group_type &group)
{
    _ReplaceButtonClickedEvent.disconnect(group);
}

inline
void  SearchWindowBase::disconnectAllSlotsReplaceButtonClicked(void)
{
    _ReplaceButtonClickedEvent.disconnect_all_slots();
}

inline
bool  SearchWindowBase::isEmptyReplaceButtonClicked(void) const
{
    return _ReplaceButtonClickedEvent.empty();
}

inline
UInt32  SearchWindowBase::numSlotsReplaceButtonClicked(void) const
{
    return _ReplaceButtonClickedEvent.num_slots();
}

inline
void SearchWindowBase::produceReplaceButtonClicked(ReplaceButtonClickedEventDetailsType* const e)
{
    produceEvent(ReplaceButtonClickedEventId, e);
}

inline
boost::signals2::connection  SearchWindowBase::connectReplaceAllButtonClicked(const ReplaceAllButtonClickedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _ReplaceAllButtonClickedEvent.connect(listener, at);
}

inline
boost::signals2::connection  SearchWindowBase::connectReplaceAllButtonClicked(const ReplaceAllButtonClickedEventType::group_type &group,
                                                    const ReplaceAllButtonClickedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _ReplaceAllButtonClickedEvent.connect(group, listener, at);
}

inline
void  SearchWindowBase::disconnectReplaceAllButtonClicked(const ReplaceAllButtonClickedEventType::group_type &group)
{
    _ReplaceAllButtonClickedEvent.disconnect(group);
}

inline
void  SearchWindowBase::disconnectAllSlotsReplaceAllButtonClicked(void)
{
    _ReplaceAllButtonClickedEvent.disconnect_all_slots();
}

inline
bool  SearchWindowBase::isEmptyReplaceAllButtonClicked(void) const
{
    return _ReplaceAllButtonClickedEvent.empty();
}

inline
UInt32  SearchWindowBase::numSlotsReplaceAllButtonClicked(void) const
{
    return _ReplaceAllButtonClickedEvent.num_slots();
}

inline
void SearchWindowBase::produceReplaceAllButtonClicked(ReplaceAllButtonClickedEventDetailsType* const e)
{
    produceEvent(ReplaceAllButtonClickedEventId, e);
}

inline
boost::signals2::connection  SearchWindowBase::connectBookmarkAllButtonClicked(const BookmarkAllButtonClickedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _BookmarkAllButtonClickedEvent.connect(listener, at);
}

inline
boost::signals2::connection  SearchWindowBase::connectBookmarkAllButtonClicked(const BookmarkAllButtonClickedEventType::group_type &group,
                                                    const BookmarkAllButtonClickedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _BookmarkAllButtonClickedEvent.connect(group, listener, at);
}

inline
void  SearchWindowBase::disconnectBookmarkAllButtonClicked(const BookmarkAllButtonClickedEventType::group_type &group)
{
    _BookmarkAllButtonClickedEvent.disconnect(group);
}

inline
void  SearchWindowBase::disconnectAllSlotsBookmarkAllButtonClicked(void)
{
    _BookmarkAllButtonClickedEvent.disconnect_all_slots();
}

inline
bool  SearchWindowBase::isEmptyBookmarkAllButtonClicked(void) const
{
    return _BookmarkAllButtonClickedEvent.empty();
}

inline
UInt32  SearchWindowBase::numSlotsBookmarkAllButtonClicked(void) const
{
    return _BookmarkAllButtonClickedEvent.num_slots();
}

inline
void SearchWindowBase::produceBookmarkAllButtonClicked(BookmarkAllButtonClickedEventDetailsType* const e)
{
    produceEvent(BookmarkAllButtonClickedEventId, e);
}

OSG_GEN_CONTAINERPTR(SearchWindow);

OSG_END_NAMESPACE

