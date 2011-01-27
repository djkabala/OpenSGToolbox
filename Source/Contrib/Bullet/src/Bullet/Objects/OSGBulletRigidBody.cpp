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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#include "OSGBulletRigidBody.h"
#include "OSGBulletDynamicsWorld.h"
#include "OSGBulletTypedConstraint.h"
#include "OSGVolume.h"

#include "OSGRenderAction.h"
#include "OSGIntersectAction.h"
#include "OSGBulletMathUtils.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBulletRigidBodyBase.cpp file.
// To modify it, please change the .fcd file (OSGBulletRigidBody.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BulletRigidBody::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
        IntersectAction::registerEnterDefault( 
            getClassType(), 
            reinterpret_cast<Action::Callback>(&BulletRigidBody::intersectEnter));
        
        IntersectAction::registerLeaveDefault( 
            getClassType(), 
            reinterpret_cast<Action::Callback>(&BulletRigidBody::intersectLeave));
        RenderAction::registerEnterDefault(
            BulletRigidBody::getClassType(), 
            reinterpret_cast<Action::Callback>(&BulletRigidBody::renderEnter));

        RenderAction::registerLeaveDefault(
            BulletRigidBody::getClassType(), 
            reinterpret_cast<Action::Callback>(&BulletRigidBody::renderLeave));

    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

void BulletRigidBody::calcMatrix(const Matrix &mToWorld)
{
    Matrix prevValue(_invWorld);
    _invWorld.invertFrom(mToWorld);

    if(_invWorld != prevValue)
    {
        invalidateVolume();
    }
}

void BulletRigidBody::accumulateMatrix(Matrix &result)
{
    result.mult(_invWorld);
    result.mult(getToWorld());
}

void BulletRigidBody::adjustVolume(Volume &volume)
{
    volume.transform(_invWorld);
    volume.transform(getToWorld());
}
/*-------------------------------------------------------------------------*/
/*                                Render                                   */

ActionBase::ResultE BulletRigidBody::renderEnter(Action *action)
{
    RenderAction *pAction = 
        dynamic_cast<RenderAction *>(action);

    calcMatrix(pAction->topMatrix());

    pAction->pushVisibility();

    pAction->pushMatrix(_invWorld);
    pAction->pushMatrix(getToWorld());

    return Action::Continue;
}

ActionBase::ResultE BulletRigidBody::renderLeave(Action *action)
{
    RenderAction *pAction = 
        dynamic_cast<RenderAction *>(action);

    pAction->popVisibility();

    pAction->popMatrix();
    pAction->popMatrix();

    return ActionBase::Continue;
}

/*-------------------------------------------------------------------------*/
/*                            Intersect                                    */

ActionBase::ResultE BulletRigidBody::intersectEnter(Action *action)
{
    IntersectAction *ia = dynamic_cast<IntersectAction *>(action);
    Matrix           m(_invWorld);
    m.mult(getToWorld());

    m.invert();

    Pnt3f pos;
    Vec3f dir;

    m.multFull(ia->getLine().getPosition (), pos);
    m.mult    (ia->getLine().getDirection(), dir);

    ia->setLine(Line(pos, dir), ia->getMaxDist());
    ia->scale(dir.length());

    return Action::Continue;
}

ActionBase::ResultE BulletRigidBody::intersectLeave(Action *action)
{
    IntersectAction *ia = dynamic_cast<IntersectAction *>(action);
    Matrix           m(_invWorld);
    m.mult(getToWorld());

    Pnt3f pos;
    Vec3f dir;

    m.multFull(ia->getLine().getPosition (), pos);
    m.mult    (ia->getLine().getDirection(), dir);

    ia->setLine(Line(pos, dir), ia->getMaxDist());
    ia->scale(dir.length());

    return Action::Continue;
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*!
 * \brief This method is overridden so that the bullet btRigidBody is
 * added/removed from the bullet btDynamicsWorld whenever this OpenSG-based
 * wrapper adds/removes the RigidBody.
 */
bool BulletRigidBody::linkParent(FieldContainer * const pParent,
                                 UInt16           const childFieldId,
                                 UInt16           const parentFieldId )
{
    if(parentFieldId == ParentWorldFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            FieldContainer *pOldParent = _sfParentWorld.getValue();

            UInt16 oldChildFieldId     = _sfParentWorld.getParentFieldPos();

            if(pOldParent != NULL)
            {
                dynamic_cast<BulletDynamicsWorld*>(pOldParent)->getDynamicsWorld()->removeRigidBody(getBody());
            }

            dynamic_cast<BulletDynamicsWorld*>(pParent)->getDynamicsWorld()->addRigidBody(getBody());
        }
    }
    return Inherited::linkParent(pParent, childFieldId, parentFieldId);
}

/*!
 * \brief This method is overridden so that the bullet btRigidBody is
 * added/removed from the bullet btDynamicsWorld whenever this OpenSG-based
 * wrapper adds/removes the RigidBody.
 */
