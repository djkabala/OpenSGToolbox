/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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
 **     class ComboBox
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCOMBOBOXBASE_H_
#define _OSGCOMBOBOXBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "Component/Container/OSGContainer.h" // Parent

#include "Component/Button/OSGToggleButtonFields.h" // ExpandButton type
#include "Component/ComboBox/Editors/OSGComboBoxEditorFields.h" // Editor type
#include <OpenSG/OSGBoolFields.h> // Editable type
#include <OpenSG/OSGUInt32Fields.h> // MaxRowCount type
#include "Component/Menu/OSGPopupMenuFields.h" // ComboListPopupMenu type

#include "OSGComboBoxFields.h"

OSG_BEGIN_NAMESPACE

class ComboBox;
class BinaryDataHandler;

//! \brief ComboBox Base Class.

class OSG_USERINTERFACELIB_DLLMAPPING ComboBoxBase : public Container
{
  private:

    typedef Container    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef ComboBoxPtr  Ptr;

    enum
    {
        ExpandButtonFieldId         = Inherited::NextFieldId,
        EditorFieldId               = ExpandButtonFieldId         + 1,
        RendererSelcetedItemFieldId = EditorFieldId               + 1,
        EditableFieldId             = RendererSelcetedItemFieldId + 1,
        MaxRowCountFieldId          = EditableFieldId             + 1,
        ComboListPopupMenuFieldId   = MaxRowCountFieldId          + 1,
        NextFieldId                 = ComboListPopupMenuFieldId   + 1
    };

    static const OSG::BitVector ExpandButtonFieldMask;
    static const OSG::BitVector EditorFieldMask;
    static const OSG::BitVector RendererSelcetedItemFieldMask;
    static const OSG::BitVector EditableFieldMask;
    static const OSG::BitVector MaxRowCountFieldMask;
    static const OSG::BitVector ComboListPopupMenuFieldMask;


    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFToggleButtonPtr   *getSFExpandButton   (void);
           SFComboBoxEditorPtr *getSFEditor         (void);
           SFBool              *getSFEditable       (void);
           SFUInt32            *getSFMaxRowCount    (void);

           ToggleButtonPtr     &getExpandButton   (void);
     const ToggleButtonPtr     &getExpandButton   (void) const;
           ComboBoxEditorPtr   &getEditor         (void);
     const ComboBoxEditorPtr   &getEditor         (void) const;
           bool                &getEditable       (void);
     const bool                &getEditable       (void) const;
           UInt32              &getMaxRowCount    (void);
     const UInt32              &getMaxRowCount    (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setExpandButton   ( const ToggleButtonPtr &value );
     void setEditor         ( const ComboBoxEditorPtr &value );
     void setEditable       ( const bool &value );
     void setMaxRowCount    ( const UInt32 &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  ComboBoxPtr      create          (void); 
    static  ComboBoxPtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFToggleButtonPtr   _sfExpandButton;
    SFComboBoxEditorPtr   _sfEditor;
    SFComponentPtr      _sfRendererSelcetedItem;
    SFBool              _sfEditable;
    SFUInt32            _sfMaxRowCount;
    SFPopupMenuPtr      _sfComboListPopupMenu;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ComboBoxBase(void);
    ComboBoxBase(const ComboBoxBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ComboBoxBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFComponentPtr      *getSFRendererSelcetedItem(void);
           SFPopupMenuPtr      *getSFComboListPopupMenu(void);

           ComponentPtr        &getRendererSelcetedItem(void);
     const ComponentPtr        &getRendererSelcetedItem(void) const;
           PopupMenuPtr        &getComboListPopupMenu(void);
     const PopupMenuPtr        &getComboListPopupMenu(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setRendererSelcetedItem(const ComponentPtr &value);
     void setComboListPopupMenu(const PopupMenuPtr &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      ComboBoxBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      ComboBoxBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ComboBoxBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef ComboBoxBase *ComboBoxBaseP;

typedef osgIF<ComboBoxBase::isNodeCore,
              CoredNodePtr<ComboBox>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet ComboBoxNodePtr;

typedef RefPtr<ComboBoxPtr> ComboBoxRefPtr;

OSG_END_NAMESPACE

#define OSGCOMBOBOXBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGCOMBOBOXBASE_H_ */