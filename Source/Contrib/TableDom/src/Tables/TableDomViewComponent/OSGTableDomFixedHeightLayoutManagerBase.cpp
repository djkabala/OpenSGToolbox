/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala*
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
 **     class TableDomFixedHeightLayoutManager!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OpenSG/OSGConfig.h"




#include "OSGTableDomFixedHeightLayoutManagerBase.h"
#include "OSGTableDomFixedHeightLayoutManager.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TableDomFixedHeightLayoutManager
    A TableDomFixedHeightLayoutManager for tables
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TableDomFixedHeightLayoutManager *>::_type("TableDomFixedHeightLayoutManagerPtr", "TableDomLayoutManagerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TableDomFixedHeightLayoutManager *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TableDomFixedHeightLayoutManager *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TableDomFixedHeightLayoutManager *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TableDomFixedHeightLayoutManagerBase::classDescInserter(TypeObject &oType)
{
}


TableDomFixedHeightLayoutManagerBase::TypeObject TableDomFixedHeightLayoutManagerBase::_type(
    TableDomFixedHeightLayoutManagerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&TableDomFixedHeightLayoutManagerBase::createEmptyLocal),
    TableDomFixedHeightLayoutManager::initMethod,
    TableDomFixedHeightLayoutManager::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TableDomFixedHeightLayoutManager::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TableDomFixedHeightLayoutManager\"\n"
    "\tparent=\"TableDomLayoutManager\"\n"
    "\tlibrary=\"ContribTableDom\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"false\"\n"
    "\tparentsystemcomponent=\"false\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"true\"\n"
    "\tisNodeCore=\"false\"\n"
    "    \tauthors=\"David Kabala\"\n"
    ">\n"
    "\n"
    "A TableDomFixedHeightLayoutManager for tables\n"
    "\n"
    "\n"
    "</FieldContainer>\n",
    "A TableDomFixedHeightLayoutManager for tables\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TableDomFixedHeightLayoutManagerBase::getType(void)
{
    return _type;
}

const FieldContainerType &TableDomFixedHeightLayoutManagerBase::getType(void) const
{
    return _type;
}

UInt32 TableDomFixedHeightLayoutManagerBase::getContainerSize(void) const
{
    return sizeof(TableDomFixedHeightLayoutManager);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 TableDomFixedHeightLayoutManagerBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void TableDomFixedHeightLayoutManagerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void TableDomFixedHeightLayoutManagerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
TableDomFixedHeightLayoutManagerTransitPtr TableDomFixedHeightLayoutManagerBase::createLocal(BitVector bFlags)
{
    TableDomFixedHeightLayoutManagerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TableDomFixedHeightLayoutManager>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TableDomFixedHeightLayoutManagerTransitPtr TableDomFixedHeightLayoutManagerBase::createDependent(BitVector bFlags)
{
    TableDomFixedHeightLayoutManagerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TableDomFixedHeightLayoutManager>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TableDomFixedHeightLayoutManagerTransitPtr TableDomFixedHeightLayoutManagerBase::create(void)
{
    TableDomFixedHeightLayoutManagerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TableDomFixedHeightLayoutManager>(tmpPtr);
    }

    return fc;
}

TableDomFixedHeightLayoutManager *TableDomFixedHeightLayoutManagerBase::createEmptyLocal(BitVector bFlags)
{
    TableDomFixedHeightLayoutManager *returnValue;

    newPtr<TableDomFixedHeightLayoutManager>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TableDomFixedHeightLayoutManager *TableDomFixedHeightLayoutManagerBase::createEmpty(void)
{
    TableDomFixedHeightLayoutManager *returnValue;

    newPtr<TableDomFixedHeightLayoutManager>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}

FieldContainerTransitPtr TableDomFixedHeightLayoutManagerBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TableDomFixedHeightLayoutManager *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TableDomFixedHeightLayoutManager *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TableDomFixedHeightLayoutManagerBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TableDomFixedHeightLayoutManager *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TableDomFixedHeightLayoutManager *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TableDomFixedHeightLayoutManagerBase::shallowCopy(void) const
{
    TableDomFixedHeightLayoutManager *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TableDomFixedHeightLayoutManager *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

TableDomFixedHeightLayoutManagerBase::TableDomFixedHeightLayoutManagerBase(void) :
    Inherited()
{
}

TableDomFixedHeightLayoutManagerBase::TableDomFixedHeightLayoutManagerBase(const TableDomFixedHeightLayoutManagerBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

TableDomFixedHeightLayoutManagerBase::~TableDomFixedHeightLayoutManagerBase(void)
{
}




#ifdef OSG_MT_CPTR_ASPECT
void TableDomFixedHeightLayoutManagerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TableDomFixedHeightLayoutManager *pThis = static_cast<TableDomFixedHeightLayoutManager *>(this);

    pThis->execSync(static_cast<TableDomFixedHeightLayoutManager *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TableDomFixedHeightLayoutManagerBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TableDomFixedHeightLayoutManager *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TableDomFixedHeightLayoutManager *>(pRefAspect),
                  dynamic_cast<const TableDomFixedHeightLayoutManager *>(this));

    return returnValue;
}
#endif

void TableDomFixedHeightLayoutManagerBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
