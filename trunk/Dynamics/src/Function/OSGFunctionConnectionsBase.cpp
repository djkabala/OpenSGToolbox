/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Dynamics                            *
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
 **     class FunctionConnections!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEFUNCTIONCONNECTIONSINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGFunctionConnectionsBase.h"
#include "OSGFunctionConnections.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  FunctionConnectionsBase::FunctionOutputsFieldMask = 
    (TypeTraits<BitVector>::One << FunctionConnectionsBase::FunctionOutputsFieldId);

const OSG::BitVector  FunctionConnectionsBase::FunctionInputsFieldMask = 
    (TypeTraits<BitVector>::One << FunctionConnectionsBase::FunctionInputsFieldId);

const OSG::BitVector  FunctionConnectionsBase::FunctionOutputIndexFieldMask = 
    (TypeTraits<BitVector>::One << FunctionConnectionsBase::FunctionOutputIndexFieldId);

const OSG::BitVector  FunctionConnectionsBase::FunctionInputIndexFieldMask = 
    (TypeTraits<BitVector>::One << FunctionConnectionsBase::FunctionInputIndexFieldId);

const OSG::BitVector FunctionConnectionsBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var FunctionPtr     FunctionConnectionsBase::_mfFunctionOutputs
    
*/
/*! \var FunctionPtr     FunctionConnectionsBase::_mfFunctionInputs
    
*/
/*! \var UInt32          FunctionConnectionsBase::_mfFunctionOutputIndex
    
*/
/*! \var UInt32          FunctionConnectionsBase::_mfFunctionInputIndex
    
*/

//! FunctionConnections description

FieldDescription *FunctionConnectionsBase::_desc[] = 
{
    new FieldDescription(MFFunctionPtr::getClassType(), 
                     "FunctionOutputs", 
                     FunctionOutputsFieldId, FunctionOutputsFieldMask,
                     false,
                     (FieldAccessMethod) &FunctionConnectionsBase::getMFFunctionOutputs),
    new FieldDescription(MFFunctionPtr::getClassType(), 
                     "FunctionInputs", 
                     FunctionInputsFieldId, FunctionInputsFieldMask,
                     false,
                     (FieldAccessMethod) &FunctionConnectionsBase::getMFFunctionInputs),
    new FieldDescription(MFUInt32::getClassType(), 
                     "FunctionOutputIndex", 
                     FunctionOutputIndexFieldId, FunctionOutputIndexFieldMask,
                     false,
                     (FieldAccessMethod) &FunctionConnectionsBase::getMFFunctionOutputIndex),
    new FieldDescription(MFUInt32::getClassType(), 
                     "FunctionInputIndex", 
                     FunctionInputIndexFieldId, FunctionInputIndexFieldMask,
                     false,
                     (FieldAccessMethod) &FunctionConnectionsBase::getMFFunctionInputIndex)
};


FieldContainerType FunctionConnectionsBase::_type(
    "FunctionConnections",
    "AttachmentContainer",
    NULL,
    (PrototypeCreateF) &FunctionConnectionsBase::createEmpty,
    FunctionConnections::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(FunctionConnectionsBase, FunctionConnectionsPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &FunctionConnectionsBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &FunctionConnectionsBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr FunctionConnectionsBase::shallowCopy(void) const 
{ 
    FunctionConnectionsPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const FunctionConnections *>(this)); 

    return returnValue; 
}

UInt32 FunctionConnectionsBase::getContainerSize(void) const 
{ 
    return sizeof(FunctionConnections); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void FunctionConnectionsBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((FunctionConnectionsBase *) &other, whichField);
}
#else
void FunctionConnectionsBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((FunctionConnectionsBase *) &other, whichField, sInfo);
}
void FunctionConnectionsBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void FunctionConnectionsBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

    _mfFunctionOutputs.terminateShare(uiAspect, this->getContainerSize());
    _mfFunctionInputs.terminateShare(uiAspect, this->getContainerSize());
    _mfFunctionOutputIndex.terminateShare(uiAspect, this->getContainerSize());
    _mfFunctionInputIndex.terminateShare(uiAspect, this->getContainerSize());
}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

FunctionConnectionsBase::FunctionConnectionsBase(void) :
    _mfFunctionOutputs        (), 
    _mfFunctionInputs         (), 
    _mfFunctionOutputIndex    (), 
    _mfFunctionInputIndex     (), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

