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
 **     class AnimationGroup!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &AnimationGroupBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 AnimationGroupBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! access the producer type of the class
inline
const EventProducerType &AnimationGroupBase::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 AnimationGroupBase::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

//! create a new instance of the class
inline
AnimationGroupPtr AnimationGroupBase::create(void) 
{
    AnimationGroupPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = AnimationGroupPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
AnimationGroupPtr AnimationGroupBase::createEmpty(void) 
{ 
    AnimationGroupPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the AnimationGroup::_mfAnimations field.
inline
const MFAnimationPtr *AnimationGroupBase::getMFAnimations(void) const
{
    return &_mfAnimations;
}

//! Get the AnimationGroup::_mfAnimations field.
inline
MFAnimationPtr *AnimationGroupBase::editMFAnimations(void)
{
    return &_mfAnimations;
}

//! Get the AnimationGroup::_sfScale field.
inline
const SFReal32 *AnimationGroupBase::getSFScale(void) const
{
    return &_sfScale;
}

//! Get the AnimationGroup::_sfScale field.
inline
SFReal32 *AnimationGroupBase::editSFScale(void)
{
    return &_sfScale;
}

//! Get the AnimationGroup::_sfOffset field.
inline
const SFReal32 *AnimationGroupBase::getSFOffset(void) const
{
    return &_sfOffset;
}

//! Get the AnimationGroup::_sfOffset field.
inline
SFReal32 *AnimationGroupBase::editSFOffset(void)
{
    return &_sfOffset;
}


//! Get the value of the AnimationGroup::_sfScale field.
inline
Real32 &AnimationGroupBase::editScale(void)
{
    return _sfScale.getValue();
}

//! Get the value of the AnimationGroup::_sfScale field.
inline
const Real32 &AnimationGroupBase::getScale(void) const
{
    return _sfScale.getValue();
}

//! Set the value of the AnimationGroup::_sfScale field.
inline
void AnimationGroupBase::setScale(const Real32 &value)
{
    _sfScale.setValue(value);
}

//! Get the value of the AnimationGroup::_sfOffset field.
inline
Real32 &AnimationGroupBase::editOffset(void)
{
    return _sfOffset.getValue();
}

//! Get the value of the AnimationGroup::_sfOffset field.
inline
const Real32 &AnimationGroupBase::getOffset(void) const
{
    return _sfOffset.getValue();
}

//! Set the value of the AnimationGroup::_sfOffset field.
inline
void AnimationGroupBase::setOffset(const Real32 &value)
{
    _sfOffset.setValue(value);
}


//! Get the value of the \a index element the AnimationGroup::_mfAnimations field.
inline
AnimationPtr &AnimationGroupBase::editAnimations(const UInt32 index)
{
    return _mfAnimations[index];
}

//! Get the value of the \a index element the AnimationGroup::_mfAnimations field.
inline
const AnimationPtr &AnimationGroupBase::getAnimations(const UInt32 index) const
{
    return _mfAnimations[index];
}

#ifndef OSG_2_PREP
//! Get the AnimationGroup::_mfAnimations field.
inline
MFAnimationPtr &AnimationGroupBase::getAnimations(void)
{
    return _mfAnimations;
}

//! Get the AnimationGroup::_mfAnimations field.
inline
const MFAnimationPtr &AnimationGroupBase::getAnimations(void) const
{
    return _mfAnimations;
}

#endif

inline
EventConnection AnimationGroupBase::attachActivity(ActivityPtr TheActivity, UInt32 ProducedEventId)
{
    return _Producer.attachActivity(TheActivity, ProducedEventId);
}

inline
bool AnimationGroupBase::isActivityAttached(ActivityPtr TheActivity, UInt32 ProducedEventId) const
{
    return _Producer.isActivityAttached(TheActivity, ProducedEventId);
}

inline
UInt32 AnimationGroupBase::getNumActivitiesAttached(UInt32 ProducedEventId) const
{
    return _Producer.getNumActivitiesAttached(ProducedEventId);
}

inline
ActivityPtr AnimationGroupBase::getAttachedActivity(UInt32 ProducedEventId, UInt32 ActivityIndex) const
{
    return _Producer.getAttachedActivity(ProducedEventId,ActivityIndex);
}

inline
void AnimationGroupBase::detachActivity(ActivityPtr TheActivity, UInt32 ProducedEventId)
{
    _Producer.detachActivity(TheActivity, ProducedEventId);
}

inline
UInt32 AnimationGroupBase::getNumProducedEvents(void) const
{
    return _Producer.getNumProducedEvents();
}

inline
const MethodDescription *AnimationGroupBase::getProducedEventDescription(const Char8 *ProducedEventName) const
{
    return _Producer.getProducedEventDescription(ProducedEventName);
}

inline
const MethodDescription *AnimationGroupBase::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return _Producer.getProducedEventDescription(ProducedEventId);
}

inline
UInt32 AnimationGroupBase::getProducedEventId(const Char8 *ProducedEventName) const
{
    return _Producer.getProducedEventId(ProducedEventName);
}

inline
SFEventProducerPtr *AnimationGroupBase::editSFEventProducer(void)
{
    return &_sfEventProducer;
}

//! Get the value of the AnimationGroup::_sfEventProducer field.
inline
EventProducerPtr &AnimationGroupBase::editEventProducer(void)
{
    return _sfEventProducer.getValue();
}

OSG_END_NAMESPACE
