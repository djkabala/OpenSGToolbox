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
 **     class Tree
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTREEBASE_H_
#define _OSGTREEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGComponentContainer.h" // Parent

#include "OSGTreeModelFields.h"         // Model type
#include "OSGSysFields.h"               // Editable type
#include "OSGCellEditorFields.h"        // CellEditor type
#include "OSGComponentGeneratorFields.h" // CellGenerator type
#include "OSGTreeModelLayoutFields.h"   // ModelLayout type

#include "OSGTreeFields.h"

OSG_BEGIN_NAMESPACE

class Tree;

//! \brief Tree Base Class.

class OSG_CONTRIBUSERINTERFACE_DLLMAPPING TreeBase : public ComponentContainer
{
  public:

    typedef ComponentContainer Inherited;
    typedef ComponentContainer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Tree);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ModelFieldId = Inherited::NextFieldId,
        EditableFieldId = ModelFieldId + 1,
        ExpandsSelectedPathsFieldId = EditableFieldId + 1,
        InvokesStopCellEditingFieldId = ExpandsSelectedPathsFieldId + 1,
        RowHeightFieldId = InvokesStopCellEditingFieldId + 1,
        ScrollsOnExpandFieldId = RowHeightFieldId + 1,
        ShowsRootHandlesFieldId = ScrollsOnExpandFieldId + 1,
        ToggleClickCountFieldId = ShowsRootHandlesFieldId + 1,
        VisibleRowCountFieldId = ToggleClickCountFieldId + 1,
        CellEditorFieldId = VisibleRowCountFieldId + 1,
        CellGeneratorFieldId = CellEditorFieldId + 1,
        ModelLayoutFieldId = CellGeneratorFieldId + 1,
        NextFieldId = ModelLayoutFieldId + 1
    };

    static const OSG::BitVector ModelFieldMask =
        (TypeTraits<BitVector>::One << ModelFieldId);
    static const OSG::BitVector EditableFieldMask =
        (TypeTraits<BitVector>::One << EditableFieldId);
    static const OSG::BitVector ExpandsSelectedPathsFieldMask =
        (TypeTraits<BitVector>::One << ExpandsSelectedPathsFieldId);
    static const OSG::BitVector InvokesStopCellEditingFieldMask =
        (TypeTraits<BitVector>::One << InvokesStopCellEditingFieldId);
    static const OSG::BitVector RowHeightFieldMask =
        (TypeTraits<BitVector>::One << RowHeightFieldId);
    static const OSG::BitVector ScrollsOnExpandFieldMask =
        (TypeTraits<BitVector>::One << ScrollsOnExpandFieldId);
    static const OSG::BitVector ShowsRootHandlesFieldMask =
        (TypeTraits<BitVector>::One << ShowsRootHandlesFieldId);
    static const OSG::BitVector ToggleClickCountFieldMask =
        (TypeTraits<BitVector>::One << ToggleClickCountFieldId);
    static const OSG::BitVector VisibleRowCountFieldMask =
        (TypeTraits<BitVector>::One << VisibleRowCountFieldId);
    static const OSG::BitVector CellEditorFieldMask =
        (TypeTraits<BitVector>::One << CellEditorFieldId);
    static const OSG::BitVector CellGeneratorFieldMask =
        (TypeTraits<BitVector>::One << CellGeneratorFieldId);
    static const OSG::BitVector ModelLayoutFieldMask =
        (TypeTraits<BitVector>::One << ModelLayoutFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecTreeModelPtr SFModelType;
    typedef SFBool            SFEditableType;
    typedef SFBool            SFExpandsSelectedPathsType;
    typedef SFBool            SFInvokesStopCellEditingType;
    typedef SFUInt32          SFRowHeightType;
    typedef SFBool            SFScrollsOnExpandType;
    typedef SFBool            SFShowsRootHandlesType;
    typedef SFUInt32          SFToggleClickCountType;
    typedef SFUInt32          SFVisibleRowCountType;
    typedef SFUnrecCellEditorPtr SFCellEditorType;
    typedef SFUnrecComponentGeneratorPtr SFCellGeneratorType;
    typedef SFUnrecTreeModelLayoutPtr SFModelLayoutType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

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

            const SFUnrecTreeModelPtr *getSFModel          (void) const;
                  SFUnrecTreeModelPtr *editSFModel          (void);

                  SFBool              *editSFEditable       (void);
            const SFBool              *getSFEditable        (void) const;

                  SFBool              *editSFExpandsSelectedPaths(void);
            const SFBool              *getSFExpandsSelectedPaths (void) const;

                  SFBool              *editSFInvokesStopCellEditing(void);
            const SFBool              *getSFInvokesStopCellEditing (void) const;

                  SFUInt32            *editSFRowHeight      (void);
            const SFUInt32            *getSFRowHeight       (void) const;

                  SFBool              *editSFScrollsOnExpand(void);
            const SFBool              *getSFScrollsOnExpand (void) const;

                  SFBool              *editSFShowsRootHandles(void);
            const SFBool              *getSFShowsRootHandles (void) const;

                  SFUInt32            *editSFToggleClickCount(void);
            const SFUInt32            *getSFToggleClickCount (void) const;

                  SFUInt32            *editSFVisibleRowCount(void);
            const SFUInt32            *getSFVisibleRowCount (void) const;
            const SFUnrecCellEditorPtr *getSFCellEditor     (void) const;
                  SFUnrecCellEditorPtr *editSFCellEditor     (void);
            const SFUnrecComponentGeneratorPtr *getSFCellGenerator  (void) const;
                  SFUnrecComponentGeneratorPtr *editSFCellGenerator  (void);
            const SFUnrecTreeModelLayoutPtr *getSFModelLayout    (void) const;
                  SFUnrecTreeModelLayoutPtr *editSFModelLayout    (void);


                  TreeModel * getModel          (void) const;

                  bool                &editEditable       (void);
                  bool                 getEditable        (void) const;

                  bool                &editExpandsSelectedPaths(void);
                  bool                 getExpandsSelectedPaths (void) const;

                  bool                &editInvokesStopCellEditing(void);
                  bool                 getInvokesStopCellEditing (void) const;

                  UInt32              &editRowHeight      (void);
                  UInt32               getRowHeight       (void) const;

                  bool                &editScrollsOnExpand(void);
                  bool                 getScrollsOnExpand (void) const;

                  bool                &editShowsRootHandles(void);
                  bool                 getShowsRootHandles (void) const;

                  UInt32              &editToggleClickCount(void);
                  UInt32               getToggleClickCount (void) const;

                  UInt32              &editVisibleRowCount(void);
                  UInt32               getVisibleRowCount (void) const;

                  CellEditor * getCellEditor     (void) const;

                  ComponentGenerator * getCellGenerator  (void) const;

                  TreeModelLayout * getModelLayout    (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setModel          (TreeModel * const value);
            void setEditable       (const bool value);
            void setExpandsSelectedPaths(const bool value);
            void setInvokesStopCellEditing(const bool value);
            void setRowHeight      (const UInt32 value);
            void setScrollsOnExpand(const bool value);
            void setShowsRootHandles(const bool value);
            void setToggleClickCount(const UInt32 value);
            void setVisibleRowCount(const UInt32 value);
            void setCellEditor     (CellEditor * const value);
            void setCellGenerator  (ComponentGenerator * const value);
            void setModelLayout    (TreeModelLayout * const value);

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
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  TreeTransitPtr  create          (void);
    static  Tree           *createEmpty     (void);

    static  TreeTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  Tree            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  TreeTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUnrecTreeModelPtr _sfModel;
    SFBool            _sfEditable;
    SFBool            _sfExpandsSelectedPaths;
    SFBool            _sfInvokesStopCellEditing;
    SFUInt32          _sfRowHeight;
    SFBool            _sfScrollsOnExpand;
    SFBool            _sfShowsRootHandles;
    SFUInt32          _sfToggleClickCount;
    SFUInt32          _sfVisibleRowCount;
    SFUnrecCellEditorPtr _sfCellEditor;
    SFUnrecComponentGeneratorPtr _sfCellGenerator;
    SFUnrecTreeModelLayoutPtr _sfModelLayout;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TreeBase(void);
    TreeBase(const TreeBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TreeBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const Tree *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleModel           (void) const;
    EditFieldHandlePtr editHandleModel          (void);
    GetFieldHandlePtr  getHandleEditable        (void) const;
    EditFieldHandlePtr editHandleEditable       (void);
    GetFieldHandlePtr  getHandleExpandsSelectedPaths (void) const;
    EditFieldHandlePtr editHandleExpandsSelectedPaths(void);
    GetFieldHandlePtr  getHandleInvokesStopCellEditing (void) const;
    EditFieldHandlePtr editHandleInvokesStopCellEditing(void);
    GetFieldHandlePtr  getHandleRowHeight       (void) const;
    EditFieldHandlePtr editHandleRowHeight      (void);
    GetFieldHandlePtr  getHandleScrollsOnExpand (void) const;
    EditFieldHandlePtr editHandleScrollsOnExpand(void);
    GetFieldHandlePtr  getHandleShowsRootHandles (void) const;
    EditFieldHandlePtr editHandleShowsRootHandles(void);
    GetFieldHandlePtr  getHandleToggleClickCount (void) const;
    EditFieldHandlePtr editHandleToggleClickCount(void);
    GetFieldHandlePtr  getHandleVisibleRowCount (void) const;
    EditFieldHandlePtr editHandleVisibleRowCount(void);
    GetFieldHandlePtr  getHandleCellEditor      (void) const;
    EditFieldHandlePtr editHandleCellEditor     (void);
    GetFieldHandlePtr  getHandleCellGenerator   (void) const;
    EditFieldHandlePtr editHandleCellGenerator  (void);
    GetFieldHandlePtr  getHandleModelLayout     (void) const;
    EditFieldHandlePtr editHandleModelLayout    (void);

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

            void execSync (      TreeBase *pFrom,
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

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

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

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TreeBase &source);
};

typedef TreeBase *TreeBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTREEBASE_H_ */
