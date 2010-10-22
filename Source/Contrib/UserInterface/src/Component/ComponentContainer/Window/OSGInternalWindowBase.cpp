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
 **     class InternalWindow!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"

#include "OSGInternalWindowBase.h"
#include "OSGInternalWindow.h"

#include "OSGComponent.h"               // FocusedComponent Class
#include "OSGPopupMenu.h"               // ActivePopupMenus Class
#include "OSGToolTip.h"                 // ActiveToolTip Class
#include "OSGMenuBar.h"                 // MenuBar Class
#include "OSGTitlebar.h"                // Titlebar Class

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::InternalWindow
    A UI Internal Window.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Component *     InternalWindowBase::_sfFocusedComponent
    
*/

/*! \var PopupMenu *     InternalWindowBase::_mfActivePopupMenus
    
*/

/*! \var ToolTip *       InternalWindowBase::_sfActiveToolTip
    
*/

/*! \var MenuBar *       InternalWindowBase::_sfMenuBar
    
*/

/*! \var Titlebar *      InternalWindowBase::_sfTitlebar
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<InternalWindow *>::_type("InternalWindowPtr", "AbstractWindowPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(InternalWindow *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           InternalWindow *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           InternalWindow *,
                           0);

DataType &FieldTraits< InternalWindow *, 1 >::getType(void)
{
    return FieldTraits<InternalWindow *, 0>::getType();
}


OSG_EXPORT_PTR_MFIELD(ChildPointerMField,
                      InternalWindow *,
                      UnrecordedRefCountPolicy,
                      1);


/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void InternalWindowBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecComponentPtr::Description(
        SFUnrecComponentPtr::getClassType(),
        "FocusedComponent",
        "",
        FocusedComponentFieldId, FocusedComponentFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&InternalWindow::editHandleFocusedComponent),
        static_cast<FieldGetMethodSig >(&InternalWindow::getHandleFocusedComponent));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecPopupMenuPtr::Description(
        MFUnrecPopupMenuPtr::getClassType(),
        "ActivePopupMenus",
        "",
        ActivePopupMenusFieldId, ActivePopupMenusFieldMask,
        true,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&InternalWindow::editHandleActivePopupMenus),
        static_cast<FieldGetMethodSig >(&InternalWindow::getHandleActivePopupMenus));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecToolTipPtr::Description(
        SFUnrecToolTipPtr::getClassType(),
        "ActiveToolTip",
        "",
        ActiveToolTipFieldId, ActiveToolTipFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&InternalWindow::editHandleActiveToolTip),
        static_cast<FieldGetMethodSig >(&InternalWindow::getHandleActiveToolTip));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecMenuBarPtr::Description(
        SFUnrecMenuBarPtr::getClassType(),
        "MenuBar",
        "",
        MenuBarFieldId, MenuBarFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&InternalWindow::editHandleMenuBar),
        static_cast<FieldGetMethodSig >(&InternalWindow::getHandleMenuBar));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecTitlebarPtr::Description(
        SFUnrecTitlebarPtr::getClassType(),
        "Titlebar",
        "",
        TitlebarFieldId, TitlebarFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&InternalWindow::editHandleTitlebar),
        static_cast<FieldGetMethodSig >(&InternalWindow::getHandleTitlebar));

    oType.addInitialDesc(pDesc);
}


InternalWindowBase::TypeObject InternalWindowBase::_type(
    InternalWindowBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&InternalWindowBase::createEmptyLocal),
    InternalWindow::initMethod,
    InternalWindow::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&InternalWindow::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"InternalWindow\"\n"
    "    parent=\"AbstractWindow\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    "    childFields=\"multi\"\n"
    "    >\n"
    "    A UI Internal Window.\n"
    "    <Field\n"
    "        name=\"FocusedComponent\"\n"
    "        type=\"Component\"\n"
    "        category=\"pointer\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"NULL\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"ActivePopupMenus\"\n"
    "        type=\"PopupMenu\"\n"
    "        category=\"pointer\"\n"
    "        cardinality=\"multi\"\n"
    "        visibility=\"internal\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"ActiveToolTip\"\n"
    "        type=\"ToolTip\"\n"
    "        category=\"pointer\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"NULL\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"MenuBar\"\n"
    "        type=\"MenuBar\"\n"
    "        category=\"pointer\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"NULL\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"Titlebar\"\n"
    "        type=\"Titlebar\"\n"
    "        category=\"pointer\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        access=\"public\"\n"
    "        defaultValue=\"NULL\"\n"
    "        >\n"
    "    </Field>\n"
    "</FieldContainer>\n",
    "A UI Internal Window.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &InternalWindowBase::getType(void)
{
    return _type;
}

const FieldContainerType &InternalWindowBase::getType(void) const
{
    return _type;
}

UInt32 InternalWindowBase::getContainerSize(void) const
{
    return sizeof(InternalWindow);
}

/*------------------------- decorator get ------------------------------*/


