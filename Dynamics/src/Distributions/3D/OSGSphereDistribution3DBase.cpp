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
 **     class SphereDistribution3D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESPHEREDISTRIBUTION3DINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGSphereDistribution3DBase.h"
#include "OSGSphereDistribution3D.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  SphereDistribution3DBase::CenterFieldMask = 
    (TypeTraits<BitVector>::One << SphereDistribution3DBase::CenterFieldId);

const OSG::BitVector  SphereDistribution3DBase::InnerRadiusFieldMask = 
    (TypeTraits<BitVector>::One << SphereDistribution3DBase::InnerRadiusFieldId);

const OSG::BitVector  SphereDistribution3DBase::OuterRadiusFieldMask = 
    (TypeTraits<BitVector>::One << SphereDistribution3DBase::OuterRadiusFieldId);

const OSG::BitVector  SphereDistribution3DBase::MinThetaFieldMask = 
    (TypeTraits<BitVector>::One << SphereDistribution3DBase::MinThetaFieldId);

const OSG::BitVector  SphereDistribution3DBase::MaxThetaFieldMask = 
    (TypeTraits<BitVector>::One << SphereDistribution3DBase::MaxThetaFieldId);

const OSG::BitVector  SphereDistribution3DBase::MinZFieldMask = 
    (TypeTraits<BitVector>::One << SphereDistribution3DBase::MinZFieldId);

const OSG::BitVector  SphereDistribution3DBase::MaxZFieldMask = 
    (TypeTraits<BitVector>::One << SphereDistribution3DBase::MaxZFieldId);

const OSG::BitVector SphereDistribution3DBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Pnt3f           SphereDistribution3DBase::_sfCenter
    
*/
/*! \var Real32          SphereDistribution3DBase::_sfInnerRadius
    
*/
/*! \var Real32          SphereDistribution3DBase::_sfOuterRadius
    
*/
/*! \var Real32          SphereDistribution3DBase::_sfMinTheta
    
*/
/*! \var Real32          SphereDistribution3DBase::_sfMaxTheta
    
*/
/*! \var Real32          SphereDistribution3DBase::_sfMinZ
    
*/
/*! \var Real32          SphereDistribution3DBase::_sfMaxZ
    
*/

//! SphereDistribution3D description

FieldDescription *SphereDistribution3DBase::_desc[] = 
{
    new FieldDescription(SFPnt3f::getClassType(), 
                     "Center", 
                     CenterFieldId, CenterFieldMask,
                     false,
                     (FieldAccessMethod) &SphereDistribution3DBase::getSFCenter),
    new FieldDescription(SFReal32::getClassType(), 
                     "InnerRadius", 
                     InnerRadiusFieldId, InnerRadiusFieldMask,
                     false,
                     (FieldAccessMethod) &SphereDistribution3DBase::getSFInnerRadius),
    new FieldDescription(SFReal32::getClassType(), 
                     "OuterRadius", 
                     OuterRadiusFieldId, OuterRadiusFieldMask,
                     false,
                     (FieldAccessMethod) &SphereDistribution3DBase::getSFOuterRadius),
    new FieldDescription(SFReal32::getClassType(), 
                     "MinTheta", 
                     MinThetaFieldId, MinThetaFieldMask,
                     false,
                     (FieldAccessMethod) &SphereDistribution3DBase::getSFMinTheta),
    new FieldDescription(SFReal32::getClassType(), 
                     "MaxTheta", 
                     MaxThetaFieldId, MaxThetaFieldMask,
                     false,
                     (FieldAccessMethod) &SphereDistribution3DBase::getSFMaxTheta),
    new FieldDescription(SFReal32::getClassType(), 
                     "MinZ", 
                     MinZFieldId, MinZFieldMask,
                     false,
                     (FieldAccessMethod) &SphereDistribution3DBase::getSFMinZ),
    new FieldDescription(SFReal32::getClassType(), 
                     "MaxZ", 
                     MaxZFieldId, MaxZFieldMask,
                     false,
                     (FieldAccessMethod) &SphereDistribution3DBase::getSFMaxZ)
};


FieldContainerType SphereDistribution3DBase::_type(
    "SphereDistribution3D",
    "Distribution3D",
    NULL,
    (PrototypeCreateF) &SphereDistribution3DBase::createEmpty,
    SphereDistribution3D::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(SphereDistribution3DBase, SphereDistribution3DPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &SphereDistribution3DBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &SphereDistribution3DBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr SphereDistribution3DBase::shallowCopy(void) const 
{ 
    SphereDistribution3DPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const SphereDistribution3D *>(this)); 

    return returnValue; 
}

UInt32 SphereDistribution3DBase::getContainerSize(void) const 
{ 
    return sizeof(SphereDistribution3D); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void SphereDistribution3DBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((SphereDistribution3DBase *) &other, whichField);
}
#else
void SphereDistribution3DBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((SphereDistribution3DBase *) &other, whichField, sInfo);
}
void SphereDistribution3DBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void SphereDistribution3DBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

SphereDistribution3DBase::SphereDistribution3DBase(void) :
    _sfCenter                 (Pnt3f(0.0,0.0,0.0)), 
    _sfInnerRadius            (Real32(0.0)), 
    _sfOuterRadius            (Real32(1.0)), 
    _sfMinTheta               (Real32(0.0)), 
    _sfMaxTheta               (Real32(6.28319)), 
    _sfMinZ                   (Real32(-1.0)), 
    _sfMaxZ                   (Real32(1.0)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

SphereDistribution3DBase::SphereDistribution3DBase(const SphereDistribution3DBase &source) :
    _sfCenter                 (source._sfCenter                 ), 
    _sfInnerRadius            (source._sfInnerRadius            ), 
    _sfOuterRadius            (source._sfOuterRadius            ), 
    _sfMinTheta               (source._sfMinTheta               ), 
    _sfMaxTheta               (source._sfMaxTheta               ), 
    _sfMinZ                   (source._sfMinZ                   ), 
    _sfMaxZ                   (source._sfMaxZ                   ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

SphereDistribution3DBase::~SphereDistribution3DBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 SphereDistribution3DBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        returnValue += _sfCenter.getBinSize();
    }

    if(FieldBits::NoField != (InnerRadiusFieldMask & whichField))
    {
        returnValue += _sfInnerRadius.getBinSize();
    }

    if(FieldBits::NoField != (OuterRadiusFieldMask & whichField))
    {
        returnValue += _sfOuterRadius.getBinSize();
    }

    if(FieldBits::NoField != (MinThetaFieldMask & whichField))
    {
        returnValue += _sfMinTheta.getBinSize();
    }

    if(FieldBits::NoField != (MaxThetaFieldMask & whichField))
    {
        returnValue += _sfMaxTheta.getBinSize();
    }

    if(FieldBits::NoField != (MinZFieldMask & whichField))
    {
        returnValue += _sfMinZ.getBinSize();
    }

    if(FieldBits::NoField != (MaxZFieldMask & whichField))
    {
        returnValue += _sfMaxZ.getBinSize();
    }


    return returnValue;
}

void SphereDistribution3DBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        _sfCenter.copyToBin(pMem);
    }

    if(FieldBits::NoField != (InnerRadiusFieldMask & whichField))
    {
        _sfInnerRadius.copyToBin(pMem);
    }

    if(FieldBits::NoField != (OuterRadiusFieldMask & whichField))
    {
        _sfOuterRadius.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MinThetaFieldMask & whichField))
    {
        _sfMinTheta.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MaxThetaFieldMask & whichField))
    {
        _sfMaxTheta.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MinZFieldMask & whichField))
    {
        _sfMinZ.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MaxZFieldMask & whichField))
    {
        _sfMaxZ.copyToBin(pMem);
    }


}

void SphereDistribution3DBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        _sfCenter.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (InnerRadiusFieldMask & whichField))
    {
        _sfInnerRadius.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (OuterRadiusFieldMask & whichField))
    {
        _sfOuterRadius.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MinThetaFieldMask & whichField))
    {
        _sfMinTheta.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MaxThetaFieldMask & whichField))
    {
        _sfMaxTheta.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MinZFieldMask & whichField))
    {
        _sfMinZ.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MaxZFieldMask & whichField))
    {
        _sfMaxZ.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void SphereDistribution3DBase::executeSyncImpl(      SphereDistribution3DBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
        _sfCenter.syncWith(pOther->_sfCenter);

    if(FieldBits::NoField != (InnerRadiusFieldMask & whichField))
        _sfInnerRadius.syncWith(pOther->_sfInnerRadius);

    if(FieldBits::NoField != (OuterRadiusFieldMask & whichField))
        _sfOuterRadius.syncWith(pOther->_sfOuterRadius);

    if(FieldBits::NoField != (MinThetaFieldMask & whichField))
        _sfMinTheta.syncWith(pOther->_sfMinTheta);

    if(FieldBits::NoField != (MaxThetaFieldMask & whichField))
        _sfMaxTheta.syncWith(pOther->_sfMaxTheta);

    if(FieldBits::NoField != (MinZFieldMask & whichField))
        _sfMinZ.syncWith(pOther->_sfMinZ);

    if(FieldBits::NoField != (MaxZFieldMask & whichField))
        _sfMaxZ.syncWith(pOther->_sfMaxZ);


}
#else
void SphereDistribution3DBase::executeSyncImpl(      SphereDistribution3DBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
        _sfCenter.syncWith(pOther->_sfCenter);

    if(FieldBits::NoField != (InnerRadiusFieldMask & whichField))
        _sfInnerRadius.syncWith(pOther->_sfInnerRadius);

    if(FieldBits::NoField != (OuterRadiusFieldMask & whichField))
        _sfOuterRadius.syncWith(pOther->_sfOuterRadius);

    if(FieldBits::NoField != (MinThetaFieldMask & whichField))
        _sfMinTheta.syncWith(pOther->_sfMinTheta);

    if(FieldBits::NoField != (MaxThetaFieldMask & whichField))
        _sfMaxTheta.syncWith(pOther->_sfMaxTheta);

    if(FieldBits::NoField != (MinZFieldMask & whichField))
        _sfMinZ.syncWith(pOther->_sfMinZ);

    if(FieldBits::NoField != (MaxZFieldMask & whichField))
        _sfMaxZ.syncWith(pOther->_sfMaxZ);



}

void SphereDistribution3DBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<SphereDistribution3DPtr>::_type("SphereDistribution3DPtr", "Distribution3DPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(SphereDistribution3DPtr, );
OSG_DLLEXPORT_MFIELD_DEF1(SphereDistribution3DPtr, );


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
    static Char8 cvsid_hpp       [] = OSGSPHEREDISTRIBUTION3DBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGSPHEREDISTRIBUTION3DBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGSPHEREDISTRIBUTION3DFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

