/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     class WindowEventProducer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &WindowEventProducerBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 WindowEventProducerBase::getClassTypeId(void)
{
    return _type.getId();
}
//! access the producer type of the class
inline
const EventProducerType &WindowEventProducerBase::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 WindowEventProducerBase::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

inline
OSG::UInt16 WindowEventProducerBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the WindowEventProducer::_sfEnabled field.

inline
bool &WindowEventProducerBase::editEnabled(void)
{
    editSField(EnabledFieldMask);

    return _sfEnabled.getValue();
}

//! Get the value of the WindowEventProducer::_sfEnabled field.
inline
      bool  WindowEventProducerBase::getEnabled(void) const
{
    return _sfEnabled.getValue();
}

//! Set the value of the WindowEventProducer::_sfEnabled field.
inline
void WindowEventProducerBase::setEnabled(const bool value)
{
    editSField(EnabledFieldMask);

    _sfEnabled.setValue(value);
}
//! Get the value of the WindowEventProducer::_sfUseCallbackForDraw field.

inline
bool &WindowEventProducerBase::editUseCallbackForDraw(void)
{
    editSField(UseCallbackForDrawFieldMask);

    return _sfUseCallbackForDraw.getValue();
}

//! Get the value of the WindowEventProducer::_sfUseCallbackForDraw field.
inline
      bool  WindowEventProducerBase::getUseCallbackForDraw(void) const
{
    return _sfUseCallbackForDraw.getValue();
}

//! Set the value of the WindowEventProducer::_sfUseCallbackForDraw field.
inline
void WindowEventProducerBase::setUseCallbackForDraw(const bool value)
{
    editSField(UseCallbackForDrawFieldMask);

    _sfUseCallbackForDraw.setValue(value);
}
//! Get the value of the WindowEventProducer::_sfUseCallbackForReshape field.

inline
bool &WindowEventProducerBase::editUseCallbackForReshape(void)
{
    editSField(UseCallbackForReshapeFieldMask);

    return _sfUseCallbackForReshape.getValue();
}

//! Get the value of the WindowEventProducer::_sfUseCallbackForReshape field.
inline
      bool  WindowEventProducerBase::getUseCallbackForReshape(void) const
{
    return _sfUseCallbackForReshape.getValue();
}

//! Set the value of the WindowEventProducer::_sfUseCallbackForReshape field.
inline
void WindowEventProducerBase::setUseCallbackForReshape(const bool value)
{
    editSField(UseCallbackForReshapeFieldMask);

    _sfUseCallbackForReshape.setValue(value);
}
//! Get the value of the WindowEventProducer::_sfLastUpdateTime field.

inline
Time &WindowEventProducerBase::editLastUpdateTime(void)
{
    editSField(LastUpdateTimeFieldMask);

    return _sfLastUpdateTime.getValue();
}

//! Get the value of the WindowEventProducer::_sfLastUpdateTime field.
inline
const Time &WindowEventProducerBase::getLastUpdateTime(void) const
{
    return _sfLastUpdateTime.getValue();
}

//! Set the value of the WindowEventProducer::_sfLastUpdateTime field.
inline
void WindowEventProducerBase::setLastUpdateTime(const Time &value)
{
    editSField(LastUpdateTimeFieldMask);

    _sfLastUpdateTime.setValue(value);
}
//! Get the value of the WindowEventProducer::_sfLockCursor field.

inline
bool &WindowEventProducerBase::editLockCursor(void)
{
    editSField(LockCursorFieldMask);

    return _sfLockCursor.getValue();
}

//! Get the value of the WindowEventProducer::_sfLockCursor field.
inline
      bool  WindowEventProducerBase::getLockCursor(void) const
{
    return _sfLockCursor.getValue();
}