//! Get the InternalWindow::_sfFocusedComponent field.
const SFUnrecComponentPtr *InternalWindowBase::getSFFocusedComponent(void) const
{
    return &_sfFocusedComponent;
}

SFUnrecComponentPtr *InternalWindowBase::editSFFocusedComponent(void)
{
    editSField(FocusedComponentFieldMask);

    return &_sfFocusedComponent;
}

//! Get the InternalWindow::_mfActivePopupMenus field.
const MFUnrecPopupMenuPtr *InternalWindowBase::getMFActivePopupMenus(void) const
{
    return &_mfActivePopupMenus;
}

MFUnrecPopupMenuPtr *InternalWindowBase::editMFActivePopupMenus(void)
{
    editMField(ActivePopupMenusFieldMask, _mfActivePopupMenus);

    return &_mfActivePopupMenus;
}

//! Get the InternalWindow::_sfActiveToolTip field.
const SFUnrecToolTipPtr *InternalWindowBase::getSFActiveToolTip(void) const
{
    return &_sfActiveToolTip;
}

SFUnrecToolTipPtr   *InternalWindowBase::editSFActiveToolTip  (void)
{
    editSField(ActiveToolTipFieldMask);

    return &_sfActiveToolTip;
}

//! Get the InternalWindow::_sfMenuBar field.
const SFUnrecMenuBarPtr *InternalWindowBase::getSFMenuBar(void) const
{
    return &_sfMenuBar;
}

SFUnrecMenuBarPtr   *InternalWindowBase::editSFMenuBar        (void)
{
    editSField(MenuBarFieldMask);

    return &_sfMenuBar;
}

//! Get the InternalWindow::_sfTitlebar field.
const SFUnrecTitlebarPtr *InternalWindowBase::getSFTitlebar(void) const
{
    return &_sfTitlebar;
}

SFUnrecTitlebarPtr  *InternalWindowBase::editSFTitlebar       (void)
{
    editSField(TitlebarFieldMask);

    return &_sfTitlebar;
}



void InternalWindowBase::pushToActivePopupMenus(PopupMenu * const value)
{
    editMField(ActivePopupMenusFieldMask, _mfActivePopupMenus);

    _mfActivePopupMenus.push_back(value);
}

void InternalWindowBase::assignActivePopupMenus(const MFUnrecPopupMenuPtr &value)
{
    MFUnrecPopupMenuPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecPopupMenuPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<InternalWindow *>(this)->clearActivePopupMenus();

    while(elemIt != elemEnd)
    {
        this->pushToActivePopupMenus(*elemIt);

        ++elemIt;
    }
}

void InternalWindowBase::removeFromActivePopupMenus(UInt32 uiIndex)
{
    if(uiIndex < _mfActivePopupMenus.size())
    {
        editMField(ActivePopupMenusFieldMask, _mfActivePopupMenus);

        _mfActivePopupMenus.erase(uiIndex);
    }
}

void InternalWindowBase::removeObjFromActivePopupMenus(PopupMenu * const value)
{
    Int32 iElemIdx = _mfActivePopupMenus.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ActivePopupMenusFieldMask, _mfActivePopupMenus);

        _mfActivePopupMenus.erase(iElemIdx);
    }
}
void InternalWindowBase::clearActivePopupMenus(void)
{
    editMField(ActivePopupMenusFieldMask, _mfActivePopupMenus);


    _mfActivePopupMenus.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 InternalWindowBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FocusedComponentFieldMask & whichField))
    {
        returnValue += _sfFocusedComponent.getBinSize();
    }
    if(FieldBits::NoField != (ActivePopupMenusFieldMask & whichField))
    {
        returnValue += _mfActivePopupMenus.getBinSize();
    }
    if(FieldBits::NoField != (ActiveToolTipFieldMask & whichField))
    {
        returnValue += _sfActiveToolTip.getBinSize();
    }
    if(FieldBits::NoField != (MenuBarFieldMask & whichField))
    {
        returnValue += _sfMenuBar.getBinSize();
    }
    if(FieldBits::NoField != (TitlebarFieldMask & whichField))
    {
        returnValue += _sfTitlebar.getBinSize();
    }

    return returnValue;
}

void InternalWindowBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FocusedComponentFieldMask & whichField))
    {
        _sfFocusedComponent.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ActivePopupMenusFieldMask & whichField))
    {
        _mfActivePopupMenus.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ActiveToolTipFieldMask & whichField))
    {
        _sfActiveToolTip.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MenuBarFieldMask & whichField))
    {
        _sfMenuBar.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TitlebarFieldMask & whichField))
    {
        _sfTitlebar.copyToBin(pMem);
    }
}

void InternalWindowBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FocusedComponentFieldMask & whichField))
    {
        _sfFocusedComponent.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ActivePopupMenusFieldMask & whichField))
    {
        _mfActivePopupMenus.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ActiveToolTipFieldMask & whichField))
    {
        _sfActiveToolTip.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MenuBarFieldMask & whichField))
    {
        _sfMenuBar.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TitlebarFieldMask & whichField))
    {
        _sfTitlebar.copyFromBin(pMem);
    }
}

//! create a new instance of the class
InternalWindowTransitPtr InternalWindowBase::createLocal(BitVector bFlags)
{
    InternalWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<InternalWindow>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
InternalWindowTransitPtr InternalWindowBase::createDependent(BitVector bFlags)
{
    InternalWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<InternalWindow>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
InternalWindowTransitPtr InternalWindowBase::create(void)
{
    InternalWindowTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<InternalWindow>(tmpPtr);
    }

    return fc;
}

InternalWindow *InternalWindowBase::createEmptyLocal(BitVector bFlags)
{
    InternalWindow *returnValue;

    newPtr<InternalWindow>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
InternalWindow *InternalWindowBase::createEmpty(void)
{
    InternalWindow *returnValue;

    newPtr<InternalWindow>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr InternalWindowBase::shallowCopyLocal(
    BitVector bFlags) const
{
    InternalWindow *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const InternalWindow *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr InternalWindowBase::shallowCopyDependent(
    BitVector bFlags) const
{
    InternalWindow *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const InternalWindow *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr InternalWindowBase::shallowCopy(void) const
{
    InternalWindow *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const InternalWindow *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

InternalWindowBase::InternalWindowBase(void) :
    Inherited(),
    _sfFocusedComponent       (NULL),
    _mfActivePopupMenus       (),
    _sfActiveToolTip          (NULL),
    _sfMenuBar                (NULL),
    _sfTitlebar               (NULL)
{
}

InternalWindowBase::InternalWindowBase(const InternalWindowBase &source) :
    Inherited(source),
    _sfFocusedComponent       (NULL),
    _mfActivePopupMenus       (),
    _sfActiveToolTip          (NULL),
    _sfMenuBar                (NULL),
    _sfTitlebar               (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

InternalWindowBase::~InternalWindowBase(void)
{
}

void InternalWindowBase::onCreate(const InternalWindow *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        InternalWindow *pThis = static_cast<InternalWindow *>(this);

        pThis->setFocusedComponent(source->getFocusedComponent());

        MFUnrecPopupMenuPtr::const_iterator ActivePopupMenusIt  =
            source->_mfActivePopupMenus.begin();
        MFUnrecPopupMenuPtr::const_iterator ActivePopupMenusEnd =
            source->_mfActivePopupMenus.end  ();

        while(ActivePopupMenusIt != ActivePopupMenusEnd)
        {
            pThis->pushToActivePopupMenus(*ActivePopupMenusIt);

            ++ActivePopupMenusIt;
        }

        pThis->setActiveToolTip(source->getActiveToolTip());

        pThis->setMenuBar(source->getMenuBar());

        pThis->setTitlebar(source->getTitlebar());
    }
}

GetFieldHandlePtr InternalWindowBase::getHandleFocusedComponent (void) const
{
    SFUnrecComponentPtr::GetHandlePtr returnValue(
        new  SFUnrecComponentPtr::GetHandle(
             &_sfFocusedComponent,
             this->getType().getFieldDesc(FocusedComponentFieldId),
             const_cast<InternalWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr InternalWindowBase::editHandleFocusedComponent(void)
{
    SFUnrecComponentPtr::EditHandlePtr returnValue(
        new  SFUnrecComponentPtr::EditHandle(
             &_sfFocusedComponent,
             this->getType().getFieldDesc(FocusedComponentFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&InternalWindow::setFocusedComponent,
                    static_cast<InternalWindow *>(this), _1));

    editSField(FocusedComponentFieldMask);

    return returnValue;
}

GetFieldHandlePtr InternalWindowBase::getHandleActivePopupMenus (void) const
{
    MFUnrecPopupMenuPtr::GetHandlePtr returnValue(
        new  MFUnrecPopupMenuPtr::GetHandle(
             &_mfActivePopupMenus,
             this->getType().getFieldDesc(ActivePopupMenusFieldId),
             const_cast<InternalWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr InternalWindowBase::editHandleActivePopupMenus(void)
{
    MFUnrecPopupMenuPtr::EditHandlePtr returnValue(
        new  MFUnrecPopupMenuPtr::EditHandle(
             &_mfActivePopupMenus,
             this->getType().getFieldDesc(ActivePopupMenusFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&InternalWindow::pushToActivePopupMenus,
                    static_cast<InternalWindow *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&InternalWindow::removeFromActivePopupMenus,
                    static_cast<InternalWindow *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&InternalWindow::removeObjFromActivePopupMenus,
                    static_cast<InternalWindow *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&InternalWindow::clearActivePopupMenus,
                    static_cast<InternalWindow *>(this)));

    editMField(ActivePopupMenusFieldMask, _mfActivePopupMenus);

    return returnValue;
}

GetFieldHandlePtr InternalWindowBase::getHandleActiveToolTip   (void) const
{
    SFUnrecToolTipPtr::GetHandlePtr returnValue(
        new  SFUnrecToolTipPtr::GetHandle(
             &_sfActiveToolTip,
             this->getType().getFieldDesc(ActiveToolTipFieldId),
             const_cast<InternalWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr InternalWindowBase::editHandleActiveToolTip  (void)
{
    SFUnrecToolTipPtr::EditHandlePtr returnValue(
        new  SFUnrecToolTipPtr::EditHandle(
             &_sfActiveToolTip,
             this->getType().getFieldDesc(ActiveToolTipFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&InternalWindow::setActiveToolTip,
                    static_cast<InternalWindow *>(this), _1));

    editSField(ActiveToolTipFieldMask);

    return returnValue;
}

GetFieldHandlePtr InternalWindowBase::getHandleMenuBar         (void) const
{
    SFUnrecMenuBarPtr::GetHandlePtr returnValue(
        new  SFUnrecMenuBarPtr::GetHandle(
             &_sfMenuBar,
             this->getType().getFieldDesc(MenuBarFieldId),
             const_cast<InternalWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr InternalWindowBase::editHandleMenuBar        (void)
{
    SFUnrecMenuBarPtr::EditHandlePtr returnValue(
        new  SFUnrecMenuBarPtr::EditHandle(
             &_sfMenuBar,
             this->getType().getFieldDesc(MenuBarFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&InternalWindow::setMenuBar,
                    static_cast<InternalWindow *>(this), _1));

    editSField(MenuBarFieldMask);

    return returnValue;
}

GetFieldHandlePtr InternalWindowBase::getHandleTitlebar        (void) const
{
    SFUnrecTitlebarPtr::GetHandlePtr returnValue(
        new  SFUnrecTitlebarPtr::GetHandle(
             &_sfTitlebar,
             this->getType().getFieldDesc(TitlebarFieldId),
             const_cast<InternalWindowBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr InternalWindowBase::editHandleTitlebar       (void)
{
    SFUnrecTitlebarPtr::EditHandlePtr returnValue(
        new  SFUnrecTitlebarPtr::EditHandle(
             &_sfTitlebar,
             this->getType().getFieldDesc(TitlebarFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&InternalWindow::setTitlebar,
                    static_cast<InternalWindow *>(this), _1));

    editSField(TitlebarFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void InternalWindowBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    InternalWindow *pThis = static_cast<InternalWindow *>(this);

    pThis->execSync(static_cast<InternalWindow *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *InternalWindowBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    InternalWindow *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const InternalWindow *>(pRefAspect),
                  dynamic_cast<const InternalWindow *>(this));

    return returnValue;
}
#endif

void InternalWindowBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<InternalWindow *>(this)->setFocusedComponent(NULL);

    static_cast<InternalWindow *>(this)->clearActivePopupMenus();

    static_cast<InternalWindow *>(this)->setActiveToolTip(NULL);

    static_cast<InternalWindow *>(this)->setMenuBar(NULL);

    static_cast<InternalWindow *>(this)->setTitlebar(NULL);


}


OSG_END_NAMESPACE
