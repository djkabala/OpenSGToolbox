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
 **     class GeoSurfaceDistribution3D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEGEOSURFACEDISTRIBUTION3DINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGGeoSurfaceDistribution3DBase.h"
#include "OSGGeoSurfaceDistribution3D.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  GeoSurfaceDistribution3DBase::SurfaceFieldMask = 
    (TypeTraits<BitVector>::One << GeoSurfaceDistribution3DBase::SurfaceFieldId);

const OSG::BitVector GeoSurfaceDistribution3DBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var GeometryPtr     GeoSurfaceDistribution3DBase::_sfSurface
    
*/

//! GeoSurfaceDistribution3D description

FieldDescription *GeoSurfaceDistribution3DBase::_desc[] = 
{
    new FieldDescription(SFGeometryPtr::getClassType(), 
                     "Surface", 
                     SurfaceFieldId, SurfaceFieldMask,
                     false,
                     (FieldAccessMethod) &GeoSurfaceDistribution3DBase::getSFSurface)
};


FieldContainerType GeoSurfaceDistribution3DBase::_type(
    "GeoSurfaceDistribution3D",
    "Distribution3D",
    NULL,
    (PrototypeCreateF) &GeoSurfaceDistribution3DBase::createEmpty,
    GeoSurfaceDistribution3D::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(GeoSurfaceDistribution3DBase, GeoSurfaceDistribution3DPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &GeoSurfaceDistribution3DBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &GeoSurfaceDistribution3DBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr GeoSurfaceDistribution3DBase::shallowCopy(void) const 
{ 
    GeoSurfaceDistribution3DPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const GeoSurfaceDistribution3D *>(this)); 

    return returnValue; 
}

UInt32 GeoSurfaceDistribution3DBase::getContainerSize(void) const 
{ 
    return sizeof(GeoSurfaceDistribution3D); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void GeoSurfaceDistribution3DBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((GeoSurfaceDistribution3DBase *) &other, whichField);
}
#else
void GeoSurfaceDistribution3DBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((GeoSurfaceDistribution3DBase *) &other, whichField, sInfo);
}
void GeoSurfaceDistribution3DBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void GeoSurfaceDistribution3DBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

GeoSurfaceDistribution3DBase::GeoSurfaceDistribution3DBase(void) :
    _sfSurface                (GeometryPtr(NullFC)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

GeoSurfaceDistribution3DBase::GeoSurfaceDistribution3DBase(const GeoSurfaceDistribution3DBase &source) :
    _sfSurface                (source._sfSurface                ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

GeoSurfaceDistribution3DBase::~GeoSurfaceDistribution3DBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 GeoSurfaceDistribution3DBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SurfaceFieldMask & whichField))
    {
        returnValue += _sfSurface.getBinSize();
    }


    return returnValue;
}

void GeoSurfaceDistribution3DBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SurfaceFieldMask & whichField))
    {
        _sfSurface.copyToBin(pMem);
    }


}

void GeoSurfaceDistribution3DBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SurfaceFieldMask & whichField))
    {
        _sfSurface.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void GeoSurfaceDistribution3DBase::executeSyncImpl(      GeoSurfaceDistribution3DBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (SurfaceFieldMask & whichField))
        _sfSurface.syncWith(pOther->_sfSurface);


}
#else
void GeoSurfaceDistribution3DBase::executeSyncImpl(      GeoSurfaceDistribution3DBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (SurfaceFieldMask & whichField))
        _sfSurface.syncWith(pOther->_sfSurface);



}

void GeoSurfaceDistribution3DBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<GeoSurfaceDistribution3DPtr>::_type("GeoSurfaceDistribution3DPtr", "Distribution3DPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(GeoSurfaceDistribution3DPtr, );
OSG_DLLEXPORT_MFIELD_DEF1(GeoSurfaceDistribution3DPtr, );


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
    static Char8 cvsid_hpp       [] = OSGGEOSURFACEDISTRIBUTION3DBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGGEOSURFACEDISTRIBUTION3DBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGGEOSURFACEDISTRIBUTION3DFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

