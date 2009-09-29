/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
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
 **     class TextureLayer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILETEXTURELAYERINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGTextureLayerBase.h"
#include "OSGTextureLayer.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  TextureLayerBase::TextureFieldMask = 
    (TypeTraits<BitVector>::One << TextureLayerBase::TextureFieldId);

const OSG::BitVector  TextureLayerBase::TransformationFieldMask = 
    (TypeTraits<BitVector>::One << TextureLayerBase::TransformationFieldId);

const OSG::BitVector  TextureLayerBase::ScaleFieldMask = 
    (TypeTraits<BitVector>::One << TextureLayerBase::ScaleFieldId);

const OSG::BitVector  TextureLayerBase::ScaleAbsoluteSizeFieldMask = 
    (TypeTraits<BitVector>::One << TextureLayerBase::ScaleAbsoluteSizeFieldId);

const OSG::BitVector  TextureLayerBase::VerticalAlignmentFieldMask = 
    (TypeTraits<BitVector>::One << TextureLayerBase::VerticalAlignmentFieldId);

const OSG::BitVector  TextureLayerBase::HorizontalAlignmentFieldMask = 
    (TypeTraits<BitVector>::One << TextureLayerBase::HorizontalAlignmentFieldId);

const OSG::BitVector TextureLayerBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var TextureChunkPtr TextureLayerBase::_sfTexture
    
*/
/*! \var TextureTransformChunkPtr TextureLayerBase::_sfTransformation
    
*/
/*! \var UInt32          TextureLayerBase::_sfScale
    
*/
/*! \var Vec2s           TextureLayerBase::_sfScaleAbsoluteSize
    
*/
/*! \var Real32          TextureLayerBase::_sfVerticalAlignment
    
*/
/*! \var Real32          TextureLayerBase::_sfHorizontalAlignment
    
*/

//! TextureLayer description

FieldDescription *TextureLayerBase::_desc[] = 
{
    new FieldDescription(SFTextureChunkPtr::getClassType(), 
                     "Texture", 
                     TextureFieldId, TextureFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TextureLayerBase::editSFTexture)),
    new FieldDescription(SFTextureTransformChunkPtr::getClassType(), 
                     "Transformation", 
                     TransformationFieldId, TransformationFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TextureLayerBase::editSFTransformation)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "Scale", 
                     ScaleFieldId, ScaleFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TextureLayerBase::editSFScale)),
    new FieldDescription(SFVec2s::getClassType(), 
                     "ScaleAbsoluteSize", 
                     ScaleAbsoluteSizeFieldId, ScaleAbsoluteSizeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TextureLayerBase::editSFScaleAbsoluteSize)),
    new FieldDescription(SFReal32::getClassType(), 
                     "VerticalAlignment", 
                     VerticalAlignmentFieldId, VerticalAlignmentFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TextureLayerBase::editSFVerticalAlignment)),
    new FieldDescription(SFReal32::getClassType(), 
                     "HorizontalAlignment", 
                     HorizontalAlignmentFieldId, HorizontalAlignmentFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&TextureLayerBase::editSFHorizontalAlignment))
};


FieldContainerType TextureLayerBase::_type(
    "TextureLayer",
    "Layer",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&TextureLayerBase::createEmpty),
    TextureLayer::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(TextureLayerBase, TextureLayerPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &TextureLayerBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &TextureLayerBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr TextureLayerBase::shallowCopy(void) const 
{ 
    TextureLayerPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const TextureLayer *>(this)); 

    return returnValue; 
}

UInt32 TextureLayerBase::getContainerSize(void) const 
{ 
    return sizeof(TextureLayer); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void TextureLayerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<TextureLayerBase *>(&other),
                          whichField);
}
#else
void TextureLayerBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((TextureLayerBase *) &other, whichField, sInfo);
}
void TextureLayerBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void TextureLayerBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

