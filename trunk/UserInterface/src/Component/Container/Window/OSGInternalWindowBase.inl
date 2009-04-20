/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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
 **     class InternalWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &InternalWindowBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 InternalWindowBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
InternalWindowPtr InternalWindowBase::create(void) 
{
    InternalWindowPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = InternalWindowPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
InternalWindowPtr InternalWindowBase::createEmpty(void) 
{ 
    InternalWindowPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the InternalWindow::_sfFocusedComponent field.
inline
SFComponentPtr *InternalWindowBase::getSFFocusedComponent(void)
{
    return &_sfFocusedComponent;
}

//! Get the InternalWindow::_mfActivePopupMenus field.
inline
MFPopupMenuPtr *InternalWindowBase::getMFActivePopupMenus(void)
{
    return &_mfActivePopupMenus;
}

//! Get the InternalWindow::_sfActiveToolTip field.
inline
SFToolTipPtr *InternalWindowBase::getSFActiveToolTip(void)
{
    return &_sfActiveToolTip;
}

//! Get the InternalWindow::_sfMenuBar field.
inline
SFMenuBarPtr *InternalWindowBase::getSFMenuBar(void)
{
    return &_sfMenuBar;
}

//! Get the InternalWindow::_sfTitlebar field.
inline
SFTitlebarPtr *InternalWindowBase::getSFTitlebar(void)
{
    return &_sfTitlebar;
}


//! Get the value of the InternalWindow::_sfFocusedComponent field.
inline
ComponentPtr &InternalWindowBase::getFocusedComponent(void)
{
    return _sfFocusedComponent.getValue();
}

//! Get the value of the InternalWindow::_sfFocusedComponent field.
inline
const ComponentPtr &InternalWindowBase::getFocusedComponent(void) const
{
    return _sfFocusedComponent.getValue();
}

//! Set the value of the InternalWindow::_sfFocusedComponent field.
inline
void InternalWindowBase::setFocusedComponent(const ComponentPtr &value)
{
    _sfFocusedComponent.setValue(value);
}

//! Get the value of the InternalWindow::_sfActiveToolTip field.
inline
ToolTipPtr &InternalWindowBase::getActiveToolTip(void)
{
    return _sfActiveToolTip.getValue();
}

//! Get the value of the InternalWindow::_sfActiveToolTip field.
inline
const ToolTipPtr &InternalWindowBase::getActiveToolTip(void) const
{
    return _sfActiveToolTip.getValue();
}

//! Set the value of the InternalWindow::_sfActiveToolTip field.
inline
void InternalWindowBase::setActiveToolTip(const ToolTipPtr &value)
{
    _sfActiveToolTip.setValue(value);
}

//! Get the value of the InternalWindow::_sfMenuBar field.
inline
MenuBarPtr &InternalWindowBase::getMenuBar(void)
{
    return _sfMenuBar.getValue();
}

//! Get the value of the InternalWindow::_sfMenuBar field.
inline
const MenuBarPtr &InternalWindowBase::getMenuBar(void) const
{
    return _sfMenuBar.getValue();
}

//! Set the value of the InternalWindow::_sfMenuBar field.
inline
void InternalWindowBase::setMenuBar(const MenuBarPtr &value)
{
    _sfMenuBar.setValue(value);
}

//! Get the value of the InternalWindow::_sfTitlebar field.
inline
TitlebarPtr &InternalWindowBase::getTitlebar(void)
{
    return _sfTitlebar.getValue();
}

//! Get the value of the InternalWindow::_sfTitlebar field.
inline
const TitlebarPtr &InternalWindowBase::getTitlebar(void) const
{
    return _sfTitlebar.getValue();
}

//! Set the value of the InternalWindow::_sfTitlebar field.
inline
void InternalWindowBase::setTitlebar(const TitlebarPtr &value)
{
    _sfTitlebar.setValue(value);
}


//! Get the value of the \a index element the InternalWindow::_mfActivePopupMenus field.
inline
PopupMenuPtr &InternalWindowBase::getActivePopupMenus(const UInt32 index)
{
    return _mfActivePopupMenus[index];
}

//! Get the InternalWindow::_mfActivePopupMenus field.
inline
MFPopupMenuPtr &InternalWindowBase::getActivePopupMenus(void)
{
    return _mfActivePopupMenus;
}

//! Get the InternalWindow::_mfActivePopupMenus field.
inline
const MFPopupMenuPtr &InternalWindowBase::getActivePopupMenus(void) const
{
    return _mfActivePopupMenus;
}

OSG_END_NAMESPACE

#define OSGINTERNALWINDOWBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
