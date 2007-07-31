/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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

#include <OpenSG/OSGConfig.h>

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


/*------------------------------ get -----------------------------------*/

//! Get the WindowEventProducer::_sfWindow field.
inline
SFWindowPtr *WindowEventProducerBase::getSFWindow(void)
{
    return &_sfWindow;
}

//! Get the WindowEventProducer::_sfEnabled field.
inline
SFBool *WindowEventProducerBase::getSFEnabled(void)
{
    return &_sfEnabled;
}

//! Get the WindowEventProducer::_sfLastUpdateTime field.
inline
SFTime *WindowEventProducerBase::getSFLastUpdateTime(void)
{
    return &_sfLastUpdateTime;
}


//! Get the value of the WindowEventProducer::_sfWindow field.
inline
WindowPtr &WindowEventProducerBase::getWindow(void)
{
    return _sfWindow.getValue();
}

//! Get the value of the WindowEventProducer::_sfWindow field.
inline
const WindowPtr &WindowEventProducerBase::getWindow(void) const
{
    return _sfWindow.getValue();
}

//! Set the value of the WindowEventProducer::_sfWindow field.
inline
void WindowEventProducerBase::setWindow(const WindowPtr &value)
{
    _sfWindow.setValue(value);
}

//! Get the value of the WindowEventProducer::_sfEnabled field.
inline
bool &WindowEventProducerBase::getEnabled(void)
{
    return _sfEnabled.getValue();
}

//! Get the value of the WindowEventProducer::_sfEnabled field.
inline
const bool &WindowEventProducerBase::getEnabled(void) const
{
    return _sfEnabled.getValue();
}

//! Set the value of the WindowEventProducer::_sfEnabled field.
inline
void WindowEventProducerBase::setEnabled(const bool &value)
{
    _sfEnabled.setValue(value);
}

//! Get the value of the WindowEventProducer::_sfLastUpdateTime field.
inline
Time &WindowEventProducerBase::getLastUpdateTime(void)
{
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
    _sfLastUpdateTime.setValue(value);
}


OSG_END_NAMESPACE

#define OSGWINDOWEVENTPRODUCERBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

