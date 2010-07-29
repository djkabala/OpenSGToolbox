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
 **     class TableColumn!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGTableCellEditor.h"         // CellEditor Class

#include "OSGTableColumnBase.h"
#include "OSGTableColumn.h"

#include <boost/bind.hpp>

#include "OSGEvent.h"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TableColumn
    A UI Table Column.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt32          TableColumnBase::_sfMaxWidth
    
*/

/*! \var UInt32          TableColumnBase::_sfMinWidth
    
*/

/*! \var UInt32          TableColumnBase::_sfModelIndex
    
*/

/*! \var UInt32          TableColumnBase::_sfPreferredWidth
    
*/

/*! \var UInt32          TableColumnBase::_sfWidth
    
*/

/*! \var bool            TableColumnBase::_sfResizable
    
*/

/*! \var TableCellEditor * TableColumnBase::_sfCellEditor
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TableColumn *>::_type("TableColumnPtr", "FieldContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TableColumn *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TableColumn *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TableColumn *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TableColumnBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "MaxWidth",
        "",
        MaxWidthFieldId, MaxWidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableColumn::editHandleMaxWidth),
        static_cast<FieldGetMethodSig >(&TableColumn::getHandleMaxWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "MinWidth",
        "",
        MinWidthFieldId, MinWidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableColumn::editHandleMinWidth),
        static_cast<FieldGetMethodSig >(&TableColumn::getHandleMinWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "ModelIndex",
        "",
        ModelIndexFieldId, ModelIndexFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableColumn::editHandleModelIndex),
        static_cast<FieldGetMethodSig >(&TableColumn::getHandleModelIndex));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "PreferredWidth",
        "",
        PreferredWidthFieldId, PreferredWidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableColumn::editHandlePreferredWidth),
        static_cast<FieldGetMethodSig >(&TableColumn::getHandlePreferredWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "Width",
        "",
        WidthFieldId, WidthFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableColumn::editHandleWidth),
        static_cast<FieldGetMethodSig >(&TableColumn::getHandleWidth));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "Resizable",
        "",
        ResizableFieldId, ResizableFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableColumn::editHandleResizable),
        static_cast<FieldGetMethodSig >(&TableColumn::getHandleResizable));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecTableCellEditorPtr::Description(
        SFUnrecTableCellEditorPtr::getClassType(),
        "CellEditor",
        "",
        CellEditorFieldId, CellEditorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableColumn::editHandleCellEditor),
        static_cast<FieldGetMethodSig >(&TableColumn::getHandleCellEditor));

    oType.addInitialDesc(pDesc);
    pDesc = new SFEventProducerPtr::Description(
        SFEventProducerPtr::getClassType(),
        "EventProducer",
        "Event Producer",
        EventProducerFieldId,EventProducerFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&TableColumn::editHandleEventProducer),
        static_cast     <FieldGetMethodSig >(&TableColumn::getHandleEventProducer));

    oType.addInitialDesc(pDesc);
}


TableColumnBase::TypeObject TableColumnBase::_type(
    TableColumnBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&TableColumnBase::createEmptyLocal),
    TableColumn::initMethod,
    TableColumn::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TableColumn::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"TableColumn\"\n"
    "    parent=\"FieldContainer\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    "    >\n"
    "    A UI Table Column.\n"
    "    <Field\n"
    "        name=\"MaxWidth\"\n"
    "        type=\"UInt32\"\n"
    "        category=\"data\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"1000\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"MinWidth\"\n"
    "        type=\"UInt32\"\n"
    "        category=\"data\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"1\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"ModelIndex\"\n"
    "        type=\"UInt32\"\n"
    "        category=\"data\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"0\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"PreferredWidth\"\n"
    "        type=\"UInt32\"\n"
    "        category=\"data\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"100\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"Width\"\n"
    "        type=\"UInt32\"\n"
    "        category=\"data\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"100\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"Resizable\"\n"
    "        type=\"bool\"\n"
    "        category=\"data\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"true\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "    </Field>\n"
    "    <Field\n"
    "        name=\"CellEditor\"\n"
    "        type=\"TableCellEditor\"\n"
    "        category=\"pointer\"\n"
    "        cardinality=\"single\"\n"
    "        visibility=\"external\"\n"
    "        defaultValue=\"NULL\"\n"
    "        access=\"public\"\n"
    "        >\n"
    "    </Field>\n"
    "    <ProducedMethod\n"
    "        name=\"FieldChanged\"\n"
    "        type=\"FieldChangedEventPtr\"\n"
    "        >\n"
    "    </ProducedMethod>\n"
    "</FieldContainer>\n",
    "A UI Table Column.\n"
    );

//! TableColumn Produced Methods

MethodDescription *TableColumnBase::_methodDesc[] =
{
    new MethodDescription("FieldChanged", 
                    "",
                     FieldChangedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod())
};

EventProducerType TableColumnBase::_producerType(
    "TableColumnProducerType",
    "EventProducerType",
    "",
    InitEventProducerFunctor(),
    _methodDesc,
    sizeof(_methodDesc));

/*------------------------------ get -----------------------------------*/

