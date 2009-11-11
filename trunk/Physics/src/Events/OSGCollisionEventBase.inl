/*---------------------------------------------------------------------------*\
 *                         OpenSG ToolBox Physics                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                Authors: Behboud Kalantary, David Kabala                   *
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
 **     class CollisionEvent!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &CollisionEventBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 CollisionEventBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
CollisionEventPtr CollisionEventBase::create(void) 
{
    CollisionEventPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = CollisionEventPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
CollisionEventPtr CollisionEventBase::createEmpty(void) 
{ 
    CollisionEventPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the CollisionEvent::_sfPosition field.
inline
const SFPnt3f *CollisionEventBase::getSFPosition(void) const
{
    return &_sfPosition;
}

//! Get the CollisionEvent::_sfPosition field.
inline
SFPnt3f *CollisionEventBase::editSFPosition(void)
{
    return &_sfPosition;
}

//! Get the CollisionEvent::_sfNormal field.
inline
const SFVec3f *CollisionEventBase::getSFNormal(void) const
{
    return &_sfNormal;
}

//! Get the CollisionEvent::_sfNormal field.
inline
SFVec3f *CollisionEventBase::editSFNormal(void)
{
    return &_sfNormal;
}

//! Get the CollisionEvent::_sfObject1Geom field.
inline
const SFPhysicsGeomPtr *CollisionEventBase::getSFObject1Geom(void) const
{
    return &_sfObject1Geom;
}

//! Get the CollisionEvent::_sfObject1Geom field.
inline
SFPhysicsGeomPtr *CollisionEventBase::editSFObject1Geom(void)
{
    return &_sfObject1Geom;
}

//! Get the CollisionEvent::_sfObject2Geom field.
inline
const SFPhysicsGeomPtr *CollisionEventBase::getSFObject2Geom(void) const
{
    return &_sfObject2Geom;
}

//! Get the CollisionEvent::_sfObject2Geom field.
inline
SFPhysicsGeomPtr *CollisionEventBase::editSFObject2Geom(void)
{
    return &_sfObject2Geom;
}

//! Get the CollisionEvent::_sfObject1Velocity field.
inline
const SFVec3f *CollisionEventBase::getSFObject1Velocity(void) const
{
    return &_sfObject1Velocity;
}

//! Get the CollisionEvent::_sfObject1Velocity field.
inline
SFVec3f *CollisionEventBase::editSFObject1Velocity(void)
{
    return &_sfObject1Velocity;
}

//! Get the CollisionEvent::_sfObject2Velocity field.
inline
const SFVec3f *CollisionEventBase::getSFObject2Velocity(void) const
{
    return &_sfObject2Velocity;
}

//! Get the CollisionEvent::_sfObject2Velocity field.
inline
SFVec3f *CollisionEventBase::editSFObject2Velocity(void)
{
    return &_sfObject2Velocity;
}

//! Get the CollisionEvent::_sfProjectedNormalSpeed field.
inline
const SFReal32 *CollisionEventBase::getSFProjectedNormalSpeed(void) const
{
    return &_sfProjectedNormalSpeed;
}

//! Get the CollisionEvent::_sfProjectedNormalSpeed field.
inline
SFReal32 *CollisionEventBase::editSFProjectedNormalSpeed(void)
{
    return &_sfProjectedNormalSpeed;
}


//! Get the value of the CollisionEvent::_sfPosition field.
inline
Pnt3f &CollisionEventBase::editPosition(void)
{
    return _sfPosition.getValue();
}

//! Get the value of the CollisionEvent::_sfPosition field.
inline
const Pnt3f &CollisionEventBase::getPosition(void) const
{
    return _sfPosition.getValue();
}

//! Set the value of the CollisionEvent::_sfPosition field.
inline
void CollisionEventBase::setPosition(const Pnt3f &value)
{
    _sfPosition.setValue(value);
}

//! Get the value of the CollisionEvent::_sfNormal field.
inline
Vec3f &CollisionEventBase::editNormal(void)
{
    return _sfNormal.getValue();
}

//! Get the value of the CollisionEvent::_sfNormal field.
inline
const Vec3f &CollisionEventBase::getNormal(void) const
{
    return _sfNormal.getValue();
}

//! Set the value of the CollisionEvent::_sfNormal field.
inline
void CollisionEventBase::setNormal(const Vec3f &value)
{
    _sfNormal.setValue(value);
}

//! Get the value of the CollisionEvent::_sfObject1Geom field.
inline
PhysicsGeomPtr &CollisionEventBase::editObject1Geom(void)
{
    return _sfObject1Geom.getValue();
}

//! Get the value of the CollisionEvent::_sfObject1Geom field.
inline
const PhysicsGeomPtr &CollisionEventBase::getObject1Geom(void) const
{
    return _sfObject1Geom.getValue();
}

//! Set the value of the CollisionEvent::_sfObject1Geom field.
inline
void CollisionEventBase::setObject1Geom(const PhysicsGeomPtr &value)
{
    _sfObject1Geom.setValue(value);
}

//! Get the value of the CollisionEvent::_sfObject2Geom field.
inline
PhysicsGeomPtr &CollisionEventBase::editObject2Geom(void)
{
    return _sfObject2Geom.getValue();
}

//! Get the value of the CollisionEvent::_sfObject2Geom field.
inline
const PhysicsGeomPtr &CollisionEventBase::getObject2Geom(void) const
{
    return _sfObject2Geom.getValue();
}

//! Set the value of the CollisionEvent::_sfObject2Geom field.
inline
void CollisionEventBase::setObject2Geom(const PhysicsGeomPtr &value)
{
    _sfObject2Geom.setValue(value);
}

//! Get the value of the CollisionEvent::_sfObject1Velocity field.
inline
Vec3f &CollisionEventBase::editObject1Velocity(void)
{
    return _sfObject1Velocity.getValue();
}

//! Get the value of the CollisionEvent::_sfObject1Velocity field.
inline
const Vec3f &CollisionEventBase::getObject1Velocity(void) const
{
    return _sfObject1Velocity.getValue();
}

//! Set the value of the CollisionEvent::_sfObject1Velocity field.
inline
void CollisionEventBase::setObject1Velocity(const Vec3f &value)
{
    _sfObject1Velocity.setValue(value);
}

//! Get the value of the CollisionEvent::_sfObject2Velocity field.
inline
Vec3f &CollisionEventBase::editObject2Velocity(void)
{
    return _sfObject2Velocity.getValue();
}

//! Get the value of the CollisionEvent::_sfObject2Velocity field.
inline
const Vec3f &CollisionEventBase::getObject2Velocity(void) const
{
    return _sfObject2Velocity.getValue();
}

//! Set the value of the CollisionEvent::_sfObject2Velocity field.
inline
void CollisionEventBase::setObject2Velocity(const Vec3f &value)
{
    _sfObject2Velocity.setValue(value);
}

//! Get the value of the CollisionEvent::_sfProjectedNormalSpeed field.
inline
Real32 &CollisionEventBase::editProjectedNormalSpeed(void)
{
    return _sfProjectedNormalSpeed.getValue();
}

//! Get the value of the CollisionEvent::_sfProjectedNormalSpeed field.
inline
const Real32 &CollisionEventBase::getProjectedNormalSpeed(void) const
{
    return _sfProjectedNormalSpeed.getValue();
}

//! Set the value of the CollisionEvent::_sfProjectedNormalSpeed field.
inline
void CollisionEventBase::setProjectedNormalSpeed(const Real32 &value)
{
    _sfProjectedNormalSpeed.setValue(value);
}


OSG_END_NAMESPACE
