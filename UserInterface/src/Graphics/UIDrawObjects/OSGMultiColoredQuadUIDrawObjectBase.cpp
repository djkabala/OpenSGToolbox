/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
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
 **     class MultiColoredQuadUIDrawObject!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEMULTICOLOREDQUADUIDRAWOBJECTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGMultiColoredQuadUIDrawObjectBase.h"
#include "OSGMultiColoredQuadUIDrawObject.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  MultiColoredQuadUIDrawObjectBase::Point1FieldMask = 
    (TypeTraits<BitVector>::One << MultiColoredQuadUIDrawObjectBase::Point1FieldId);

const OSG::BitVector  MultiColoredQuadUIDrawObjectBase::Point2FieldMask = 
    (TypeTraits<BitVector>::One << MultiColoredQuadUIDrawObjectBase::Point2FieldId);

const OSG::BitVector  MultiColoredQuadUIDrawObjectBase::Point3FieldMask = 
    (TypeTraits<BitVector>::One << MultiColoredQuadUIDrawObjectBase::Point3FieldId);

const OSG::BitVector  MultiColoredQuadUIDrawObjectBase::Point4FieldMask = 
    (TypeTraits<BitVector>::One << MultiColoredQuadUIDrawObjectBase::Point4FieldId);

const OSG::BitVector  MultiColoredQuadUIDrawObjectBase::Color1FieldMask = 
    (TypeTraits<BitVector>::One << MultiColoredQuadUIDrawObjectBase::Color1FieldId);

const OSG::BitVector  MultiColoredQuadUIDrawObjectBase::Color2FieldMask = 
    (TypeTraits<BitVector>::One << MultiColoredQuadUIDrawObjectBase::Color2FieldId);

const OSG::BitVector  MultiColoredQuadUIDrawObjectBase::Color3FieldMask = 
    (TypeTraits<BitVector>::One << MultiColoredQuadUIDrawObjectBase::Color3FieldId);

const OSG::BitVector  MultiColoredQuadUIDrawObjectBase::Color4FieldMask = 
    (TypeTraits<BitVector>::One << MultiColoredQuadUIDrawObjectBase::Color4FieldId);

const OSG::BitVector  MultiColoredQuadUIDrawObjectBase::OpacityFieldMask = 
    (TypeTraits<BitVector>::One << MultiColoredQuadUIDrawObjectBase::OpacityFieldId);

const OSG::BitVector MultiColoredQuadUIDrawObjectBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Pnt2s           MultiColoredQuadUIDrawObjectBase::_sfPoint1
    
*/
/*! \var Pnt2s           MultiColoredQuadUIDrawObjectBase::_sfPoint2
    
*/
/*! \var Pnt2s           MultiColoredQuadUIDrawObjectBase::_sfPoint3
    
*/
/*! \var Pnt2s           MultiColoredQuadUIDrawObjectBase::_sfPoint4
    
*/
/*! \var Color4f         MultiColoredQuadUIDrawObjectBase::_sfColor1
    
*/
/*! \var Color4f         MultiColoredQuadUIDrawObjectBase::_sfColor2
    
*/
/*! \var Color4f         MultiColoredQuadUIDrawObjectBase::_sfColor3
    
*/
/*! \var Color4f         MultiColoredQuadUIDrawObjectBase::_sfColor4
    
*/
/*! \var Real32          MultiColoredQuadUIDrawObjectBase::_sfOpacity
    
*/

//! MultiColoredQuadUIDrawObject description

FieldDescription *MultiColoredQuadUIDrawObjectBase::_desc[] = 
{
    new FieldDescription(SFPnt2s::getClassType(), 
                     "Point1", 
                     Point1FieldId, Point1FieldMask,
                     false,
                     (FieldAccessMethod) &MultiColoredQuadUIDrawObjectBase::getSFPoint1),
    new FieldDescription(SFPnt2s::getClassType(), 
                     "Point2", 
                     Point2FieldId, Point2FieldMask,
                     false,
                     (FieldAccessMethod) &MultiColoredQuadUIDrawObjectBase::getSFPoint2),
    new FieldDescription(SFPnt2s::getClassType(), 
                     "Point3", 
                     Point3FieldId, Point3FieldMask,
                     false,
                     (FieldAccessMethod) &MultiColoredQuadUIDrawObjectBase::getSFPoint3),
    new FieldDescription(SFPnt2s::getClassType(), 
                     "Point4", 
                     Point4FieldId, Point4FieldMask,
                     false,
                     (FieldAccessMethod) &MultiColoredQuadUIDrawObjectBase::getSFPoint4),
    new FieldDescription(SFColor4f::getClassType(), 
                     "Color1", 
                     Color1FieldId, Color1FieldMask,
                     false,
                     (FieldAccessMethod) &MultiColoredQuadUIDrawObjectBase::getSFColor1),
    new FieldDescription(SFColor4f::getClassType(), 
                     "Color2", 
                     Color2FieldId, Color2FieldMask,
                     false,
                     (FieldAccessMethod) &MultiColoredQuadUIDrawObjectBase::getSFColor2),
    new FieldDescription(SFColor4f::getClassType(), 
                     "Color3", 
                     Color3FieldId, Color3FieldMask,
                     false,
                     (FieldAccessMethod) &MultiColoredQuadUIDrawObjectBase::getSFColor3),
    new FieldDescription(SFColor4f::getClassType(), 
                     "Color4", 
                     Color4FieldId, Color4FieldMask,
                     false,
                     (FieldAccessMethod) &MultiColoredQuadUIDrawObjectBase::getSFColor4),
    new FieldDescription(SFReal32::getClassType(), 
                     "Opacity", 
                     OpacityFieldId, OpacityFieldMask,
                     false,
                     (FieldAccessMethod) &MultiColoredQuadUIDrawObjectBase::getSFOpacity)
};


