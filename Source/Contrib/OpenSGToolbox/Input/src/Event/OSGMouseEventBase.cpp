/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
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
 **     class MouseEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEMOUSEEVENTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGMouseEventBase.h"
#include "OSGMouseEvent.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  MouseEventBase::ButtonFieldMask = 
    (TypeTraits<BitVector>::One << MouseEventBase::ButtonFieldId);

const OSG::BitVector  MouseEventBase::ClickCountFieldMask = 
    (TypeTraits<BitVector>::One << MouseEventBase::ClickCountFieldId);

const OSG::BitVector  MouseEventBase::LocationFieldMask = 
    (TypeTraits<BitVector>::One << MouseEventBase::LocationFieldId);

const OSG::BitVector  MouseEventBase::DeltaFieldMask = 
    (TypeTraits<BitVector>::One << MouseEventBase::DeltaFieldId);

const OSG::BitVector  MouseEventBase::ViewportFieldMask = 
    (TypeTraits<BitVector>::One << MouseEventBase::ViewportFieldId);

const OSG::BitVector MouseEventBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var UInt16          MouseEventBase::_sfButton
    
*/
/*! \var UInt16          MouseEventBase::_sfClickCount
    
*/
/*! \var Pnt2f           MouseEventBase::_sfLocation
    
*/
/*! \var Vec2f           MouseEventBase::_sfDelta
    
*/
/*! \var ViewportPtr     MouseEventBase::_sfViewport
    
*/

//! MouseEvent description

FieldDescription *MouseEventBase::_desc[] = 
{
    new FieldDescription(SFUInt16::getClassType(), 
                     "Button", 
                     ButtonFieldId, ButtonFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&MouseEventBase::editSFButton)),
    new FieldDescription(SFUInt16::getClassType(), 
                     "ClickCount", 
                     ClickCountFieldId, ClickCountFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&MouseEventBase::editSFClickCount)),
    new FieldDescription(SFPnt2f::getClassType(), 
                     "Location", 
                     LocationFieldId, LocationFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&MouseEventBase::editSFLocation)),
    new FieldDescription(SFVec2f::getClassType(), 
                     "Delta", 
                     DeltaFieldId, DeltaFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&MouseEventBase::editSFDelta)),
    new FieldDescription(SFViewportPtr::getClassType(), 
                     "Viewport", 
                     ViewportFieldId, ViewportFieldMask,
                     true,
                     reinterpret_cast<FieldAccessMethod>(&MouseEventBase::editSFViewport))
};


FieldContainerType MouseEventBase::_type(
    "MouseEvent",
    "InputEvent",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&MouseEventBase::createEmpty),
    MouseEvent::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(MouseEventBase, MouseEventPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &MouseEventBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &MouseEventBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr MouseEventBase::shallowCopy(void) const 
{ 
    MouseEventPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const MouseEvent *>(this)); 

    return returnValue; 
}

UInt32 MouseEventBase::getContainerSize(void) const 
{ 
    return sizeof(MouseEvent); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void MouseEventBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<MouseEventBase *>(&other),
                          whichField);
}
#else
void MouseEventBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((MouseEventBase *) &other, whichField, sInfo);
}
void MouseEventBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void MouseEventBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

MouseEventBase::MouseEventBase(void) :
    _sfButton                 (UInt16(MouseEvent::NO_BUTTON)), 
    _sfClickCount             (UInt16(0)), 
    _sfLocation               (Pnt2f(0.0f, 0.0f)), 
    _sfDelta                  (Vec2f(0.0f, 0.0f)), 
    _sfViewport               (ViewportPtr(NullFC)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

MouseEventBase::MouseEventBase(const MouseEventBase &source) :
    _sfButton                 (source._sfButton                 ), 
    _sfClickCount             (source._sfClickCount             ), 
    _sfLocation               (source._sfLocation               ), 
    _sfDelta                  (source._sfDelta                  ), 
    _sfViewport               (source._sfViewport               ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

MouseEventBase::~MouseEventBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 MouseEventBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ButtonFieldMask & whichField))
    {
        returnValue += _sfButton.getBinSize();
    }

    if(FieldBits::NoField != (ClickCountFieldMask & whichField))
    {
        returnValue += _sfClickCount.getBinSize();
    }

    if(FieldBits::NoField != (LocationFieldMask & whichField))
    {
        returnValue += _sfLocation.getBinSize();
    }

    if(FieldBits::NoField != (DeltaFieldMask & whichField))
    {
        returnValue += _sfDelta.getBinSize();
    }

    if(FieldBits::NoField != (ViewportFieldMask & whichField))
    {
        returnValue += _sfViewport.getBinSize();
    }


    return returnValue;
}

void MouseEventBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ButtonFieldMask & whichField))
    {
        _sfButton.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ClickCountFieldMask & whichField))
    {
        _sfClickCount.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LocationFieldMask & whichField))
    {
        _sfLocation.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DeltaFieldMask & whichField))
    {
        _sfDelta.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ViewportFieldMask & whichField))
    {
        _sfViewport.copyToBin(pMem);
    }


}

void MouseEventBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ButtonFieldMask & whichField))
    {
        _sfButton.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ClickCountFieldMask & whichField))
    {
        _sfClickCount.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LocationFieldMask & whichField))
    {
        _sfLocation.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DeltaFieldMask & whichField))
    {
        _sfDelta.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ViewportFieldMask & whichField))
    {
        _sfViewport.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void MouseEventBase::executeSyncImpl(      MouseEventBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ButtonFieldMask & whichField))
        _sfButton.syncWith(pOther->_sfButton);

    if(FieldBits::NoField != (ClickCountFieldMask & whichField))
        _sfClickCount.syncWith(pOther->_sfClickCount);

    if(FieldBits::NoField != (LocationFieldMask & whichField))
        _sfLocation.syncWith(pOther->_sfLocation);

    if(FieldBits::NoField != (DeltaFieldMask & whichField))
        _sfDelta.syncWith(pOther->_sfDelta);

    if(FieldBits::NoField != (ViewportFieldMask & whichField))
        _sfViewport.syncWith(pOther->_sfViewport);


}
#else
void MouseEventBase::executeSyncImpl(      MouseEventBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ButtonFieldMask & whichField))
        _sfButton.syncWith(pOther->_sfButton);

    if(FieldBits::NoField != (ClickCountFieldMask & whichField))
        _sfClickCount.syncWith(pOther->_sfClickCount);

    if(FieldBits::NoField != (LocationFieldMask & whichField))
        _sfLocation.syncWith(pOther->_sfLocation);

    if(FieldBits::NoField != (DeltaFieldMask & whichField))
        _sfDelta.syncWith(pOther->_sfDelta);

    if(FieldBits::NoField != (ViewportFieldMask & whichField))
        _sfViewport.syncWith(pOther->_sfViewport);



}

void MouseEventBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<MouseEventPtr>::_type("MouseEventPtr", "InputEventPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(MouseEventPtr, OSG_INPUTLIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE
