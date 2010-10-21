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
 **     class TreeSelectionEventDetails
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGTREESELECTIONEVENTDETAILSBASE_H_
#define _OSGTREESELECTIONEVENTDETAILSBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGEventDetails.h" // Parent

#include "OSGSysFields.h"               // NewLeadSelectionPath type
#include "OSGVecFields.h"               // ElementsChanged type

#include "OSGTreeSelectionEventDetailsFields.h"

OSG_BEGIN_NAMESPACE

class TreeSelectionEventDetails;

//! \brief TreeSelectionEventDetails Base Class.

class OSG_CONTRIBUSERINTERFACE_DLLMAPPING TreeSelectionEventDetailsBase : public EventDetails
{
  public:

    typedef EventDetails Inherited;
    typedef EventDetails ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(TreeSelectionEventDetails);
    
    

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        NewLeadSelectionPathFieldId = Inherited::NextFieldId,
        OldLeadSelectionPathFieldId = NewLeadSelectionPathFieldId + 1,
        ElementsChangedFieldId = OldLeadSelectionPathFieldId + 1,
        NextFieldId = ElementsChangedFieldId + 1
    };

    static const OSG::BitVector NewLeadSelectionPathFieldMask =
        (TypeTraits<BitVector>::One << NewLeadSelectionPathFieldId);
    static const OSG::BitVector OldLeadSelectionPathFieldMask =
        (TypeTraits<BitVector>::One << OldLeadSelectionPathFieldId);
    static const OSG::BitVector ElementsChangedFieldMask =
        (TypeTraits<BitVector>::One << ElementsChangedFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFInt32           SFNewLeadSelectionPathType;
    typedef SFInt32           SFOldLeadSelectionPathType;
    typedef MFVec2s           MFElementsChangedType;

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


            const SFInt32             *getSFNewLeadSelectionPath (void) const;

            const SFInt32             *getSFOldLeadSelectionPath (void) const;

            const MFVec2s             *getMFElementsChanged (void) const;


                  Int32                getNewLeadSelectionPath (void) const;

                  Int32                getOldLeadSelectionPath (void) const;

            const Vec2s               &getElementsChanged (const UInt32 index) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
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

    static  TreeSelectionEventDetailsTransitPtr  create          (void);
    static  TreeSelectionEventDetails           *createEmpty     (void);

    static  TreeSelectionEventDetailsTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  TreeSelectionEventDetails            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  TreeSelectionEventDetailsTransitPtr  createDependent  (BitVector bFlags);

    static  TreeSelectionEventDetails           *createUnregistered(void);

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

    SFInt32           _sfNewLeadSelectionPath;
    SFInt32           _sfOldLeadSelectionPath;
    MFVec2s           _mfElementsChanged;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    TreeSelectionEventDetailsBase(void);
    TreeSelectionEventDetailsBase(const TreeSelectionEventDetailsBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TreeSelectionEventDetailsBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleNewLeadSelectionPath (void) const;
    EditFieldHandlePtr editHandleNewLeadSelectionPath(void);
    GetFieldHandlePtr  getHandleOldLeadSelectionPath (void) const;
    EditFieldHandlePtr editHandleOldLeadSelectionPath(void);
    GetFieldHandlePtr  getHandleElementsChanged (void) const;
    EditFieldHandlePtr editHandleElementsChanged(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFInt32             *editSFNewLeadSelectionPath(void);

                  SFInt32             *editSFOldLeadSelectionPath(void);

                  MFVec2s             *editMFElementsChanged(void);


                  Int32               &editNewLeadSelectionPath(void);

                  Int32               &editOldLeadSelectionPath(void);

                  Vec2s               &editElementsChanged(const UInt32 index);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setNewLeadSelectionPath(const Int32 value);
            void setOldLeadSelectionPath(const Int32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

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

            void execSync (      TreeSelectionEventDetailsBase *pFrom,
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
    void operator =(const TreeSelectionEventDetailsBase &source);
};

typedef TreeSelectionEventDetailsBase *TreeSelectionEventDetailsBaseP;

OSG_END_NAMESPACE

#endif /* _OSGTREESELECTIONEVENTDETAILSBASE_H_ */