FieldContainerType MultiColoredQuadUIDrawObjectBase::_type(
    "MultiColoredQuadUIDrawObject",
    "UIDrawObject",
    NULL,
    (PrototypeCreateF) &MultiColoredQuadUIDrawObjectBase::createEmpty,
    MultiColoredQuadUIDrawObject::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(MultiColoredQuadUIDrawObjectBase, MultiColoredQuadUIDrawObjectPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &MultiColoredQuadUIDrawObjectBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &MultiColoredQuadUIDrawObjectBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr MultiColoredQuadUIDrawObjectBase::shallowCopy(void) const 
{ 
    MultiColoredQuadUIDrawObjectPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const MultiColoredQuadUIDrawObject *>(this)); 

    return returnValue; 
}

UInt32 MultiColoredQuadUIDrawObjectBase::getContainerSize(void) const 
{ 
    return sizeof(MultiColoredQuadUIDrawObject); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void MultiColoredQuadUIDrawObjectBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((MultiColoredQuadUIDrawObjectBase *) &other, whichField);
}
#else
void MultiColoredQuadUIDrawObjectBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((MultiColoredQuadUIDrawObjectBase *) &other, whichField, sInfo);
}
void MultiColoredQuadUIDrawObjectBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void MultiColoredQuadUIDrawObjectBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

MultiColoredQuadUIDrawObjectBase::MultiColoredQuadUIDrawObjectBase(void) :
    _sfPoint1                 (Pnt2s(0,0)), 
    _sfPoint2                 (Pnt2s(0,1)), 
    _sfPoint3                 (Pnt2s(1,1)), 
    _sfPoint4                 (Pnt2s(1,0)), 
    _sfColor1                 (Color4f(1.0,1.0,1.0,1.0)), 
    _sfColor2                 (Color4f(1.0,1.0,1.0,1.0)), 
    _sfColor3                 (Color4f(1.0,1.0,1.0,1.0)), 
    _sfColor4                 (Color4f(1.0,1.0,1.0,1.0)), 
    _sfOpacity                (Real32(1.0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

MultiColoredQuadUIDrawObjectBase::MultiColoredQuadUIDrawObjectBase(const MultiColoredQuadUIDrawObjectBase &source) :
    _sfPoint1                 (source._sfPoint1                 ), 
    _sfPoint2                 (source._sfPoint2                 ), 
    _sfPoint3                 (source._sfPoint3                 ), 
    _sfPoint4                 (source._sfPoint4                 ), 
    _sfColor1                 (source._sfColor1                 ), 
    _sfColor2                 (source._sfColor2                 ), 
    _sfColor3                 (source._sfColor3                 ), 
    _sfColor4                 (source._sfColor4                 ), 
    _sfOpacity                (source._sfOpacity                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

MultiColoredQuadUIDrawObjectBase::~MultiColoredQuadUIDrawObjectBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 MultiColoredQuadUIDrawObjectBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (Point1FieldMask & whichField))
    {
        returnValue += _sfPoint1.getBinSize();
    }

    if(FieldBits::NoField != (Point2FieldMask & whichField))
    {
        returnValue += _sfPoint2.getBinSize();
    }

    if(FieldBits::NoField != (Point3FieldMask & whichField))
    {
        returnValue += _sfPoint3.getBinSize();
    }

    if(FieldBits::NoField != (Point4FieldMask & whichField))
    {
        returnValue += _sfPoint4.getBinSize();
    }

    if(FieldBits::NoField != (Color1FieldMask & whichField))
    {
        returnValue += _sfColor1.getBinSize();
    }

    if(FieldBits::NoField != (Color2FieldMask & whichField))
    {
        returnValue += _sfColor2.getBinSize();
    }

    if(FieldBits::NoField != (Color3FieldMask & whichField))
    {
        returnValue += _sfColor3.getBinSize();
    }

    if(FieldBits::NoField != (Color4FieldMask & whichField))
    {
        returnValue += _sfColor4.getBinSize();
    }

    if(FieldBits::NoField != (OpacityFieldMask & whichField))
    {
        returnValue += _sfOpacity.getBinSize();
    }


    return returnValue;
}

void MultiColoredQuadUIDrawObjectBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (Point1FieldMask & whichField))
    {
        _sfPoint1.copyToBin(pMem);
    }

    if(FieldBits::NoField != (Point2FieldMask & whichField))
    {
        _sfPoint2.copyToBin(pMem);
    }

    if(FieldBits::NoField != (Point3FieldMask & whichField))
    {
        _sfPoint3.copyToBin(pMem);
    }

    if(FieldBits::NoField != (Point4FieldMask & whichField))
    {
        _sfPoint4.copyToBin(pMem);
    }

    if(FieldBits::NoField != (Color1FieldMask & whichField))
    {
        _sfColor1.copyToBin(pMem);
    }

    if(FieldBits::NoField != (Color2FieldMask & whichField))
    {
        _sfColor2.copyToBin(pMem);
    }

    if(FieldBits::NoField != (Color3FieldMask & whichField))
    {
        _sfColor3.copyToBin(pMem);
    }

    if(FieldBits::NoField != (Color4FieldMask & whichField))
    {
        _sfColor4.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OpacityFieldMask & whichField))
    {
        _sfOpacity.copyToBin(pMem);
    }


}

void MultiColoredQuadUIDrawObjectBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (Point1FieldMask & whichField))
    {
        _sfPoint1.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (Point2FieldMask & whichField))
    {
        _sfPoint2.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (Point3FieldMask & whichField))
    {
        _sfPoint3.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (Point4FieldMask & whichField))
    {
        _sfPoint4.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (Color1FieldMask & whichField))
    {
        _sfColor1.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (Color2FieldMask & whichField))
    {
        _sfColor2.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (Color3FieldMask & whichField))
    {
        _sfColor3.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (Color4FieldMask & whichField))
    {
        _sfColor4.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OpacityFieldMask & whichField))
    {
        _sfOpacity.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void MultiColoredQuadUIDrawObjectBase::executeSyncImpl(      MultiColoredQuadUIDrawObjectBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (Point1FieldMask & whichField))
        _sfPoint1.syncWith(pOther->_sfPoint1);

    if(FieldBits::NoField != (Point2FieldMask & whichField))
        _sfPoint2.syncWith(pOther->_sfPoint2);

    if(FieldBits::NoField != (Point3FieldMask & whichField))
        _sfPoint3.syncWith(pOther->_sfPoint3);

    if(FieldBits::NoField != (Point4FieldMask & whichField))
        _sfPoint4.syncWith(pOther->_sfPoint4);

    if(FieldBits::NoField != (Color1FieldMask & whichField))
        _sfColor1.syncWith(pOther->_sfColor1);

    if(FieldBits::NoField != (Color2FieldMask & whichField))
        _sfColor2.syncWith(pOther->_sfColor2);

    if(FieldBits::NoField != (Color3FieldMask & whichField))
        _sfColor3.syncWith(pOther->_sfColor3);

    if(FieldBits::NoField != (Color4FieldMask & whichField))
        _sfColor4.syncWith(pOther->_sfColor4);

    if(FieldBits::NoField != (OpacityFieldMask & whichField))
        _sfOpacity.syncWith(pOther->_sfOpacity);


}
#else
void MultiColoredQuadUIDrawObjectBase::executeSyncImpl(      MultiColoredQuadUIDrawObjectBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (Point1FieldMask & whichField))
        _sfPoint1.syncWith(pOther->_sfPoint1);

    if(FieldBits::NoField != (Point2FieldMask & whichField))
        _sfPoint2.syncWith(pOther->_sfPoint2);

    if(FieldBits::NoField != (Point3FieldMask & whichField))
        _sfPoint3.syncWith(pOther->_sfPoint3);

    if(FieldBits::NoField != (Point4FieldMask & whichField))
        _sfPoint4.syncWith(pOther->_sfPoint4);

    if(FieldBits::NoField != (Color1FieldMask & whichField))
        _sfColor1.syncWith(pOther->_sfColor1);

    if(FieldBits::NoField != (Color2FieldMask & whichField))
        _sfColor2.syncWith(pOther->_sfColor2);

    if(FieldBits::NoField != (Color3FieldMask & whichField))
        _sfColor3.syncWith(pOther->_sfColor3);

    if(FieldBits::NoField != (Color4FieldMask & whichField))
        _sfColor4.syncWith(pOther->_sfColor4);

    if(FieldBits::NoField != (OpacityFieldMask & whichField))
        _sfOpacity.syncWith(pOther->_sfOpacity);



}

void MultiColoredQuadUIDrawObjectBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<MultiColoredQuadUIDrawObjectPtr>::_type("MultiColoredQuadUIDrawObjectPtr", "UIDrawObjectPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(MultiColoredQuadUIDrawObjectPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(MultiColoredQuadUIDrawObjectPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGMULTICOLOREDQUADUIDRAWOBJECTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGMULTICOLOREDQUADUIDRAWOBJECTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGMULTICOLOREDQUADUIDRAWOBJECTFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
