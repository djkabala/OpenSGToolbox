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
 **     class DialogWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDIALOGWINDOWINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGDialogWindowBase.h"
#include "OSGDialogWindow.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector DialogWindowBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 



FieldContainerType DialogWindowBase::_type(
    "DialogWindow",
    "InternalWindow",
    NULL,
    (PrototypeCreateF) &DialogWindowBase::createEmpty,
    DialogWindow::initMethod,
    NULL,
    0);

//OSG_FIELD_CONTAINER_DEF(DialogWindowBase, DialogWindowPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &DialogWindowBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &DialogWindowBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr DialogWindowBase::shallowCopy(void) const 
{ 
    DialogWindowPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const DialogWindow *>(this)); 

    return returnValue; 
}

UInt32 DialogWindowBase::getContainerSize(void) const 
{ 
    return sizeof(DialogWindow); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void DialogWindowBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((DialogWindowBase *) &other, whichField);
}
#else
void DialogWindowBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((DialogWindowBase *) &other, whichField, sInfo);
}
void DialogWindowBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void DialogWindowBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

DialogWindowBase::DialogWindowBase(void) :
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

DialogWindowBase::DialogWindowBase(const DialogWindowBase &source) :
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

DialogWindowBase::~DialogWindowBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 DialogWindowBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void DialogWindowBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);


}

void DialogWindowBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void DialogWindowBase::executeSyncImpl(      DialogWindowBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);


}
#else
void DialogWindowBase::executeSyncImpl(      DialogWindowBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);



}

void DialogWindowBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<DialogWindowPtr>::_type("DialogWindowPtr", "InternalWindowPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(DialogWindowPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(DialogWindowPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


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
    static Char8 cvsid_hpp       [] = OSGDIALOGWINDOWBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGDIALOGWINDOWBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGDIALOGWINDOWFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE

