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
 **     class TabPanel
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTABPANELBASE_H_
#define _OSGTABPANELBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGUserInterfaceDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGContainer.h" // Parent

#include "Component/OSGComponent.h" // Tabs type
#include "Component/OSGComponent.h" // TabContents type
#include <OpenSG/OSGUInt32Fields.h> // TabPlacement type
#include <OpenSG/OSGReal32Fields.h> // TabAlignment type
#include <OpenSG/OSGUInt32Fields.h> // TabRotation type
#include <OpenSG/OSGVec2fFields.h> // TabBorderInsets type
#include "Border/OSGBorder.h" // TabBorder type
#include "Layer/OSGLayer.h" // TabBackground type
#include "Border/OSGBorder.h" // TabDisabledBorder type
#include "Layer/OSGLayer.h" // TabDisabledBackground type
#include "Border/OSGBorder.h" // TabFocusedBorder type
#include "Layer/OSGLayer.h" // TabFocusedBackground type
#include "Border/OSGBorder.h" // TabRolloverBorder type
#include "Layer/OSGLayer.h" // TabRolloverBackground type
#include "Border/OSGBorder.h" // TabActiveBorder type
#include "Layer/OSGLayer.h" // TabActiveBackground type
#include <OpenSG/OSGVec2fFields.h> // ContentBorderInsets type
#include "Border/OSGBorder.h" // ContentBorder type
#include "Layer/OSGLayer.h" // ContentBackground type
#include "Border/OSGBorder.h" // ContentDisabledBorder type
#include "Layer/OSGLayer.h" // ContentDisabledBackground type
#include "Border/OSGBorder.h" // ContentRolloverBorder type
#include "Layer/OSGLayer.h" // ContentRolloverBackground type
#include "Models/SelectionModels/OSGSingleSelectionModelFields.h" // SelectionModel type
#include "Layer/OSGLayer.h" // TabForeground type
#include "Layer/OSGLayer.h" // TabDisabledForeground type
#include "Layer/OSGLayer.h" // TabFocusedForeground type
#include "Layer/OSGLayer.h" // TabRolloverForeground type
#include "Layer/OSGLayer.h" // TabActiveForeground type
#include "Layer/OSGLayer.h" // ContentForeground type
#include "Layer/OSGLayer.h" // ContentDisabledForeground type
#include "Layer/OSGLayer.h" // ContentRolloverForeground type

#include "OSGTabPanelFields.h"

OSG_BEGIN_NAMESPACE

class TabPanel;
class BinaryDataHandler;

//! \brief TabPanel Base Class.

class OSG_USERINTERFACELIB_DLLMAPPING TabPanelBase : public Container
{
  private:

    typedef Container    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef TabPanelPtr  Ptr;

    enum
    {
        TabsFieldId                      = Inherited::NextFieldId,
        TabContentsFieldId               = TabsFieldId                      + 1,
        TabPlacementFieldId              = TabContentsFieldId               + 1,
        TabAlignmentFieldId              = TabPlacementFieldId              + 1,
        TabRotationFieldId               = TabAlignmentFieldId              + 1,
        TabBorderInsetsFieldId           = TabRotationFieldId               + 1,
        TabBorderFieldId                 = TabBorderInsetsFieldId           + 1,
        TabBackgroundFieldId             = TabBorderFieldId                 + 1,
        TabDisabledBorderFieldId         = TabBackgroundFieldId             + 1,
        TabDisabledBackgroundFieldId     = TabDisabledBorderFieldId         + 1,
        TabFocusedBorderFieldId          = TabDisabledBackgroundFieldId     + 1,
        TabFocusedBackgroundFieldId      = TabFocusedBorderFieldId          + 1,
        TabRolloverBorderFieldId         = TabFocusedBackgroundFieldId      + 1,
        TabRolloverBackgroundFieldId     = TabRolloverBorderFieldId         + 1,
        TabActiveBorderFieldId           = TabRolloverBackgroundFieldId     + 1,
        TabActiveBackgroundFieldId       = TabActiveBorderFieldId           + 1,
        ContentBorderInsetsFieldId       = TabActiveBackgroundFieldId       + 1,
        ContentBorderFieldId             = ContentBorderInsetsFieldId       + 1,
        ContentBackgroundFieldId         = ContentBorderFieldId             + 1,
        ContentDisabledBorderFieldId     = ContentBackgroundFieldId         + 1,
        ContentDisabledBackgroundFieldId = ContentDisabledBorderFieldId     + 1,
        ContentRolloverBorderFieldId     = ContentDisabledBackgroundFieldId + 1,
        ContentRolloverBackgroundFieldId = ContentRolloverBorderFieldId     + 1,
        SelectionModelFieldId            = ContentRolloverBackgroundFieldId + 1,
        TabForegroundFieldId             = SelectionModelFieldId            + 1,
        TabDisabledForegroundFieldId     = TabForegroundFieldId             + 1,
        TabFocusedForegroundFieldId      = TabDisabledForegroundFieldId     + 1,
        TabRolloverForegroundFieldId     = TabFocusedForegroundFieldId      + 1,
        TabActiveForegroundFieldId       = TabRolloverForegroundFieldId     + 1,
        ContentForegroundFieldId         = TabActiveForegroundFieldId       + 1,
        ContentDisabledForegroundFieldId = ContentForegroundFieldId         + 1,
        ContentRolloverForegroundFieldId = ContentDisabledForegroundFieldId + 1,
        NextFieldId                      = ContentRolloverForegroundFieldId + 1
    };

