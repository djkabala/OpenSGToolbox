/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Game                                *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                  Authors: David Kabala, Eric Langkamp                     *
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
 **     class DefaultInventorySubset!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDEFAULTINVENTORYSUBSETINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGDefaultInventorySubsetBase.h"
#include "OSGDefaultInventorySubset.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  DefaultInventorySubsetBase::ClassDefinitionFieldMask = 
    (TypeTraits<BitVector>::One << DefaultInventorySubsetBase::ClassDefinitionFieldId);

const OSG::BitVector DefaultInventorySubsetBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var std::string     DefaultInventorySubsetBase::_sfClassDefinition
    
*/

//! DefaultInventorySubset description

FieldDescription *DefaultInventorySubsetBase::_desc[] = 
{
    new FieldDescription(SFString::getClassType(), 
                     "ClassDefinition", 
                     ClassDefinitionFieldId, ClassDefinitionFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&DefaultInventorySubsetBase::editSFClassDefinition))
};


FieldContainerType DefaultInventorySubsetBase::_type(
    "DefaultInventorySubset",
    "InventorySubset",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&DefaultInventorySubsetBase::createEmpty),
    DefaultInventorySubset::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(DefaultInventorySubsetBase, DefaultInventorySubsetPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &DefaultInventorySubsetBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &DefaultInventorySubsetBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr DefaultInventorySubsetBase::shallowCopy(void) const 
{ 
    DefaultInventorySubsetPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const DefaultInventorySubset *>(this)); 

    return returnValue; 
}

UInt32 DefaultInventorySubsetBase::getContainerSize(void) const 
{ 
    return sizeof(DefaultInventorySubset); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void DefaultInventorySubsetBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<DefaultInventorySubsetBase *>(&other),
                          whichField);
}
#else
void DefaultInventorySubsetBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((DefaultInventorySubsetBase *) &other, whichField, sInfo);
}
void DefaultInventorySubsetBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void DefaultInventorySubsetBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

DefaultInventorySubsetBase::DefaultInventorySubsetBase(void) :
    _sfClassDefinition        (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

DefaultInventorySubsetBase::DefaultInventorySubsetBase(const DefaultInventorySubsetBase &source) :
    _sfClassDefinition        (source._sfClassDefinition        ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

DefaultInventorySubsetBase::~DefaultInventorySubsetBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 DefaultInventorySubsetBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ClassDefinitionFieldMask & whichField))
    {
        returnValue += _sfClassDefinition.getBinSize();
    }


    return returnValue;
}

void DefaultInventorySubsetBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ClassDefinitionFieldMask & whichField))
    {
        _sfClassDefinition.copyToBin(pMem);
    }


}

void DefaultInventorySubsetBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ClassDefinitionFieldMask & whichField))
    {
        _sfClassDefinition.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DefaultInventorySubsetBase::executeSyncImpl(      DefaultInventorySubsetBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ClassDefinitionFieldMask & whichField))
        _sfClassDefinition.syncWith(pOther->_sfClassDefinition);


}
#else
void DefaultInventorySubsetBase::executeSyncImpl(      DefaultInventorySubsetBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ClassDefinitionFieldMask & whichField))
        _sfClassDefinition.syncWith(pOther->_sfClassDefinition);



}

void DefaultInventorySubsetBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<DefaultInventorySubsetPtr>::_type("DefaultInventorySubsetPtr", "InventorySubsetPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(DefaultInventorySubsetPtr, OSG_GAMELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(DefaultInventorySubsetPtr, OSG_GAMELIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE
