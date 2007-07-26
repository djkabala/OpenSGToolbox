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
 **     class ScrollBar!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ScrollBarBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ScrollBarBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ScrollBarPtr ScrollBarBase::create(void) 
{
    ScrollBarPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ScrollBarPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ScrollBarPtr ScrollBarBase::createEmpty(void) 
{ 
    ScrollBarPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ScrollBar::_sfOrientation field.
inline
SFUInt32 *ScrollBarBase::getSFOrientation(void)
{
    return &_sfOrientation;
}

//! Get the ScrollBar::_sfUnitIncrement field.
inline
SFUInt32 *ScrollBarBase::getSFUnitIncrement(void)
{
    return &_sfUnitIncrement;
}

//! Get the ScrollBar::_sfBlockIncrement field.
inline
SFUInt32 *ScrollBarBase::getSFBlockIncrement(void)
{
    return &_sfBlockIncrement;
}

//! Get the ScrollBar::_sfMinButton field.
inline
SFButtonPtr *ScrollBarBase::getSFMinButton(void)
{
    return &_sfMinButton;
}

//! Get the ScrollBar::_sfMaxButton field.
inline
SFButtonPtr *ScrollBarBase::getSFMaxButton(void)
{
    return &_sfMaxButton;
}

//! Get the ScrollBar::_sfScrollBar field.
inline
SFUIDrawObjectCanvasPtr *ScrollBarBase::getSFScrollBar(void)
{
    return &_sfScrollBar;
}

//! Get the ScrollBar::_sfScrollField field.
inline
SFUIDrawObjectCanvasPtr *ScrollBarBase::getSFScrollField(void)
{
    return &_sfScrollField;
}


//! Get the value of the ScrollBar::_sfOrientation field.
inline
UInt32 &ScrollBarBase::getOrientation(void)
{
    return _sfOrientation.getValue();
}

//! Get the value of the ScrollBar::_sfOrientation field.
inline
const UInt32 &ScrollBarBase::getOrientation(void) const
{
    return _sfOrientation.getValue();
}

//! Set the value of the ScrollBar::_sfOrientation field.
inline
void ScrollBarBase::setOrientation(const UInt32 &value)
{
    _sfOrientation.setValue(value);
}

//! Get the value of the ScrollBar::_sfUnitIncrement field.
inline
UInt32 &ScrollBarBase::getUnitIncrement(void)
{
    return _sfUnitIncrement.getValue();
}

//! Get the value of the ScrollBar::_sfUnitIncrement field.
inline
const UInt32 &ScrollBarBase::getUnitIncrement(void) const
{
    return _sfUnitIncrement.getValue();
}

//! Set the value of the ScrollBar::_sfUnitIncrement field.
inline
void ScrollBarBase::setUnitIncrement(const UInt32 &value)
{
    _sfUnitIncrement.setValue(value);
}

//! Get the value of the ScrollBar::_sfBlockIncrement field.
inline
UInt32 &ScrollBarBase::getBlockIncrement(void)
{
    return _sfBlockIncrement.getValue();
}

//! Get the value of the ScrollBar::_sfBlockIncrement field.
inline
const UInt32 &ScrollBarBase::getBlockIncrement(void) const
{
    return _sfBlockIncrement.getValue();
}

//! Set the value of the ScrollBar::_sfBlockIncrement field.
inline
void ScrollBarBase::setBlockIncrement(const UInt32 &value)
{
    _sfBlockIncrement.setValue(value);
}

//! Get the value of the ScrollBar::_sfMinButton field.
inline
ButtonPtr &ScrollBarBase::getMinButton(void)
{
    return _sfMinButton.getValue();
}

//! Get the value of the ScrollBar::_sfMinButton field.
inline
const ButtonPtr &ScrollBarBase::getMinButton(void) const
{
    return _sfMinButton.getValue();
}

//! Set the value of the ScrollBar::_sfMinButton field.
inline
void ScrollBarBase::setMinButton(const ButtonPtr &value)
{
    _sfMinButton.setValue(value);
}

//! Get the value of the ScrollBar::_sfMaxButton field.
inline
ButtonPtr &ScrollBarBase::getMaxButton(void)
{
    return _sfMaxButton.getValue();
}

//! Get the value of the ScrollBar::_sfMaxButton field.
inline
const ButtonPtr &ScrollBarBase::getMaxButton(void) const
{
    return _sfMaxButton.getValue();
}

//! Set the value of the ScrollBar::_sfMaxButton field.
inline
void ScrollBarBase::setMaxButton(const ButtonPtr &value)
{
    _sfMaxButton.setValue(value);
}

//! Get the value of the ScrollBar::_sfScrollBar field.
inline
UIDrawObjectCanvasPtr &ScrollBarBase::getScrollBar(void)
{
    return _sfScrollBar.getValue();
}

//! Get the value of the ScrollBar::_sfScrollBar field.
inline
const UIDrawObjectCanvasPtr &ScrollBarBase::getScrollBar(void) const
{
    return _sfScrollBar.getValue();
}

//! Set the value of the ScrollBar::_sfScrollBar field.
inline
void ScrollBarBase::setScrollBar(const UIDrawObjectCanvasPtr &value)
{
    _sfScrollBar.setValue(value);
}

//! Get the value of the ScrollBar::_sfScrollField field.
inline
UIDrawObjectCanvasPtr &ScrollBarBase::getScrollField(void)
{
    return _sfScrollField.getValue();
}

//! Get the value of the ScrollBar::_sfScrollField field.
inline
const UIDrawObjectCanvasPtr &ScrollBarBase::getScrollField(void) const
{
    return _sfScrollField.getValue();
}

//! Set the value of the ScrollBar::_sfScrollField field.
inline
void ScrollBarBase::setScrollField(const UIDrawObjectCanvasPtr &value)
{
    _sfScrollField.setValue(value);
}


OSG_END_NAMESPACE

#define OSGSCROLLBARBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

