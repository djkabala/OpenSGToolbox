/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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
 **     class FunctorComboBoxComponentGenerator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGFunctorComboBoxComponentGeneratorBase.h"
#include "OSGFunctorComboBoxComponentGenerator.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FunctorComboBoxComponentGenerator
    A UI Functor ComboBox ComponentGenerator.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<FunctorComboBoxComponentGenerator *>::_type("FunctorComboBoxComponentGeneratorPtr", "ComboBoxComponentGeneratorPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FunctorComboBoxComponentGenerator *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           FunctorComboBoxComponentGenerator *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           FunctorComboBoxComponentGenerator *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void FunctorComboBoxComponentGeneratorBase::classDescInserter(TypeObject &oType)
{
}


FunctorComboBoxComponentGeneratorBase::TypeObject FunctorComboBoxComponentGeneratorBase::_type(
    FunctorComboBoxComponentGeneratorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&FunctorComboBoxComponentGeneratorBase::createEmptyLocal),
    FunctorComboBoxComponentGenerator::initMethod,
    FunctorComboBoxComponentGenerator::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&FunctorComboBoxComponentGenerator::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"FunctorComboBoxComponentGenerator\"\n"
    "\tparent=\"ComboBoxComponentGenerator\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)\"\n"
    ">\n"
    "A UI Functor ComboBox ComponentGenerator.\n"
    "</FieldContainer>\n",
    "A UI Functor ComboBox ComponentGenerator.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FunctorComboBoxComponentGeneratorBase::getType(void)
{
    return _type;
}

const FieldContainerType &FunctorComboBoxComponentGeneratorBase::getType(void) const
{
    return _type;
}

UInt32 FunctorComboBoxComponentGeneratorBase::getContainerSize(void) const
{
    return sizeof(FunctorComboBoxComponentGenerator);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 FunctorComboBoxComponentGeneratorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void FunctorComboBoxComponentGeneratorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void FunctorComboBoxComponentGeneratorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
FunctorComboBoxComponentGeneratorTransitPtr FunctorComboBoxComponentGeneratorBase::createLocal(BitVector bFlags)
{
    FunctorComboBoxComponentGeneratorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<FunctorComboBoxComponentGenerator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
FunctorComboBoxComponentGeneratorTransitPtr FunctorComboBoxComponentGeneratorBase::createDependent(BitVector bFlags)
{
    FunctorComboBoxComponentGeneratorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<FunctorComboBoxComponentGenerator>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
FunctorComboBoxComponentGeneratorTransitPtr FunctorComboBoxComponentGeneratorBase::create(void)
{
    FunctorComboBoxComponentGeneratorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<FunctorComboBoxComponentGenerator>(tmpPtr);
    }

    return fc;
}

FunctorComboBoxComponentGenerator *FunctorComboBoxComponentGeneratorBase::createEmptyLocal(BitVector bFlags)
{
    FunctorComboBoxComponentGenerator *returnValue;

    newPtr<FunctorComboBoxComponentGenerator>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
FunctorComboBoxComponentGenerator *FunctorComboBoxComponentGeneratorBase::createEmpty(void)
{
    FunctorComboBoxComponentGenerator *returnValue;

    newPtr<FunctorComboBoxComponentGenerator>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}

FieldContainerTransitPtr FunctorComboBoxComponentGeneratorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    FunctorComboBoxComponentGenerator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FunctorComboBoxComponentGenerator *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr FunctorComboBoxComponentGeneratorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    FunctorComboBoxComponentGenerator *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FunctorComboBoxComponentGenerator *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr FunctorComboBoxComponentGeneratorBase::shallowCopy(void) const
{
    FunctorComboBoxComponentGenerator *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const FunctorComboBoxComponentGenerator *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

FunctorComboBoxComponentGeneratorBase::FunctorComboBoxComponentGeneratorBase(void) :
    Inherited()
{
}

FunctorComboBoxComponentGeneratorBase::FunctorComboBoxComponentGeneratorBase(const FunctorComboBoxComponentGeneratorBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

FunctorComboBoxComponentGeneratorBase::~FunctorComboBoxComponentGeneratorBase(void)
{
}




#ifdef OSG_MT_CPTR_ASPECT
void FunctorComboBoxComponentGeneratorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    FunctorComboBoxComponentGenerator *pThis = static_cast<FunctorComboBoxComponentGenerator *>(this);

    pThis->execSync(static_cast<FunctorComboBoxComponentGenerator *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *FunctorComboBoxComponentGeneratorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    FunctorComboBoxComponentGenerator *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FunctorComboBoxComponentGenerator *>(pRefAspect),
                  dynamic_cast<const FunctorComboBoxComponentGenerator *>(this));

    return returnValue;
}
#endif

void FunctorComboBoxComponentGeneratorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
