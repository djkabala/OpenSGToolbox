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
 **     class PatternLayer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PatternLayerBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 PatternLayerBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
PatternLayerPtr PatternLayerBase::create(void) 
{
    PatternLayerPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = PatternLayerPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
PatternLayerPtr PatternLayerBase::createEmpty(void) 
{ 
    PatternLayerPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the PatternLayer::_sfTexture field.
inline
const SFTextureChunkPtr *PatternLayerBase::getSFTexture(void) const
{
    return &_sfTexture;
}

//! Get the PatternLayer::_sfTexture field.
inline
SFTextureChunkPtr *PatternLayerBase::editSFTexture(void)
{
    return &_sfTexture;
}

#ifndef OSG_2_PREP
//! Get the PatternLayer::_sfTexture field.
inline
SFTextureChunkPtr *PatternLayerBase::getSFTexture(void)
{
    return &_sfTexture;
}
#endif

//! Get the PatternLayer::_sfTransformation field.
inline
const SFTextureTransformChunkPtr *PatternLayerBase::getSFTransformation(void) const
{
    return &_sfTransformation;
}

//! Get the PatternLayer::_sfTransformation field.
inline
SFTextureTransformChunkPtr *PatternLayerBase::editSFTransformation(void)
{
    return &_sfTransformation;
}

#ifndef OSG_2_PREP
//! Get the PatternLayer::_sfTransformation field.
inline
SFTextureTransformChunkPtr *PatternLayerBase::getSFTransformation(void)
{
    return &_sfTransformation;
}
#endif

//! Get the PatternLayer::_sfPatternSize field.
inline
const SFVec2s *PatternLayerBase::getSFPatternSize(void) const
{
    return &_sfPatternSize;
}

//! Get the PatternLayer::_sfPatternSize field.
inline
SFVec2s *PatternLayerBase::editSFPatternSize(void)
{
    return &_sfPatternSize;
}

#ifndef OSG_2_PREP
//! Get the PatternLayer::_sfPatternSize field.
inline
SFVec2s *PatternLayerBase::getSFPatternSize(void)
{
    return &_sfPatternSize;
}
#endif

//! Get the PatternLayer::_sfVerticalAlignment field.
inline
const SFReal32 *PatternLayerBase::getSFVerticalAlignment(void) const
{
    return &_sfVerticalAlignment;
}

//! Get the PatternLayer::_sfVerticalAlignment field.
inline
SFReal32 *PatternLayerBase::editSFVerticalAlignment(void)
{
    return &_sfVerticalAlignment;
}

#ifndef OSG_2_PREP
//! Get the PatternLayer::_sfVerticalAlignment field.
inline
SFReal32 *PatternLayerBase::getSFVerticalAlignment(void)
{
    return &_sfVerticalAlignment;
}
#endif

//! Get the PatternLayer::_sfHorizontalAlignment field.
inline
const SFReal32 *PatternLayerBase::getSFHorizontalAlignment(void) const
{
    return &_sfHorizontalAlignment;
}

//! Get the PatternLayer::_sfHorizontalAlignment field.
inline
SFReal32 *PatternLayerBase::editSFHorizontalAlignment(void)
{
    return &_sfHorizontalAlignment;
}

#ifndef OSG_2_PREP
//! Get the PatternLayer::_sfHorizontalAlignment field.
inline
SFReal32 *PatternLayerBase::getSFHorizontalAlignment(void)
{
    return &_sfHorizontalAlignment;
}
#endif

//! Get the PatternLayer::_sfHorizontalRepeat field.
inline
const SFUInt32 *PatternLayerBase::getSFHorizontalRepeat(void) const
{
    return &_sfHorizontalRepeat;
}

//! Get the PatternLayer::_sfHorizontalRepeat field.
inline
SFUInt32 *PatternLayerBase::editSFHorizontalRepeat(void)
{
    return &_sfHorizontalRepeat;
}

#ifndef OSG_2_PREP
//! Get the PatternLayer::_sfHorizontalRepeat field.
inline
SFUInt32 *PatternLayerBase::getSFHorizontalRepeat(void)
{
    return &_sfHorizontalRepeat;
}
#endif

//! Get the PatternLayer::_sfVerticalRepeat field.
inline
const SFUInt32 *PatternLayerBase::getSFVerticalRepeat(void) const
{
    return &_sfVerticalRepeat;
}

//! Get the PatternLayer::_sfVerticalRepeat field.
inline
SFUInt32 *PatternLayerBase::editSFVerticalRepeat(void)
{
    return &_sfVerticalRepeat;
}

#ifndef OSG_2_PREP
//! Get the PatternLayer::_sfVerticalRepeat field.
inline
SFUInt32 *PatternLayerBase::getSFVerticalRepeat(void)
{
    return &_sfVerticalRepeat;
}
#endif

//! Get the PatternLayer::_sfHorizontalRepeatValue field.
inline
const SFReal32 *PatternLayerBase::getSFHorizontalRepeatValue(void) const
{
    return &_sfHorizontalRepeatValue;
}

//! Get the PatternLayer::_sfHorizontalRepeatValue field.
inline
SFReal32 *PatternLayerBase::editSFHorizontalRepeatValue(void)
{
    return &_sfHorizontalRepeatValue;
}

#ifndef OSG_2_PREP
//! Get the PatternLayer::_sfHorizontalRepeatValue field.
inline
SFReal32 *PatternLayerBase::getSFHorizontalRepeatValue(void)
{
    return &_sfHorizontalRepeatValue;
}
#endif

//! Get the PatternLayer::_sfVerticalRepeatValue field.
inline
const SFReal32 *PatternLayerBase::getSFVerticalRepeatValue(void) const
{
    return &_sfVerticalRepeatValue;
}

//! Get the PatternLayer::_sfVerticalRepeatValue field.
inline
SFReal32 *PatternLayerBase::editSFVerticalRepeatValue(void)
{
    return &_sfVerticalRepeatValue;
}

#ifndef OSG_2_PREP
//! Get the PatternLayer::_sfVerticalRepeatValue field.
inline
SFReal32 *PatternLayerBase::getSFVerticalRepeatValue(void)
{
    return &_sfVerticalRepeatValue;
}
#endif

//! Get the PatternLayer::_sfTopLeftTextureCoord field.
inline
const SFVec2f *PatternLayerBase::getSFTopLeftTextureCoord(void) const
{
    return &_sfTopLeftTextureCoord;
}

//! Get the PatternLayer::_sfTopLeftTextureCoord field.
inline
SFVec2f *PatternLayerBase::editSFTopLeftTextureCoord(void)
{
    return &_sfTopLeftTextureCoord;
}

#ifndef OSG_2_PREP
//! Get the PatternLayer::_sfTopLeftTextureCoord field.
inline
SFVec2f *PatternLayerBase::getSFTopLeftTextureCoord(void)
{
    return &_sfTopLeftTextureCoord;
}
#endif

//! Get the PatternLayer::_sfBottomRightTextureCoord field.
inline
const SFVec2f *PatternLayerBase::getSFBottomRightTextureCoord(void) const
{
    return &_sfBottomRightTextureCoord;
}

//! Get the PatternLayer::_sfBottomRightTextureCoord field.
inline
SFVec2f *PatternLayerBase::editSFBottomRightTextureCoord(void)
{
    return &_sfBottomRightTextureCoord;
}

#ifndef OSG_2_PREP
//! Get the PatternLayer::_sfBottomRightTextureCoord field.
inline
SFVec2f *PatternLayerBase::getSFBottomRightTextureCoord(void)
{
    return &_sfBottomRightTextureCoord;
}
#endif


//! Get the value of the PatternLayer::_sfTexture field.
inline
TextureChunkPtr &PatternLayerBase::editTexture(void)
{
    return _sfTexture.getValue();
}

//! Get the value of the PatternLayer::_sfTexture field.
inline
const TextureChunkPtr &PatternLayerBase::getTexture(void) const
{
    return _sfTexture.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PatternLayer::_sfTexture field.
inline
TextureChunkPtr &PatternLayerBase::getTexture(void)
{
    return _sfTexture.getValue();
}
#endif

//! Set the value of the PatternLayer::_sfTexture field.
inline
void PatternLayerBase::setTexture(const TextureChunkPtr &value)
{
    _sfTexture.setValue(value);
}

//! Get the value of the PatternLayer::_sfTransformation field.
inline
TextureTransformChunkPtr &PatternLayerBase::editTransformation(void)
{
    return _sfTransformation.getValue();
}

//! Get the value of the PatternLayer::_sfTransformation field.
inline
const TextureTransformChunkPtr &PatternLayerBase::getTransformation(void) const
{
    return _sfTransformation.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PatternLayer::_sfTransformation field.
inline
TextureTransformChunkPtr &PatternLayerBase::getTransformation(void)
{
    return _sfTransformation.getValue();
}
#endif

//! Set the value of the PatternLayer::_sfTransformation field.
inline
void PatternLayerBase::setTransformation(const TextureTransformChunkPtr &value)
{
    _sfTransformation.setValue(value);
}

//! Get the value of the PatternLayer::_sfPatternSize field.
inline
Vec2s &PatternLayerBase::editPatternSize(void)
{
    return _sfPatternSize.getValue();
}

//! Get the value of the PatternLayer::_sfPatternSize field.
inline
const Vec2s &PatternLayerBase::getPatternSize(void) const
{
    return _sfPatternSize.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PatternLayer::_sfPatternSize field.
inline
Vec2s &PatternLayerBase::getPatternSize(void)
{
    return _sfPatternSize.getValue();
}
#endif

//! Set the value of the PatternLayer::_sfPatternSize field.
inline
void PatternLayerBase::setPatternSize(const Vec2s &value)
{
    _sfPatternSize.setValue(value);
}

//! Get the value of the PatternLayer::_sfVerticalAlignment field.
inline
Real32 &PatternLayerBase::editVerticalAlignment(void)
{
    return _sfVerticalAlignment.getValue();
}

//! Get the value of the PatternLayer::_sfVerticalAlignment field.
inline
const Real32 &PatternLayerBase::getVerticalAlignment(void) const
{
    return _sfVerticalAlignment.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PatternLayer::_sfVerticalAlignment field.
inline
Real32 &PatternLayerBase::getVerticalAlignment(void)
{
    return _sfVerticalAlignment.getValue();
}
#endif

//! Set the value of the PatternLayer::_sfVerticalAlignment field.
inline
void PatternLayerBase::setVerticalAlignment(const Real32 &value)
{
    _sfVerticalAlignment.setValue(value);
}

//! Get the value of the PatternLayer::_sfHorizontalAlignment field.
inline
Real32 &PatternLayerBase::editHorizontalAlignment(void)
{
    return _sfHorizontalAlignment.getValue();
}

//! Get the value of the PatternLayer::_sfHorizontalAlignment field.
inline
const Real32 &PatternLayerBase::getHorizontalAlignment(void) const
{
    return _sfHorizontalAlignment.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PatternLayer::_sfHorizontalAlignment field.
inline
Real32 &PatternLayerBase::getHorizontalAlignment(void)
{
    return _sfHorizontalAlignment.getValue();
}
#endif

//! Set the value of the PatternLayer::_sfHorizontalAlignment field.
inline
void PatternLayerBase::setHorizontalAlignment(const Real32 &value)
{
    _sfHorizontalAlignment.setValue(value);
}

//! Get the value of the PatternLayer::_sfHorizontalRepeat field.
inline
UInt32 &PatternLayerBase::editHorizontalRepeat(void)
{
    return _sfHorizontalRepeat.getValue();
}

//! Get the value of the PatternLayer::_sfHorizontalRepeat field.
inline
const UInt32 &PatternLayerBase::getHorizontalRepeat(void) const
{
    return _sfHorizontalRepeat.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PatternLayer::_sfHorizontalRepeat field.
inline
UInt32 &PatternLayerBase::getHorizontalRepeat(void)
{
    return _sfHorizontalRepeat.getValue();
}
#endif

//! Set the value of the PatternLayer::_sfHorizontalRepeat field.
inline
void PatternLayerBase::setHorizontalRepeat(const UInt32 &value)
{
    _sfHorizontalRepeat.setValue(value);
}

//! Get the value of the PatternLayer::_sfVerticalRepeat field.
inline
UInt32 &PatternLayerBase::editVerticalRepeat(void)
{
    return _sfVerticalRepeat.getValue();
}

//! Get the value of the PatternLayer::_sfVerticalRepeat field.
inline
const UInt32 &PatternLayerBase::getVerticalRepeat(void) const
{
    return _sfVerticalRepeat.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PatternLayer::_sfVerticalRepeat field.
inline
UInt32 &PatternLayerBase::getVerticalRepeat(void)
{
    return _sfVerticalRepeat.getValue();
}
#endif

//! Set the value of the PatternLayer::_sfVerticalRepeat field.
inline
void PatternLayerBase::setVerticalRepeat(const UInt32 &value)
{
    _sfVerticalRepeat.setValue(value);
}

//! Get the value of the PatternLayer::_sfHorizontalRepeatValue field.
inline
Real32 &PatternLayerBase::editHorizontalRepeatValue(void)
{
    return _sfHorizontalRepeatValue.getValue();
}

//! Get the value of the PatternLayer::_sfHorizontalRepeatValue field.
inline
const Real32 &PatternLayerBase::getHorizontalRepeatValue(void) const
{
    return _sfHorizontalRepeatValue.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PatternLayer::_sfHorizontalRepeatValue field.
inline
Real32 &PatternLayerBase::getHorizontalRepeatValue(void)
{
    return _sfHorizontalRepeatValue.getValue();
}
#endif

//! Set the value of the PatternLayer::_sfHorizontalRepeatValue field.
inline
void PatternLayerBase::setHorizontalRepeatValue(const Real32 &value)
{
    _sfHorizontalRepeatValue.setValue(value);
}

//! Get the value of the PatternLayer::_sfVerticalRepeatValue field.
inline
Real32 &PatternLayerBase::editVerticalRepeatValue(void)
{
    return _sfVerticalRepeatValue.getValue();
}

//! Get the value of the PatternLayer::_sfVerticalRepeatValue field.
inline
const Real32 &PatternLayerBase::getVerticalRepeatValue(void) const
{
    return _sfVerticalRepeatValue.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PatternLayer::_sfVerticalRepeatValue field.
inline
Real32 &PatternLayerBase::getVerticalRepeatValue(void)
{
    return _sfVerticalRepeatValue.getValue();
}
#endif

//! Set the value of the PatternLayer::_sfVerticalRepeatValue field.
inline
void PatternLayerBase::setVerticalRepeatValue(const Real32 &value)
{
    _sfVerticalRepeatValue.setValue(value);
}

//! Get the value of the PatternLayer::_sfTopLeftTextureCoord field.
inline
Vec2f &PatternLayerBase::editTopLeftTextureCoord(void)
{
    return _sfTopLeftTextureCoord.getValue();
}

//! Get the value of the PatternLayer::_sfTopLeftTextureCoord field.
inline
const Vec2f &PatternLayerBase::getTopLeftTextureCoord(void) const
{
    return _sfTopLeftTextureCoord.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PatternLayer::_sfTopLeftTextureCoord field.
inline
Vec2f &PatternLayerBase::getTopLeftTextureCoord(void)
{
    return _sfTopLeftTextureCoord.getValue();
}
#endif

//! Set the value of the PatternLayer::_sfTopLeftTextureCoord field.
inline
void PatternLayerBase::setTopLeftTextureCoord(const Vec2f &value)
{
    _sfTopLeftTextureCoord.setValue(value);
}

//! Get the value of the PatternLayer::_sfBottomRightTextureCoord field.
inline
Vec2f &PatternLayerBase::editBottomRightTextureCoord(void)
{
    return _sfBottomRightTextureCoord.getValue();
}

//! Get the value of the PatternLayer::_sfBottomRightTextureCoord field.
inline
const Vec2f &PatternLayerBase::getBottomRightTextureCoord(void) const
{
    return _sfBottomRightTextureCoord.getValue();
}

#ifndef OSG_2_PREP
//! Get the value of the PatternLayer::_sfBottomRightTextureCoord field.
inline
Vec2f &PatternLayerBase::getBottomRightTextureCoord(void)
{
    return _sfBottomRightTextureCoord.getValue();
}
#endif

//! Set the value of the PatternLayer::_sfBottomRightTextureCoord field.
inline
void PatternLayerBase::setBottomRightTextureCoord(const Vec2f &value)
{
    _sfBottomRightTextureCoord.setValue(value);
}


OSG_END_NAMESPACE