TextureLayerBase::TextureLayerBase(void) :
    _sfTexture                (TextureChunkPtr(NullFC)), 
    _sfTransformation         (TextureTransformChunkPtr(NullFC)), 
    _sfScale                  (UInt32(TextureLayer::SCALE_STRETCH)), 
    _sfScaleAbsoluteSize      (Vec2s(1,1)), 
    _sfVerticalAlignment      (Real32(0.5)), 
    _sfHorizontalAlignment    (Real32(0.5)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

TextureLayerBase::TextureLayerBase(const TextureLayerBase &source) :
    _sfTexture                (source._sfTexture                ), 
    _sfTransformation         (source._sfTransformation         ), 
    _sfScale                  (source._sfScale                  ), 
    _sfScaleAbsoluteSize      (source._sfScaleAbsoluteSize      ), 
    _sfVerticalAlignment      (source._sfVerticalAlignment      ), 
    _sfHorizontalAlignment    (source._sfHorizontalAlignment    ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

TextureLayerBase::~TextureLayerBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 TextureLayerBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        returnValue += _sfTexture.getBinSize();
    }

    if(FieldBits::NoField != (TransformationFieldMask & whichField))
    {
        returnValue += _sfTransformation.getBinSize();
    }

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        returnValue += _sfScale.getBinSize();
    }

    if(FieldBits::NoField != (ScaleAbsoluteSizeFieldMask & whichField))
    {
        returnValue += _sfScaleAbsoluteSize.getBinSize();
    }

    if(FieldBits::NoField != (VerticalAlignmentFieldMask & whichField))
    {
        returnValue += _sfVerticalAlignment.getBinSize();
    }

    if(FieldBits::NoField != (HorizontalAlignmentFieldMask & whichField))
    {
        returnValue += _sfHorizontalAlignment.getBinSize();
    }


    return returnValue;
}

void TextureLayerBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TransformationFieldMask & whichField))
    {
        _sfTransformation.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        _sfScale.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ScaleAbsoluteSizeFieldMask & whichField))
    {
        _sfScaleAbsoluteSize.copyToBin(pMem);
    }

    if(FieldBits::NoField != (VerticalAlignmentFieldMask & whichField))
    {
        _sfVerticalAlignment.copyToBin(pMem);
    }

    if(FieldBits::NoField != (HorizontalAlignmentFieldMask & whichField))
    {
        _sfHorizontalAlignment.copyToBin(pMem);
    }


}

void TextureLayerBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TransformationFieldMask & whichField))
    {
        _sfTransformation.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        _sfScale.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ScaleAbsoluteSizeFieldMask & whichField))
    {
        _sfScaleAbsoluteSize.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (VerticalAlignmentFieldMask & whichField))
    {
        _sfVerticalAlignment.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (HorizontalAlignmentFieldMask & whichField))
    {
        _sfHorizontalAlignment.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void TextureLayerBase::executeSyncImpl(      TextureLayerBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
        _sfTexture.syncWith(pOther->_sfTexture);

    if(FieldBits::NoField != (TransformationFieldMask & whichField))
        _sfTransformation.syncWith(pOther->_sfTransformation);

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
        _sfScale.syncWith(pOther->_sfScale);

    if(FieldBits::NoField != (ScaleAbsoluteSizeFieldMask & whichField))
        _sfScaleAbsoluteSize.syncWith(pOther->_sfScaleAbsoluteSize);

    if(FieldBits::NoField != (VerticalAlignmentFieldMask & whichField))
        _sfVerticalAlignment.syncWith(pOther->_sfVerticalAlignment);

    if(FieldBits::NoField != (HorizontalAlignmentFieldMask & whichField))
        _sfHorizontalAlignment.syncWith(pOther->_sfHorizontalAlignment);


}
#else
void TextureLayerBase::executeSyncImpl(      TextureLayerBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
        _sfTexture.syncWith(pOther->_sfTexture);

    if(FieldBits::NoField != (TransformationFieldMask & whichField))
        _sfTransformation.syncWith(pOther->_sfTransformation);

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
        _sfScale.syncWith(pOther->_sfScale);

    if(FieldBits::NoField != (ScaleAbsoluteSizeFieldMask & whichField))
        _sfScaleAbsoluteSize.syncWith(pOther->_sfScaleAbsoluteSize);

    if(FieldBits::NoField != (VerticalAlignmentFieldMask & whichField))
        _sfVerticalAlignment.syncWith(pOther->_sfVerticalAlignment);

    if(FieldBits::NoField != (HorizontalAlignmentFieldMask & whichField))
        _sfHorizontalAlignment.syncWith(pOther->_sfHorizontalAlignment);



}

void TextureLayerBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<TextureLayerPtr>::_type("TextureLayerPtr", "LayerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(TextureLayerPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(TextureLayerPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

