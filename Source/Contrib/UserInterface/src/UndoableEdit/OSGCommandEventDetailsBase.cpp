/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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
 **     class CommandEventDetails!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGCommandEventDetailsBase.h"
#include "OSGCommandEventDetails.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::CommandEventDetails
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<CommandEventDetails *>::_type("CommandEventDetailsPtr", "EventDetailsPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(CommandEventDetails *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           CommandEventDetails *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           CommandEventDetails *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void CommandEventDetailsBase::classDescInserter(TypeObject &oType)
{
}


CommandEventDetailsBase::TypeObject CommandEventDetailsBase::_type(
    CommandEventDetailsBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&CommandEventDetailsBase::createEmptyLocal),
    CommandEventDetails::initMethod,
    CommandEventDetails::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&CommandEventDetails::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"CommandEventDetails\"\n"
    "\tparent=\"EventDetails\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "\tsupportUnregisteredCreate=\"true\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &CommandEventDetailsBase::getType(void)
{
    return _type;
}

const FieldContainerType &CommandEventDetailsBase::getType(void) const
{
    return _type;
}

UInt32 CommandEventDetailsBase::getContainerSize(void) const
{
    return sizeof(CommandEventDetails);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 CommandEventDetailsBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void CommandEventDetailsBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void CommandEventDetailsBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create a new instance of the class
CommandEventDetailsTransitPtr CommandEventDetailsBase::createLocal(BitVector bFlags)
{
    CommandEventDetailsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<CommandEventDetails>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
CommandEventDetailsTransitPtr CommandEventDetailsBase::createDependent(BitVector bFlags)
{
    CommandEventDetailsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<CommandEventDetails>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
CommandEventDetailsTransitPtr CommandEventDetailsBase::create(void)
{
    CommandEventDetailsTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<CommandEventDetails>(tmpPtr);
    }

    return fc;
}

CommandEventDetails *CommandEventDetailsBase::createEmptyLocal(BitVector bFlags)
{
    CommandEventDetails *returnValue;

    newPtr<CommandEventDetails>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
CommandEventDetails *CommandEventDetailsBase::createEmpty(void)
{
    CommandEventDetails *returnValue;

    newPtr<CommandEventDetails>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}

CommandEventDetails *CommandEventDetailsBase::createUnregistered(void)
{
    CommandEventDetails *returnValue = new CommandEventDetails;

#ifdef OSG_MT_CPTR_ASPECT
    returnValue->setupAspectStore();
#endif
    //Do not register with the FieldContainer Factory

    returnValue->onCreate      (      );
    returnValue->onCreateAspect(returnValue);
    
    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();
    
    return returnValue;
}

FieldContainerTransitPtr CommandEventDetailsBase::shallowCopyLocal(
    BitVector bFlags) const
{
    CommandEventDetails *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CommandEventDetails *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr CommandEventDetailsBase::shallowCopyDependent(
    BitVector bFlags) const
{
    CommandEventDetails *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const CommandEventDetails *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr CommandEventDetailsBase::shallowCopy(void) const
{
    CommandEventDetails *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const CommandEventDetails *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

CommandEventDetailsBase::CommandEventDetailsBase(void) :
    Inherited()
{
}

CommandEventDetailsBase::CommandEventDetailsBase(const CommandEventDetailsBase &source) :
    Inherited(source)
{
}


/*-------------------------- destructors ----------------------------------*/

CommandEventDetailsBase::~CommandEventDetailsBase(void)
{
}




#ifdef OSG_MT_CPTR_ASPECT
void CommandEventDetailsBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    CommandEventDetails *pThis = static_cast<CommandEventDetails *>(this);

    pThis->execSync(static_cast<CommandEventDetails *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *CommandEventDetailsBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    CommandEventDetails *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const CommandEventDetails *>(pRefAspect),
                  dynamic_cast<const CommandEventDetails *>(this));

    return returnValue;
}
#endif

void CommandEventDetailsBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