//! Set the value of the WindowEventProducer::_sfLockCursor field.
inline
void WindowEventProducerBase::setLockCursor(const bool value)
{
    editSField(LockCursorFieldMask);

    _sfLockCursor.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void WindowEventProducerBase::execSync (      WindowEventProducerBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (EnabledFieldMask & whichField))
        _sfEnabled.syncWith(pFrom->_sfEnabled);

    if(FieldBits::NoField != (UseCallbackForDrawFieldMask & whichField))
        _sfUseCallbackForDraw.syncWith(pFrom->_sfUseCallbackForDraw);

    if(FieldBits::NoField != (UseCallbackForReshapeFieldMask & whichField))
        _sfUseCallbackForReshape.syncWith(pFrom->_sfUseCallbackForReshape);

    if(FieldBits::NoField != (LastUpdateTimeFieldMask & whichField))
        _sfLastUpdateTime.syncWith(pFrom->_sfLastUpdateTime);

    if(FieldBits::NoField != (LockCursorFieldMask & whichField))
        _sfLockCursor.syncWith(pFrom->_sfLockCursor);
}
#endif


inline
const Char8 *WindowEventProducerBase::getClassname(void)
{
    return "WindowEventProducer";
}

inline
UInt32 WindowEventProducerBase::getNumProducedEvents(void) const
{
    return getProducerType().getNumEventDescs();
}

inline
const EventDescription *WindowEventProducerBase::getProducedEventDescription(const std::string &ProducedEventName) const
{
    return getProducerType().findEventDescription(ProducedEventName);
}

inline
const EventDescription *WindowEventProducerBase::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return getProducerType().getEventDescription(ProducedEventId);
}