    static const OSG::BitVector TabsFieldMask;
    static const OSG::BitVector TabContentsFieldMask;
    static const OSG::BitVector TabPlacementFieldMask;
    static const OSG::BitVector TabAlignmentFieldMask;
    static const OSG::BitVector TabRotationFieldMask;
    static const OSG::BitVector TabBorderInsetsFieldMask;
    static const OSG::BitVector TabBorderFieldMask;
    static const OSG::BitVector TabBackgroundFieldMask;
    static const OSG::BitVector TabDisabledBorderFieldMask;
    static const OSG::BitVector TabDisabledBackgroundFieldMask;
    static const OSG::BitVector TabFocusedBorderFieldMask;
    static const OSG::BitVector TabFocusedBackgroundFieldMask;
    static const OSG::BitVector TabRolloverBorderFieldMask;
    static const OSG::BitVector TabRolloverBackgroundFieldMask;
    static const OSG::BitVector TabActiveBorderFieldMask;
    static const OSG::BitVector TabActiveBackgroundFieldMask;
    static const OSG::BitVector ContentBorderInsetsFieldMask;
    static const OSG::BitVector ContentBorderFieldMask;
    static const OSG::BitVector ContentBackgroundFieldMask;
    static const OSG::BitVector ContentDisabledBorderFieldMask;
    static const OSG::BitVector ContentDisabledBackgroundFieldMask;
    static const OSG::BitVector ContentRolloverBorderFieldMask;
    static const OSG::BitVector ContentRolloverBackgroundFieldMask;
    static const OSG::BitVector SelectionModelFieldMask;
    static const OSG::BitVector TabForegroundFieldMask;
    static const OSG::BitVector TabDisabledForegroundFieldMask;
    static const OSG::BitVector TabFocusedForegroundFieldMask;
    static const OSG::BitVector TabRolloverForegroundFieldMask;
    static const OSG::BitVector TabActiveForegroundFieldMask;
    static const OSG::BitVector ContentForegroundFieldMask;
    static const OSG::BitVector ContentDisabledForegroundFieldMask;
    static const OSG::BitVector ContentRolloverForegroundFieldMask;


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

           MFComponentPtr      *getMFTabs           (void);
           MFComponentPtr      *getMFTabContents    (void);
           SFUInt32            *getSFTabPlacement   (void);
           SFReal32            *getSFTabAlignment   (void);
           SFUInt32            *getSFTabRotation    (void);
           SFVec2f             *getSFTabBorderInsets(void);
           SFBorderPtr         *getSFTabBorder      (void);
           SFLayerPtr          *getSFTabBackground  (void);
           SFBorderPtr         *getSFTabDisabledBorder(void);
           SFLayerPtr          *getSFTabDisabledBackground(void);
           SFBorderPtr         *getSFTabFocusedBorder(void);
           SFLayerPtr          *getSFTabFocusedBackground(void);
           SFBorderPtr         *getSFTabRolloverBorder(void);
           SFLayerPtr          *getSFTabRolloverBackground(void);
           SFBorderPtr         *getSFTabActiveBorder(void);
           SFLayerPtr          *getSFTabActiveBackground(void);
           SFVec2f             *getSFContentBorderInsets(void);
           SFBorderPtr         *getSFContentBorder  (void);
           SFLayerPtr          *getSFContentBackground(void);
           SFBorderPtr         *getSFContentDisabledBorder(void);
           SFLayerPtr          *getSFContentDisabledBackground(void);
           SFBorderPtr         *getSFContentRolloverBorder(void);
           SFLayerPtr          *getSFContentRolloverBackground(void);
           SFSingleSelectionModelPtr *getSFSelectionModel (void);
           SFLayerPtr          *getSFTabForeground  (void);
           SFLayerPtr          *getSFTabDisabledForeground(void);
           SFLayerPtr          *getSFTabFocusedForeground(void);
           SFLayerPtr          *getSFTabRolloverForeground(void);
           SFLayerPtr          *getSFTabActiveForeground(void);
           SFLayerPtr          *getSFContentForeground(void);
           SFLayerPtr          *getSFContentDisabledForeground(void);
           SFLayerPtr          *getSFContentRolloverForeground(void);

