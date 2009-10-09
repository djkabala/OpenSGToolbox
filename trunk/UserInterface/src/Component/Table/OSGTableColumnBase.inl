/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
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
 **     class TableColumn!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TableColumnBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 TableColumnBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! access the producer type of the class
inline
const EventProducerType &TableColumnBase::getProducerClassType(void)
{
    return _producerType;
}

//! access the producer type id of the class
inline
UInt32 TableColumnBase::getProducerClassTypeId(void)
{
    return _producerType.getId();
}

//! create a new instance of the class
inline
TableColumnPtr TableColumnBase::create(void) 
{
    TableColumnPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = TableColumnPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
TableColumnPtr TableColumnBase::createEmpty(void) 
{ 
    TableColumnPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the TableColumn::_sfMaxWidth field.
inline
const SFUInt32 *TableColumnBase::getSFMaxWidth(void) const
{
    return &_sfMaxWidth;
}

//! Get the TableColumn::_sfMaxWidth field.
inline
SFUInt32 *TableColumnBase::editSFMaxWidth(void)
{
    return &_sfMaxWidth;
}

//! Get the TableColumn::_sfMinWidth field.
inline
const SFUInt32 *TableColumnBase::getSFMinWidth(void) const
{
    return &_sfMinWidth;
}

//! Get the TableColumn::_sfMinWidth field.
inline
SFUInt32 *TableColumnBase::editSFMinWidth(void)
{
    return &_sfMinWidth;
}

//! Get the TableColumn::_sfModelIndex field.
inline
const SFUInt32 *TableColumnBase::getSFModelIndex(void) const
{
    return &_sfModelIndex;
}

//! Get the TableColumn::_sfModelIndex field.
inline
SFUInt32 *TableColumnBase::editSFModelIndex(void)
{
    return &_sfModelIndex;
}

//! Get the TableColumn::_sfPreferredWidth field.
inline
const SFUInt32 *TableColumnBase::getSFPreferredWidth(void) const
{
    return &_sfPreferredWidth;
}

//! Get the TableColumn::_sfPreferredWidth field.
inline
SFUInt32 *TableColumnBase::editSFPreferredWidth(void)
{
    return &_sfPreferredWidth;
}

//! Get the TableColumn::_sfWidth field.
inline
const SFUInt32 *TableColumnBase::getSFWidth(void) const
{
    return &_sfWidth;
}

//! Get the TableColumn::_sfWidth field.
inline
SFUInt32 *TableColumnBase::editSFWidth(void)
{
    return &_sfWidth;
}

//! Get the TableColumn::_sfResizable field.
inline
const SFBool *TableColumnBase::getSFResizable(void) const
{
    return &_sfResizable;
}

//! Get the TableColumn::_sfResizable field.
inline
SFBool *TableColumnBase::editSFResizable(void)
{
    return &_sfResizable;
}

//! Get the TableColumn::_sfCellEditor field.
inline
const SFTableCellEditorPtr *TableColumnBase::getSFCellEditor(void) const
{
    return &_sfCellEditor;
}

//! Get the TableColumn::_sfCellEditor field.
inline
SFTableCellEditorPtr *TableColumnBase::editSFCellEditor(void)
{
    return &_sfCellEditor;
}


//! Get the value of the TableColumn::_sfMaxWidth field.
inline
UInt32 &TableColumnBase::editMaxWidth(void)
{
    return _sfMaxWidth.getValue();
}

//! Get the value of the TableColumn::_sfMaxWidth field.
inline
const UInt32 &TableColumnBase::getMaxWidth(void) const
{
    return _sfMaxWidth.getValue();
}

//! Set the value of the TableColumn::_sfMaxWidth field.
inline
void TableColumnBase::setMaxWidth(const UInt32 &value)
{
    _sfMaxWidth.setValue(value);
}

//! Get the value of the TableColumn::_sfMinWidth field.
inline
UInt32 &TableColumnBase::editMinWidth(void)
{
    return _sfMinWidth.getValue();
}

//! Get the value of the TableColumn::_sfMinWidth field.
inline
const UInt32 &TableColumnBase::getMinWidth(void) const
{
    return _sfMinWidth.getValue();
}

//! Set the value of the TableColumn::_sfMinWidth field.
inline
void TableColumnBase::setMinWidth(const UInt32 &value)
{
    _sfMinWidth.setValue(value);
}

//! Get the value of the TableColumn::_sfModelIndex field.
inline
UInt32 &TableColumnBase::editModelIndex(void)
{
    return _sfModelIndex.getValue();
}

//! Get the value of the TableColumn::_sfModelIndex field.
inline
const UInt32 &TableColumnBase::getModelIndex(void) const
{
    return _sfModelIndex.getValue();
}

//! Set the value of the TableColumn::_sfModelIndex field.
inline
void TableColumnBase::setModelIndex(const UInt32 &value)
{
    _sfModelIndex.setValue(value);
}

//! Get the value of the TableColumn::_sfPreferredWidth field.
inline
UInt32 &TableColumnBase::editPreferredWidth(void)
{
    return _sfPreferredWidth.getValue();
}

//! Get the value of the TableColumn::_sfPreferredWidth field.
inline
const UInt32 &TableColumnBase::getPreferredWidth(void) const
{
    return _sfPreferredWidth.getValue();
}

//! Set the value of the TableColumn::_sfPreferredWidth field.
inline
void TableColumnBase::setPreferredWidth(const UInt32 &value)
{
    _sfPreferredWidth.setValue(value);
}

//! Get the value of the TableColumn::_sfWidth field.
inline
UInt32 &TableColumnBase::editWidth(void)
{
    return _sfWidth.getValue();
}

//! Get the value of the TableColumn::_sfWidth field.
inline
const UInt32 &TableColumnBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

//! Set the value of the TableColumn::_sfWidth field.
inline
void TableColumnBase::setWidth(const UInt32 &value)
{
    _sfWidth.setValue(value);
}

//! Get the value of the TableColumn::_sfResizable field.
inline
bool &TableColumnBase::editResizable(void)
{
    return _sfResizable.getValue();
}

//! Get the value of the TableColumn::_sfResizable field.
inline
const bool &TableColumnBase::getResizable(void) const
{
    return _sfResizable.getValue();
}

//! Set the value of the TableColumn::_sfResizable field.
inline
void TableColumnBase::setResizable(const bool &value)
{
    _sfResizable.setValue(value);
}

//! Get the value of the TableColumn::_sfCellEditor field.
inline
TableCellEditorPtr &TableColumnBase::editCellEditor(void)
{
    return _sfCellEditor.getValue();
}

//! Get the value of the TableColumn::_sfCellEditor field.
inline
const TableCellEditorPtr &TableColumnBase::getCellEditor(void) const
{
    return _sfCellEditor.getValue();
}

//! Set the value of the TableColumn::_sfCellEditor field.
inline
void TableColumnBase::setCellEditor(const TableCellEditorPtr &value)
{
    _sfCellEditor.setValue(value);
}



inline
EventConnection TableColumnBase::attachActivity(ActivityPtr TheActivity, UInt32 ProducedEventId)
{
    return _Producer.attachActivity(TheActivity, ProducedEventId);
}

inline
bool TableColumnBase::isActivityAttached(ActivityPtr TheActivity, UInt32 ProducedEventId) const
{
    return _Producer.isActivityAttached(TheActivity, ProducedEventId);
}

inline
UInt32 TableColumnBase::getNumActivitiesAttached(UInt32 ProducedEventId) const
{
    return _Producer.getNumActivitiesAttached(ProducedEventId);
}

inline
ActivityPtr TableColumnBase::getAttachedActivity(UInt32 ProducedEventId, UInt32 ActivityIndex) const
{
    return _Producer.getAttachedActivity(ProducedEventId,ActivityIndex);
}

inline
void TableColumnBase::detachActivity(ActivityPtr TheActivity, UInt32 ProducedEventId)
{
    _Producer.detachActivity(TheActivity, ProducedEventId);
}

inline
UInt32 TableColumnBase::getNumProducedEvents(void) const
{
    return _Producer.getNumProducedEvents();
}

inline
const MethodDescription *TableColumnBase::getProducedEventDescription(const Char8 *ProducedEventName) const
{
    return _Producer.getProducedEventDescription(ProducedEventName);
}

inline
const MethodDescription *TableColumnBase::getProducedEventDescription(UInt32 ProducedEventId) const
{
    return _Producer.getProducedEventDescription(ProducedEventId);
}

inline
UInt32 TableColumnBase::getProducedEventId(const Char8 *ProducedEventName) const
{
    return _Producer.getProducedEventId(ProducedEventName);
}

inline
SFEventProducerPtr *TableColumnBase::editSFEventProducer(void)
{
    return &_sfEventProducer;
}

//! Get the value of the TableColumn::_sfEventProducer field.
inline
EventProducerPtr &TableColumnBase::editEventProducer(void)
{
    return _sfEventProducer.getValue();
}

OSG_END_NAMESPACE
