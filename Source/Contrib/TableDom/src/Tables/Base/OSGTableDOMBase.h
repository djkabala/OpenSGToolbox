/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             Achyuthan Vasanth (achvas88@gmail.com)*
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
 **     class TableDOM
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTABLEDOMBASE_H_
#define _OSGTABLEDOMBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribTableDomDef.h"

//#include "OSGBaseTypes.h"

#include "OSGAttachmentContainer.h" // Parent

#include "OSGCellFields.h"              // RootCell type

#include "OSGTableDOMFields.h"

//Event Producer Headers
#include "OSGActivity.h"
#include "OSGConsumableEventCombiner.h"

#include "OSGTableDOMEventDetailsFields.h"
#include "OSGUndoableEditEventDetailsFields.h"

OSG_BEGIN_NAMESPACE

class TableDOM;

//! \brief TableDOM Base Class.

class OSG_CONTRIBTABLEDOM_DLLMAPPING TableDOMBase : public AttachmentContainer
{
  public:

    typedef AttachmentContainer Inherited;
    typedef AttachmentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TableDOM);
    
    
    typedef TableDOMEventDetails ChangedEventDetailsType;
    typedef TableDOMEventDetails InsertEventDetailsType;
    typedef TableDOMEventDetails RemoveEventDetailsType;
    typedef UndoableEditEventDetails UndoableEditHappenedEventDetailsType;

    typedef boost::signals2::signal<void (EventDetails* const            , UInt32)> BaseEventType;
    typedef boost::signals2::signal<void (TableDOMEventDetails* const, UInt32), ConsumableEventCombiner> ChangedEventType;
    typedef boost::signals2::signal<void (TableDOMEventDetails* const, UInt32), ConsumableEventCombiner> InsertEventType;
    typedef boost::signals2::signal<void (TableDOMEventDetails* const, UInt32), ConsumableEventCombiner> RemoveEventType;
    typedef boost::signals2::signal<void (UndoableEditEventDetails* const, UInt32), ConsumableEventCombiner> UndoableEditHappenedEventType;

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        RootCellFieldId = Inherited::NextFieldId,
        NextFieldId = RootCellFieldId + 1
    };

    static const OSG::BitVector RootCellFieldMask =
        (TypeTraits<BitVector>::One << RootCellFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecCellPtr    SFRootCellType;

    enum
    {
        ChangedEventId = 1,
        InsertEventId = ChangedEventId + 1,
        RemoveEventId = InsertEventId + 1,
        UndoableEditHappenedEventId = RemoveEventId + 1,
        NextProducedEventId = UndoableEditHappenedEventId + 1
    };

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);
    static const  EventProducerType  &getProducerClassType  (void);
    static        UInt32              getProducerClassTypeId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const SFUnrecCellPtr      *getSFRootCell       (void) const;
                  SFUnrecCellPtr      *editSFRootCell       (void);


                  Cell * getRootCell       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setRootCell       (Cell * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Event Produced Get                           */
    /*! \{                                                                 */

    virtual const EventProducerType &getProducerType(void) const; 

    virtual UInt32                   getNumProducedEvents       (void                                ) const;
    virtual const EventDescription *getProducedEventDescription(const std::string &ProducedEventName) const;
    virtual const EventDescription *getProducedEventDescription(UInt32 ProducedEventId              ) const;
    virtual UInt32                   getProducedEventId         (const std::string &ProducedEventName) const;
    
    virtual boost::signals2::connection connectEvent(UInt32 eventId, 
                                              const BaseEventType::slot_type &listener,
                                              boost::signals2::connect_position at= boost::signals2::at_back);
                                              
    virtual boost::signals2::connection connectEvent(UInt32 eventId, 
                                              const BaseEventType::group_type &group,
                                              const BaseEventType::slot_type &listener,
                                              boost::signals2::connect_position at= boost::signals2::at_back);
    
    virtual void   disconnectEvent        (UInt32 eventId, const BaseEventType::group_type &group);
    virtual void   disconnectAllSlotsEvent(UInt32 eventId);
    virtual bool   isEmptyEvent           (UInt32 eventId) const;
    virtual UInt32 numSlotsEvent          (UInt32 eventId) const;

    /*! \}                                                                 */
    /*! \name                Event Access                                 */
    /*! \{                                                                 */
    
    //Changed
    boost::signals2::connection connectChanged        (const ChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectChanged        (const ChangedEventType::group_type &group,
                                                       const ChangedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectChanged                (const ChangedEventType::group_type &group);
    void   disconnectAllSlotsChanged        (void);
    bool   isEmptyChanged                   (void) const;
    UInt32 numSlotsChanged                  (void) const;
    
    //Insert
    boost::signals2::connection connectInsert         (const InsertEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectInsert         (const InsertEventType::group_type &group,
                                                       const InsertEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectInsert                 (const InsertEventType::group_type &group);
    void   disconnectAllSlotsInsert         (void);
    bool   isEmptyInsert                    (void) const;
    UInt32 numSlotsInsert                   (void) const;
    
    //Remove
    boost::signals2::connection connectRemove         (const RemoveEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectRemove         (const RemoveEventType::group_type &group,
                                                       const RemoveEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectRemove                 (const RemoveEventType::group_type &group);
    void   disconnectAllSlotsRemove         (void);
    bool   isEmptyRemove                    (void) const;
    UInt32 numSlotsRemove                   (void) const;
    
    //UndoableEditHappened
    boost::signals2::connection connectUndoableEditHappened(const UndoableEditHappenedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectUndoableEditHappened(const UndoableEditHappenedEventType::group_type &group,
                                                       const UndoableEditHappenedEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectUndoableEditHappened   (const UndoableEditHappenedEventType::group_type &group);
    void   disconnectAllSlotsUndoableEditHappened(void);
    bool   isEmptyUndoableEditHappened      (void) const;
    UInt32 numSlotsUndoableEditHappened     (void) const;
    
    
    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:
    /*---------------------------------------------------------------------*/
    /*! \name                    Produced Event Signals                   */
    /*! \{                                                                 */

    //Event Event producers
    ChangedEventType _ChangedEvent;
    InsertEventType _InsertEvent;
    RemoveEventType _RemoveEvent;
    UndoableEditHappenedEventType _UndoableEditHappenedEvent;
    /*! \}                                                                 */

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUnrecCellPtr    _sfRootCell;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TableDOMBase(void);
    TableDOMBase(const TableDOMBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TableDOMBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const TableDOM *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleRootCell        (void) const;
    EditFieldHandlePtr editHandleRootCell       (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Event Access                     */
    /*! \{                                                                 */

    GetEventHandlePtr getHandleChangedSignal(void) const;
    GetEventHandlePtr getHandleInsertSignal(void) const;
    GetEventHandlePtr getHandleRemoveSignal(void) const;
    GetEventHandlePtr getHandleUndoableEditHappenedSignal(void) const;
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Event Producer Firing                    */
    /*! \{                                                                 */

    virtual void produceEvent       (UInt32 eventId, EventDetails* const e);
    
    void produceChanged             (ChangedEventDetailsType* const e);
    void produceInsert              (InsertEventDetailsType* const e);
    void produceRemove              (RemoveEventDetailsType* const e);
    void produceUndoableEditHappened  (UndoableEditHappenedEventDetailsType* const e);
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      TableDOMBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/
    static EventDescription   *_eventDesc[];
    static EventProducerType _producerType;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TableDOMBase &source);
};

typedef TableDOMBase *TableDOMBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTABLEDOMBASE_H_ */
