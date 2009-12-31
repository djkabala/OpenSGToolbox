/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
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
 **     class Animation!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &AnimationBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 AnimationBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! access the producer type of the class
inline
const EventProducerType &AnimationBase::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 AnimationBase::getProducerClassTypeId(void)
{
    return _producerType.getId();
}


/*------------------------------ get -----------------------------------*/

//! Get the Animation::_sfCycling field.
inline
const SFInt32 *AnimationBase::getSFCycling(void) const
{
    return &_sfCycling;
}

//! Get the Animation::_sfCycling field.
inline
SFInt32 *AnimationBase::editSFCycling(void)
{
    return &_sfCycling;
}

//! Get the Animation::_sfScale field.
inline
const SFReal32 *AnimationBase::getSFScale(void) const
{
    return &_sfScale;
}

//! Get the Animation::_sfScale field.
inline
SFReal32 *AnimationBase::editSFScale(void)
{
    return &_sfScale;
}

//! Get the Animation::_sfOffset field.
inline
const SFReal32 *AnimationBase::getSFOffset(void) const
{
    return &_sfOffset;
}

//! Get the Animation::_sfOffset field.
inline
SFReal32 *AnimationBase::editSFOffset(void)
{
    return &_sfOffset;
}

//! Get the Animation::_sfSpan field.
inline
const SFReal32 *AnimationBase::getSFSpan(void) const
{
    return &_sfSpan;
}

//! Get the Animation::_sfSpan field.
inline
SFReal32 *AnimationBase::editSFSpan(void)
{
    return &_sfSpan;
}

//! Get the Animation::_sfCycles field.
inline
const SFReal32 *AnimationBase::getSFCycles(void) const
{
    return &_sfCycles;
}

//! Get the Animation::_sfCycles field.
inline
SFReal32 *AnimationBase::editSFCycles(void)
{
    return &_sfCycles;
}


//! Get the value of the Animation::_sfCycling field.
inline
Int32 &AnimationBase::editCycling(void)
{
    return _sfCycling.getValue();
}

//! Get the value of the Animation::_sfCycling field.
inline
const Int32 &AnimationBase::getCycling(void) const
{
    return _sfCycling.getValue();
}

//! Set the value of the Animation::_sfCycling field.
inline
void AnimationBase::setCycling(const Int32 &value)
{
    _sfCycling.setValue(value);
}

//! Get the value of the Animation::_sfScale field.
inline
Real32 &AnimationBase::editScale(void)
{
    return _sfScale.getValue();
}

//! Get the value of the Animation::_sfScale field.
inline
const Real32 &AnimationBase::getScale(void) const
{
    return _sfScale.getValue();
}

//! Set the value of the Animation::_sfScale field.
inline
void AnimationBase::setScale(const Real32 &value)
{
    _sfScale.setValue(value);
}

//! Get the value of the Animation::_sfOffset field.
inline
Real32 &AnimationBase::editOffset(void)
{
    return _sfOffset.getValue();
}

//! Get the value of the Animation::_sfOffset field.
inline
const Real32 &AnimationBase::getOffset(void) const
{
    return _sfOffset.getValue();
}

//! Set the value of the Animation::_sfOffset field.
inline
void AnimationBase::setOffset(const Real32 &value)
{
    _sfOffset.setValue(value);
}

//! Get the value of the Animation::_sfSpan field.
inline
Real32 &AnimationBase::editSpan(void)
{
    return _sfSpan.getValue();
}

//! Get the value of the Animation::_sfSpan field.
inline
const Real32 &AnimationBase::getSpan(void) const
{
    return _sfSpan.getValue();
}

//! Set the value of the Animation::_sfSpan field.
inline
void AnimationBase::setSpan(const Real32 &value)
{
    _sfSpan.setValue(value);
}

//! Get the value of the Animation::_sfCycles field.
inline
Real32 &AnimationBase::editCycles(void)
{
    return _sfCycles.getValue();
}

//! Get the value of the Animation::_sfCycles field.
inline
const Real32 &AnimationBase::getCycles(void) const
{
    return _sfCycles.getValue();
}

//! Set the value of the Animation::_sfCycles field.
inline
void AnimationBase::setCycles(const Real32 &value)
{
    _sfCycles.setValue(value);
}



inline
EventConnection AnimationBase::attachActivity(ActivityPtr TheActivity, UInt32 ProducedEventId)
{
    return _Producer.attachActivity(TheActivity, ProducedEventId);
}

inline
bool AnimationBase::isActivityAttached(ActivityPtr TheActivity, UInt32 ProducedEventId) const
{
    return _Producer.isActivityAttached(TheActivity, ProducedEventId);
}

inline
UInt32 AnimationBase::getNumActivitiesAttached(UInt32 ProducedEventId) const
{
    return _Producer.getNumActivitiesAttached(ProducedEventId);
}

inline
ActivityPtr AnimationBase::getAttachedActivity(UInt32 ProducedEventId, UInt32 ActivityIndex) const
{
    return _Producer.getAttachedActivity(ProducedEventId,ActivityIndex);
}

inline
void AnimationBase::detachActivity(ActivityPtr TheActivity, UInt32 ProducedEventId)
{
    _Producer.detachActivity(TheActivity, ProducedEventId);
}

inline
UInt32 AnimationBase::getNumProducedEvents(void) const
{
    return _Producer.getNumProducedEvents();
}

inline
const MethodDescription *AnimationBase::getProducedEventDescription(const Char8 *ProducedEventName) const
{
    return _Producer.getProducedEventDescription(ProducedEventName);
}

inline
const MethodDescription *AnimationBase::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return _Producer.getProducedEventDescription(ProducedEventId);
}

inline
UInt32 AnimationBase::getProducedEventId(const Char8 *ProducedEventName) const
{
    return _Producer.getProducedEventId(ProducedEventName);
}

inline
SFEventProducerPtr *AnimationBase::editSFEventProducer(void)
{
    return &_sfEventProducer;
}

//! Get the value of the Animation::_sfEventProducer field.
inline
EventProducerPtr &AnimationBase::editEventProducer(void)
{
    return _sfEventProducer.getValue();
}

OSG_END_NAMESPACE