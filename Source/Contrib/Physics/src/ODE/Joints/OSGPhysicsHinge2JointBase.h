/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com),  Behboud Kalantary         *
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
 **     class PhysicsHinge2Joint
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPHYSICSHINGE2JOINTBASE_H_
#define _OSGPHYSICSHINGE2JOINTBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribPhysicsDef.h"

//#include "OSGBaseTypes.h"

#include "OSGPhysicsJoint.h" // Parent

#include "OSGVecFields.h"               // Anchor type
#include "OSGSysFields.h"               // HiStop type

#include "OSGPhysicsHinge2JointFields.h"

OSG_BEGIN_NAMESPACE

class PhysicsHinge2Joint;

//! \brief PhysicsHinge2Joint Base Class.

class OSG_CONTRIBPHYSICS_DLLMAPPING PhysicsHinge2JointBase : public PhysicsJoint
{
  public:

    typedef PhysicsJoint Inherited;
    typedef PhysicsJoint ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(PhysicsHinge2Joint);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        AnchorFieldId = Inherited::NextFieldId,
        Axis1FieldId = AnchorFieldId + 1,
        Axis2FieldId = Axis1FieldId + 1,
        HiStopFieldId = Axis2FieldId + 1,
        LoStopFieldId = HiStopFieldId + 1,
        BounceFieldId = LoStopFieldId + 1,
        CFMFieldId = BounceFieldId + 1,
        StopERPFieldId = CFMFieldId + 1,
        StopCFMFieldId = StopERPFieldId + 1,
        HiStop2FieldId = StopCFMFieldId + 1,
        LoStop2FieldId = HiStop2FieldId + 1,
        Bounce2FieldId = LoStop2FieldId + 1,
        CFM2FieldId = Bounce2FieldId + 1,
        StopERP2FieldId = CFM2FieldId + 1,
        StopCFM2FieldId = StopERP2FieldId + 1,
        SuspensionERPFieldId = StopCFM2FieldId + 1,
        SuspensionCFMFieldId = SuspensionERPFieldId + 1,
        NextFieldId = SuspensionCFMFieldId + 1
    };

    static const OSG::BitVector AnchorFieldMask =
        (TypeTraits<BitVector>::One << AnchorFieldId);
    static const OSG::BitVector Axis1FieldMask =
        (TypeTraits<BitVector>::One << Axis1FieldId);
    static const OSG::BitVector Axis2FieldMask =
        (TypeTraits<BitVector>::One << Axis2FieldId);
    static const OSG::BitVector HiStopFieldMask =
        (TypeTraits<BitVector>::One << HiStopFieldId);
    static const OSG::BitVector LoStopFieldMask =
        (TypeTraits<BitVector>::One << LoStopFieldId);
    static const OSG::BitVector BounceFieldMask =
        (TypeTraits<BitVector>::One << BounceFieldId);
    static const OSG::BitVector CFMFieldMask =
        (TypeTraits<BitVector>::One << CFMFieldId);
    static const OSG::BitVector StopERPFieldMask =
        (TypeTraits<BitVector>::One << StopERPFieldId);
    static const OSG::BitVector StopCFMFieldMask =
        (TypeTraits<BitVector>::One << StopCFMFieldId);
    static const OSG::BitVector HiStop2FieldMask =
        (TypeTraits<BitVector>::One << HiStop2FieldId);
    static const OSG::BitVector LoStop2FieldMask =
        (TypeTraits<BitVector>::One << LoStop2FieldId);
    static const OSG::BitVector Bounce2FieldMask =
        (TypeTraits<BitVector>::One << Bounce2FieldId);
    static const OSG::BitVector CFM2FieldMask =
        (TypeTraits<BitVector>::One << CFM2FieldId);
    static const OSG::BitVector StopERP2FieldMask =
        (TypeTraits<BitVector>::One << StopERP2FieldId);
    static const OSG::BitVector StopCFM2FieldMask =
        (TypeTraits<BitVector>::One << StopCFM2FieldId);
    static const OSG::BitVector SuspensionERPFieldMask =
        (TypeTraits<BitVector>::One << SuspensionERPFieldId);
    static const OSG::BitVector SuspensionCFMFieldMask =
        (TypeTraits<BitVector>::One << SuspensionCFMFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFVec3f           SFAnchorType;
    typedef SFVec3f           SFAxis1Type;
    typedef SFVec3f           SFAxis2Type;
    typedef SFReal32          SFHiStopType;
    typedef SFReal32          SFLoStopType;
    typedef SFReal32          SFBounceType;
    typedef SFReal32          SFCFMType;
    typedef SFReal32          SFStopERPType;
    typedef SFReal32          SFStopCFMType;
    typedef SFReal32          SFHiStop2Type;
    typedef SFReal32          SFLoStop2Type;
    typedef SFReal32          SFBounce2Type;
    typedef SFReal32          SFCFM2Type;
    typedef SFReal32          SFStopERP2Type;
    typedef SFReal32          SFStopCFM2Type;
    typedef SFReal32          SFSuspensionERPType;
    typedef SFReal32          SFSuspensionCFMType;

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


                  SFVec3f             *editSFAnchor         (void);
            const SFVec3f             *getSFAnchor          (void) const;

                  SFVec3f             *editSFAxis1          (void);
            const SFVec3f             *getSFAxis1           (void) const;

                  SFVec3f             *editSFAxis2          (void);
            const SFVec3f             *getSFAxis2           (void) const;

                  SFReal32            *editSFHiStop         (void);
            const SFReal32            *getSFHiStop          (void) const;

                  SFReal32            *editSFLoStop         (void);
            const SFReal32            *getSFLoStop          (void) const;

                  SFReal32            *editSFBounce         (void);
            const SFReal32            *getSFBounce          (void) const;

                  SFReal32            *editSFCFM            (void);
            const SFReal32            *getSFCFM             (void) const;

                  SFReal32            *editSFStopERP        (void);
            const SFReal32            *getSFStopERP         (void) const;

                  SFReal32            *editSFStopCFM        (void);
            const SFReal32            *getSFStopCFM         (void) const;

                  SFReal32            *editSFHiStop2        (void);
            const SFReal32            *getSFHiStop2         (void) const;

                  SFReal32            *editSFLoStop2        (void);
            const SFReal32            *getSFLoStop2         (void) const;

                  SFReal32            *editSFBounce2        (void);
            const SFReal32            *getSFBounce2         (void) const;

                  SFReal32            *editSFCFM2           (void);
            const SFReal32            *getSFCFM2            (void) const;

                  SFReal32            *editSFStopERP2       (void);
            const SFReal32            *getSFStopERP2        (void) const;

                  SFReal32            *editSFStopCFM2       (void);
            const SFReal32            *getSFStopCFM2        (void) const;

                  SFReal32            *editSFSuspensionERP  (void);
            const SFReal32            *getSFSuspensionERP   (void) const;

                  SFReal32            *editSFSuspensionCFM  (void);
            const SFReal32            *getSFSuspensionCFM   (void) const;


                  Vec3f               &editAnchor         (void);
            const Vec3f               &getAnchor          (void) const;

                  Vec3f               &editAxis1          (void);
            const Vec3f               &getAxis1           (void) const;

                  Vec3f               &editAxis2          (void);
            const Vec3f               &getAxis2           (void) const;

                  Real32              &editHiStop         (void);
                  Real32               getHiStop          (void) const;

                  Real32              &editLoStop         (void);
                  Real32               getLoStop          (void) const;

                  Real32              &editBounce         (void);
                  Real32               getBounce          (void) const;

                  Real32              &editCFM            (void);
                  Real32               getCFM             (void) const;

                  Real32              &editStopERP        (void);
                  Real32               getStopERP         (void) const;

                  Real32              &editStopCFM        (void);
                  Real32               getStopCFM         (void) const;

                  Real32              &editHiStop2        (void);
                  Real32               getHiStop2         (void) const;

                  Real32              &editLoStop2        (void);
                  Real32               getLoStop2         (void) const;

                  Real32              &editBounce2        (void);
                  Real32               getBounce2         (void) const;

                  Real32              &editCFM2           (void);
                  Real32               getCFM2            (void) const;

                  Real32              &editStopERP2       (void);
                  Real32               getStopERP2        (void) const;

                  Real32              &editStopCFM2       (void);
                  Real32               getStopCFM2        (void) const;

                  Real32              &editSuspensionERP  (void);
                  Real32               getSuspensionERP   (void) const;

                  Real32              &editSuspensionCFM  (void);
                  Real32               getSuspensionCFM   (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setAnchor         (const Vec3f &value);
            void setAxis1          (const Vec3f &value);
            void setAxis2          (const Vec3f &value);
            void setHiStop         (const Real32 value);
            void setLoStop         (const Real32 value);
            void setBounce         (const Real32 value);
            void setCFM            (const Real32 value);
            void setStopERP        (const Real32 value);
            void setStopCFM        (const Real32 value);
            void setHiStop2        (const Real32 value);
            void setLoStop2        (const Real32 value);
            void setBounce2        (const Real32 value);
            void setCFM2           (const Real32 value);
            void setStopERP2       (const Real32 value);
            void setStopCFM2       (const Real32 value);
            void setSuspensionERP  (const Real32 value);
            void setSuspensionCFM  (const Real32 value);

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

    static  PhysicsHinge2JointTransitPtr  create          (void);
    static  PhysicsHinge2Joint           *createEmpty     (void);

    static  PhysicsHinge2JointTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  PhysicsHinge2Joint            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  PhysicsHinge2JointTransitPtr  createDependent  (BitVector bFlags);

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

    SFVec3f           _sfAnchor;
    SFVec3f           _sfAxis1;
    SFVec3f           _sfAxis2;
    SFReal32          _sfHiStop;
    SFReal32          _sfLoStop;
    SFReal32          _sfBounce;
    SFReal32          _sfCFM;
    SFReal32          _sfStopERP;
    SFReal32          _sfStopCFM;
    SFReal32          _sfHiStop2;
    SFReal32          _sfLoStop2;
    SFReal32          _sfBounce2;
    SFReal32          _sfCFM2;
    SFReal32          _sfStopERP2;
    SFReal32          _sfStopCFM2;
    SFReal32          _sfSuspensionERP;
    SFReal32          _sfSuspensionCFM;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    PhysicsHinge2JointBase(void);
    PhysicsHinge2JointBase(const PhysicsHinge2JointBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PhysicsHinge2JointBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleAnchor          (void) const;
    EditFieldHandlePtr editHandleAnchor         (void);
    GetFieldHandlePtr  getHandleAxis1           (void) const;
    EditFieldHandlePtr editHandleAxis1          (void);
    GetFieldHandlePtr  getHandleAxis2           (void) const;
    EditFieldHandlePtr editHandleAxis2          (void);
    GetFieldHandlePtr  getHandleHiStop          (void) const;
    EditFieldHandlePtr editHandleHiStop         (void);
    GetFieldHandlePtr  getHandleLoStop          (void) const;
    EditFieldHandlePtr editHandleLoStop         (void);
    GetFieldHandlePtr  getHandleBounce          (void) const;
    EditFieldHandlePtr editHandleBounce         (void);
    GetFieldHandlePtr  getHandleCFM             (void) const;
    EditFieldHandlePtr editHandleCFM            (void);
    GetFieldHandlePtr  getHandleStopERP         (void) const;
    EditFieldHandlePtr editHandleStopERP        (void);
    GetFieldHandlePtr  getHandleStopCFM         (void) const;
    EditFieldHandlePtr editHandleStopCFM        (void);
    GetFieldHandlePtr  getHandleHiStop2         (void) const;
    EditFieldHandlePtr editHandleHiStop2        (void);
    GetFieldHandlePtr  getHandleLoStop2         (void) const;
    EditFieldHandlePtr editHandleLoStop2        (void);
    GetFieldHandlePtr  getHandleBounce2         (void) const;
    EditFieldHandlePtr editHandleBounce2        (void);
    GetFieldHandlePtr  getHandleCFM2            (void) const;
    EditFieldHandlePtr editHandleCFM2           (void);
    GetFieldHandlePtr  getHandleStopERP2        (void) const;
    EditFieldHandlePtr editHandleStopERP2       (void);
    GetFieldHandlePtr  getHandleStopCFM2        (void) const;
    EditFieldHandlePtr editHandleStopCFM2       (void);
    GetFieldHandlePtr  getHandleSuspensionERP   (void) const;
    EditFieldHandlePtr editHandleSuspensionERP  (void);
    GetFieldHandlePtr  getHandleSuspensionCFM   (void) const;
    EditFieldHandlePtr editHandleSuspensionCFM  (void);

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

            void execSync (      PhysicsHinge2JointBase *pFrom,
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
    void operator =(const PhysicsHinge2JointBase &source);
};

typedef PhysicsHinge2JointBase *PhysicsHinge2JointBaseP;

OSG_END_NAMESPACE

#endif /* _OSGPHYSICSHINGE2JOINTBASE_H_ */