bool BulletRigidBody::unlinkParent(FieldContainer * const pParent,
                                   UInt16           const parentFieldId)
{
    if(parentFieldId == ParentWorldFieldId)
    {
        FieldContainer * pTypedParent =
            dynamic_cast< FieldContainer * >(pParent);

        if(pTypedParent != NULL)
        {
            if(_sfParentWorld.getValue() == pTypedParent)
            {
                dynamic_cast<BulletDynamicsWorld*>(pTypedParent)->getDynamicsWorld()->removeRigidBody(getBody());
            }
        }
    }

    return Inherited::unlinkParent(pParent, parentFieldId);
}

Vec3f BulletRigidBody::getExternalAnisotropicFriction(void)
{
    return OSG::bullet::convert(_body->getAnisotropicFriction());
}

void BulletRigidBody::setExternalAnisotropicFriction(const Vec3f& value)
{
    _body->setAnisotropicFriction(OSG::bullet::convert(value));
}

Real32 BulletRigidBody::getExternalContactProcessingThreashold(void)
{
    return _body->getContactProcessingThreshold();
}

void BulletRigidBody::setExternalContactProcessingThreashold(const Real32& value)
{
    _body->setContactProcessingThreshold(value);
}

Int32 BulletRigidBody::getExternalActivation(void)
{
    return _body->getActivationState();
}

void BulletRigidBody::setExternalActivation(const Int32& value)
{
    _body->setActivationState(value);
}

Real32 BulletRigidBody::getExternalDeactivationTime(void)
{
    return _body->getDeactivationTime();
}

void BulletRigidBody::setExternalDeactivationTime(const Real32& value)
{
    _body->setDeactivationTime(value);
}

Real32 BulletRigidBody::getExternalRestitution(void)
{
    return _body->getRestitution();
}

void BulletRigidBody::setExternalRestitution(const Real32& value)
{
    _body->setRestitution(value);
}

Real32 BulletRigidBody::getExternalFriction(void)
{
    return _body->getFriction();
}

void BulletRigidBody::setExternalFriction(const Real32& value)
{
    _body->setFriction(value);
}

Matrix BulletRigidBody::getExternalWorldTransform(void)
{
    return OSG::bullet::convert(_body->getWorldTransform());
}

void BulletRigidBody::setExternalWorldTransform(const Matrix& value)
{
    _body->setWorldTransform(OSG::bullet::convert(value));
    _body->getMotionState()->setWorldTransform(_body->getWorldTransform());
}

Matrix BulletRigidBody::getExternalInterpolationWorldTransform(void)
{
    return OSG::bullet::convert(_body->getInterpolationWorldTransform());
}

void BulletRigidBody::setExternalInterpolationWorldTransform(const Matrix& value)
{
    _body->setInterpolationWorldTransform(OSG::bullet::convert(value));
}

Vec3f BulletRigidBody::getExternalInterpolationLinearVelocity(void)
{
    return OSG::bullet::convert(_body->getInterpolationLinearVelocity());
}

void BulletRigidBody::setExternalInterpolationLinearVelocity(const Vec3f& value)
{
    _body->setInterpolationLinearVelocity(OSG::bullet::convert(value));
}

Vec3f BulletRigidBody::getExternalInterpolationAngularVelocity(void)
{
    return OSG::bullet::convert(_body->getInterpolationAngularVelocity());
}

void BulletRigidBody::setExternalInterpolationAngularVelocity(const Vec3f& value)
{
    _body->setInterpolationAngularVelocity(OSG::bullet::convert(value));
}

Int32 BulletRigidBody::getExternalIslandTag(void)
{
    return _body->getIslandTag();
}

void BulletRigidBody::setExternalIslandTag(const Int32& value)
{
    _body->setIslandTag(value);
}

Int32 BulletRigidBody::getExternalCompanionId(void)
{
    return _body->getCompanionId();
}

void BulletRigidBody::setExternalCompanionId(const Int32& value)
{
    _body->setCompanionId(value);
}

Real32 BulletRigidBody::getExternalHitFraction(void)
{
    return _body->getHitFraction();
}

void BulletRigidBody::setExternalHitFraction(const Real32& value)
{
    _body->setHitFraction(value);
}

Int32 BulletRigidBody::getExternalCollisionFlags(void)
{
    return _body->getCollisionFlags();
}

void BulletRigidBody::setExternalCollisionFlags(const Int32& value)
{
    _body->setCollisionFlags(value);
}

Real32 BulletRigidBody::getExternalCcdSweptSphereRadius(void)
{
    return _body->getCcdSweptSphereRadius();
}

void BulletRigidBody::setExternalCcdSweptSphereRadius(const Real32& value)
{
    _body->setCcdSweptSphereRadius(value);
}

Real32 BulletRigidBody::getExternalCcdMotionThreashold(void)
{
    return _body->getCcdMotionThreshold();
}

