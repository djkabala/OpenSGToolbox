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
 **     class PhysicsBody
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPHYSICSBODYBASE_H_
#define _OSGPHYSICSBODYBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribPhysicsDef.h"

//#include "OSGBaseTypes.h"

#include "OSGAttachment.h" // Parent

#include "OSGVecFields.h"               // Position type
#include "OSGMathFields.h"              // Rotation type
#include "OSGSysFields.h"               // Mass type
#include "OSGPhysicsWorldFields.h"      // World type

#include "OSGPhysicsBodyFields.h"

OSG_BEGIN_NAMESPACE

class PhysicsBody;

//! \brief PhysicsBody Base Class.

class OSG_CONTRIBPHYSICS_DLLMAPPING PhysicsBodyBase : public Attachment
{
  public:

    typedef Attachment Inherited;
    typedef Attachment ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(PhysicsBody);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        PositionFieldId = Inherited::NextFieldId,
        RotationFieldId = PositionFieldId + 1,
        QuaternionFieldId = RotationFieldId + 1,
        LinearVelFieldId = QuaternionFieldId + 1,
        AngularVelFieldId = LinearVelFieldId + 1,
        ForceFieldId = AngularVelFieldId + 1,
        TorqueFieldId = ForceFieldId + 1,
        MassFieldId = TorqueFieldId + 1,
        MassCenterOfGravityFieldId = MassFieldId + 1,
        MassInertiaTensorFieldId = MassCenterOfGravityFieldId + 1,
        AutoDisableFlagFieldId = MassInertiaTensorFieldId + 1,
        AutoDisableLinearThresholdFieldId = AutoDisableFlagFieldId + 1,
        AutoDisableAngularThresholdFieldId = AutoDisableLinearThresholdFieldId + 1,
        AutoDisableStepsFieldId = AutoDisableAngularThresholdFieldId + 1,
        AutoDisableTimeFieldId = AutoDisableStepsFieldId + 1,
        FiniteRotationModeFieldId = AutoDisableTimeFieldId + 1,
        FiniteRotationAxisFieldId = FiniteRotationModeFieldId + 1,
        GravityModeFieldId = FiniteRotationAxisFieldId + 1,
        LinearDampingFieldId = GravityModeFieldId + 1,
        AngularDampingFieldId = LinearDampingFieldId + 1,
        LinearDampingThresholdFieldId = AngularDampingFieldId + 1,
        AngularDampingThresholdFieldId = LinearDampingThresholdFieldId + 1,
        MaxAngularSpeedFieldId = AngularDampingThresholdFieldId + 1,
        KinematicFieldId = MaxAngularSpeedFieldId + 1,
        WorldFieldId = KinematicFieldId + 1,
        NextFieldId = WorldFieldId + 1
    };

    static const OSG::BitVector PositionFieldMask =
        (TypeTraits<BitVector>::One << PositionFieldId);
    static const OSG::BitVector RotationFieldMask =
        (TypeTraits<BitVector>::One << RotationFieldId);
    static const OSG::BitVector QuaternionFieldMask =
        (TypeTraits<BitVector>::One << QuaternionFieldId);
    static const OSG::BitVector LinearVelFieldMask =
        (TypeTraits<BitVector>::One << LinearVelFieldId);
    static const OSG::BitVector AngularVelFieldMask =
        (TypeTraits<BitVector>::One << AngularVelFieldId);
    static const OSG::BitVector ForceFieldMask =
        (TypeTraits<BitVector>::One << ForceFieldId);
    static const OSG::BitVector TorqueFieldMask =
        (TypeTraits<BitVector>::One << TorqueFieldId);
    static const OSG::BitVector MassFieldMask =
        (TypeTraits<BitVector>::One << MassFieldId);
    static const OSG::BitVector MassCenterOfGravityFieldMask =
        (TypeTraits<BitVector>::One << MassCenterOfGravityFieldId);
    static const OSG::BitVector MassInertiaTensorFieldMask =
        (TypeTraits<BitVector>::One << MassInertiaTensorFieldId);
    static const OSG::BitVector AutoDisableFlagFieldMask =
        (TypeTraits<BitVector>::One << AutoDisableFlagFieldId);
    static const OSG::BitVector AutoDisableLinearThresholdFieldMask =
        (TypeTraits<BitVector>::One << AutoDisableLinearThresholdFieldId);
    static const OSG::BitVector AutoDisableAngularThresholdFieldMask =
        (TypeTraits<BitVector>::One << AutoDisableAngularThresholdFieldId);
    static const OSG::BitVector AutoDisableStepsFieldMask =
        (TypeTraits<BitVector>::One << AutoDisableStepsFieldId);
    static const OSG::BitVector AutoDisableTimeFieldMask =
        (TypeTraits<BitVector>::One << AutoDisableTimeFieldId);
    static const OSG::BitVector FiniteRotationModeFieldMask =
        (TypeTraits<BitVector>::One << FiniteRotationModeFieldId);
    static const OSG::BitVector FiniteRotationAxisFieldMask =
        (TypeTraits<BitVector>::One << FiniteRotationAxisFieldId);
    static const OSG::BitVector GravityModeFieldMask =
        (TypeTraits<BitVector>::One << GravityModeFieldId);
    static const OSG::BitVector LinearDampingFieldMask =
        (TypeTraits<BitVector>::One << LinearDampingFieldId);
    static const OSG::BitVector AngularDampingFieldMask =
        (TypeTraits<BitVector>::One << AngularDampingFieldId);
    static const OSG::BitVector LinearDampingThresholdFieldMask =
        (TypeTraits<BitVector>::One << LinearDampingThresholdFieldId);
    static const OSG::BitVector AngularDampingThresholdFieldMask =
        (TypeTraits<BitVector>::One << AngularDampingThresholdFieldId);
    static const OSG::BitVector MaxAngularSpeedFieldMask =
        (TypeTraits<BitVector>::One << MaxAngularSpeedFieldId);
    static const OSG::BitVector KinematicFieldMask =
        (TypeTraits<BitVector>::One << KinematicFieldId);
    static const OSG::BitVector WorldFieldMask =
        (TypeTraits<BitVector>::One << WorldFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFVec3f           SFPositionType;
    typedef SFMatrix          SFRotationType;
    typedef SFQuaternion      SFQuaternionType;
    typedef SFVec3f           SFLinearVelType;
    typedef SFVec3f           SFAngularVelType;
    typedef SFVec3f           SFForceType;
    typedef SFVec3f           SFTorqueType;
    typedef SFReal32          SFMassType;
    typedef SFVec3f           SFMassCenterOfGravityType;
    typedef SFMatrix          SFMassInertiaTensorType;
    typedef SFInt32           SFAutoDisableFlagType;
    typedef SFReal32          SFAutoDisableLinearThresholdType;
    typedef SFReal32          SFAutoDisableAngularThresholdType;
    typedef SFInt32           SFAutoDisableStepsType;
    typedef SFReal32          SFAutoDisableTimeType;
    typedef SFInt32           SFFiniteRotationModeType;
    typedef SFVec3f           SFFiniteRotationAxisType;
    typedef SFBool            SFGravityModeType;
    typedef SFReal32          SFLinearDampingType;
    typedef SFReal32          SFAngularDampingType;
    typedef SFReal32          SFLinearDampingThresholdType;
    typedef SFReal32          SFAngularDampingThresholdType;
    typedef SFReal32          SFMaxAngularSpeedType;
    typedef SFBool            SFKinematicType;
    typedef SFUnrecPhysicsWorldPtr SFWorldType;

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


                  SFVec3f             *editSFPosition       (void);
            const SFVec3f             *getSFPosition        (void) const;

                  SFMatrix            *editSFRotation       (void);
            const SFMatrix            *getSFRotation        (void) const;

                  SFQuaternion        *editSFQuaternion     (void);
            const SFQuaternion        *getSFQuaternion      (void) const;

                  SFVec3f             *editSFLinearVel      (void);
            const SFVec3f             *getSFLinearVel       (void) const;

                  SFVec3f             *editSFAngularVel     (void);
            const SFVec3f             *getSFAngularVel      (void) const;

                  SFVec3f             *editSFForce          (void);
            const SFVec3f             *getSFForce           (void) const;

                  SFVec3f             *editSFTorque         (void);
            const SFVec3f             *getSFTorque          (void) const;

                  SFReal32            *editSFMass           (void);
            const SFReal32            *getSFMass            (void) const;

                  SFVec3f             *editSFMassCenterOfGravity(void);
            const SFVec3f             *getSFMassCenterOfGravity (void) const;

                  SFMatrix            *editSFMassInertiaTensor(void);
            const SFMatrix            *getSFMassInertiaTensor (void) const;

                  SFInt32             *editSFAutoDisableFlag(void);
            const SFInt32             *getSFAutoDisableFlag (void) const;

                  SFReal32            *editSFAutoDisableLinearThreshold(void);
            const SFReal32            *getSFAutoDisableLinearThreshold (void) const;

                  SFReal32            *editSFAutoDisableAngularThreshold(void);
            const SFReal32            *getSFAutoDisableAngularThreshold (void) const;

                  SFInt32             *editSFAutoDisableSteps(void);
            const SFInt32             *getSFAutoDisableSteps (void) const;

                  SFReal32            *editSFAutoDisableTime(void);
            const SFReal32            *getSFAutoDisableTime (void) const;

                  SFInt32             *editSFFiniteRotationMode(void);
            const SFInt32             *getSFFiniteRotationMode (void) const;

                  SFVec3f             *editSFFiniteRotationAxis(void);
            const SFVec3f             *getSFFiniteRotationAxis (void) const;

                  SFBool              *editSFGravityMode    (void);
            const SFBool              *getSFGravityMode     (void) const;

                  SFReal32            *editSFLinearDamping  (void);
            const SFReal32            *getSFLinearDamping   (void) const;

                  SFReal32            *editSFAngularDamping (void);
            const SFReal32            *getSFAngularDamping  (void) const;

                  SFReal32            *editSFLinearDampingThreshold(void);
            const SFReal32            *getSFLinearDampingThreshold (void) const;

                  SFReal32            *editSFAngularDampingThreshold(void);
            const SFReal32            *getSFAngularDampingThreshold (void) const;

                  SFReal32            *editSFMaxAngularSpeed(void);
            const SFReal32            *getSFMaxAngularSpeed (void) const;

                  SFBool              *editSFKinematic      (void);
            const SFBool              *getSFKinematic       (void) const;
            const SFUnrecPhysicsWorldPtr *getSFWorld          (void) const;
                  SFUnrecPhysicsWorldPtr *editSFWorld          (void);


                  Vec3f               &editPosition       (void);
            const Vec3f               &getPosition        (void) const;

                  Matrix              &editRotation       (void);
            const Matrix              &getRotation        (void) const;

                  Quaternion          &editQuaternion     (void);
            const Quaternion          &getQuaternion      (void) const;

                  Vec3f               &editLinearVel      (void);
            const Vec3f               &getLinearVel       (void) const;

                  Vec3f               &editAngularVel     (void);
            const Vec3f               &getAngularVel      (void) const;

                  Vec3f               &editForce          (void);
            const Vec3f               &getForce           (void) const;

                  Vec3f               &editTorque         (void);
            const Vec3f               &getTorque          (void) const;

                  Real32              &editMass           (void);
                  Real32               getMass            (void) const;

                  Vec3f               &editMassCenterOfGravity(void);
            const Vec3f               &getMassCenterOfGravity (void) const;

                  Matrix              &editMassInertiaTensor(void);
            const Matrix              &getMassInertiaTensor (void) const;

                  Int32               &editAutoDisableFlag(void);
                  Int32                getAutoDisableFlag (void) const;

                  Real32              &editAutoDisableLinearThreshold(void);
                  Real32               getAutoDisableLinearThreshold (void) const;

                  Real32              &editAutoDisableAngularThreshold(void);
                  Real32               getAutoDisableAngularThreshold (void) const;

                  Int32               &editAutoDisableSteps(void);
                  Int32                getAutoDisableSteps (void) const;

                  Real32              &editAutoDisableTime(void);
                  Real32               getAutoDisableTime (void) const;

                  Int32               &editFiniteRotationMode(void);
                  Int32                getFiniteRotationMode (void) const;

                  Vec3f               &editFiniteRotationAxis(void);
            const Vec3f               &getFiniteRotationAxis (void) const;

                  bool                &editGravityMode    (void);
                  bool                 getGravityMode     (void) const;

                  Real32              &editLinearDamping  (void);
                  Real32               getLinearDamping   (void) const;

                  Real32              &editAngularDamping (void);
                  Real32               getAngularDamping  (void) const;

                  Real32              &editLinearDampingThreshold(void);
                  Real32               getLinearDampingThreshold (void) const;

                  Real32              &editAngularDampingThreshold(void);
                  Real32               getAngularDampingThreshold (void) const;

                  Real32              &editMaxAngularSpeed(void);
                  Real32               getMaxAngularSpeed (void) const;

                  bool                &editKinematic      (void);
                  bool                 getKinematic       (void) const;

                  PhysicsWorld * getWorld          (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setPosition       (const Vec3f &value);
            void setRotation       (const Matrix &value);
            void setQuaternion     (const Quaternion &value);
            void setLinearVel      (const Vec3f &value);
            void setAngularVel     (const Vec3f &value);
            void setForce          (const Vec3f &value);
            void setTorque         (const Vec3f &value);
            void setMass           (const Real32 value);
            void setMassCenterOfGravity(const Vec3f &value);
            void setMassInertiaTensor(const Matrix &value);
            void setAutoDisableFlag(const Int32 value);
            void setAutoDisableLinearThreshold(const Real32 value);
            void setAutoDisableAngularThreshold(const Real32 value);
            void setAutoDisableSteps(const Int32 value);
            void setAutoDisableTime(const Real32 value);
            void setFiniteRotationMode(const Int32 value);
            void setFiniteRotationAxis(const Vec3f &value);
            void setGravityMode    (const bool value);
            void setLinearDamping  (const Real32 value);
            void setAngularDamping (const Real32 value);
            void setLinearDampingThreshold(const Real32 value);
            void setAngularDampingThreshold(const Real32 value);
            void setMaxAngularSpeed(const Real32 value);
            void setKinematic      (const bool value);
            void setWorld          (PhysicsWorld * const value);

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

    static  PhysicsBodyTransitPtr  create          (void);
    static  PhysicsBody           *createEmpty     (void);

    static  PhysicsBodyTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  PhysicsBody            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  PhysicsBodyTransitPtr  createDependent  (BitVector bFlags);

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

    SFVec3f           _sfPosition;
    SFMatrix          _sfRotation;
    SFQuaternion      _sfQuaternion;
    SFVec3f           _sfLinearVel;
    SFVec3f           _sfAngularVel;
    SFVec3f           _sfForce;
    SFVec3f           _sfTorque;
    SFReal32          _sfMass;
    SFVec3f           _sfMassCenterOfGravity;
    SFMatrix          _sfMassInertiaTensor;
    SFInt32           _sfAutoDisableFlag;
    SFReal32          _sfAutoDisableLinearThreshold;
    SFReal32          _sfAutoDisableAngularThreshold;
    SFInt32           _sfAutoDisableSteps;
    SFReal32          _sfAutoDisableTime;
    SFInt32           _sfFiniteRotationMode;
    SFVec3f           _sfFiniteRotationAxis;
    SFBool            _sfGravityMode;
    SFReal32          _sfLinearDamping;
    SFReal32          _sfAngularDamping;
    SFReal32          _sfLinearDampingThreshold;
    SFReal32          _sfAngularDampingThreshold;
    SFReal32          _sfMaxAngularSpeed;
    SFBool            _sfKinematic;
    SFUnrecPhysicsWorldPtr _sfWorld;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    PhysicsBodyBase(void);
    PhysicsBodyBase(const PhysicsBodyBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PhysicsBodyBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const PhysicsBody *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandlePosition        (void) const;
    EditFieldHandlePtr editHandlePosition       (void);
    GetFieldHandlePtr  getHandleRotation        (void) const;
    EditFieldHandlePtr editHandleRotation       (void);
    GetFieldHandlePtr  getHandleQuaternion      (void) const;
    EditFieldHandlePtr editHandleQuaternion     (void);
    GetFieldHandlePtr  getHandleLinearVel       (void) const;
    EditFieldHandlePtr editHandleLinearVel      (void);
    GetFieldHandlePtr  getHandleAngularVel      (void) const;
    EditFieldHandlePtr editHandleAngularVel     (void);
    GetFieldHandlePtr  getHandleForce           (void) const;
    EditFieldHandlePtr editHandleForce          (void);
    GetFieldHandlePtr  getHandleTorque          (void) const;
    EditFieldHandlePtr editHandleTorque         (void);
    GetFieldHandlePtr  getHandleMass            (void) const;
    EditFieldHandlePtr editHandleMass           (void);
    GetFieldHandlePtr  getHandleMassCenterOfGravity (void) const;
    EditFieldHandlePtr editHandleMassCenterOfGravity(void);
    GetFieldHandlePtr  getHandleMassInertiaTensor (void) const;
    EditFieldHandlePtr editHandleMassInertiaTensor(void);
    GetFieldHandlePtr  getHandleAutoDisableFlag (void) const;
    EditFieldHandlePtr editHandleAutoDisableFlag(void);
    GetFieldHandlePtr  getHandleAutoDisableLinearThreshold (void) const;
    EditFieldHandlePtr editHandleAutoDisableLinearThreshold(void);
    GetFieldHandlePtr  getHandleAutoDisableAngularThreshold (void) const;
    EditFieldHandlePtr editHandleAutoDisableAngularThreshold(void);
    GetFieldHandlePtr  getHandleAutoDisableSteps (void) const;
    EditFieldHandlePtr editHandleAutoDisableSteps(void);
    GetFieldHandlePtr  getHandleAutoDisableTime (void) const;
    EditFieldHandlePtr editHandleAutoDisableTime(void);
    GetFieldHandlePtr  getHandleFiniteRotationMode (void) const;
    EditFieldHandlePtr editHandleFiniteRotationMode(void);
    GetFieldHandlePtr  getHandleFiniteRotationAxis (void) const;
    EditFieldHandlePtr editHandleFiniteRotationAxis(void);
    GetFieldHandlePtr  getHandleGravityMode     (void) const;
    EditFieldHandlePtr editHandleGravityMode    (void);
    GetFieldHandlePtr  getHandleLinearDamping   (void) const;
    EditFieldHandlePtr editHandleLinearDamping  (void);
    GetFieldHandlePtr  getHandleAngularDamping  (void) const;
    EditFieldHandlePtr editHandleAngularDamping (void);
    GetFieldHandlePtr  getHandleLinearDampingThreshold (void) const;
    EditFieldHandlePtr editHandleLinearDampingThreshold(void);
    GetFieldHandlePtr  getHandleAngularDampingThreshold (void) const;
    EditFieldHandlePtr editHandleAngularDampingThreshold(void);
    GetFieldHandlePtr  getHandleMaxAngularSpeed (void) const;
    EditFieldHandlePtr editHandleMaxAngularSpeed(void);
    GetFieldHandlePtr  getHandleKinematic       (void) const;
    EditFieldHandlePtr editHandleKinematic      (void);
    GetFieldHandlePtr  getHandleWorld           (void) const;
    EditFieldHandlePtr editHandleWorld          (void);

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

            void execSync (      PhysicsBodyBase *pFrom,
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
    void operator =(const PhysicsBodyBase &source);
};

typedef PhysicsBodyBase *PhysicsBodyBaseP;

OSG_END_NAMESPACE

#endif /* _OSGPHYSICSBODYBASE_H_ */