inline
UInt32 WindowEventProducerBase::getProducedEventId(const std::string &ProducedEventName) const
{
    return getProducerType().getProducedEventId(ProducedEventName);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectWindowOpened(const WindowOpenedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowOpenedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectWindowOpened(const WindowOpenedEventType::group_type &group,
                                                    const WindowOpenedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowOpenedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectWindowOpened(const WindowOpenedEventType::group_type &group)
{
    _WindowOpenedEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsWindowOpened(void)
{
    _WindowOpenedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyWindowOpened(void) const
{
    return _WindowOpenedEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsWindowOpened(void) const
{
    return _WindowOpenedEvent.num_slots();
}

inline
void WindowEventProducerBase::produceWindowOpened(WindowOpenedEventDetailsType* const e)
{
    produceEvent(WindowOpenedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectWindowClosing(const WindowClosingEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowClosingEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectWindowClosing(const WindowClosingEventType::group_type &group,
                                                    const WindowClosingEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowClosingEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectWindowClosing(const WindowClosingEventType::group_type &group)
{
    _WindowClosingEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsWindowClosing(void)
{
    _WindowClosingEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyWindowClosing(void) const
{
    return _WindowClosingEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsWindowClosing(void) const
{
    return _WindowClosingEvent.num_slots();
}

inline
void WindowEventProducerBase::produceWindowClosing(WindowClosingEventDetailsType* const e)
{
    produceEvent(WindowClosingEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectWindowClosed(const WindowClosedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowClosedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectWindowClosed(const WindowClosedEventType::group_type &group,
                                                    const WindowClosedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowClosedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectWindowClosed(const WindowClosedEventType::group_type &group)
{
    _WindowClosedEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsWindowClosed(void)
{
    _WindowClosedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyWindowClosed(void) const
{
    return _WindowClosedEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsWindowClosed(void) const
{
    return _WindowClosedEvent.num_slots();
}

inline
void WindowEventProducerBase::produceWindowClosed(WindowClosedEventDetailsType* const e)
{
    produceEvent(WindowClosedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectWindowIconified(const WindowIconifiedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowIconifiedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectWindowIconified(const WindowIconifiedEventType::group_type &group,
                                                    const WindowIconifiedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowIconifiedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectWindowIconified(const WindowIconifiedEventType::group_type &group)
{
    _WindowIconifiedEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsWindowIconified(void)
{
    _WindowIconifiedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyWindowIconified(void) const
{
    return _WindowIconifiedEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsWindowIconified(void) const
{
    return _WindowIconifiedEvent.num_slots();
}

inline
void WindowEventProducerBase::produceWindowIconified(WindowIconifiedEventDetailsType* const e)
{
    produceEvent(WindowIconifiedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectWindowDeiconified(const WindowDeiconifiedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowDeiconifiedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectWindowDeiconified(const WindowDeiconifiedEventType::group_type &group,
                                                    const WindowDeiconifiedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowDeiconifiedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectWindowDeiconified(const WindowDeiconifiedEventType::group_type &group)
{
    _WindowDeiconifiedEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsWindowDeiconified(void)
{
    _WindowDeiconifiedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyWindowDeiconified(void) const
{
    return _WindowDeiconifiedEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsWindowDeiconified(void) const
{
    return _WindowDeiconifiedEvent.num_slots();
}

inline
void WindowEventProducerBase::produceWindowDeiconified(WindowDeiconifiedEventDetailsType* const e)
{
    produceEvent(WindowDeiconifiedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectWindowActivated(const WindowActivatedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowActivatedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectWindowActivated(const WindowActivatedEventType::group_type &group,
                                                    const WindowActivatedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowActivatedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectWindowActivated(const WindowActivatedEventType::group_type &group)
{
    _WindowActivatedEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsWindowActivated(void)
{
    _WindowActivatedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyWindowActivated(void) const
{
    return _WindowActivatedEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsWindowActivated(void) const
{
    return _WindowActivatedEvent.num_slots();
}

inline
void WindowEventProducerBase::produceWindowActivated(WindowActivatedEventDetailsType* const e)
{
    produceEvent(WindowActivatedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectWindowDeactivated(const WindowDeactivatedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowDeactivatedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectWindowDeactivated(const WindowDeactivatedEventType::group_type &group,
                                                    const WindowDeactivatedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowDeactivatedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectWindowDeactivated(const WindowDeactivatedEventType::group_type &group)
{
    _WindowDeactivatedEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsWindowDeactivated(void)
{
    _WindowDeactivatedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyWindowDeactivated(void) const
{
    return _WindowDeactivatedEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsWindowDeactivated(void) const
{
    return _WindowDeactivatedEvent.num_slots();
}

inline
void WindowEventProducerBase::produceWindowDeactivated(WindowDeactivatedEventDetailsType* const e)
{
    produceEvent(WindowDeactivatedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectWindowEntered(const WindowEnteredEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowEnteredEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectWindowEntered(const WindowEnteredEventType::group_type &group,
                                                    const WindowEnteredEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowEnteredEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectWindowEntered(const WindowEnteredEventType::group_type &group)
{
    _WindowEnteredEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsWindowEntered(void)
{
    _WindowEnteredEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyWindowEntered(void) const
{
    return _WindowEnteredEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsWindowEntered(void) const
{
    return _WindowEnteredEvent.num_slots();
}

inline
void WindowEventProducerBase::produceWindowEntered(WindowEnteredEventDetailsType* const e)
{
    produceEvent(WindowEnteredEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectWindowExited(const WindowExitedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _WindowExitedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectWindowExited(const WindowExitedEventType::group_type &group,
                                                    const WindowExitedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _WindowExitedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectWindowExited(const WindowExitedEventType::group_type &group)
{
    _WindowExitedEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsWindowExited(void)
{
    _WindowExitedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyWindowExited(void) const
{
    return _WindowExitedEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsWindowExited(void) const
{
    return _WindowExitedEvent.num_slots();
}

inline
void WindowEventProducerBase::produceWindowExited(WindowExitedEventDetailsType* const e)
{
    produceEvent(WindowExitedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectMouseClicked(const MouseClickedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseClickedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectMouseClicked(const MouseClickedEventType::group_type &group,
                                                    const MouseClickedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseClickedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectMouseClicked(const MouseClickedEventType::group_type &group)
{
    _MouseClickedEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsMouseClicked(void)
{
    _MouseClickedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyMouseClicked(void) const
{
    return _MouseClickedEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsMouseClicked(void) const
{
    return _MouseClickedEvent.num_slots();
}

inline
void WindowEventProducerBase::produceMouseClicked(MouseClickedEventDetailsType* const e)
{
    produceEvent(MouseClickedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectMouseEntered(const MouseEnteredEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseEnteredEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectMouseEntered(const MouseEnteredEventType::group_type &group,
                                                    const MouseEnteredEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseEnteredEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectMouseEntered(const MouseEnteredEventType::group_type &group)
{
    _MouseEnteredEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsMouseEntered(void)
{
    _MouseEnteredEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyMouseEntered(void) const
{
    return _MouseEnteredEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsMouseEntered(void) const
{
    return _MouseEnteredEvent.num_slots();
}

inline
void WindowEventProducerBase::produceMouseEntered(MouseEnteredEventDetailsType* const e)
{
    produceEvent(MouseEnteredEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectMouseExited(const MouseExitedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseExitedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectMouseExited(const MouseExitedEventType::group_type &group,
                                                    const MouseExitedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseExitedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectMouseExited(const MouseExitedEventType::group_type &group)
{
    _MouseExitedEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsMouseExited(void)
{
    _MouseExitedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyMouseExited(void) const
{
    return _MouseExitedEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsMouseExited(void) const
{
    return _MouseExitedEvent.num_slots();
}

inline
void WindowEventProducerBase::produceMouseExited(MouseExitedEventDetailsType* const e)
{
    produceEvent(MouseExitedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectMousePressed(const MousePressedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MousePressedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectMousePressed(const MousePressedEventType::group_type &group,
                                                    const MousePressedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MousePressedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectMousePressed(const MousePressedEventType::group_type &group)
{
    _MousePressedEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsMousePressed(void)
{
    _MousePressedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyMousePressed(void) const
{
    return _MousePressedEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsMousePressed(void) const
{
    return _MousePressedEvent.num_slots();
}

inline
void WindowEventProducerBase::produceMousePressed(MousePressedEventDetailsType* const e)
{
    produceEvent(MousePressedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectMouseReleased(const MouseReleasedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseReleasedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectMouseReleased(const MouseReleasedEventType::group_type &group,
                                                    const MouseReleasedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseReleasedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectMouseReleased(const MouseReleasedEventType::group_type &group)
{
    _MouseReleasedEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsMouseReleased(void)
{
    _MouseReleasedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyMouseReleased(void) const
{
    return _MouseReleasedEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsMouseReleased(void) const
{
    return _MouseReleasedEvent.num_slots();
}

inline
void WindowEventProducerBase::produceMouseReleased(MouseReleasedEventDetailsType* const e)
{
    produceEvent(MouseReleasedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectMouseMoved(const MouseMovedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseMovedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectMouseMoved(const MouseMovedEventType::group_type &group,
                                                    const MouseMovedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseMovedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectMouseMoved(const MouseMovedEventType::group_type &group)
{
    _MouseMovedEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsMouseMoved(void)
{
    _MouseMovedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyMouseMoved(void) const
{
    return _MouseMovedEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsMouseMoved(void) const
{
    return _MouseMovedEvent.num_slots();
}

inline
void WindowEventProducerBase::produceMouseMoved(MouseMovedEventDetailsType* const e)
{
    produceEvent(MouseMovedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectMouseDragged(const MouseDraggedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseDraggedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectMouseDragged(const MouseDraggedEventType::group_type &group,
                                                    const MouseDraggedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseDraggedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectMouseDragged(const MouseDraggedEventType::group_type &group)
{
    _MouseDraggedEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsMouseDragged(void)
{
    _MouseDraggedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyMouseDragged(void) const
{
    return _MouseDraggedEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsMouseDragged(void) const
{
    return _MouseDraggedEvent.num_slots();
}

inline
void WindowEventProducerBase::produceMouseDragged(MouseDraggedEventDetailsType* const e)
{
    produceEvent(MouseDraggedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectMouseWheelMoved(const MouseWheelMovedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _MouseWheelMovedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectMouseWheelMoved(const MouseWheelMovedEventType::group_type &group,
                                                    const MouseWheelMovedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _MouseWheelMovedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectMouseWheelMoved(const MouseWheelMovedEventType::group_type &group)
{
    _MouseWheelMovedEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsMouseWheelMoved(void)
{
    _MouseWheelMovedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyMouseWheelMoved(void) const
{
    return _MouseWheelMovedEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsMouseWheelMoved(void) const
{
    return _MouseWheelMovedEvent.num_slots();
}

inline
void WindowEventProducerBase::produceMouseWheelMoved(MouseWheelMovedEventDetailsType* const e)
{
    produceEvent(MouseWheelMovedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectKeyPressed(const KeyPressedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _KeyPressedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectKeyPressed(const KeyPressedEventType::group_type &group,
                                                    const KeyPressedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _KeyPressedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectKeyPressed(const KeyPressedEventType::group_type &group)
{
    _KeyPressedEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsKeyPressed(void)
{
    _KeyPressedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyKeyPressed(void) const
{
    return _KeyPressedEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsKeyPressed(void) const
{
    return _KeyPressedEvent.num_slots();
}

inline
void WindowEventProducerBase::produceKeyPressed(KeyPressedEventDetailsType* const e)
{
    produceEvent(KeyPressedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectKeyReleased(const KeyReleasedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _KeyReleasedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectKeyReleased(const KeyReleasedEventType::group_type &group,
                                                    const KeyReleasedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _KeyReleasedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectKeyReleased(const KeyReleasedEventType::group_type &group)
{
    _KeyReleasedEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsKeyReleased(void)
{
    _KeyReleasedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyKeyReleased(void) const
{
    return _KeyReleasedEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsKeyReleased(void) const
{
    return _KeyReleasedEvent.num_slots();
}

inline
void WindowEventProducerBase::produceKeyReleased(KeyReleasedEventDetailsType* const e)
{
    produceEvent(KeyReleasedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectKeyTyped(const KeyTypedEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _KeyTypedEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectKeyTyped(const KeyTypedEventType::group_type &group,
                                                    const KeyTypedEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _KeyTypedEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectKeyTyped(const KeyTypedEventType::group_type &group)
{
    _KeyTypedEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsKeyTyped(void)
{
    _KeyTypedEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyKeyTyped(void) const
{
    return _KeyTypedEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsKeyTyped(void) const
{
    return _KeyTypedEvent.num_slots();
}

inline
void WindowEventProducerBase::produceKeyTyped(KeyTypedEventDetailsType* const e)
{
    produceEvent(KeyTypedEventId, e);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectUpdate(const UpdateEventType::slot_type &listener, 
                                                                               boost::signals2::connect_position at)
{
    return _UpdateEvent.connect(listener, at);
}

inline
boost::signals2::connection  WindowEventProducerBase::connectUpdate(const UpdateEventType::group_type &group,
                                                    const UpdateEventType::slot_type &listener, boost::signals2::connect_position at)
{
    return _UpdateEvent.connect(group, listener, at);
}

inline
void  WindowEventProducerBase::disconnectUpdate(const UpdateEventType::group_type &group)
{
    _UpdateEvent.disconnect(group);
}

inline
void  WindowEventProducerBase::disconnectAllSlotsUpdate(void)
{
    _UpdateEvent.disconnect_all_slots();
}

inline
bool  WindowEventProducerBase::isEmptyUpdate(void) const
{
    return _UpdateEvent.empty();
}

inline
UInt32  WindowEventProducerBase::numSlotsUpdate(void) const
{
    return _UpdateEvent.num_slots();
}

inline
void WindowEventProducerBase::produceUpdate(UpdateEventDetailsType* const e)
{
    produceEvent(UpdateEventId, e);
}

OSG_GEN_CONTAINERPTR(WindowEventProducer);

OSG_END_NAMESPACE

