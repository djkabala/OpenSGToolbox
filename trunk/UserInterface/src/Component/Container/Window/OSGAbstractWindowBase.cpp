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
 **     class AbstractWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEABSTRACTWINDOWINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGAbstractWindowBase.h"
#include "OSGAbstractWindow.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  AbstractWindowBase::DrawingSurfaceFieldMask = 
    (TypeTraits<BitVector>::One << AbstractWindowBase::DrawingSurfaceFieldId);

const OSG::BitVector  AbstractWindowBase::ClosableFieldMask = 
    (TypeTraits<BitVector>::One << AbstractWindowBase::ClosableFieldId);

const OSG::BitVector  AbstractWindowBase::IsClosedFieldMask = 
    (TypeTraits<BitVector>::One << AbstractWindowBase::IsClosedFieldId);

const OSG::BitVector  AbstractWindowBase::IconableFieldMask = 
    (TypeTraits<BitVector>::One << AbstractWindowBase::IconableFieldId);

const OSG::BitVector  AbstractWindowBase::IsIconFieldMask = 
    (TypeTraits<BitVector>::One << AbstractWindowBase::IsIconFieldId);

const OSG::BitVector  AbstractWindowBase::MaximizableFieldMask = 
    (TypeTraits<BitVector>::One << AbstractWindowBase::MaximizableFieldId);

const OSG::BitVector  AbstractWindowBase::IsMaximizedFieldMask = 
    (TypeTraits<BitVector>::One << AbstractWindowBase::IsMaximizedFieldId);

const OSG::BitVector  AbstractWindowBase::PreviousPositionFieldMask = 
    (TypeTraits<BitVector>::One << AbstractWindowBase::PreviousPositionFieldId);

const OSG::BitVector  AbstractWindowBase::PreviousSizeFieldMask = 
    (TypeTraits<BitVector>::One << AbstractWindowBase::PreviousSizeFieldId);

const OSG::BitVector  AbstractWindowBase::ResizableFieldMask = 
    (TypeTraits<BitVector>::One << AbstractWindowBase::ResizableFieldId);

const OSG::BitVector  AbstractWindowBase::IsSelectedFieldMask = 
    (TypeTraits<BitVector>::One << AbstractWindowBase::IsSelectedFieldId);

const OSG::BitVector  AbstractWindowBase::TitleFieldMask = 
    (TypeTraits<BitVector>::One << AbstractWindowBase::TitleFieldId);

const OSG::BitVector  AbstractWindowBase::DesktopIconFieldMask = 
    (TypeTraits<BitVector>::One << AbstractWindowBase::DesktopIconFieldId);

const OSG::BitVector  AbstractWindowBase::AllwaysOnTopFieldMask = 
    (TypeTraits<BitVector>::One << AbstractWindowBase::AllwaysOnTopFieldId);

const OSG::BitVector  AbstractWindowBase::DrawTitlebarFieldMask = 
    (TypeTraits<BitVector>::One << AbstractWindowBase::DrawTitlebarFieldId);

const OSG::BitVector  AbstractWindowBase::DrawDecorationsFieldMask = 
    (TypeTraits<BitVector>::One << AbstractWindowBase::DrawDecorationsFieldId);

const OSG::BitVector  AbstractWindowBase::LockInputFieldMask = 
    (TypeTraits<BitVector>::One << AbstractWindowBase::LockInputFieldId);

const OSG::BitVector  AbstractWindowBase::AlignmentInDrawingSurfaceFieldMask = 
    (TypeTraits<BitVector>::One << AbstractWindowBase::AlignmentInDrawingSurfaceFieldId);

const OSG::BitVector  AbstractWindowBase::ScalingInDrawingSurfaceFieldMask = 
    (TypeTraits<BitVector>::One << AbstractWindowBase::ScalingInDrawingSurfaceFieldId);

const OSG::BitVector  AbstractWindowBase::ResizeModifyCursorWidthFieldMask = 
    (TypeTraits<BitVector>::One << AbstractWindowBase::ResizeModifyCursorWidthFieldId);

const OSG::BitVector AbstractWindowBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var UIDrawingSurfacePtr AbstractWindowBase::_sfDrawingSurface
    
*/
/*! \var bool            AbstractWindowBase::_sfClosable
    
*/
/*! \var bool            AbstractWindowBase::_sfIsClosed
    
*/
/*! \var bool            AbstractWindowBase::_sfIconable
    
*/
/*! \var bool            AbstractWindowBase::_sfIsIcon
    
*/
/*! \var bool            AbstractWindowBase::_sfMaximizable
    
*/
/*! \var bool            AbstractWindowBase::_sfIsMaximized
    
*/
/*! \var Pnt2f           AbstractWindowBase::_sfPreviousPosition
    
*/
/*! \var Vec2f           AbstractWindowBase::_sfPreviousSize
    
*/
/*! \var bool            AbstractWindowBase::_sfResizable
    
*/
/*! \var bool            AbstractWindowBase::_sfIsSelected
    
*/
/*! \var std::string     AbstractWindowBase::_sfTitle
    
*/
/*! \var UIDrawObjectCanvasPtr AbstractWindowBase::_sfDesktopIcon
    
*/
/*! \var bool            AbstractWindowBase::_sfAllwaysOnTop
    
*/
/*! \var bool            AbstractWindowBase::_sfDrawTitlebar
    
*/
/*! \var bool            AbstractWindowBase::_sfDrawDecorations
    
*/
/*! \var bool            AbstractWindowBase::_sfLockInput
    
*/
/*! \var Vec2f           AbstractWindowBase::_sfAlignmentInDrawingSurface
    
*/
/*! \var Vec2f           AbstractWindowBase::_sfScalingInDrawingSurface
    
*/
/*! \var UInt32          AbstractWindowBase::_sfResizeModifyCursorWidth
    
*/

//! AbstractWindow description

FieldDescription *AbstractWindowBase::_desc[] = 
{
    new FieldDescription(SFUIDrawingSurfacePtr::getClassType(), 
                     "DrawingSurface", 
                     DrawingSurfaceFieldId, DrawingSurfaceFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractWindowBase::editSFDrawingSurface)),
    new FieldDescription(SFBool::getClassType(), 
                     "Closable", 
                     ClosableFieldId, ClosableFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractWindowBase::editSFClosable)),
    new FieldDescription(SFBool::getClassType(), 
                     "IsClosed", 
                     IsClosedFieldId, IsClosedFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractWindowBase::editSFIsClosed)),
    new FieldDescription(SFBool::getClassType(), 
                     "Iconable", 
                     IconableFieldId, IconableFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractWindowBase::editSFIconable)),
    new FieldDescription(SFBool::getClassType(), 
                     "IsIcon", 
                     IsIconFieldId, IsIconFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractWindowBase::editSFIsIcon)),
    new FieldDescription(SFBool::getClassType(), 
                     "Maximizable", 
                     MaximizableFieldId, MaximizableFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractWindowBase::editSFMaximizable)),
    new FieldDescription(SFBool::getClassType(), 
                     "IsMaximized", 
                     IsMaximizedFieldId, IsMaximizedFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractWindowBase::editSFIsMaximized)),
    new FieldDescription(SFPnt2f::getClassType(), 
                     "PreviousPosition", 
                     PreviousPositionFieldId, PreviousPositionFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractWindowBase::editSFPreviousPosition)),
    new FieldDescription(SFVec2f::getClassType(), 
                     "PreviousSize", 
                     PreviousSizeFieldId, PreviousSizeFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractWindowBase::editSFPreviousSize)),
    new FieldDescription(SFBool::getClassType(), 
                     "Resizable", 
                     ResizableFieldId, ResizableFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractWindowBase::editSFResizable)),
    new FieldDescription(SFBool::getClassType(), 
                     "IsSelected", 
                     IsSelectedFieldId, IsSelectedFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractWindowBase::editSFIsSelected)),
    new FieldDescription(SFString::getClassType(), 
                     "Title", 
                     TitleFieldId, TitleFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractWindowBase::editSFTitle)),
    new FieldDescription(SFUIDrawObjectCanvasPtr::getClassType(), 
                     "DesktopIcon", 
                     DesktopIconFieldId, DesktopIconFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractWindowBase::editSFDesktopIcon)),
    new FieldDescription(SFBool::getClassType(), 
                     "AllwaysOnTop", 
                     AllwaysOnTopFieldId, AllwaysOnTopFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractWindowBase::editSFAllwaysOnTop)),
    new FieldDescription(SFBool::getClassType(), 
                     "DrawTitlebar", 
                     DrawTitlebarFieldId, DrawTitlebarFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractWindowBase::editSFDrawTitlebar)),
    new FieldDescription(SFBool::getClassType(), 
                     "DrawDecorations", 
                     DrawDecorationsFieldId, DrawDecorationsFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractWindowBase::editSFDrawDecorations)),
    new FieldDescription(SFBool::getClassType(), 
                     "LockInput", 
                     LockInputFieldId, LockInputFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractWindowBase::editSFLockInput)),
    new FieldDescription(SFVec2f::getClassType(), 
                     "AlignmentInDrawingSurface", 
                     AlignmentInDrawingSurfaceFieldId, AlignmentInDrawingSurfaceFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractWindowBase::editSFAlignmentInDrawingSurface)),
    new FieldDescription(SFVec2f::getClassType(), 
                     "ScalingInDrawingSurface", 
                     ScalingInDrawingSurfaceFieldId, ScalingInDrawingSurfaceFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractWindowBase::editSFScalingInDrawingSurface)),
    new FieldDescription(SFUInt32::getClassType(), 
                     "ResizeModifyCursorWidth", 
                     ResizeModifyCursorWidthFieldId, ResizeModifyCursorWidthFieldMask,
                     false,
                     reinterpret_cast<FieldAccessMethod>(&AbstractWindowBase::editSFResizeModifyCursorWidth))
};


