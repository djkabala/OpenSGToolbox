/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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

#ifndef _OSGBULLETRIGIDBODY_H_
#define _OSGBULLETRIGIDBODY_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBulletRigidBodyBase.h"

#include "LinearMath/btMotionState.h"
#include "BulletDynamics/Dynamics/btRigidBody.h"
#include "boost/scoped_ptr.hpp"

OSG_BEGIN_NAMESPACE

/*! \brief BulletRigidBody class. See \ref
           PageContribBulletBulletRigidBody for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING BulletRigidBody : public BulletRigidBodyBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BulletRigidBodyBase Inherited;
    typedef BulletRigidBody     Self;

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         details    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0,
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Transformation                             */
    /*! \{                                                                 */

    virtual void accumulateMatrix(Matrix &result);

    void calcMatrix(const Matrix        &ToWorld);

    btRigidBody* getBody(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BulletRigidBodyBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BulletRigidBody(void);
    BulletRigidBody(const BulletRigidBody &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BulletRigidBody(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Class Specific                             */
    /*! \{                                                                 */

    void onCreate(const BulletRigidBody *Id = NULL);

    void onDestroy(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Volume                                  */
    /*! \{                                                                 */

    virtual void adjustVolume    (Volume &volume);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name              Intersect & Render                              */
    /*! \{                                                                 */
    ActionBase::ResultE     intersectEnter(Action    *action);
    ActionBase::ResultE     intersectLeave(Action    *action);

    ActionBase::ResultE     renderEnter   (Action    *action);
    ActionBase::ResultE     renderLeave   (Action    *action);
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                 External bridge                              */
    /*! \{                                                                 */
    Vec3f getExternalAnisotropicFriction(void);
    void setExternalAnisotropicFriction(const Vec3f& value);

    Real32 getExternalContactProcessingThreashold(void);
    void setExternalContactProcessingThreashold(const Real32& value);

    Int32 getExternalActivation(void);
    void setExternalActivation(const Int32& value);

    Real32 getExternalDeactivationTime(void);
    void setExternalDeactivationTime(const Real32& value);

    Real32 getExternalRestitution(void);
    void setExternalRestitution(const Real32& value);

    Real32 getExternalFriction(void);
    void setExternalFriction(const Real32& value);

    Matrix getExternalWorldTransform(void);
    void setExternalWorldTransform(const Matrix& value);

    Matrix getExternalInterpolationWorldTransform(void);
    void setExternalInterpolationWorldTransform(const Matrix& value);

    Vec3f getExternalInterpolationLinearVelocity(void);
    void setExternalInterpolationLinearVelocity(const Vec3f& value);

    Vec3f getExternalInterpolationAngularVelocity(void);
    void setExternalInterpolationAngularVelocity(const Vec3f& value);

    Int32 getExternalIslandTag(void);
    void setExternalIslandTag(const Int32& value);

    Int32 getExternalCompanionId(void);
    void setExternalCompanionId(const Int32& value);

    Real32 getExternalHitFraction(void);
    void setExternalHitFraction(const Real32& value);

    Int32 getExternalCollisionFlags(void);
    void setExternalCollisionFlags(const Int32& value);

    Real32 getExternalCcdSweptSphereRadius(void);
    void setExternalCcdSweptSphereRadius(const Real32& value);

    Real32 getExternalCcdMotionThreashold(void);
    void setExternalCcdMotionThreashold(const Real32& value);

    Vec3f getExternalGravity(void);
    void setExternalGravity(const Vec3f& value);

    Vec2f getExternalDamping(void);
    void setExternalDamping(const Vec2f& value);

    Real32 getExternalMass(void);
    void setExternalMass(const Real32& value);

    Vec3f getExternalInertia(void);
    void setExternalInertia(const Vec3f& value);

    Vec3f getExternalLinearFactor(void);
    void setExternalLinearFactor(const Vec3f& value);

    Matrix getExternalCenterOfMassTransform(void);
    void setExternalCenterOfMassTransform(const Matrix& value);

    Vec3f getExternalLinearVelocity(void);
    void setExternalLinearVelocity(const Vec3f& value);

    Vec3f getExternalAngularVelocity(void);
    void setExternalAngularVelocity(const Vec3f& value);

    Vec3f getExternalAngularFactor(void);
    void setExternalAngularFactor(const Vec3f& value);

    Int32 getExternalFlags(void);
    void setExternalFlags(const Int32& value);

    Vec2f getExternalSleepingThresholds(void);
    void setExternalSleepingThresholds(const Vec2f& value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Parent linking                                               */
    /*! \{                                                                 */

    virtual bool linkParent  (FieldContainer * const pParent,
                              UInt16           const childFieldId,
                              UInt16           const parentFieldId);
    virtual bool unlinkParent(FieldContainer * const pParent,
                              UInt16           const parentFieldId);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    class InternalMotionState : public btMotionState
    {
    public:
        InternalMotionState(BulletRigidBody *BodyCore);

        virtual ~InternalMotionState(void);

        virtual void getWorldTransform(btTransform &worldTrans) const;

        virtual void setWorldTransform(const btTransform &worldTrans);

    protected:
        BulletRigidBody* _RigidBodyCore;
    };
    friend class InternalMotionState;

    Matrix _invWorld;
    Matrix _rigidBodyToWorld;

    boost::scoped_ptr<btRigidBody> _body;
    InternalMotionState            _bodyMotionState;
    Real32                         _mass;
    Vec3f                          _inertia;

    friend class FieldContainer;
    friend class BulletRigidBodyBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BulletRigidBody &source);
};

typedef BulletRigidBody *BulletRigidBodyP;

OSG_END_NAMESPACE

#include "OSGBulletCollisionShape.h"
#include "OSGBulletRigidBodyBase.inl"
#include "OSGBulletRigidBody.inl"

#endif /* _OSGBULLETRIGIDBODY_H_ */