void BulletRigidBody::setExternalCcdMotionThreashold(const Real32& value)
{
    _body->setCcdMotionThreshold(value);
}

Vec3f BulletRigidBody::getExternalGravity(void)
{
    return OSG::bullet::convert(_body->getGravity());
}

void BulletRigidBody::setExternalGravity(const Vec3f& value)
{
    _body->setGravity(OSG::bullet::convert(value));
}

Vec2f BulletRigidBody::getExternalDamping(void)
{
    return Vec2f(_body->getLinearDamping(),_body->getAngularDamping());
}

void BulletRigidBody::setExternalDamping(const Vec2f& value)
{
    _body->setDamping(value.x(), value.y());
}

Real32 BulletRigidBody::getExternalMass(void)
{
    return _mass;
}

void BulletRigidBody::setExternalMass(const Real32& value)
{
    _mass = value;
    _body->setMassProps(_mass, OSG::bullet::convert(_inertia));
}

Vec3f BulletRigidBody::getExternalInertia(void)
{
    return _inertia;
}

void BulletRigidBody::setExternalInertia(const Vec3f& value)
{
    _inertia = value;
    _body->setMassProps(_mass, OSG::bullet::convert(_inertia));
}

Vec3f BulletRigidBody::getExternalLinearFactor(void)
{
    return OSG::bullet::convert(_body->getLinearFactor());
}

void BulletRigidBody::setExternalLinearFactor(const Vec3f& value)
{
    _body->setLinearFactor(OSG::bullet::convert(value));
}

Matrix BulletRigidBody::getExternalCenterOfMassTransform(void)
{
    return OSG::bullet::convert(_body->getCenterOfMassTransform());
}

void BulletRigidBody::setExternalCenterOfMassTransform(const Matrix& value)
{
    _body->setCenterOfMassTransform(OSG::bullet::convert(value));
}

Vec3f BulletRigidBody::getExternalLinearVelocity(void)
{
    return OSG::bullet::convert(_body->getLinearVelocity());
}

void BulletRigidBody::setExternalLinearVelocity(const Vec3f& value)
{
    _body->setLinearVelocity(OSG::bullet::convert(value));
}

Vec3f BulletRigidBody::getExternalAngularVelocity(void)
{
    return OSG::bullet::convert(_body->getAngularVelocity());
}

void BulletRigidBody::setExternalAngularVelocity(const Vec3f& value)
{
    _body->setAngularVelocity(OSG::bullet::convert(value));
}

Vec3f BulletRigidBody::getExternalAngularFactor(void)
{
    return OSG::bullet::convert(_body->getAngularFactor());
}

void BulletRigidBody::setExternalAngularFactor(const Vec3f& value)
{
    _body->setAngularFactor(OSG::bullet::convert(value));
}

Int32 BulletRigidBody::getExternalFlags(void)
{
    return _body->getFlags();
}

void BulletRigidBody::setExternalFlags(const Int32& value)
{
    _body->setFlags(value);
}

Vec2f BulletRigidBody::getExternalSleepingThresholds(void)
{
    return Vec2f(_body->getLinearSleepingThreshold(),_body->getAngularSleepingThreshold());
}

void BulletRigidBody::setExternalSleepingThresholds(const Vec2f& value)
{
    _body->setSleepingThresholds(value.x(), value.y());
}

void BulletRigidBody::onCreate(const BulletRigidBody *Id)
{
    Inherited::onCreate(Id);

    if(Id != NULL)
    {
        btRigidBody::btRigidBodyConstructionInfo rbInfo(btScalar(1.0f),
                                                        &_bodyMotionState,
                                                        NULL,
                                                        btVector3(0,0,0));

        _body.reset(new btRigidBody(rbInfo));

        _body->setUserPointer(this);
    }
}

void BulletRigidBody::onDestroy(void)
{
}

void BulletRigidBody::InternalMotionState::getWorldTransform(btTransform &worldTrans) const
{
    OSG::bullet::convert(_RigidBodyCore->getToWorld(), worldTrans);
}

void BulletRigidBody::InternalMotionState::setWorldTransform(const btTransform &worldTrans)
{
    OSG::bullet::convert(worldTrans,_RigidBodyCore->editToWorld());
    _RigidBodyCore->invalidateVolume();
}

/*----------------------- constructors & destructors ----------------------*/

BulletRigidBody::BulletRigidBody(void) :
    Inherited(),
    _body(NULL),
    _bodyMotionState(this),
    _mass(0.0f),
    _inertia(0.0f,0.0f,0.0f)
{
}

BulletRigidBody::BulletRigidBody(const BulletRigidBody &source) :
    Inherited(source),
    _body(NULL),
    _bodyMotionState(this),
    _mass(source._mass),
    _inertia(source._inertia)
{
}

BulletRigidBody::~BulletRigidBody(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BulletRigidBody::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void BulletRigidBody::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump BulletRigidBody NI" << std::endl;
}

OSG_END_NAMESPACE
