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
 **     class UIViewport!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEUIVIEWPORTINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGUIViewportBase.h"
#include "OSGUIViewport.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  UIViewportBase::ViewPositionFieldMask = 
    (TypeTraits<BitVector>::One << UIViewportBase::ViewPositionFieldId);

const OSG::BitVector  UIViewportBase::ViewComponentFieldMask = 
    (TypeTraits<BitVector>::One << UIViewportBase::ViewComponentFieldId);

const OSG::BitVector  UIViewportBase::ViewSizeFieldMask = 
    (TypeTraits<BitVector>::One << UIViewportBase::ViewSizeFieldId);

const OSG::BitVector UIViewportBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Pnt2s           UIViewportBase::_sfViewPosition
    
*/
/*! \var ComponentPtr    UIViewportBase::_sfViewComponent
    
*/
/*! \var Vec2s           UIViewportBase::_sfViewSize
    
*/

//! UIViewport description

FieldDescription *UIViewportBase::_desc[] = 
{
    new FieldDescription(SFPnt2s::getClassType(), 
                     "ViewPosition", 
                     ViewPositionFieldId, ViewPositionFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&UIViewportBase::editSFViewPosition)),
    new FieldDescription(SFComponentPtr::getClassType(), 
                     "ViewComponent", 
                     ViewComponentFieldId, ViewComponentFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&UIViewportBase::editSFViewComponent)),
    new FieldDescription(SFVec2s::getClassType(), 
                     "ViewSize", 
                     ViewSizeFieldId, ViewSizeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&UIViewportBase::editSFViewSize))
};


FieldContainerType UIViewportBase::_type(
    "UIViewport",
    "Container",
    NULL,
    reinterpret_cast<PrototypeCreateF>(&UIViewportBase::createEmpty),
    UIViewport::initMethod,
    _desc,
    sizeof(_desc));

//! UIViewport Produced Methods

MethodDescription *UIViewportBase::_methodDesc[] =
{
    new MethodDescription("StateChanged", 
                     StateChangedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod())
};

EventProducerType UIViewportBase::_producerType(
    "UIViewportProducerType",
    "ComponentProducerType",
    NULL,
    InitEventProducerFunctor(),
    _methodDesc,
    sizeof(_methodDesc));
//OSG_FIELD_CONTAINER_DEF(UIViewportBase, UIViewportPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &UIViewportBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &UIViewportBase::getType(void) const 
{
    return _type;
} 

const EventProducerType &UIViewportBase::getProducerType(void) const
{
    return _producerType;
}


FieldContainerPtr UIViewportBase::shallowCopy(void) const 
{ 
    UIViewportPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const UIViewport *>(this)); 

    return returnValue; 
}

UInt32 UIViewportBase::getContainerSize(void) const 
{ 
    return sizeof(UIViewport); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void UIViewportBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<UIViewportBase *>(&other),
                          whichField);
}
#else
void UIViewportBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((UIViewportBase *) &other, whichField, sInfo);
}
void UIViewportBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void UIViewportBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

UIViewportBase::UIViewportBase(void) :
    _sfViewPosition           (Pnt2s(0,0)), 
    _sfViewComponent          (ComponentPtr(NullFC)), 
    _sfViewSize               (Vec2s(-1,-1)), 
    Inherited() 
{
    _Producer.setType(&_producerType);
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

UIViewportBase::UIViewportBase(const UIViewportBase &source) :
    _sfViewPosition           (source._sfViewPosition           ), 
    _sfViewComponent          (source._sfViewComponent          ), 
    _sfViewSize               (source._sfViewSize               ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

UIViewportBase::~UIViewportBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 UIViewportBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ViewPositionFieldMask & whichField))
    {
        returnValue += _sfViewPosition.getBinSize();
    }

    if(FieldBits::NoField != (ViewComponentFieldMask & whichField))
    {
        returnValue += _sfViewComponent.getBinSize();
    }

    if(FieldBits::NoField != (ViewSizeFieldMask & whichField))
    {
        returnValue += _sfViewSize.getBinSize();
    }


    return returnValue;
}

void UIViewportBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ViewPositionFieldMask & whichField))
    {
        _sfViewPosition.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ViewComponentFieldMask & whichField))
    {
        _sfViewComponent.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ViewSizeFieldMask & whichField))
    {
        _sfViewSize.copyToBin(pMem);
    }


}

void UIViewportBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ViewPositionFieldMask & whichField))
    {
        _sfViewPosition.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ViewComponentFieldMask & whichField))
    {
        _sfViewComponent.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ViewSizeFieldMask & whichField))
    {
        _sfViewSize.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void UIViewportBase::executeSyncImpl(      UIViewportBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ViewPositionFieldMask & whichField))
        _sfViewPosition.syncWith(pOther->_sfViewPosition);

    if(FieldBits::NoField != (ViewComponentFieldMask & whichField))
        _sfViewComponent.syncWith(pOther->_sfViewComponent);

    if(FieldBits::NoField != (ViewSizeFieldMask & whichField))
        _sfViewSize.syncWith(pOther->_sfViewSize);


}
#else
void UIViewportBase::executeSyncImpl(      UIViewportBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ViewPositionFieldMask & whichField))
        _sfViewPosition.syncWith(pOther->_sfViewPosition);

    if(FieldBits::NoField != (ViewComponentFieldMask & whichField))
        _sfViewComponent.syncWith(pOther->_sfViewComponent);

    if(FieldBits::NoField != (ViewSizeFieldMask & whichField))
        _sfViewSize.syncWith(pOther->_sfViewSize);



}

void UIViewportBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<UIViewportPtr>::_type("UIViewportPtr", "ContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(UIViewportPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(UIViewportPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

