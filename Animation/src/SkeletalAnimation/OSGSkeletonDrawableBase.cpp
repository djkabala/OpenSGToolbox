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
 **     class SkeletonDrawable!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESKELETONDRAWABLEINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGSkeletonDrawableBase.h"
#include "OSGSkeletonDrawable.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  SkeletonDrawableBase::SkeletonFieldMask = 
    (TypeTraits<BitVector>::One << SkeletonDrawableBase::SkeletonFieldId);

const OSG::BitVector SkeletonDrawableBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var SkeletonPtr     SkeletonDrawableBase::_sfSkeleton
    
*/

//! SkeletonDrawable description

FieldDescription *SkeletonDrawableBase::_desc[] = 
{
    new FieldDescription(SFSkeletonPtr::getClassType(), 
                     "Skeleton", 
                     SkeletonFieldId, SkeletonFieldMask,
                     false,
                     (FieldAccessMethod) &SkeletonDrawableBase::getSFSkeleton)
};


FieldContainerType SkeletonDrawableBase::_type(
    "SkeletonDrawable",
    "MaterialDrawable",
    NULL,
    (PrototypeCreateF) &SkeletonDrawableBase::createEmpty,
    SkeletonDrawable::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(SkeletonDrawableBase, SkeletonDrawablePtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &SkeletonDrawableBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &SkeletonDrawableBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr SkeletonDrawableBase::shallowCopy(void) const 
{ 
    SkeletonDrawablePtr returnValue; 

    newPtr(returnValue, dynamic_cast<const SkeletonDrawable *>(this)); 

    return returnValue; 
}

UInt32 SkeletonDrawableBase::getContainerSize(void) const 
{ 
    return sizeof(SkeletonDrawable); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void SkeletonDrawableBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((SkeletonDrawableBase *) &other, whichField);
}
#else
void SkeletonDrawableBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((SkeletonDrawableBase *) &other, whichField, sInfo);
}
void SkeletonDrawableBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SkeletonDrawableBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

SkeletonDrawableBase::SkeletonDrawableBase(void) :
    _sfSkeleton               (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

SkeletonDrawableBase::SkeletonDrawableBase(const SkeletonDrawableBase &source) :
    _sfSkeleton               (source._sfSkeleton               ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

SkeletonDrawableBase::~SkeletonDrawableBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 SkeletonDrawableBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SkeletonFieldMask & whichField))
    {
        returnValue += _sfSkeleton.getBinSize();
    }


    return returnValue;
}

void SkeletonDrawableBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SkeletonFieldMask & whichField))
    {
        _sfSkeleton.copyToBin(pMem);
    }


}

void SkeletonDrawableBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SkeletonFieldMask & whichField))
    {
        _sfSkeleton.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SkeletonDrawableBase::executeSyncImpl(      SkeletonDrawableBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (SkeletonFieldMask & whichField))
        _sfSkeleton.syncWith(pOther->_sfSkeleton);


}
#else
void SkeletonDrawableBase::executeSyncImpl(      SkeletonDrawableBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (SkeletonFieldMask & whichField))
        _sfSkeleton.syncWith(pOther->_sfSkeleton);



}

void SkeletonDrawableBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<SkeletonDrawablePtr>::_type("SkeletonDrawablePtr", "MaterialDrawablePtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(SkeletonDrawablePtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(SkeletonDrawablePtr, OSG_ANIMATIONLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGSKELETONDRAWABLEBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSKELETONDRAWABLEBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSKELETONDRAWABLEFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