           UInt32              &getTabPlacement   (void);
     const UInt32              &getTabPlacement   (void) const;
           Real32              &getTabAlignment   (void);
     const Real32              &getTabAlignment   (void) const;
           UInt32              &getTabRotation    (void);
     const UInt32              &getTabRotation    (void) const;
           Vec2f               &getTabBorderInsets(void);
     const Vec2f               &getTabBorderInsets(void) const;
           BorderPtr           &getTabBorder      (void);
     const BorderPtr           &getTabBorder      (void) const;
           LayerPtr            &getTabBackground  (void);
     const LayerPtr            &getTabBackground  (void) const;
           BorderPtr           &getTabDisabledBorder(void);
     const BorderPtr           &getTabDisabledBorder(void) const;
           LayerPtr            &getTabDisabledBackground(void);
     const LayerPtr            &getTabDisabledBackground(void) const;
           BorderPtr           &getTabFocusedBorder(void);
     const BorderPtr           &getTabFocusedBorder(void) const;
           LayerPtr            &getTabFocusedBackground(void);
     const LayerPtr            &getTabFocusedBackground(void) const;
           BorderPtr           &getTabRolloverBorder(void);
     const BorderPtr           &getTabRolloverBorder(void) const;
           LayerPtr            &getTabRolloverBackground(void);
     const LayerPtr            &getTabRolloverBackground(void) const;
           BorderPtr           &getTabActiveBorder(void);
     const BorderPtr           &getTabActiveBorder(void) const;
           LayerPtr            &getTabActiveBackground(void);
     const LayerPtr            &getTabActiveBackground(void) const;
           Vec2f               &getContentBorderInsets(void);
     const Vec2f               &getContentBorderInsets(void) const;
           BorderPtr           &getContentBorder  (void);
     const BorderPtr           &getContentBorder  (void) const;
           LayerPtr            &getContentBackground(void);
     const LayerPtr            &getContentBackground(void) const;
           BorderPtr           &getContentDisabledBorder(void);
     const BorderPtr           &getContentDisabledBorder(void) const;
           LayerPtr            &getContentDisabledBackground(void);
     const LayerPtr            &getContentDisabledBackground(void) const;
           BorderPtr           &getContentRolloverBorder(void);
     const BorderPtr           &getContentRolloverBorder(void) const;
           LayerPtr            &getContentRolloverBackground(void);
     const LayerPtr            &getContentRolloverBackground(void) const;
           SingleSelectionModelPtr &getSelectionModel (void);
     const SingleSelectionModelPtr &getSelectionModel (void) const;
           LayerPtr            &getTabForeground  (void);
     const LayerPtr            &getTabForeground  (void) const;
           LayerPtr            &getTabDisabledForeground(void);
     const LayerPtr            &getTabDisabledForeground(void) const;
           LayerPtr            &getTabFocusedForeground(void);
     const LayerPtr            &getTabFocusedForeground(void) const;
           LayerPtr            &getTabRolloverForeground(void);
     const LayerPtr            &getTabRolloverForeground(void) const;
           LayerPtr            &getTabActiveForeground(void);
     const LayerPtr            &getTabActiveForeground(void) const;
           LayerPtr            &getContentForeground(void);
     const LayerPtr            &getContentForeground(void) const;
           LayerPtr            &getContentDisabledForeground(void);
     const LayerPtr            &getContentDisabledForeground(void) const;
           LayerPtr            &getContentRolloverForeground(void);
     const LayerPtr            &getContentRolloverForeground(void) const;
           ComponentPtr        &getTabs           (const UInt32 index);
           MFComponentPtr      &getTabs           (void);
     const MFComponentPtr      &getTabs           (void) const;
           ComponentPtr        &getTabContents    (const UInt32 index);
           MFComponentPtr      &getTabContents    (void);
     const MFComponentPtr      &getTabContents    (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setTabPlacement   ( const UInt32 &value );
     void setTabAlignment   ( const Real32 &value );
     void setTabRotation    ( const UInt32 &value );
     void setTabBorderInsets( const Vec2f &value );
     void setTabBorder      ( const BorderPtr &value );
     void setTabBackground  ( const LayerPtr &value );
     void setTabDisabledBorder( const BorderPtr &value );
     void setTabDisabledBackground( const LayerPtr &value );
     void setTabFocusedBorder( const BorderPtr &value );
     void setTabFocusedBackground( const LayerPtr &value );
     void setTabRolloverBorder( const BorderPtr &value );
     void setTabRolloverBackground( const LayerPtr &value );
     void setTabActiveBorder( const BorderPtr &value );
     void setTabActiveBackground( const LayerPtr &value );
     void setContentBorderInsets( const Vec2f &value );
     void setContentBorder  ( const BorderPtr &value );
     void setContentBackground( const LayerPtr &value );
     void setContentDisabledBorder( const BorderPtr &value );
     void setContentDisabledBackground( const LayerPtr &value );
     void setContentRolloverBorder( const BorderPtr &value );
     void setContentRolloverBackground( const LayerPtr &value );
     void setSelectionModel ( const SingleSelectionModelPtr &value );
     void setTabForeground  ( const LayerPtr &value );
     void setTabDisabledForeground( const LayerPtr &value );
     void setTabFocusedForeground( const LayerPtr &value );
     void setTabRolloverForeground( const LayerPtr &value );
     void setTabActiveForeground( const LayerPtr &value );
     void setContentForeground( const LayerPtr &value );
     void setContentDisabledForeground( const LayerPtr &value );
     void setContentRolloverForeground( const LayerPtr &value );

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

    static  TabPanelPtr      create          (void); 
    static  TabPanelPtr      createEmpty     (void); 

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

    MFComponentPtr      _mfTabs;
    MFComponentPtr      _mfTabContents;
    SFUInt32            _sfTabPlacement;
    SFReal32            _sfTabAlignment;
    SFUInt32            _sfTabRotation;
    SFVec2f             _sfTabBorderInsets;
    SFBorderPtr         _sfTabBorder;
    SFLayerPtr          _sfTabBackground;
    SFBorderPtr         _sfTabDisabledBorder;
    SFLayerPtr          _sfTabDisabledBackground;
    SFBorderPtr         _sfTabFocusedBorder;
    SFLayerPtr          _sfTabFocusedBackground;
    SFBorderPtr         _sfTabRolloverBorder;
    SFLayerPtr          _sfTabRolloverBackground;
    SFBorderPtr         _sfTabActiveBorder;
    SFLayerPtr          _sfTabActiveBackground;
    SFVec2f             _sfContentBorderInsets;
    SFBorderPtr         _sfContentBorder;
    SFLayerPtr          _sfContentBackground;
    SFBorderPtr         _sfContentDisabledBorder;
    SFLayerPtr          _sfContentDisabledBackground;
    SFBorderPtr         _sfContentRolloverBorder;
    SFLayerPtr          _sfContentRolloverBackground;
    SFSingleSelectionModelPtr   _sfSelectionModel;
    SFLayerPtr          _sfTabForeground;
    SFLayerPtr          _sfTabDisabledForeground;
    SFLayerPtr          _sfTabFocusedForeground;
    SFLayerPtr          _sfTabRolloverForeground;
    SFLayerPtr          _sfTabActiveForeground;
    SFLayerPtr          _sfContentForeground;
    SFLayerPtr          _sfContentDisabledForeground;
    SFLayerPtr          _sfContentRolloverForeground;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TabPanelBase(void);
    TabPanelBase(const TabPanelBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TabPanelBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      TabPanelBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      TabPanelBase *pOther,
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
    void operator =(const TabPanelBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef TabPanelBase *TabPanelBaseP;

typedef osgIF<TabPanelBase::isNodeCore,
              CoredNodePtr<TabPanel>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet TabPanelNodePtr;

typedef RefPtr<TabPanelPtr> TabPanelRefPtr;

OSG_END_NAMESPACE

#define OSGTABPANELBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGTABPANELBASE_H_ */
