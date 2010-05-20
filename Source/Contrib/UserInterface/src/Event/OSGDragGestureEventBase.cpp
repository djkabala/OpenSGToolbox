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
 **     class DragGestureEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGDragGestureEventBase.h"
#include "OSGDragGestureEvent.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::DragGestureEvent
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Pnt2f           DragGestureEventBase::_sfDragLocation
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<DragGestureEvent *>::_type("DragGestureEventPtr", "EventPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(DragGestureEvent *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           DragGestureEvent *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           DragGestureEvent *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void DragGestureEventBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFPnt2f::Description(
        SFPnt2f::getClassType(),
        "DragLocation",
        "",
        DragLocationFieldId, DragLocationFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&DragGestureEvent::editHandleDragLocation),
        static_cast<FieldGetMethodSig >(&DragGestureEvent::getHandleDragLocation));

    oType.addInitialDesc(pDesc);
}


DragGestureEventBase::TypeObject DragGestureEventBase::_type(
    DragGestureEventBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&DragGestureEventBase::createEmptyLocal),
    DragGestureEvent::initMethod,
    DragGestureEvent::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&DragGestureEvent::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"DragGestureEvent\"\n"
    "\tparent=\"Event\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"DragLocation\"\n"
    "\t\ttype=\"Pnt2f\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t\tdefaultValue=\"0.0f,0.0f\"\n"
    "        publicRead=\"true\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DragGestureEventBase::getType(void)
{
    return _type;
}

const FieldContainerType &DragGestureEventBase::getType(void) const
{
    return _type;
}

UInt32 DragGestureEventBase::getContainerSize(void) const
{
    return sizeof(DragGestureEvent);
}

/*------------------------- decorator get ------------------------------*/


SFPnt2f *DragGestureEventBase::editSFDragLocation(void)
{
    editSField(DragLocationFieldMask);

    return &_sfDragLocation;
}

const SFPnt2f *DragGestureEventBase::getSFDragLocation(void) const
{
    return &_sfDragLocation;
}






/*------------------------------ access -----------------------------------*/

UInt32 DragGestureEventBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DragLocationFieldMask & whichField))
    {
        returnValue += _sfDragLocation.getBinSize();
    }

    return returnValue;
}

void DragGestureEventBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DragLocationFieldMask & whichField))
    {
        _sfDragLocation.copyToBin(pMem);
    }
}

void DragGestureEventBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DragLocationFieldMask & whichField))
    {
        _sfDragLocation.copyFromBin(pMem);
    }
}

//! create a new instance of the class
DragGestureEventTransitPtr DragGestureEventBase::createLocal(BitVector bFlags)
{
    DragGestureEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<DragGestureEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
DragGestureEventTransitPtr DragGestureEventBase::createDependent(BitVector bFlags)
{
    DragGestureEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<DragGestureEvent>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
DragGestureEventTransitPtr DragGestureEventBase::create(void)
{
    DragGestureEventTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<DragGestureEvent>(tmpPtr);
    }

    return fc;
}

DragGestureEvent *DragGestureEventBase::createEmptyLocal(BitVector bFlags)
{
    DragGestureEvent *returnValue;

    newPtr<DragGestureEvent>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
DragGestureEvent *DragGestureEventBase::createEmpty(void)
{
    DragGestureEvent *returnValue;

    newPtr<DragGestureEvent>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr DragGestureEventBase::shallowCopyLocal(
    BitVector bFlags) const
{
    DragGestureEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DragGestureEvent *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr DragGestureEventBase::shallowCopyDependent(
    BitVector bFlags) const
{
    DragGestureEvent *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const DragGestureEvent *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr DragGestureEventBase::shallowCopy(void) const
{
    DragGestureEvent *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const DragGestureEvent *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

DragGestureEventBase::DragGestureEventBase(void) :
    Inherited(),
    _sfDragLocation           (Pnt2f(0.0f,0.0f))
{
}

DragGestureEventBase::DragGestureEventBase(const DragGestureEventBase &source) :
    Inherited(source),
    _sfDragLocation           (source._sfDragLocation           )
{
}


/*-------------------------- destructors ----------------------------------*/

DragGestureEventBase::~DragGestureEventBase(void)
{
}


GetFieldHandlePtr DragGestureEventBase::getHandleDragLocation    (void) const
{
    SFPnt2f::GetHandlePtr returnValue(
        new  SFPnt2f::GetHandle(
             &_sfDragLocation,
             this->getType().getFieldDesc(DragLocationFieldId),
             const_cast<DragGestureEventBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr DragGestureEventBase::editHandleDragLocation   (void)
{
    SFPnt2f::EditHandlePtr returnValue(
        new  SFPnt2f::EditHandle(
             &_sfDragLocation,
             this->getType().getFieldDesc(DragLocationFieldId),
             this));


    editSField(DragLocationFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void DragGestureEventBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    DragGestureEvent *pThis = static_cast<DragGestureEvent *>(this);

    pThis->execSync(static_cast<DragGestureEvent *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *DragGestureEventBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    DragGestureEvent *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const DragGestureEvent *>(pRefAspect),
                  dynamic_cast<const DragGestureEvent *>(this));

    return returnValue;
}
#endif

void DragGestureEventBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE