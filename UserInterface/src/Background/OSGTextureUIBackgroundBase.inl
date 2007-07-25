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
 **     class TextureUIBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TextureUIBackgroundBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 TextureUIBackgroundBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
TextureUIBackgroundPtr TextureUIBackgroundBase::create(void) 
{
    TextureUIBackgroundPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = TextureUIBackgroundPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
TextureUIBackgroundPtr TextureUIBackgroundBase::createEmpty(void) 
{ 
    TextureUIBackgroundPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the TextureUIBackground::_sfTexture field.
inline
SFTextureChunkPtr *TextureUIBackgroundBase::getSFTexture(void)
{
    return &_sfTexture;
}

//! Get the TextureUIBackground::_sfScale field.
inline
SFUInt32 *TextureUIBackgroundBase::getSFScale(void)
{
    return &_sfScale;
}

//! Get the TextureUIBackground::_sfScaleAbsoluteSize field.
inline
SFVec2s *TextureUIBackgroundBase::getSFScaleAbsoluteSize(void)
{
    return &_sfScaleAbsoluteSize;
}

//! Get the TextureUIBackground::_sfVerticalAlignment field.
inline
SFReal32 *TextureUIBackgroundBase::getSFVerticalAlignment(void)
{
    return &_sfVerticalAlignment;
}

//! Get the TextureUIBackground::_sfHorizontalAlignment field.
inline
SFReal32 *TextureUIBackgroundBase::getSFHorizontalAlignment(void)
{
    return &_sfHorizontalAlignment;
}


//! Get the value of the TextureUIBackground::_sfTexture field.
inline
TextureChunkPtr &TextureUIBackgroundBase::getTexture(void)
{
    return _sfTexture.getValue();
}

//! Get the value of the TextureUIBackground::_sfTexture field.
inline
const TextureChunkPtr &TextureUIBackgroundBase::getTexture(void) const
{
    return _sfTexture.getValue();
}

//! Set the value of the TextureUIBackground::_sfTexture field.
inline
void TextureUIBackgroundBase::setTexture(const TextureChunkPtr &value)
{
    _sfTexture.setValue(value);
}

//! Get the value of the TextureUIBackground::_sfScale field.
inline
UInt32 &TextureUIBackgroundBase::getScale(void)
{
    return _sfScale.getValue();
}

//! Get the value of the TextureUIBackground::_sfScale field.
inline
const UInt32 &TextureUIBackgroundBase::getScale(void) const
{
    return _sfScale.getValue();
}

//! Set the value of the TextureUIBackground::_sfScale field.
inline
void TextureUIBackgroundBase::setScale(const UInt32 &value)
{
    _sfScale.setValue(value);
}

//! Get the value of the TextureUIBackground::_sfScaleAbsoluteSize field.
inline
Vec2s &TextureUIBackgroundBase::getScaleAbsoluteSize(void)
{
    return _sfScaleAbsoluteSize.getValue();
}

//! Get the value of the TextureUIBackground::_sfScaleAbsoluteSize field.
inline
const Vec2s &TextureUIBackgroundBase::getScaleAbsoluteSize(void) const
{
    return _sfScaleAbsoluteSize.getValue();
}

//! Set the value of the TextureUIBackground::_sfScaleAbsoluteSize field.
inline
void TextureUIBackgroundBase::setScaleAbsoluteSize(const Vec2s &value)
{
    _sfScaleAbsoluteSize.setValue(value);
}

//! Get the value of the TextureUIBackground::_sfVerticalAlignment field.
inline
Real32 &TextureUIBackgroundBase::getVerticalAlignment(void)
{
    return _sfVerticalAlignment.getValue();
}

//! Get the value of the TextureUIBackground::_sfVerticalAlignment field.
inline
const Real32 &TextureUIBackgroundBase::getVerticalAlignment(void) const
{
    return _sfVerticalAlignment.getValue();
}

//! Set the value of the TextureUIBackground::_sfVerticalAlignment field.
inline
void TextureUIBackgroundBase::setVerticalAlignment(const Real32 &value)
{
    _sfVerticalAlignment.setValue(value);
}

//! Get the value of the TextureUIBackground::_sfHorizontalAlignment field.
inline
Real32 &TextureUIBackgroundBase::getHorizontalAlignment(void)
{
    return _sfHorizontalAlignment.getValue();
}

//! Get the value of the TextureUIBackground::_sfHorizontalAlignment field.
inline
const Real32 &TextureUIBackgroundBase::getHorizontalAlignment(void) const
{
    return _sfHorizontalAlignment.getValue();
}

//! Set the value of the TextureUIBackground::_sfHorizontalAlignment field.
inline
void TextureUIBackgroundBase::setHorizontalAlignment(const Real32 &value)
{
    _sfHorizontalAlignment.setValue(value);
}


OSG_END_NAMESPACE

#define OSGTEXTUREUIBACKGROUNDBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

