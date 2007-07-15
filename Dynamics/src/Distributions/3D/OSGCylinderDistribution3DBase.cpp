/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 **     class CylinderDistribution3D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECYLINDERDISTRIBUTION3DINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGCylinderDistribution3DBase.h"
#include "OSGCylinderDistribution3D.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  CylinderDistribution3DBase::HeightFieldMask = 
    (TypeTraits<BitVector>::One << CylinderDistribution3DBase::HeightFieldId);

const OSG::BitVector CylinderDistribution3DBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Real32          CylinderDistribution3DBase::_sfHeight
    
*/

//! CylinderDistribution3D description

FieldDescription *CylinderDistribution3DBase::_desc[] = 
{
    new FieldDescription(SFReal32::getClassType(), 
                     "Height", 
                     HeightFieldId, HeightFieldMask,
                     false,
                     (FieldAccessMethod) &CylinderDistribution3DBase::getSFHeight)
};


FieldContainerType CylinderDistribution3DBase::_type(
    "CylinderDistribution3D",
    "DiscDistribution3D",
    NULL,
    (PrototypeCreateF) &CylinderDistribution3DBase::createEmpty,
    CylinderDistribution3D::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(CylinderDistribution3DBase, CylinderDistribution3DPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &CylinderDistribution3DBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &CylinderDistribution3DBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr CylinderDistribution3DBase::shallowCopy(void) const 
{ 
    CylinderDistribution3DPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const CylinderDistribution3D *>(this)); 

    return returnValue; 
}

UInt32 CylinderDistribution3DBase::getContainerSize(void) const 
{ 
    return sizeof(CylinderDistribution3D); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void CylinderDistribution3DBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((CylinderDistribution3DBase *) &other, whichField);
}
#else
void CylinderDistribution3DBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((CylinderDistribution3DBase *) &other, whichField, sInfo);
}
void CylinderDistribution3DBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void CylinderDistribution3DBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

CylinderDistribution3DBase::CylinderDistribution3DBase(void) :
    _sfHeight                 (Real32(1.0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

CylinderDistribution3DBase::CylinderDistribution3DBase(const CylinderDistribution3DBase &source) :
    _sfHeight                 (source._sfHeight                 ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

CylinderDistribution3DBase::~CylinderDistribution3DBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 CylinderDistribution3DBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        returnValue += _sfHeight.getBinSize();
    }


    return returnValue;
}

void CylinderDistribution3DBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyToBin(pMem);
    }


}

void CylinderDistribution3DBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
    {
        _sfHeight.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void CylinderDistribution3DBase::executeSyncImpl(      CylinderDistribution3DBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
        _sfHeight.syncWith(pOther->_sfHeight);


}
#else
void CylinderDistribution3DBase::executeSyncImpl(      CylinderDistribution3DBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (HeightFieldMask & whichField))
        _sfHeight.syncWith(pOther->_sfHeight);



}

void CylinderDistribution3DBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<CylinderDistribution3DPtr>::_type("CylinderDistribution3DPtr", "DiscDistribution3DPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(CylinderDistribution3DPtr, );
OSG_DLLEXPORT_MFIELD_DEF1(CylinderDistribution3DPtr, );


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
    static Char8 cvsid_hpp       [] = OSGCYLINDERDISTRIBUTION3DBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGCYLINDERDISTRIBUTION3DBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGCYLINDERDISTRIBUTION3DFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

