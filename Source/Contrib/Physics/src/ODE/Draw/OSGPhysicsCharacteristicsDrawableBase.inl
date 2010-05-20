/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class PhysicsCharacteristicsDrawable!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PhysicsCharacteristicsDrawableBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 PhysicsCharacteristicsDrawableBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 PhysicsCharacteristicsDrawableBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the PhysicsCharacteristicsDrawable::_sfRoot field.
inline
Node * PhysicsCharacteristicsDrawableBase::getRoot(void) const
{
    return _sfRoot.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfRoot field.
inline
void PhysicsCharacteristicsDrawableBase::setRoot(Node * const value)
{
    editSField(RootFieldMask);

    _sfRoot.setValue(value);
}
//! Get the value of the PhysicsCharacteristicsDrawable::_sfDrawGeoms field.

inline
bool &PhysicsCharacteristicsDrawableBase::editDrawGeoms(void)
{
    editSField(DrawGeomsFieldMask);

    return _sfDrawGeoms.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfDrawGeoms field.
inline
      bool  PhysicsCharacteristicsDrawableBase::getDrawGeoms(void) const
{
    return _sfDrawGeoms.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfDrawGeoms field.
inline
void PhysicsCharacteristicsDrawableBase::setDrawGeoms(const bool value)
{
    editSField(DrawGeomsFieldMask);

    _sfDrawGeoms.setValue(value);
}
//! Get the value of the PhysicsCharacteristicsDrawable::_sfGeomColor field.

inline
Color4f &PhysicsCharacteristicsDrawableBase::editGeomColor(void)
{
    editSField(GeomColorFieldMask);

    return _sfGeomColor.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfGeomColor field.
inline
const Color4f &PhysicsCharacteristicsDrawableBase::getGeomColor(void) const
{
    return _sfGeomColor.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfGeomColor field.
inline
void PhysicsCharacteristicsDrawableBase::setGeomColor(const Color4f &value)
{
    editSField(GeomColorFieldMask);

    _sfGeomColor.setValue(value);
}
//! Get the value of the PhysicsCharacteristicsDrawable::_sfDrawJoints field.

inline
bool &PhysicsCharacteristicsDrawableBase::editDrawJoints(void)
{
    editSField(DrawJointsFieldMask);

    return _sfDrawJoints.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfDrawJoints field.
inline
      bool  PhysicsCharacteristicsDrawableBase::getDrawJoints(void) const
{
    return _sfDrawJoints.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfDrawJoints field.
inline
void PhysicsCharacteristicsDrawableBase::setDrawJoints(const bool value)
{
    editSField(DrawJointsFieldMask);

    _sfDrawJoints.setValue(value);
}
//! Get the value of the PhysicsCharacteristicsDrawable::_sfJointColor field.

inline
Color4f &PhysicsCharacteristicsDrawableBase::editJointColor(void)
{
    editSField(JointColorFieldMask);

    return _sfJointColor.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfJointColor field.
inline
const Color4f &PhysicsCharacteristicsDrawableBase::getJointColor(void) const
{
    return _sfJointColor.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfJointColor field.
inline
void PhysicsCharacteristicsDrawableBase::setJointColor(const Color4f &value)
{
    editSField(JointColorFieldMask);

    _sfJointColor.setValue(value);
}
//! Get the value of the PhysicsCharacteristicsDrawable::_sfDrawBodies field.

inline
bool &PhysicsCharacteristicsDrawableBase::editDrawBodies(void)
{
    editSField(DrawBodiesFieldMask);

    return _sfDrawBodies.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfDrawBodies field.
inline
      bool  PhysicsCharacteristicsDrawableBase::getDrawBodies(void) const
{
    return _sfDrawBodies.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfDrawBodies field.
inline
void PhysicsCharacteristicsDrawableBase::setDrawBodies(const bool value)
{
    editSField(DrawBodiesFieldMask);

    _sfDrawBodies.setValue(value);
}
//! Get the value of the PhysicsCharacteristicsDrawable::_sfBodyColor field.

inline
Color4f &PhysicsCharacteristicsDrawableBase::editBodyColor(void)
{
    editSField(BodyColorFieldMask);

    return _sfBodyColor.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfBodyColor field.
inline
const Color4f &PhysicsCharacteristicsDrawableBase::getBodyColor(void) const
{
    return _sfBodyColor.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfBodyColor field.
inline
void PhysicsCharacteristicsDrawableBase::setBodyColor(const Color4f &value)
{
    editSField(BodyColorFieldMask);

    _sfBodyColor.setValue(value);
}
//! Get the value of the PhysicsCharacteristicsDrawable::_sfDrawSpaces field.

inline
bool &PhysicsCharacteristicsDrawableBase::editDrawSpaces(void)
{
    editSField(DrawSpacesFieldMask);

    return _sfDrawSpaces.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfDrawSpaces field.
inline
      bool  PhysicsCharacteristicsDrawableBase::getDrawSpaces(void) const
{
    return _sfDrawSpaces.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfDrawSpaces field.
inline
void PhysicsCharacteristicsDrawableBase::setDrawSpaces(const bool value)
{
    editSField(DrawSpacesFieldMask);

    _sfDrawSpaces.setValue(value);
}
//! Get the value of the PhysicsCharacteristicsDrawable::_sfSpaceColor field.

inline
Color4f &PhysicsCharacteristicsDrawableBase::editSpaceColor(void)
{
    editSField(SpaceColorFieldMask);

    return _sfSpaceColor.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfSpaceColor field.
inline
const Color4f &PhysicsCharacteristicsDrawableBase::getSpaceColor(void) const
{
    return _sfSpaceColor.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfSpaceColor field.
inline
void PhysicsCharacteristicsDrawableBase::setSpaceColor(const Color4f &value)
{
    editSField(SpaceColorFieldMask);

    _sfSpaceColor.setValue(value);
}
//! Get the value of the PhysicsCharacteristicsDrawable::_sfDrawWorlds field.

inline
bool &PhysicsCharacteristicsDrawableBase::editDrawWorlds(void)
{
    editSField(DrawWorldsFieldMask);

    return _sfDrawWorlds.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfDrawWorlds field.
inline
      bool  PhysicsCharacteristicsDrawableBase::getDrawWorlds(void) const
{
    return _sfDrawWorlds.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfDrawWorlds field.
inline
void PhysicsCharacteristicsDrawableBase::setDrawWorlds(const bool value)
{
    editSField(DrawWorldsFieldMask);

    _sfDrawWorlds.setValue(value);
}
//! Get the value of the PhysicsCharacteristicsDrawable::_sfWorldColor field.

inline
Color4f &PhysicsCharacteristicsDrawableBase::editWorldColor(void)
{
    editSField(WorldColorFieldMask);

    return _sfWorldColor.getValue();
}

//! Get the value of the PhysicsCharacteristicsDrawable::_sfWorldColor field.
inline
const Color4f &PhysicsCharacteristicsDrawableBase::getWorldColor(void) const
{
    return _sfWorldColor.getValue();
}

//! Set the value of the PhysicsCharacteristicsDrawable::_sfWorldColor field.
inline
void PhysicsCharacteristicsDrawableBase::setWorldColor(const Color4f &value)
{
    editSField(WorldColorFieldMask);

    _sfWorldColor.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void PhysicsCharacteristicsDrawableBase::execSync (      PhysicsCharacteristicsDrawableBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (RootFieldMask & whichField))
        _sfRoot.syncWith(pFrom->_sfRoot);

    if(FieldBits::NoField != (DrawGeomsFieldMask & whichField))
        _sfDrawGeoms.syncWith(pFrom->_sfDrawGeoms);

    if(FieldBits::NoField != (GeomColorFieldMask & whichField))
        _sfGeomColor.syncWith(pFrom->_sfGeomColor);

    if(FieldBits::NoField != (DrawJointsFieldMask & whichField))
        _sfDrawJoints.syncWith(pFrom->_sfDrawJoints);

    if(FieldBits::NoField != (JointColorFieldMask & whichField))
        _sfJointColor.syncWith(pFrom->_sfJointColor);

    if(FieldBits::NoField != (DrawBodiesFieldMask & whichField))
        _sfDrawBodies.syncWith(pFrom->_sfDrawBodies);

    if(FieldBits::NoField != (BodyColorFieldMask & whichField))
        _sfBodyColor.syncWith(pFrom->_sfBodyColor);

    if(FieldBits::NoField != (DrawSpacesFieldMask & whichField))
        _sfDrawSpaces.syncWith(pFrom->_sfDrawSpaces);

    if(FieldBits::NoField != (SpaceColorFieldMask & whichField))
        _sfSpaceColor.syncWith(pFrom->_sfSpaceColor);

    if(FieldBits::NoField != (DrawWorldsFieldMask & whichField))
        _sfDrawWorlds.syncWith(pFrom->_sfDrawWorlds);

    if(FieldBits::NoField != (WorldColorFieldMask & whichField))
        _sfWorldColor.syncWith(pFrom->_sfWorldColor);
}
#endif


inline
const Char8 *PhysicsCharacteristicsDrawableBase::getClassname(void)
{
    return "PhysicsCharacteristicsDrawable";
}
OSG_GEN_CONTAINERPTR(PhysicsCharacteristicsDrawable);

OSG_END_NAMESPACE
