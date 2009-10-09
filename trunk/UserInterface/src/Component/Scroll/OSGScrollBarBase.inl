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

//! access the producer type of the class
inline
const EventProducerType &ScrollBarBase::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 ScrollBarBase::getProducerClassTypeId(void)
{
    return _producerType.getId();
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
const SFUInt32 *ScrollBarBase::getSFOrientation(void) const
{
    return &_sfOrientation;
}

//! Get the ScrollBar::_sfOrientation field.
inline
SFUInt32 *ScrollBarBase::editSFOrientation(void)
{
    return &_sfOrientation;
}

//! Get the ScrollBar::_sfUnitIncrement field.
inline
const SFUInt32 *ScrollBarBase::getSFUnitIncrement(void) const
{
    return &_sfUnitIncrement;
}

//! Get the ScrollBar::_sfUnitIncrement field.
inline
SFUInt32 *ScrollBarBase::editSFUnitIncrement(void)
{
    return &_sfUnitIncrement;
}

//! Get the ScrollBar::_sfBlockIncrement field.
inline
const SFUInt32 *ScrollBarBase::getSFBlockIncrement(void) const
{
    return &_sfBlockIncrement;
}

//! Get the ScrollBar::_sfBlockIncrement field.
inline
SFUInt32 *ScrollBarBase::editSFBlockIncrement(void)
{
    return &_sfBlockIncrement;
}

//! Get the ScrollBar::_sfVerticalMinButton field.
inline
const SFButtonPtr *ScrollBarBase::getSFVerticalMinButton(void) const
{
    return &_sfVerticalMinButton;
}

//! Get the ScrollBar::_sfVerticalMinButton field.
inline
SFButtonPtr *ScrollBarBase::editSFVerticalMinButton(void)
{
    return &_sfVerticalMinButton;
}

//! Get the ScrollBar::_sfVerticalMaxButton field.
inline
const SFButtonPtr *ScrollBarBase::getSFVerticalMaxButton(void) const
{
    return &_sfVerticalMaxButton;
}

//! Get the ScrollBar::_sfVerticalMaxButton field.
inline
SFButtonPtr *ScrollBarBase::editSFVerticalMaxButton(void)
{
    return &_sfVerticalMaxButton;
}

//! Get the ScrollBar::_sfVerticalScrollBar field.
inline
const SFButtonPtr *ScrollBarBase::getSFVerticalScrollBar(void) const
{
    return &_sfVerticalScrollBar;
}

//! Get the ScrollBar::_sfVerticalScrollBar field.
inline
SFButtonPtr *ScrollBarBase::editSFVerticalScrollBar(void)
{
    return &_sfVerticalScrollBar;
}

//! Get the ScrollBar::_sfVerticalScrollField field.
inline
const SFButtonPtr *ScrollBarBase::getSFVerticalScrollField(void) const
{
    return &_sfVerticalScrollField;
}

//! Get the ScrollBar::_sfVerticalScrollField field.
inline
SFButtonPtr *ScrollBarBase::editSFVerticalScrollField(void)
{
    return &_sfVerticalScrollField;
}

//! Get the ScrollBar::_sfHorizontalMinButton field.
inline
const SFButtonPtr *ScrollBarBase::getSFHorizontalMinButton(void) const
{
    return &_sfHorizontalMinButton;
}

//! Get the ScrollBar::_sfHorizontalMinButton field.
inline
SFButtonPtr *ScrollBarBase::editSFHorizontalMinButton(void)
{
    return &_sfHorizontalMinButton;
}

//! Get the ScrollBar::_sfHorizontalMaxButton field.
inline
const SFButtonPtr *ScrollBarBase::getSFHorizontalMaxButton(void) const
{
    return &_sfHorizontalMaxButton;
}

//! Get the ScrollBar::_sfHorizontalMaxButton field.
inline
SFButtonPtr *ScrollBarBase::editSFHorizontalMaxButton(void)
{
    return &_sfHorizontalMaxButton;
}

//! Get the ScrollBar::_sfHorizontalScrollBar field.
inline
const SFButtonPtr *ScrollBarBase::getSFHorizontalScrollBar(void) const
{
    return &_sfHorizontalScrollBar;
}

//! Get the ScrollBar::_sfHorizontalScrollBar field.
inline
SFButtonPtr *ScrollBarBase::editSFHorizontalScrollBar(void)
{
    return &_sfHorizontalScrollBar;
}

//! Get the ScrollBar::_sfHorizontalScrollField field.
inline
const SFButtonPtr *ScrollBarBase::getSFHorizontalScrollField(void) const
{
    return &_sfHorizontalScrollField;
}

//! Get the ScrollBar::_sfHorizontalScrollField field.
inline
SFButtonPtr *ScrollBarBase::editSFHorizontalScrollField(void)
{
    return &_sfHorizontalScrollField;
}

//! Get the ScrollBar::_sfScrollBarMinLength field.
inline
const SFUInt32 *ScrollBarBase::getSFScrollBarMinLength(void) const
{
    return &_sfScrollBarMinLength;
}

//! Get the ScrollBar::_sfScrollBarMinLength field.
inline
SFUInt32 *ScrollBarBase::editSFScrollBarMinLength(void)
{
    return &_sfScrollBarMinLength;
}

//! Get the ScrollBar::_sfRangeModel field.
inline
const SFBoundedRangeModelPtr *ScrollBarBase::getSFRangeModel(void) const
{
    return &_sfRangeModel;
}

//! Get the ScrollBar::_sfRangeModel field.
inline
SFBoundedRangeModelPtr *ScrollBarBase::editSFRangeModel(void)
{
    return &_sfRangeModel;
}


//! Get the value of the ScrollBar::_sfOrientation field.
inline
UInt32 &ScrollBarBase::editOrientation(void)
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
UInt32 &ScrollBarBase::editUnitIncrement(void)
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
UInt32 &ScrollBarBase::editBlockIncrement(void)
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

//! Get the value of the ScrollBar::_sfVerticalMinButton field.
inline
ButtonPtr &ScrollBarBase::editVerticalMinButton(void)
{
    return _sfVerticalMinButton.getValue();
}

//! Get the value of the ScrollBar::_sfVerticalMinButton field.
inline
const ButtonPtr &ScrollBarBase::getVerticalMinButton(void) const
{
    return _sfVerticalMinButton.getValue();
}

//! Set the value of the ScrollBar::_sfVerticalMinButton field.
inline
void ScrollBarBase::setVerticalMinButton(const ButtonPtr &value)
{
    _sfVerticalMinButton.setValue(value);
}

//! Get the value of the ScrollBar::_sfVerticalMaxButton field.
inline
ButtonPtr &ScrollBarBase::editVerticalMaxButton(void)
{
    return _sfVerticalMaxButton.getValue();
}

//! Get the value of the ScrollBar::_sfVerticalMaxButton field.
inline
const ButtonPtr &ScrollBarBase::getVerticalMaxButton(void) const
{
    return _sfVerticalMaxButton.getValue();
}

//! Set the value of the ScrollBar::_sfVerticalMaxButton field.
inline
void ScrollBarBase::setVerticalMaxButton(const ButtonPtr &value)
{
    _sfVerticalMaxButton.setValue(value);
}

//! Get the value of the ScrollBar::_sfVerticalScrollBar field.
inline
ButtonPtr &ScrollBarBase::editVerticalScrollBar(void)
{
    return _sfVerticalScrollBar.getValue();
}

//! Get the value of the ScrollBar::_sfVerticalScrollBar field.
inline
const ButtonPtr &ScrollBarBase::getVerticalScrollBar(void) const
{
    return _sfVerticalScrollBar.getValue();
}

//! Set the value of the ScrollBar::_sfVerticalScrollBar field.
inline
void ScrollBarBase::setVerticalScrollBar(const ButtonPtr &value)
{
    _sfVerticalScrollBar.setValue(value);
}

//! Get the value of the ScrollBar::_sfVerticalScrollField field.
inline
ButtonPtr &ScrollBarBase::editVerticalScrollField(void)
{
    return _sfVerticalScrollField.getValue();
}

//! Get the value of the ScrollBar::_sfVerticalScrollField field.
inline
const ButtonPtr &ScrollBarBase::getVerticalScrollField(void) const
{
    return _sfVerticalScrollField.getValue();
}

//! Set the value of the ScrollBar::_sfVerticalScrollField field.
inline
void ScrollBarBase::setVerticalScrollField(const ButtonPtr &value)
{
    _sfVerticalScrollField.setValue(value);
}

//! Get the value of the ScrollBar::_sfHorizontalMinButton field.
inline
ButtonPtr &ScrollBarBase::editHorizontalMinButton(void)
{
    return _sfHorizontalMinButton.getValue();
}

//! Get the value of the ScrollBar::_sfHorizontalMinButton field.
inline
const ButtonPtr &ScrollBarBase::getHorizontalMinButton(void) const
{
    return _sfHorizontalMinButton.getValue();
}

//! Set the value of the ScrollBar::_sfHorizontalMinButton field.
inline
void ScrollBarBase::setHorizontalMinButton(const ButtonPtr &value)
{
    _sfHorizontalMinButton.setValue(value);
}

//! Get the value of the ScrollBar::_sfHorizontalMaxButton field.
inline
ButtonPtr &ScrollBarBase::editHorizontalMaxButton(void)
{
    return _sfHorizontalMaxButton.getValue();
}

//! Get the value of the ScrollBar::_sfHorizontalMaxButton field.
inline
const ButtonPtr &ScrollBarBase::getHorizontalMaxButton(void) const
{
    return _sfHorizontalMaxButton.getValue();
}

//! Set the value of the ScrollBar::_sfHorizontalMaxButton field.
inline
void ScrollBarBase::setHorizontalMaxButton(const ButtonPtr &value)
{
    _sfHorizontalMaxButton.setValue(value);
}

//! Get the value of the ScrollBar::_sfHorizontalScrollBar field.
inline
ButtonPtr &ScrollBarBase::editHorizontalScrollBar(void)
{
    return _sfHorizontalScrollBar.getValue();
}

//! Get the value of the ScrollBar::_sfHorizontalScrollBar field.
inline
const ButtonPtr &ScrollBarBase::getHorizontalScrollBar(void) const
{
    return _sfHorizontalScrollBar.getValue();
}

//! Set the value of the ScrollBar::_sfHorizontalScrollBar field.
inline
void ScrollBarBase::setHorizontalScrollBar(const ButtonPtr &value)
{
    _sfHorizontalScrollBar.setValue(value);
}

//! Get the value of the ScrollBar::_sfHorizontalScrollField field.
inline
ButtonPtr &ScrollBarBase::editHorizontalScrollField(void)
{
    return _sfHorizontalScrollField.getValue();
}

//! Get the value of the ScrollBar::_sfHorizontalScrollField field.
inline
const ButtonPtr &ScrollBarBase::getHorizontalScrollField(void) const
{
    return _sfHorizontalScrollField.getValue();
}

//! Set the value of the ScrollBar::_sfHorizontalScrollField field.
inline
void ScrollBarBase::setHorizontalScrollField(const ButtonPtr &value)
{
    _sfHorizontalScrollField.setValue(value);
}

//! Get the value of the ScrollBar::_sfScrollBarMinLength field.
inline
UInt32 &ScrollBarBase::editScrollBarMinLength(void)
{
    return _sfScrollBarMinLength.getValue();
}

//! Get the value of the ScrollBar::_sfScrollBarMinLength field.
inline
const UInt32 &ScrollBarBase::getScrollBarMinLength(void) const
{
    return _sfScrollBarMinLength.getValue();
}

//! Set the value of the ScrollBar::_sfScrollBarMinLength field.
inline
void ScrollBarBase::setScrollBarMinLength(const UInt32 &value)
{
    _sfScrollBarMinLength.setValue(value);
}

//! Get the value of the ScrollBar::_sfRangeModel field.
inline
BoundedRangeModelPtr &ScrollBarBase::editRangeModel(void)
{
    return _sfRangeModel.getValue();
}

//! Get the value of the ScrollBar::_sfRangeModel field.
inline
const BoundedRangeModelPtr &ScrollBarBase::getRangeModel(void) const
{
    return _sfRangeModel.getValue();
}

//! Set the value of the ScrollBar::_sfRangeModel field.
inline
void ScrollBarBase::setRangeModel(const BoundedRangeModelPtr &value)
{
    _sfRangeModel.setValue(value);
}


OSG_END_NAMESPACE