FieldContainerType &TableColumnBase::getType(void)
{
    return _type;
}

const FieldContainerType &TableColumnBase::getType(void) const
{
    return _type;
}

const EventProducerType &TableColumnBase::getProducerType(void) const
{
    return _producerType;
}

UInt32 TableColumnBase::getContainerSize(void) const
{
    return sizeof(TableColumn);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *TableColumnBase::editSFMaxWidth(void)
{
    editSField(MaxWidthFieldMask);

    return &_sfMaxWidth;
}

const SFUInt32 *TableColumnBase::getSFMaxWidth(void) const
{
    return &_sfMaxWidth;
}


SFUInt32 *TableColumnBase::editSFMinWidth(void)
{
    editSField(MinWidthFieldMask);

    return &_sfMinWidth;
}

const SFUInt32 *TableColumnBase::getSFMinWidth(void) const
{
    return &_sfMinWidth;
}


SFUInt32 *TableColumnBase::editSFModelIndex(void)
{
    editSField(ModelIndexFieldMask);

    return &_sfModelIndex;
}

const SFUInt32 *TableColumnBase::getSFModelIndex(void) const
{
    return &_sfModelIndex;
}


SFUInt32 *TableColumnBase::editSFPreferredWidth(void)
{
    editSField(PreferredWidthFieldMask);

    return &_sfPreferredWidth;
}

const SFUInt32 *TableColumnBase::getSFPreferredWidth(void) const
{
    return &_sfPreferredWidth;
}


SFUInt32 *TableColumnBase::editSFWidth(void)
{
    editSField(WidthFieldMask);

    return &_sfWidth;
}

const SFUInt32 *TableColumnBase::getSFWidth(void) const
{
    return &_sfWidth;
}


SFBool *TableColumnBase::editSFResizable(void)
{
    editSField(ResizableFieldMask);

    return &_sfResizable;
}

const SFBool *TableColumnBase::getSFResizable(void) const
{
    return &_sfResizable;
}


//! Get the TableColumn::_sfCellEditor field.
const SFUnrecTableCellEditorPtr *TableColumnBase::getSFCellEditor(void) const
{
    return &_sfCellEditor;
}

SFUnrecTableCellEditorPtr *TableColumnBase::editSFCellEditor     (void)
{
    editSField(CellEditorFieldMask);

    return &_sfCellEditor;
}





/*------------------------------ access -----------------------------------*/

UInt32 TableColumnBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MaxWidthFieldMask & whichField))
    {
        returnValue += _sfMaxWidth.getBinSize();
    }
    if(FieldBits::NoField != (MinWidthFieldMask & whichField))
    {
        returnValue += _sfMinWidth.getBinSize();
    }
    if(FieldBits::NoField != (ModelIndexFieldMask & whichField))
    {
        returnValue += _sfModelIndex.getBinSize();
    }
    if(FieldBits::NoField != (PreferredWidthFieldMask & whichField))
    {
        returnValue += _sfPreferredWidth.getBinSize();
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        returnValue += _sfWidth.getBinSize();
    }
    if(FieldBits::NoField != (ResizableFieldMask & whichField))
    {
        returnValue += _sfResizable.getBinSize();
    }
    if(FieldBits::NoField != (CellEditorFieldMask & whichField))
    {
        returnValue += _sfCellEditor.getBinSize();
    }
    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        returnValue += _sfEventProducer.getBinSize();
    }

    return returnValue;
}

void TableColumnBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MaxWidthFieldMask & whichField))
    {
        _sfMaxWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MinWidthFieldMask & whichField))
    {
        _sfMinWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ModelIndexFieldMask & whichField))
    {
        _sfModelIndex.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PreferredWidthFieldMask & whichField))
    {
        _sfPreferredWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ResizableFieldMask & whichField))
    {
        _sfResizable.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CellEditorFieldMask & whichField))
    {
        _sfCellEditor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyToBin(pMem);
    }
}

void TableColumnBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MaxWidthFieldMask & whichField))
    {
        _sfMaxWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MinWidthFieldMask & whichField))
    {
        _sfMinWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ModelIndexFieldMask & whichField))
    {
        _sfModelIndex.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PreferredWidthFieldMask & whichField))
    {
        _sfPreferredWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (WidthFieldMask & whichField))
    {
        _sfWidth.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ResizableFieldMask & whichField))
    {
        _sfResizable.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CellEditorFieldMask & whichField))
    {
        _sfCellEditor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyFromBin(pMem);
    }
}

//! create a new instance of the class
TableColumnTransitPtr TableColumnBase::createLocal(BitVector bFlags)
{
    TableColumnTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<TableColumn>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
TableColumnTransitPtr TableColumnBase::createDependent(BitVector bFlags)
{
    TableColumnTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<TableColumn>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
TableColumnTransitPtr TableColumnBase::create(void)
{
    TableColumnTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<TableColumn>(tmpPtr);
    }

    return fc;
}

TableColumn *TableColumnBase::createEmptyLocal(BitVector bFlags)
{
    TableColumn *returnValue;

    newPtr<TableColumn>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
TableColumn *TableColumnBase::createEmpty(void)
{
    TableColumn *returnValue;

    newPtr<TableColumn>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr TableColumnBase::shallowCopyLocal(
    BitVector bFlags) const
{
    TableColumn *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TableColumn *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr TableColumnBase::shallowCopyDependent(
    BitVector bFlags) const
{
    TableColumn *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const TableColumn *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr TableColumnBase::shallowCopy(void) const
{
    TableColumn *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const TableColumn *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

TableColumnBase::TableColumnBase(void) :
    _Producer(&getProducerType()),
    Inherited(),
    _sfMaxWidth               (UInt32(1000)),
    _sfMinWidth               (UInt32(1)),
    _sfModelIndex             (UInt32(0)),
    _sfPreferredWidth         (UInt32(100)),
    _sfWidth                  (UInt32(100)),
    _sfResizable              (bool(true)),
    _sfCellEditor             (NULL)
    ,_sfEventProducer(&_Producer)
{
}

TableColumnBase::TableColumnBase(const TableColumnBase &source) :
    _Producer(&source.getProducerType()),
    Inherited(source),
    _sfMaxWidth               (source._sfMaxWidth               ),
    _sfMinWidth               (source._sfMinWidth               ),
    _sfModelIndex             (source._sfModelIndex             ),
    _sfPreferredWidth         (source._sfPreferredWidth         ),
    _sfWidth                  (source._sfWidth                  ),
    _sfResizable              (source._sfResizable              ),
    _sfCellEditor             (NULL)
    ,_sfEventProducer(&_Producer)
{
}


/*-------------------------- destructors ----------------------------------*/

TableColumnBase::~TableColumnBase(void)
{
}

void TableColumnBase::onCreate(const TableColumn *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        TableColumn *pThis = static_cast<TableColumn *>(this);

        pThis->setCellEditor(source->getCellEditor());
    }
}

GetFieldHandlePtr TableColumnBase::getHandleMaxWidth        (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfMaxWidth,
             this->getType().getFieldDesc(MaxWidthFieldId),
             const_cast<TableColumnBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableColumnBase::editHandleMaxWidth       (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfMaxWidth,
             this->getType().getFieldDesc(MaxWidthFieldId),
             this));


    editSField(MaxWidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableColumnBase::getHandleMinWidth        (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfMinWidth,
             this->getType().getFieldDesc(MinWidthFieldId),
             const_cast<TableColumnBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableColumnBase::editHandleMinWidth       (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfMinWidth,
             this->getType().getFieldDesc(MinWidthFieldId),
             this));


    editSField(MinWidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableColumnBase::getHandleModelIndex      (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfModelIndex,
             this->getType().getFieldDesc(ModelIndexFieldId),
             const_cast<TableColumnBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableColumnBase::editHandleModelIndex     (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfModelIndex,
             this->getType().getFieldDesc(ModelIndexFieldId),
             this));


    editSField(ModelIndexFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableColumnBase::getHandlePreferredWidth  (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfPreferredWidth,
             this->getType().getFieldDesc(PreferredWidthFieldId),
             const_cast<TableColumnBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableColumnBase::editHandlePreferredWidth (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfPreferredWidth,
             this->getType().getFieldDesc(PreferredWidthFieldId),
             this));


    editSField(PreferredWidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableColumnBase::getHandleWidth           (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfWidth,
             this->getType().getFieldDesc(WidthFieldId),
             const_cast<TableColumnBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableColumnBase::editHandleWidth          (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfWidth,
             this->getType().getFieldDesc(WidthFieldId),
             this));


    editSField(WidthFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableColumnBase::getHandleResizable       (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfResizable,
             this->getType().getFieldDesc(ResizableFieldId),
             const_cast<TableColumnBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableColumnBase::editHandleResizable      (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfResizable,
             this->getType().getFieldDesc(ResizableFieldId),
             this));


    editSField(ResizableFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableColumnBase::getHandleCellEditor      (void) const
{
    SFUnrecTableCellEditorPtr::GetHandlePtr returnValue(
        new  SFUnrecTableCellEditorPtr::GetHandle(
             &_sfCellEditor,
             this->getType().getFieldDesc(CellEditorFieldId),
             const_cast<TableColumnBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableColumnBase::editHandleCellEditor     (void)
{
    SFUnrecTableCellEditorPtr::EditHandlePtr returnValue(
        new  SFUnrecTableCellEditorPtr::EditHandle(
             &_sfCellEditor,
             this->getType().getFieldDesc(CellEditorFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&TableColumn::setCellEditor,
                    static_cast<TableColumn *>(this), _1));

    editSField(CellEditorFieldMask);

    return returnValue;
}


GetFieldHandlePtr TableColumnBase::getHandleEventProducer        (void) const
{
    SFEventProducerPtr::GetHandlePtr returnValue(
        new  SFEventProducerPtr::GetHandle(
             &_sfEventProducer,
             this->getType().getFieldDesc(EventProducerFieldId),
             const_cast<TableColumnBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableColumnBase::editHandleEventProducer       (void)
{
    SFEventProducerPtr::EditHandlePtr returnValue(
        new  SFEventProducerPtr::EditHandle(
             &_sfEventProducer,
             this->getType().getFieldDesc(EventProducerFieldId),
             this));


    editSField(EventProducerFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void TableColumnBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TableColumn *pThis = static_cast<TableColumn *>(this);

    pThis->execSync(static_cast<TableColumn *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *TableColumnBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    TableColumn *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const TableColumn *>(pRefAspect),
                  dynamic_cast<const TableColumn *>(this));

    return returnValue;
}
#endif

void TableColumnBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<TableColumn *>(this)->setCellEditor(NULL);


}


OSG_END_NAMESPACE
