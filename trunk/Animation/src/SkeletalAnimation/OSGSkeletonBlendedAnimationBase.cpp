/*---------------------------------------------------------------------------*\
 *                       OpenSG ToolBox Animation                            *
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
 **     class SkeletonBlendedAnimation!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESKELETONBLENDEDANIMATIONINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGSkeletonBlendedAnimationBase.h"
#include "OSGSkeletonBlendedAnimation.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  SkeletonBlendedAnimationBase::SkeletonAnimationsFieldMask = 
    (TypeTraits<BitVector>::One << SkeletonBlendedAnimationBase::SkeletonAnimationsFieldId);

const OSG::BitVector  SkeletonBlendedAnimationBase::BlendAmountsFieldMask = 
    (TypeTraits<BitVector>::One << SkeletonBlendedAnimationBase::BlendAmountsFieldId);

const OSG::BitVector  SkeletonBlendedAnimationBase::OverrideStatusesFieldMask = 
    (TypeTraits<BitVector>::One << SkeletonBlendedAnimationBase::OverrideStatusesFieldId);

const OSG::BitVector SkeletonBlendedAnimationBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var SkeletonAnimationPtr SkeletonBlendedAnimationBase::_mfSkeletonAnimations
    
*/
/*! \var Real32          SkeletonBlendedAnimationBase::_mfBlendAmounts
    
*/
/*! \var bool            SkeletonBlendedAnimationBase::_mfOverrideStatuses
    
*/

//! SkeletonBlendedAnimation description

FieldDescription *SkeletonBlendedAnimationBase::_desc[] = 
{
    new FieldDescription(MFSkeletonAnimationPtr::getClassType(), 
                     "SkeletonAnimations", 
                     SkeletonAnimationsFieldId, SkeletonAnimationsFieldMask,
                     false,
                     (FieldAccessMethod) &SkeletonBlendedAnimationBase::getMFSkeletonAnimations),
    new FieldDescription(MFReal32::getClassType(), 
                     "BlendAmounts", 
                     BlendAmountsFieldId, BlendAmountsFieldMask,
                     false,
                     (FieldAccessMethod) &SkeletonBlendedAnimationBase::getMFBlendAmounts),
    new FieldDescription(MFBool::getClassType(), 
                     "OverrideStatuses", 
                     OverrideStatusesFieldId, OverrideStatusesFieldMask,
                     false,
                     (FieldAccessMethod) &SkeletonBlendedAnimationBase::getMFOverrideStatuses)
};


FieldContainerType SkeletonBlendedAnimationBase::_type(
    "SkeletonBlendedAnimation",
    "Animation",
    NULL,
    (PrototypeCreateF) &SkeletonBlendedAnimationBase::createEmpty,
    SkeletonBlendedAnimation::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(SkeletonBlendedAnimationBase, SkeletonBlendedAnimationPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &SkeletonBlendedAnimationBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &SkeletonBlendedAnimationBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr SkeletonBlendedAnimationBase::shallowCopy(void) const 
{ 
    SkeletonBlendedAnimationPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const SkeletonBlendedAnimation *>(this)); 

    return returnValue; 
}

UInt32 SkeletonBlendedAnimationBase::getContainerSize(void) const 
{ 
    return sizeof(SkeletonBlendedAnimation); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void SkeletonBlendedAnimationBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((SkeletonBlendedAnimationBase *) &other, whichField);
}
#else
void SkeletonBlendedAnimationBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((SkeletonBlendedAnimationBase *) &other, whichField, sInfo);
}
void SkeletonBlendedAnimationBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SkeletonBlendedAnimationBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfSkeletonAnimations.terminateShare(uiAspect, this->getContainerSize());
    _mfBlendAmounts.terminateShare(uiAspect, this->getContainerSize());
    _mfOverrideStatuses.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

SkeletonBlendedAnimationBase::SkeletonBlendedAnimationBase(void) :
    _mfSkeletonAnimations     (), 
    _mfBlendAmounts           (), 
    _mfOverrideStatuses       (bool(false)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

SkeletonBlendedAnimationBase::SkeletonBlendedAnimationBase(const SkeletonBlendedAnimationBase &source) :
    _mfSkeletonAnimations     (source._mfSkeletonAnimations     ), 
    _mfBlendAmounts           (source._mfBlendAmounts           ), 
    _mfOverrideStatuses       (source._mfOverrideStatuses       ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

SkeletonBlendedAnimationBase::~SkeletonBlendedAnimationBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 SkeletonBlendedAnimationBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SkeletonAnimationsFieldMask & whichField))
    {
        returnValue += _mfSkeletonAnimations.getBinSize();
    }

    if(FieldBits::NoField != (BlendAmountsFieldMask & whichField))
    {
        returnValue += _mfBlendAmounts.getBinSize();
    }

    if(FieldBits::NoField != (OverrideStatusesFieldMask & whichField))
    {
        returnValue += _mfOverrideStatuses.getBinSize();
    }


    return returnValue;
}

void SkeletonBlendedAnimationBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SkeletonAnimationsFieldMask & whichField))
    {
        _mfSkeletonAnimations.copyToBin(pMem);
    }

    if(FieldBits::NoField != (BlendAmountsFieldMask & whichField))
    {
        _mfBlendAmounts.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OverrideStatusesFieldMask & whichField))
    {
        _mfOverrideStatuses.copyToBin(pMem);
    }


}

void SkeletonBlendedAnimationBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SkeletonAnimationsFieldMask & whichField))
    {
        _mfSkeletonAnimations.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (BlendAmountsFieldMask & whichField))
    {
        _mfBlendAmounts.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OverrideStatusesFieldMask & whichField))
    {
        _mfOverrideStatuses.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SkeletonBlendedAnimationBase::executeSyncImpl(      SkeletonBlendedAnimationBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (SkeletonAnimationsFieldMask & whichField))
        _mfSkeletonAnimations.syncWith(pOther->_mfSkeletonAnimations);

    if(FieldBits::NoField != (BlendAmountsFieldMask & whichField))
        _mfBlendAmounts.syncWith(pOther->_mfBlendAmounts);

    if(FieldBits::NoField != (OverrideStatusesFieldMask & whichField))
        _mfOverrideStatuses.syncWith(pOther->_mfOverrideStatuses);


}
#else
void SkeletonBlendedAnimationBase::executeSyncImpl(      SkeletonBlendedAnimationBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);


    if(FieldBits::NoField != (SkeletonAnimationsFieldMask & whichField))
        _mfSkeletonAnimations.syncWith(pOther->_mfSkeletonAnimations, sInfo);

    if(FieldBits::NoField != (BlendAmountsFieldMask & whichField))
        _mfBlendAmounts.syncWith(pOther->_mfBlendAmounts, sInfo);

    if(FieldBits::NoField != (OverrideStatusesFieldMask & whichField))
        _mfOverrideStatuses.syncWith(pOther->_mfOverrideStatuses, sInfo);


}

void SkeletonBlendedAnimationBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (SkeletonAnimationsFieldMask & whichField))
        _mfSkeletonAnimations.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (BlendAmountsFieldMask & whichField))
        _mfBlendAmounts.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (OverrideStatusesFieldMask & whichField))
        _mfOverrideStatuses.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<SkeletonBlendedAnimationPtr>::_type("SkeletonBlendedAnimationPtr", "AnimationPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(SkeletonBlendedAnimationPtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(SkeletonBlendedAnimationPtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.47 2006/03/17 17:03:19 pdaehne Exp $";
    static Char8 cvsid_hpp       [] = OSGSKELETONBLENDEDANIMATIONBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSKELETONBLENDEDANIMATIONBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSKELETONBLENDEDANIMATIONFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

