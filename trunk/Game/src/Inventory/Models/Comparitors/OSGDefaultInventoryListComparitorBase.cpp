/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Game                                *
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
 **     class DefaultInventoryListComparitor!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDEFAULTINVENTORYLISTCOMPARITORINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGDefaultInventoryListComparitorBase.h"
#include "OSGDefaultInventoryListComparitor.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector DefaultInventoryListComparitorBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 



FieldContainerType DefaultInventoryListComparitorBase::_type(
    "DefaultInventoryListComparitor",
    "InventoryListComparitor",
    NULL,
    (PrototypeCreateF) &DefaultInventoryListComparitorBase::createEmpty,
    DefaultInventoryListComparitor::initMethod,
    NULL,
    0);

//OSG_FIELD_CONTAINER_DEF(DefaultInventoryListComparitorBase, DefaultInventoryListComparitorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &DefaultInventoryListComparitorBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &DefaultInventoryListComparitorBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr DefaultInventoryListComparitorBase::shallowCopy(void) const 
{ 
    DefaultInventoryListComparitorPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const DefaultInventoryListComparitor *>(this)); 

    return returnValue; 
}

UInt32 DefaultInventoryListComparitorBase::getContainerSize(void) const 
{ 
    return sizeof(DefaultInventoryListComparitor); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void DefaultInventoryListComparitorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((DefaultInventoryListComparitorBase *) &other, whichField);
}
#else
void DefaultInventoryListComparitorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((DefaultInventoryListComparitorBase *) &other, whichField, sInfo);
}
void DefaultInventoryListComparitorBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void DefaultInventoryListComparitorBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

DefaultInventoryListComparitorBase::DefaultInventoryListComparitorBase(void) :
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

DefaultInventoryListComparitorBase::DefaultInventoryListComparitorBase(const DefaultInventoryListComparitorBase &source) :
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

DefaultInventoryListComparitorBase::~DefaultInventoryListComparitorBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 DefaultInventoryListComparitorBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void DefaultInventoryListComparitorBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);


}

void DefaultInventoryListComparitorBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DefaultInventoryListComparitorBase::executeSyncImpl(      DefaultInventoryListComparitorBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);


}
#else
void DefaultInventoryListComparitorBase::executeSyncImpl(      DefaultInventoryListComparitorBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void DefaultInventoryListComparitorBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<DefaultInventoryListComparitorPtr>::_type("DefaultInventoryListComparitorPtr", "InventoryListComparitorPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(DefaultInventoryListComparitorPtr, OSG_GAMELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(DefaultInventoryListComparitorPtr, OSG_GAMELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGDEFAULTINVENTORYLISTCOMPARITORBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGDEFAULTINVENTORYLISTCOMPARITORBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGDEFAULTINVENTORYLISTCOMPARITORFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