FieldContainerType AbstractWindowBase::_type(
    "AbstractWindow",
    "Container",
    NULL,
    NULL, 
    AbstractWindow::initMethod,
    _desc,
    sizeof(_desc));

//! AbstractWindow Produced Methods

MethodDescription *AbstractWindowBase::_methodDesc[] =
{
    new MethodDescription("WindowOpened", 
                     WindowOpenedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("WindowClosing", 
                     WindowClosingMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("WindowClosed", 
                     WindowClosedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("WindowIconified", 
                     WindowIconifiedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("WindowDeiconified", 
                     WindowDeiconifiedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("WindowActivated", 
                     WindowActivatedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("WindowDeactivated", 
                     WindowDeactivatedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("WindowEntered", 
                     WindowEnteredMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("WindowExited", 
                     WindowExitedMethodId, 
                     SFEventPtr::getClassType(),
                     FunctorAccessMethod())
};

EventProducerType AbstractWindowBase::_producerType(
    "AbstractWindowProducerType",
    "ComponentProducerType",
    NULL,
    InitEventProducerFunctor(),
    _methodDesc,
    sizeof(_methodDesc));
//OSG_FIELD_CONTAINER_DEF(AbstractWindowBase, AbstractWindowPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &AbstractWindowBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &AbstractWindowBase::getType(void) const 
{
    return _type;
} 

const EventProducerType &AbstractWindowBase::getProducerType(void) const
{
    return _producerType;
}


UInt32 AbstractWindowBase::getContainerSize(void) const 
{ 
    return sizeof(AbstractWindow); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void AbstractWindowBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl(static_cast<AbstractWindowBase *>(&other),
                          whichField);
}
#else
void AbstractWindowBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((AbstractWindowBase *) &other, whichField, sInfo);
}
void AbstractWindowBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void AbstractWindowBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

AbstractWindowBase::AbstractWindowBase(void) :
    _sfDrawingSurface         (UIDrawingSurfacePtr(NullFC)), 
    _sfClosable               (bool(true)), 
    _sfIsClosed               (bool(true)), 
    _sfIconable               (bool(true)), 
    _sfIsIcon                 (bool(false)), 
    _sfMaximizable            (bool(true)), 
    _sfIsMaximized            (bool(false)), 
    _sfPreviousPosition       (Pnt2f(0,0)), 
    _sfPreviousSize           (Vec2f(0,0)), 
    _sfResizable              (bool(true)), 
    _sfIsSelected             (bool(false)), 
    _sfTitle                  (), 
    _sfDesktopIcon            (UIDrawObjectCanvasPtr(NullFC)), 
    _sfAllwaysOnTop           (bool(false)), 
    _sfDrawTitlebar           (bool(false)), 
    _sfDrawDecorations        (bool(true)), 
    _sfLockInput              (bool(false)), 
    _sfAlignmentInDrawingSurface(Vec2f(-1.0,-1.0)), 
    _sfScalingInDrawingSurface(Vec2f(-1.0,-1.0)), 
    _sfResizeModifyCursorWidth(UInt32(3)), 
    Inherited() 
{
    _Producer.setType(&_producerType);
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

AbstractWindowBase::AbstractWindowBase(const AbstractWindowBase &source) :
    _sfDrawingSurface         (source._sfDrawingSurface         ), 
    _sfClosable               (source._sfClosable               ), 
    _sfIsClosed               (source._sfIsClosed               ), 
    _sfIconable               (source._sfIconable               ), 
    _sfIsIcon                 (source._sfIsIcon                 ), 
    _sfMaximizable            (source._sfMaximizable            ), 
    _sfIsMaximized            (source._sfIsMaximized            ), 
    _sfPreviousPosition       (source._sfPreviousPosition       ), 
    _sfPreviousSize           (source._sfPreviousSize           ), 
    _sfResizable              (source._sfResizable              ), 
    _sfIsSelected             (source._sfIsSelected             ), 
    _sfTitle                  (source._sfTitle                  ), 
    _sfDesktopIcon            (source._sfDesktopIcon            ), 
    _sfAllwaysOnTop           (source._sfAllwaysOnTop           ), 
    _sfDrawTitlebar           (source._sfDrawTitlebar           ), 
    _sfDrawDecorations        (source._sfDrawDecorations        ), 
    _sfLockInput              (source._sfLockInput              ), 
    _sfAlignmentInDrawingSurface(source._sfAlignmentInDrawingSurface), 
    _sfScalingInDrawingSurface(source._sfScalingInDrawingSurface), 
    _sfResizeModifyCursorWidth(source._sfResizeModifyCursorWidth), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

AbstractWindowBase::~AbstractWindowBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 AbstractWindowBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DrawingSurfaceFieldMask & whichField))
    {
        returnValue += _sfDrawingSurface.getBinSize();
    }

    if(FieldBits::NoField != (ClosableFieldMask & whichField))
    {
        returnValue += _sfClosable.getBinSize();
    }

    if(FieldBits::NoField != (IsClosedFieldMask & whichField))
    {
        returnValue += _sfIsClosed.getBinSize();
    }

    if(FieldBits::NoField != (IconableFieldMask & whichField))
    {
        returnValue += _sfIconable.getBinSize();
    }

    if(FieldBits::NoField != (IsIconFieldMask & whichField))
    {
        returnValue += _sfIsIcon.getBinSize();
    }

    if(FieldBits::NoField != (MaximizableFieldMask & whichField))
    {
        returnValue += _sfMaximizable.getBinSize();
    }

    if(FieldBits::NoField != (IsMaximizedFieldMask & whichField))
    {
        returnValue += _sfIsMaximized.getBinSize();
    }

    if(FieldBits::NoField != (PreviousPositionFieldMask & whichField))
    {
        returnValue += _sfPreviousPosition.getBinSize();
    }

    if(FieldBits::NoField != (PreviousSizeFieldMask & whichField))
    {
        returnValue += _sfPreviousSize.getBinSize();
    }

    if(FieldBits::NoField != (ResizableFieldMask & whichField))
    {
        returnValue += _sfResizable.getBinSize();
    }

    if(FieldBits::NoField != (IsSelectedFieldMask & whichField))
    {
        returnValue += _sfIsSelected.getBinSize();
    }

    if(FieldBits::NoField != (TitleFieldMask & whichField))
    {
        returnValue += _sfTitle.getBinSize();
    }

    if(FieldBits::NoField != (DesktopIconFieldMask & whichField))
    {
        returnValue += _sfDesktopIcon.getBinSize();
    }

    if(FieldBits::NoField != (AllwaysOnTopFieldMask & whichField))
    {
        returnValue += _sfAllwaysOnTop.getBinSize();
    }

    if(FieldBits::NoField != (DrawTitlebarFieldMask & whichField))
    {
        returnValue += _sfDrawTitlebar.getBinSize();
    }

    if(FieldBits::NoField != (DrawDecorationsFieldMask & whichField))
    {
        returnValue += _sfDrawDecorations.getBinSize();
    }

    if(FieldBits::NoField != (LockInputFieldMask & whichField))
    {
        returnValue += _sfLockInput.getBinSize();
    }

    if(FieldBits::NoField != (AlignmentInDrawingSurfaceFieldMask & whichField))
    {
        returnValue += _sfAlignmentInDrawingSurface.getBinSize();
    }

    if(FieldBits::NoField != (ScalingInDrawingSurfaceFieldMask & whichField))
    {
        returnValue += _sfScalingInDrawingSurface.getBinSize();
    }

    if(FieldBits::NoField != (ResizeModifyCursorWidthFieldMask & whichField))
    {
        returnValue += _sfResizeModifyCursorWidth.getBinSize();
    }


    return returnValue;
}

void AbstractWindowBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DrawingSurfaceFieldMask & whichField))
    {
        _sfDrawingSurface.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ClosableFieldMask & whichField))
    {
        _sfClosable.copyToBin(pMem);
    }

    if(FieldBits::NoField != (IsClosedFieldMask & whichField))
    {
        _sfIsClosed.copyToBin(pMem);
    }

    if(FieldBits::NoField != (IconableFieldMask & whichField))
    {
        _sfIconable.copyToBin(pMem);
    }

    if(FieldBits::NoField != (IsIconFieldMask & whichField))
    {
        _sfIsIcon.copyToBin(pMem);
    }

    if(FieldBits::NoField != (MaximizableFieldMask & whichField))
    {
        _sfMaximizable.copyToBin(pMem);
    }

    if(FieldBits::NoField != (IsMaximizedFieldMask & whichField))
    {
        _sfIsMaximized.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PreviousPositionFieldMask & whichField))
    {
        _sfPreviousPosition.copyToBin(pMem);
    }

    if(FieldBits::NoField != (PreviousSizeFieldMask & whichField))
    {
        _sfPreviousSize.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ResizableFieldMask & whichField))
    {
        _sfResizable.copyToBin(pMem);
    }

    if(FieldBits::NoField != (IsSelectedFieldMask & whichField))
    {
        _sfIsSelected.copyToBin(pMem);
    }

    if(FieldBits::NoField != (TitleFieldMask & whichField))
    {
        _sfTitle.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DesktopIconFieldMask & whichField))
    {
        _sfDesktopIcon.copyToBin(pMem);
    }

    if(FieldBits::NoField != (AllwaysOnTopFieldMask & whichField))
    {
        _sfAllwaysOnTop.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DrawTitlebarFieldMask & whichField))
    {
        _sfDrawTitlebar.copyToBin(pMem);
    }

    if(FieldBits::NoField != (DrawDecorationsFieldMask & whichField))
    {
        _sfDrawDecorations.copyToBin(pMem);
    }

    if(FieldBits::NoField != (LockInputFieldMask & whichField))
    {
        _sfLockInput.copyToBin(pMem);
    }

    if(FieldBits::NoField != (AlignmentInDrawingSurfaceFieldMask & whichField))
    {
        _sfAlignmentInDrawingSurface.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ScalingInDrawingSurfaceFieldMask & whichField))
    {
        _sfScalingInDrawingSurface.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ResizeModifyCursorWidthFieldMask & whichField))
    {
        _sfResizeModifyCursorWidth.copyToBin(pMem);
    }


}

void AbstractWindowBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DrawingSurfaceFieldMask & whichField))
    {
        _sfDrawingSurface.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ClosableFieldMask & whichField))
    {
        _sfClosable.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (IsClosedFieldMask & whichField))
    {
        _sfIsClosed.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (IconableFieldMask & whichField))
    {
        _sfIconable.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (IsIconFieldMask & whichField))
    {
        _sfIsIcon.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (MaximizableFieldMask & whichField))
    {
        _sfMaximizable.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (IsMaximizedFieldMask & whichField))
    {
        _sfIsMaximized.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PreviousPositionFieldMask & whichField))
    {
        _sfPreviousPosition.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (PreviousSizeFieldMask & whichField))
    {
        _sfPreviousSize.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ResizableFieldMask & whichField))
    {
        _sfResizable.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (IsSelectedFieldMask & whichField))
    {
        _sfIsSelected.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (TitleFieldMask & whichField))
    {
        _sfTitle.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DesktopIconFieldMask & whichField))
    {
        _sfDesktopIcon.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (AllwaysOnTopFieldMask & whichField))
    {
        _sfAllwaysOnTop.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DrawTitlebarFieldMask & whichField))
    {
        _sfDrawTitlebar.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (DrawDecorationsFieldMask & whichField))
    {
        _sfDrawDecorations.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (LockInputFieldMask & whichField))
    {
        _sfLockInput.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (AlignmentInDrawingSurfaceFieldMask & whichField))
    {
        _sfAlignmentInDrawingSurface.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ScalingInDrawingSurfaceFieldMask & whichField))
    {
        _sfScalingInDrawingSurface.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ResizeModifyCursorWidthFieldMask & whichField))
    {
        _sfResizeModifyCursorWidth.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void AbstractWindowBase::executeSyncImpl(      AbstractWindowBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (DrawingSurfaceFieldMask & whichField))
        _sfDrawingSurface.syncWith(pOther->_sfDrawingSurface);

    if(FieldBits::NoField != (ClosableFieldMask & whichField))
        _sfClosable.syncWith(pOther->_sfClosable);

    if(FieldBits::NoField != (IsClosedFieldMask & whichField))
        _sfIsClosed.syncWith(pOther->_sfIsClosed);

    if(FieldBits::NoField != (IconableFieldMask & whichField))
        _sfIconable.syncWith(pOther->_sfIconable);

    if(FieldBits::NoField != (IsIconFieldMask & whichField))
        _sfIsIcon.syncWith(pOther->_sfIsIcon);

    if(FieldBits::NoField != (MaximizableFieldMask & whichField))
        _sfMaximizable.syncWith(pOther->_sfMaximizable);

    if(FieldBits::NoField != (IsMaximizedFieldMask & whichField))
        _sfIsMaximized.syncWith(pOther->_sfIsMaximized);

    if(FieldBits::NoField != (PreviousPositionFieldMask & whichField))
        _sfPreviousPosition.syncWith(pOther->_sfPreviousPosition);

    if(FieldBits::NoField != (PreviousSizeFieldMask & whichField))
        _sfPreviousSize.syncWith(pOther->_sfPreviousSize);

    if(FieldBits::NoField != (ResizableFieldMask & whichField))
        _sfResizable.syncWith(pOther->_sfResizable);

    if(FieldBits::NoField != (IsSelectedFieldMask & whichField))
        _sfIsSelected.syncWith(pOther->_sfIsSelected);

    if(FieldBits::NoField != (TitleFieldMask & whichField))
        _sfTitle.syncWith(pOther->_sfTitle);

    if(FieldBits::NoField != (DesktopIconFieldMask & whichField))
        _sfDesktopIcon.syncWith(pOther->_sfDesktopIcon);

    if(FieldBits::NoField != (AllwaysOnTopFieldMask & whichField))
        _sfAllwaysOnTop.syncWith(pOther->_sfAllwaysOnTop);

    if(FieldBits::NoField != (DrawTitlebarFieldMask & whichField))
        _sfDrawTitlebar.syncWith(pOther->_sfDrawTitlebar);

    if(FieldBits::NoField != (DrawDecorationsFieldMask & whichField))
        _sfDrawDecorations.syncWith(pOther->_sfDrawDecorations);

    if(FieldBits::NoField != (LockInputFieldMask & whichField))
        _sfLockInput.syncWith(pOther->_sfLockInput);

    if(FieldBits::NoField != (AlignmentInDrawingSurfaceFieldMask & whichField))
        _sfAlignmentInDrawingSurface.syncWith(pOther->_sfAlignmentInDrawingSurface);

    if(FieldBits::NoField != (ScalingInDrawingSurfaceFieldMask & whichField))
        _sfScalingInDrawingSurface.syncWith(pOther->_sfScalingInDrawingSurface);

    if(FieldBits::NoField != (ResizeModifyCursorWidthFieldMask & whichField))
        _sfResizeModifyCursorWidth.syncWith(pOther->_sfResizeModifyCursorWidth);


}
#else
void AbstractWindowBase::executeSyncImpl(      AbstractWindowBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (DrawingSurfaceFieldMask & whichField))
        _sfDrawingSurface.syncWith(pOther->_sfDrawingSurface);

    if(FieldBits::NoField != (ClosableFieldMask & whichField))
        _sfClosable.syncWith(pOther->_sfClosable);

    if(FieldBits::NoField != (IsClosedFieldMask & whichField))
        _sfIsClosed.syncWith(pOther->_sfIsClosed);

    if(FieldBits::NoField != (IconableFieldMask & whichField))
        _sfIconable.syncWith(pOther->_sfIconable);

    if(FieldBits::NoField != (IsIconFieldMask & whichField))
        _sfIsIcon.syncWith(pOther->_sfIsIcon);

    if(FieldBits::NoField != (MaximizableFieldMask & whichField))
        _sfMaximizable.syncWith(pOther->_sfMaximizable);

    if(FieldBits::NoField != (IsMaximizedFieldMask & whichField))
        _sfIsMaximized.syncWith(pOther->_sfIsMaximized);

    if(FieldBits::NoField != (PreviousPositionFieldMask & whichField))
        _sfPreviousPosition.syncWith(pOther->_sfPreviousPosition);

    if(FieldBits::NoField != (PreviousSizeFieldMask & whichField))
        _sfPreviousSize.syncWith(pOther->_sfPreviousSize);

    if(FieldBits::NoField != (ResizableFieldMask & whichField))
        _sfResizable.syncWith(pOther->_sfResizable);

    if(FieldBits::NoField != (IsSelectedFieldMask & whichField))
        _sfIsSelected.syncWith(pOther->_sfIsSelected);

    if(FieldBits::NoField != (TitleFieldMask & whichField))
        _sfTitle.syncWith(pOther->_sfTitle);

    if(FieldBits::NoField != (DesktopIconFieldMask & whichField))
        _sfDesktopIcon.syncWith(pOther->_sfDesktopIcon);

    if(FieldBits::NoField != (AllwaysOnTopFieldMask & whichField))
        _sfAllwaysOnTop.syncWith(pOther->_sfAllwaysOnTop);

    if(FieldBits::NoField != (DrawTitlebarFieldMask & whichField))
        _sfDrawTitlebar.syncWith(pOther->_sfDrawTitlebar);

    if(FieldBits::NoField != (DrawDecorationsFieldMask & whichField))
        _sfDrawDecorations.syncWith(pOther->_sfDrawDecorations);

    if(FieldBits::NoField != (LockInputFieldMask & whichField))
        _sfLockInput.syncWith(pOther->_sfLockInput);

    if(FieldBits::NoField != (AlignmentInDrawingSurfaceFieldMask & whichField))
        _sfAlignmentInDrawingSurface.syncWith(pOther->_sfAlignmentInDrawingSurface);

    if(FieldBits::NoField != (ScalingInDrawingSurfaceFieldMask & whichField))
        _sfScalingInDrawingSurface.syncWith(pOther->_sfScalingInDrawingSurface);

    if(FieldBits::NoField != (ResizeModifyCursorWidthFieldMask & whichField))
        _sfResizeModifyCursorWidth.syncWith(pOther->_sfResizeModifyCursorWidth);



}

void AbstractWindowBase::execBeginEditImpl (const BitVector &whichField, 
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
DataType FieldDataTraits<AbstractWindowPtr>::_type("AbstractWindowPtr", "ContainerPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(AbstractWindowPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(AbstractWindowPtr, OSG_USERINTERFACELIB_DLLTMPLMAPPING);


OSG_END_NAMESPACE