FunctionConnectionsBase::FunctionConnectionsBase(const FunctionConnectionsBase &source) :
    _mfFunctionOutputs        (source._mfFunctionOutputs        ), 
    _mfFunctionInputs         (source._mfFunctionInputs         ), 
    _mfFunctionOutputIndex    (source._mfFunctionOutputIndex    ), 
    _mfFunctionInputIndex     (source._mfFunctionInputIndex     ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

FunctionConnectionsBase::~FunctionConnectionsBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 FunctionConnectionsBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FunctionOutputsFieldMask & whichField))
    {
        returnValue += _mfFunctionOutputs.getBinSize();
    }

    if(FieldBits::NoField != (FunctionInputsFieldMask & whichField))
    {
        returnValue += _mfFunctionInputs.getBinSize();
    }

    if(FieldBits::NoField != (FunctionOutputIndexFieldMask & whichField))
    {
        returnValue += _mfFunctionOutputIndex.getBinSize();
    }

    if(FieldBits::NoField != (FunctionInputIndexFieldMask & whichField))
    {
        returnValue += _mfFunctionInputIndex.getBinSize();
    }


    return returnValue;
}

void FunctionConnectionsBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FunctionOutputsFieldMask & whichField))
    {
        _mfFunctionOutputs.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FunctionInputsFieldMask & whichField))
    {
        _mfFunctionInputs.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FunctionOutputIndexFieldMask & whichField))
    {
        _mfFunctionOutputIndex.copyToBin(pMem);
    }

    if(FieldBits::NoField != (FunctionInputIndexFieldMask & whichField))
    {
        _mfFunctionInputIndex.copyToBin(pMem);
    }


}

void FunctionConnectionsBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FunctionOutputsFieldMask & whichField))
    {
        _mfFunctionOutputs.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FunctionInputsFieldMask & whichField))
    {
        _mfFunctionInputs.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FunctionOutputIndexFieldMask & whichField))
    {
        _mfFunctionOutputIndex.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (FunctionInputIndexFieldMask & whichField))
    {
        _mfFunctionInputIndex.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void FunctionConnectionsBase::executeSyncImpl(      FunctionConnectionsBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (FunctionOutputsFieldMask & whichField))
        _mfFunctionOutputs.syncWith(pOther->_mfFunctionOutputs);

    if(FieldBits::NoField != (FunctionInputsFieldMask & whichField))
        _mfFunctionInputs.syncWith(pOther->_mfFunctionInputs);

    if(FieldBits::NoField != (FunctionOutputIndexFieldMask & whichField))
        _mfFunctionOutputIndex.syncWith(pOther->_mfFunctionOutputIndex);

    if(FieldBits::NoField != (FunctionInputIndexFieldMask & whichField))
        _mfFunctionInputIndex.syncWith(pOther->_mfFunctionInputIndex);


}
#else
void FunctionConnectionsBase::executeSyncImpl(      FunctionConnectionsBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);


    if(FieldBits::NoField != (FunctionOutputsFieldMask & whichField))
        _mfFunctionOutputs.syncWith(pOther->_mfFunctionOutputs, sInfo);

    if(FieldBits::NoField != (FunctionInputsFieldMask & whichField))
        _mfFunctionInputs.syncWith(pOther->_mfFunctionInputs, sInfo);

    if(FieldBits::NoField != (FunctionOutputIndexFieldMask & whichField))
        _mfFunctionOutputIndex.syncWith(pOther->_mfFunctionOutputIndex, sInfo);

    if(FieldBits::NoField != (FunctionInputIndexFieldMask & whichField))
        _mfFunctionInputIndex.syncWith(pOther->_mfFunctionInputIndex, sInfo);


}

void FunctionConnectionsBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

    if(FieldBits::NoField != (FunctionOutputsFieldMask & whichField))
        _mfFunctionOutputs.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (FunctionInputsFieldMask & whichField))
        _mfFunctionInputs.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (FunctionOutputIndexFieldMask & whichField))
        _mfFunctionOutputIndex.beginEdit(uiAspect, uiContainerSize);

    if(FieldBits::NoField != (FunctionInputIndexFieldMask & whichField))
        _mfFunctionInputIndex.beginEdit(uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<FunctionConnectionsPtr>::_type("FunctionConnectionsPtr", "AttachmentContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(FunctionConnectionsPtr, OSG_DYNAMICSLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(FunctionConnectionsPtr, OSG_DYNAMICSLIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGFUNCTIONCONNECTIONSBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGFUNCTIONCONNECTIONSBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGFUNCTIONCONNECTIONSFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
