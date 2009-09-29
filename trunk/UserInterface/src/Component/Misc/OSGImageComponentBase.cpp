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
 **     class ImageComponent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEIMAGECOMPONENTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGImageComponentBase.h"
#include "OSGImageComponent.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  ImageComponentBase::TextureFieldMask = 
    (TypeTraits<BitVector>::One << ImageComponentBase::TextureFieldId);

const OSG::BitVector  ImageComponentBase::RolloverTextureFieldMask = 
    (TypeTraits<BitVector>::One << ImageComponentBase::RolloverTextureFieldId);

const OSG::BitVector  ImageComponentBase::DisabledTextureFieldMask = 
    (TypeTraits<BitVector>::One << ImageComponentBase::DisabledTextureFieldId);

const OSG::BitVector  ImageComponentBase::FocusedTextureFieldMask = 
    (TypeTraits<BitVector>::One << ImageComponentBase::FocusedTextureFieldId);

const OSG::BitVector  ImageComponentBase::TransformationFieldMask = 
    (TypeTraits<BitVector>::One << ImageComponentBase::TransformationFieldId);

const OSG::BitVector  ImageComponentBase::ScaleFieldMask = 
    (TypeTraits<BitVector>::One << ImageComponentBase::ScaleFieldId);

const OSG::BitVector  ImageComponentBase::ScaleAbsoluteSizeFieldMask = 
    (TypeTraits<BitVector>::One << ImageComponentBase::ScaleAbsoluteSizeFieldId);

const OSG::BitVector  ImageComponentBase::AlignmentFieldMask = 
    (TypeTraits<BitVector>::One << ImageComponentBase::AlignmentFieldId);

const OSG::BitVector ImageComponentBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var TextureChunkPtr ImageComponentBase::_sfTexture
    
*/
/*! \var TextureChunkPtr ImageComponentBase::_sfRolloverTexture
    
*/
/*! \var TextureChunkPtr ImageComponentBase::_sfDisabledTexture
    
*/
/*! \var TextureChunkPtr ImageComponentBase::_sfFocusedTexture
    
*/
/*! \var TextureTransformChunkPtr ImageComponentBase::_sfTransformation
    
*/
/*! \var UInt32          ImageComponentBase::_sfScale
    
*/
/*! \var Vec2f           ImageComponentBase::_sfScaleAbsoluteSize
    
*/
/*! \var Vec2f           ImageComponentBase::_sfAlignment
    
*/

//! ImageComponent description

FieldDescription *ImageComponentBase::_desc[] = 
{
    new FieldDescription(SFTextureChunkPtr::getClassType(), 
                     "Texture", 
                     TextureFieldId, TextureFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ImageComponentBase::editSFTexture)),
    new FieldDescription(SFTextureChunkPtr::getClassType(), 
                     "RolloverTexture", 
                     RolloverTextureFieldId, RolloverTextureFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ImageComponentBase::editSFRolloverTexture)),
    new FieldDescription(SFTextureChunkPtr::getClassType(), 
                     "DisabledTexture", 
                     DisabledTextureFieldId, DisabledTextureFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ImageComponentBase::editSFDisabledTexture)),
    new FieldDescription(SFTextureChunkPtr::getClassType(), 
                     "FocusedTexture", 
                     FocusedTextureFieldId, FocusedTextureFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ImageComponentBase::editSFFocusedTexture)),
    new FieldDescription(SFTextureTransformChunkPtr::getClassType(), 
                     "Transformation", 
                     TransformationFieldId, TransformationFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ImageComponentBase::editSFTransformation)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "Scale", 
                     ScaleFieldId, ScaleFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ImageComponentBase::editSFScale)),
    new FieldDescription(SFVec2f::getClassType(), 
                     "ScaleAbsoluteSize", 
                     ScaleAbsoluteSizeFieldId, ScaleAbsoluteSizeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ImageComponentBase::editSFScaleAbsoluteSize)),
    new FieldDescription(SFVec2f::getClassType(), 
                     "Alignment", 
                     AlignmentFieldId, AlignmentFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&ImageComponentBase::editSFAlignment))
};


FieldContainerType ImageComponentBase::_type(
    "ImageComponent",
    "Component",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&ImageComponentBase::createEmpty),
    ImageComponent::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(ImageComponentBase, ImageComponentPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &ImageComponentBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &ImageComponentBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr ImageComponentBase::shallowCopy(void) const 
{ 
    ImageComponentPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const ImageComponent *>(this)); 

    return returnValue; 
}

UInt32 ImageComponentBase::getContainerSize(void) const 
{ 
    return sizeof(ImageComponent); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void ImageComponentBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<ImageComponentBase *>(&other),
                          whichField);
}
#else
void ImageComponentBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((ImageComponentBase *) &other, whichField, sInfo);
}
void ImageComponentBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void ImageComponentBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

ImageComponentBase::ImageComponentBase(void) :
    _sfTexture                (TextureChunkPtr(NullFC)), 
    _sfRolloverTexture        (TextureChunkPtr(NullFC)), 
    _sfDisabledTexture        (TextureChunkPtr(NullFC)), 
    _sfFocusedTexture         (TextureChunkPtr(NullFC)), 
    _sfTransformation         (TextureTransformChunkPtr(NullFC)), 
    _sfScale                  (UInt32(ImageComponent::SCALE_NONE)), 
    _sfScaleAbsoluteSize      (Vec2f(1.0f,1.0f)), 
    _sfAlignment              (Vec2f(0.5f,0.5f)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

ImageComponentBase::ImageComponentBase(const ImageComponentBase &source) :
    _sfTexture                (source._sfTexture                ), 
    _sfRolloverTexture        (source._sfRolloverTexture        ), 
    _sfDisabledTexture        (source._sfDisabledTexture        ), 
    _sfFocusedTexture         (source._sfFocusedTexture         ), 
    _sfTransformation         (source._sfTransformation         ), 
    _sfScale                  (source._sfScale                  ), 
    _sfScaleAbsoluteSize      (source._sfScaleAbsoluteSize      ), 
    _sfAlignment              (source._sfAlignment              ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

ImageComponentBase::~ImageComponentBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 ImageComponentBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        returnValue += _sfTexture.getBinSize();
    }

    if(FieldBits::NoField != (RolloverTextureFieldMask & whichField))
    {
        returnValue += _sfRolloverTexture.getBinSize();
    }

    if(FieldBits::NoField != (DisabledTextureFieldMask & whichField))
    {
        returnValue += _sfDisabledTexture.getBinSize();
    }

    if(FieldBits::NoField != (FocusedTextureFieldMask & whichField))
    {
        returnValue += _sfFocusedTexture.getBinSize();
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

    if(FieldBits::NoField != (AlignmentFieldMask & whichField))
    {
        returnValue += _sfAlignment.getBinSize();
    }


    return returnValue;
}

void ImageComponentBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyToBin(pMem);
    }

    if(FieldBits::NoField != (RolloverTextureFieldMask & whichField))
    {
        _sfRolloverTexture.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DisabledTextureFieldMask & whichField))
    {
        _sfDisabledTexture.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FocusedTextureFieldMask & whichField))
    {
        _sfFocusedTexture.copyToBin(pMem);
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

    if(FieldBits::NoField != (AlignmentFieldMask & whichField))
    {
        _sfAlignment.copyToBin(pMem);
    }


}

void ImageComponentBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
    {
        _sfTexture.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (RolloverTextureFieldMask & whichField))
    {
        _sfRolloverTexture.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DisabledTextureFieldMask & whichField))
    {
        _sfDisabledTexture.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FocusedTextureFieldMask & whichField))
    {
        _sfFocusedTexture.copyFromBin(pMem);
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

    if(FieldBits::NoField != (AlignmentFieldMask & whichField))
    {
        _sfAlignment.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void ImageComponentBase::executeSyncImpl(      ImageComponentBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
        _sfTexture.syncWith(pOther->_sfTexture);

    if(FieldBits::NoField != (RolloverTextureFieldMask & whichField))
        _sfRolloverTexture.syncWith(pOther->_sfRolloverTexture);

    if(FieldBits::NoField != (DisabledTextureFieldMask & whichField))
        _sfDisabledTexture.syncWith(pOther->_sfDisabledTexture);

    if(FieldBits::NoField != (FocusedTextureFieldMask & whichField))
        _sfFocusedTexture.syncWith(pOther->_sfFocusedTexture);

    if(FieldBits::NoField != (TransformationFieldMask & whichField))
        _sfTransformation.syncWith(pOther->_sfTransformation);

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
        _sfScale.syncWith(pOther->_sfScale);

    if(FieldBits::NoField != (ScaleAbsoluteSizeFieldMask & whichField))
        _sfScaleAbsoluteSize.syncWith(pOther->_sfScaleAbsoluteSize);

    if(FieldBits::NoField != (AlignmentFieldMask & whichField))
        _sfAlignment.syncWith(pOther->_sfAlignment);


}
#else
void ImageComponentBase::executeSyncImpl(      ImageComponentBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (TextureFieldMask & whichField))
        _sfTexture.syncWith(pOther->_sfTexture);

    if(FieldBits::NoField != (RolloverTextureFieldMask & whichField))
        _sfRolloverTexture.syncWith(pOther->_sfRolloverTexture);

    if(FieldBits::NoField != (DisabledTextureFieldMask & whichField))
        _sfDisabledTexture.syncWith(pOther->_sfDisabledTexture);

    if(FieldBits::NoField != (FocusedTextureFieldMask & whichField))
        _sfFocusedTexture.syncWith(pOther->_sfFocusedTexture);

    if(FieldBits::NoField != (TransformationFieldMask & whichField))
        _sfTransformation.syncWith(pOther->_sfTransformation);

    if(FieldBits::NoField != (ScaleFieldMask & whichField))
        _sfScale.syncWith(pOther->_sfScale);

    if(FieldBits::NoField != (ScaleAbsoluteSizeFieldMask & whichField))
        _sfScaleAbsoluteSize.syncWith(pOther->_sfScaleAbsoluteSize);

    if(FieldBits::NoField != (AlignmentFieldMask & whichField))
        _sfAlignment.syncWith(pOther->_sfAlignment);



}

void ImageComponentBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<ImageComponentPtr>::_type("ImageComponentPtr", "ComponentPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(ImageComponentPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(ImageComponentPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

