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
 **     class Button!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ButtonBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ButtonBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ButtonPtr ButtonBase::create(void) 
{
    ButtonPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ButtonPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ButtonPtr ButtonBase::createEmpty(void) 
{ 
    ButtonPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the Button::_sfFont field.
inline
SFUIFontPtr *ButtonBase::getSFFont(void)
{
    return &_sfFont;
}

//! Get the Button::_sfText field.
inline
SFString *ButtonBase::getSFText(void)
{
    return &_sfText;
}

//! Get the Button::_sfActive field.
inline
SFBool *ButtonBase::getSFActive(void)
{
    return &_sfActive;
}

//! Get the Button::_sfActiveBorder field.
inline
SFBorderPtr *ButtonBase::getSFActiveBorder(void)
{
    return &_sfActiveBorder;
}

//! Get the Button::_sfActiveBackground field.
inline
SFLayerPtr *ButtonBase::getSFActiveBackground(void)
{
    return &_sfActiveBackground;
}

//! Get the Button::_sfActiveForeground field.
inline
SFLayerPtr *ButtonBase::getSFActiveForeground(void)
{
    return &_sfActiveForeground;
}

//! Get the Button::_sfActiveTextColor field.
inline
SFColor4f *ButtonBase::getSFActiveTextColor(void)
{
    return &_sfActiveTextColor;
}

//! Get the Button::_sfFocusedTextColor field.
inline
SFColor4f *ButtonBase::getSFFocusedTextColor(void)
{
    return &_sfFocusedTextColor;
}

//! Get the Button::_sfRolloverTextColor field.
inline
SFColor4f *ButtonBase::getSFRolloverTextColor(void)
{
    return &_sfRolloverTextColor;
}

//! Get the Button::_sfDisabledTextColor field.
inline
SFColor4f *ButtonBase::getSFDisabledTextColor(void)
{
    return &_sfDisabledTextColor;
}

//! Get the Button::_sfTextColor field.
inline
SFColor4f *ButtonBase::getSFTextColor(void)
{
    return &_sfTextColor;
}

//! Get the Button::_sfVerticalAlignment field.
inline
SFReal32 *ButtonBase::getSFVerticalAlignment(void)
{
    return &_sfVerticalAlignment;
}

//! Get the Button::_sfHorizontalAlignment field.
inline
SFReal32 *ButtonBase::getSFHorizontalAlignment(void)
{
    return &_sfHorizontalAlignment;
}

//! Get the Button::_sfEnableActionOnMouseDownTime field.
inline
SFBool *ButtonBase::getSFEnableActionOnMouseDownTime(void)
{
    return &_sfEnableActionOnMouseDownTime;
}

//! Get the Button::_sfActionOnMouseDownRate field.
inline
SFTime *ButtonBase::getSFActionOnMouseDownRate(void)
{
    return &_sfActionOnMouseDownRate;
}

//! Get the Button::_sfActiveOffset field.
inline
SFVec2s *ButtonBase::getSFActiveOffset(void)
{
    return &_sfActiveOffset;
}

//! Get the Button::_sfDrawObject field.
inline
SFUIDrawObjectCanvasPtr *ButtonBase::getSFDrawObject(void)
{
    return &_sfDrawObject;
}

//! Get the Button::_sfActiveDrawObject field.
inline
SFUIDrawObjectCanvasPtr *ButtonBase::getSFActiveDrawObject(void)
{
    return &_sfActiveDrawObject;
}

//! Get the Button::_sfFocusedDrawObject field.
inline
SFUIDrawObjectCanvasPtr *ButtonBase::getSFFocusedDrawObject(void)
{
    return &_sfFocusedDrawObject;
}

//! Get the Button::_sfRolloverDrawObject field.
inline
SFUIDrawObjectCanvasPtr *ButtonBase::getSFRolloverDrawObject(void)
{
    return &_sfRolloverDrawObject;
}

//! Get the Button::_sfDisabledDrawObject field.
inline
SFUIDrawObjectCanvasPtr *ButtonBase::getSFDisabledDrawObject(void)
{
    return &_sfDisabledDrawObject;
}


//! Get the value of the Button::_sfFont field.
inline
UIFontPtr &ButtonBase::getFont(void)
{
    return _sfFont.getValue();
}

//! Get the value of the Button::_sfFont field.
inline
const UIFontPtr &ButtonBase::getFont(void) const
{
    return _sfFont.getValue();
}

//! Set the value of the Button::_sfFont field.
inline
void ButtonBase::setFont(const UIFontPtr &value)
{
    _sfFont.setValue(value);
}

//! Get the value of the Button::_sfText field.
inline
std::string &ButtonBase::getText(void)
{
    return _sfText.getValue();
}

//! Get the value of the Button::_sfText field.
inline
const std::string &ButtonBase::getText(void) const
{
    return _sfText.getValue();
}

//! Set the value of the Button::_sfText field.
inline
void ButtonBase::setText(const std::string &value)
{
    _sfText.setValue(value);
}

//! Get the value of the Button::_sfActive field.
inline
bool &ButtonBase::getActive(void)
{
    return _sfActive.getValue();
}

//! Get the value of the Button::_sfActive field.
inline
const bool &ButtonBase::getActive(void) const
{
    return _sfActive.getValue();
}

//! Set the value of the Button::_sfActive field.
inline
void ButtonBase::setActive(const bool &value)
{
    _sfActive.setValue(value);
}

//! Get the value of the Button::_sfActiveBorder field.
inline
BorderPtr &ButtonBase::getActiveBorder(void)
{
    return _sfActiveBorder.getValue();
}

//! Get the value of the Button::_sfActiveBorder field.
inline
const BorderPtr &ButtonBase::getActiveBorder(void) const
{
    return _sfActiveBorder.getValue();
}

//! Set the value of the Button::_sfActiveBorder field.
inline
void ButtonBase::setActiveBorder(const BorderPtr &value)
{
    _sfActiveBorder.setValue(value);
}

//! Get the value of the Button::_sfActiveBackground field.
inline
LayerPtr &ButtonBase::getActiveBackground(void)
{
    return _sfActiveBackground.getValue();
}

//! Get the value of the Button::_sfActiveBackground field.
inline
const LayerPtr &ButtonBase::getActiveBackground(void) const
{
    return _sfActiveBackground.getValue();
}

//! Set the value of the Button::_sfActiveBackground field.
inline
void ButtonBase::setActiveBackground(const LayerPtr &value)
{
    _sfActiveBackground.setValue(value);
}

//! Get the value of the Button::_sfActiveForeground field.
inline
LayerPtr &ButtonBase::getActiveForeground(void)
{
    return _sfActiveForeground.getValue();
}

//! Get the value of the Button::_sfActiveForeground field.
inline
const LayerPtr &ButtonBase::getActiveForeground(void) const
{
    return _sfActiveForeground.getValue();
}

//! Set the value of the Button::_sfActiveForeground field.
inline
void ButtonBase::setActiveForeground(const LayerPtr &value)
{
    _sfActiveForeground.setValue(value);
}

//! Get the value of the Button::_sfActiveTextColor field.
inline
Color4f &ButtonBase::getActiveTextColor(void)
{
    return _sfActiveTextColor.getValue();
}

//! Get the value of the Button::_sfActiveTextColor field.
inline
const Color4f &ButtonBase::getActiveTextColor(void) const
{
    return _sfActiveTextColor.getValue();
}

//! Set the value of the Button::_sfActiveTextColor field.
inline
void ButtonBase::setActiveTextColor(const Color4f &value)
{
    _sfActiveTextColor.setValue(value);
}

//! Get the value of the Button::_sfFocusedTextColor field.
inline
Color4f &ButtonBase::getFocusedTextColor(void)
{
    return _sfFocusedTextColor.getValue();
}

//! Get the value of the Button::_sfFocusedTextColor field.
inline
const Color4f &ButtonBase::getFocusedTextColor(void) const
{
    return _sfFocusedTextColor.getValue();
}

//! Set the value of the Button::_sfFocusedTextColor field.
inline
void ButtonBase::setFocusedTextColor(const Color4f &value)
{
    _sfFocusedTextColor.setValue(value);
}

//! Get the value of the Button::_sfRolloverTextColor field.
inline
Color4f &ButtonBase::getRolloverTextColor(void)
{
    return _sfRolloverTextColor.getValue();
}

//! Get the value of the Button::_sfRolloverTextColor field.
inline
const Color4f &ButtonBase::getRolloverTextColor(void) const
{
    return _sfRolloverTextColor.getValue();
}

//! Set the value of the Button::_sfRolloverTextColor field.
inline
void ButtonBase::setRolloverTextColor(const Color4f &value)
{
    _sfRolloverTextColor.setValue(value);
}

//! Get the value of the Button::_sfDisabledTextColor field.
inline
Color4f &ButtonBase::getDisabledTextColor(void)
{
    return _sfDisabledTextColor.getValue();
}

//! Get the value of the Button::_sfDisabledTextColor field.
inline
const Color4f &ButtonBase::getDisabledTextColor(void) const
{
    return _sfDisabledTextColor.getValue();
}

//! Set the value of the Button::_sfDisabledTextColor field.
inline
void ButtonBase::setDisabledTextColor(const Color4f &value)
{
    _sfDisabledTextColor.setValue(value);
}

//! Get the value of the Button::_sfTextColor field.
inline
Color4f &ButtonBase::getTextColor(void)
{
    return _sfTextColor.getValue();
}

//! Get the value of the Button::_sfTextColor field.
inline
const Color4f &ButtonBase::getTextColor(void) const
{
    return _sfTextColor.getValue();
}

//! Set the value of the Button::_sfTextColor field.
inline
void ButtonBase::setTextColor(const Color4f &value)
{
    _sfTextColor.setValue(value);
}

//! Get the value of the Button::_sfVerticalAlignment field.
inline
Real32 &ButtonBase::getVerticalAlignment(void)
{
    return _sfVerticalAlignment.getValue();
}

//! Get the value of the Button::_sfVerticalAlignment field.
inline
const Real32 &ButtonBase::getVerticalAlignment(void) const
{
    return _sfVerticalAlignment.getValue();
}

//! Set the value of the Button::_sfVerticalAlignment field.
inline
void ButtonBase::setVerticalAlignment(const Real32 &value)
{
    _sfVerticalAlignment.setValue(value);
}

//! Get the value of the Button::_sfHorizontalAlignment field.
inline
Real32 &ButtonBase::getHorizontalAlignment(void)
{
    return _sfHorizontalAlignment.getValue();
}

//! Get the value of the Button::_sfHorizontalAlignment field.
inline
const Real32 &ButtonBase::getHorizontalAlignment(void) const
{
    return _sfHorizontalAlignment.getValue();
}

//! Set the value of the Button::_sfHorizontalAlignment field.
inline
void ButtonBase::setHorizontalAlignment(const Real32 &value)
{
    _sfHorizontalAlignment.setValue(value);
}

//! Get the value of the Button::_sfEnableActionOnMouseDownTime field.
inline
bool &ButtonBase::getEnableActionOnMouseDownTime(void)
{
    return _sfEnableActionOnMouseDownTime.getValue();
}

//! Get the value of the Button::_sfEnableActionOnMouseDownTime field.
inline
const bool &ButtonBase::getEnableActionOnMouseDownTime(void) const
{
    return _sfEnableActionOnMouseDownTime.getValue();
}

//! Set the value of the Button::_sfEnableActionOnMouseDownTime field.
inline
void ButtonBase::setEnableActionOnMouseDownTime(const bool &value)
{
    _sfEnableActionOnMouseDownTime.setValue(value);
}

//! Get the value of the Button::_sfActionOnMouseDownRate field.
inline
Time &ButtonBase::getActionOnMouseDownRate(void)
{
    return _sfActionOnMouseDownRate.getValue();
}

//! Get the value of the Button::_sfActionOnMouseDownRate field.
inline
const Time &ButtonBase::getActionOnMouseDownRate(void) const
{
    return _sfActionOnMouseDownRate.getValue();
}

//! Set the value of the Button::_sfActionOnMouseDownRate field.
inline
void ButtonBase::setActionOnMouseDownRate(const Time &value)
{
    _sfActionOnMouseDownRate.setValue(value);
}

//! Get the value of the Button::_sfActiveOffset field.
inline
Vec2s &ButtonBase::getActiveOffset(void)
{
    return _sfActiveOffset.getValue();
}

//! Get the value of the Button::_sfActiveOffset field.
inline
const Vec2s &ButtonBase::getActiveOffset(void) const
{
    return _sfActiveOffset.getValue();
}

//! Set the value of the Button::_sfActiveOffset field.
inline
void ButtonBase::setActiveOffset(const Vec2s &value)
{
    _sfActiveOffset.setValue(value);
}

//! Get the value of the Button::_sfDrawObject field.
inline
UIDrawObjectCanvasPtr &ButtonBase::getDrawObject(void)
{
    return _sfDrawObject.getValue();
}

//! Get the value of the Button::_sfDrawObject field.
inline
const UIDrawObjectCanvasPtr &ButtonBase::getDrawObject(void) const
{
    return _sfDrawObject.getValue();
}

//! Set the value of the Button::_sfDrawObject field.
inline
void ButtonBase::setDrawObject(const UIDrawObjectCanvasPtr &value)
{
    _sfDrawObject.setValue(value);
}

//! Get the value of the Button::_sfActiveDrawObject field.
inline
UIDrawObjectCanvasPtr &ButtonBase::getActiveDrawObject(void)
{
    return _sfActiveDrawObject.getValue();
}

//! Get the value of the Button::_sfActiveDrawObject field.
inline
const UIDrawObjectCanvasPtr &ButtonBase::getActiveDrawObject(void) const
{
    return _sfActiveDrawObject.getValue();
}

//! Set the value of the Button::_sfActiveDrawObject field.
inline
void ButtonBase::setActiveDrawObject(const UIDrawObjectCanvasPtr &value)
{
    _sfActiveDrawObject.setValue(value);
}

//! Get the value of the Button::_sfFocusedDrawObject field.
inline
UIDrawObjectCanvasPtr &ButtonBase::getFocusedDrawObject(void)
{
    return _sfFocusedDrawObject.getValue();
}

//! Get the value of the Button::_sfFocusedDrawObject field.
inline
const UIDrawObjectCanvasPtr &ButtonBase::getFocusedDrawObject(void) const
{
    return _sfFocusedDrawObject.getValue();
}

//! Set the value of the Button::_sfFocusedDrawObject field.
inline
void ButtonBase::setFocusedDrawObject(const UIDrawObjectCanvasPtr &value)
{
    _sfFocusedDrawObject.setValue(value);
}

//! Get the value of the Button::_sfRolloverDrawObject field.
inline
UIDrawObjectCanvasPtr &ButtonBase::getRolloverDrawObject(void)
{
    return _sfRolloverDrawObject.getValue();
}

//! Get the value of the Button::_sfRolloverDrawObject field.
inline
const UIDrawObjectCanvasPtr &ButtonBase::getRolloverDrawObject(void) const
{
    return _sfRolloverDrawObject.getValue();
}

//! Set the value of the Button::_sfRolloverDrawObject field.
inline
void ButtonBase::setRolloverDrawObject(const UIDrawObjectCanvasPtr &value)
{
    _sfRolloverDrawObject.setValue(value);
}

//! Get the value of the Button::_sfDisabledDrawObject field.
inline
UIDrawObjectCanvasPtr &ButtonBase::getDisabledDrawObject(void)
{
    return _sfDisabledDrawObject.getValue();
}

//! Get the value of the Button::_sfDisabledDrawObject field.
inline
const UIDrawObjectCanvasPtr &ButtonBase::getDisabledDrawObject(void) const
{
    return _sfDisabledDrawObject.getValue();
}

//! Set the value of the Button::_sfDisabledDrawObject field.
inline
void ButtonBase::setDisabledDrawObject(const UIDrawObjectCanvasPtr &value)
{
    _sfDisabledDrawObject.setValue(value);
}


OSG_END_NAMESPACE

#define OSGBUTTONBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

