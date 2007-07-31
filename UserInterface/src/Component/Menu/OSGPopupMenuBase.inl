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
 **     class PopupMenu!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PopupMenuBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 PopupMenuBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
PopupMenuPtr PopupMenuBase::create(void) 
{
    PopupMenuPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = PopupMenuPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
PopupMenuPtr PopupMenuBase::createEmpty(void) 
{ 
    PopupMenuPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the PopupMenu::_mfItems field.
inline
MFMenuItemPtr *PopupMenuBase::getMFItems(void)
{
    return &_mfItems;
}

//! Get the PopupMenu::_sfSubMenuDelay field.
inline
SFReal32 *PopupMenuBase::getSFSubMenuDelay(void)
{
    return &_sfSubMenuDelay;
}

//! Get the PopupMenu::_sfInvoker field.
inline
SFComponentPtr *PopupMenuBase::getSFInvoker(void)
{
    return &_sfInvoker;
}


//! Get the value of the PopupMenu::_sfSubMenuDelay field.
inline
Real32 &PopupMenuBase::getSubMenuDelay(void)
{
    return _sfSubMenuDelay.getValue();
}

//! Get the value of the PopupMenu::_sfSubMenuDelay field.
inline
const Real32 &PopupMenuBase::getSubMenuDelay(void) const
{
    return _sfSubMenuDelay.getValue();
}

//! Set the value of the PopupMenu::_sfSubMenuDelay field.
inline
void PopupMenuBase::setSubMenuDelay(const Real32 &value)
{
    _sfSubMenuDelay.setValue(value);
}

//! Get the value of the PopupMenu::_sfInvoker field.
inline
ComponentPtr &PopupMenuBase::getInvoker(void)
{
    return _sfInvoker.getValue();
}

//! Get the value of the PopupMenu::_sfInvoker field.
inline
const ComponentPtr &PopupMenuBase::getInvoker(void) const
{
    return _sfInvoker.getValue();
}

//! Set the value of the PopupMenu::_sfInvoker field.
inline
void PopupMenuBase::setInvoker(const ComponentPtr &value)
{
    _sfInvoker.setValue(value);
}


//! Get the value of the \a index element the PopupMenu::_mfItems field.
inline
MenuItemPtr &PopupMenuBase::getItems(const UInt32 index)
{
    return _mfItems[index];
}

//! Get the PopupMenu::_mfItems field.
inline
MFMenuItemPtr &PopupMenuBase::getItems(void)
{
    return _mfItems;
}

//! Get the PopupMenu::_mfItems field.
inline
const MFMenuItemPtr &PopupMenuBase::getItems(void) const
{
    return _mfItems;
}

OSG_END_NAMESPACE

#define OSGPOPUPMENUBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

