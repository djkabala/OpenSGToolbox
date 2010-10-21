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
 **     class ParticleCollisionEventDetails!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ParticleCollisionEventDetailsBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ParticleCollisionEventDetailsBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ParticleCollisionEventDetailsBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the ParticleCollisionEventDetails::_sfPrimarySystem field.
inline
ParticleSystem * ParticleCollisionEventDetailsBase::getPrimarySystem(void) const
{
    return _sfPrimarySystem.getValue();
}

//! Set the value of the ParticleCollisionEventDetails::_sfPrimarySystem field.
inline
void ParticleCollisionEventDetailsBase::setPrimarySystem(ParticleSystem * const value)
{
    editSField(PrimarySystemFieldMask);

    _sfPrimarySystem.setValue(value);
}
//! Get the value of the ParticleCollisionEventDetails::_sfPrimaryParticleIndex field.

inline
UInt32 &ParticleCollisionEventDetailsBase::editPrimaryParticleIndex(void)
{
    editSField(PrimaryParticleIndexFieldMask);

    return _sfPrimaryParticleIndex.getValue();
}

//! Get the value of the ParticleCollisionEventDetails::_sfPrimaryParticleIndex field.
inline
      UInt32  ParticleCollisionEventDetailsBase::getPrimaryParticleIndex(void) const
{
    return _sfPrimaryParticleIndex.getValue();
}

//! Set the value of the ParticleCollisionEventDetails::_sfPrimaryParticleIndex field.
inline
void ParticleCollisionEventDetailsBase::setPrimaryParticleIndex(const UInt32 value)
{
    editSField(PrimaryParticleIndexFieldMask);

    _sfPrimaryParticleIndex.setValue(value);
}

//! Get the value of the ParticleCollisionEventDetails::_sfSecondarySystem field.
inline
ParticleSystem * ParticleCollisionEventDetailsBase::getSecondarySystem(void) const
{
    return _sfSecondarySystem.getValue();
}

//! Set the value of the ParticleCollisionEventDetails::_sfSecondarySystem field.
inline
void ParticleCollisionEventDetailsBase::setSecondarySystem(ParticleSystem * const value)
{
    editSField(SecondarySystemFieldMask);

    _sfSecondarySystem.setValue(value);
}
//! Get the value of the ParticleCollisionEventDetails::_sfSecondaryParticleIndex field.

inline
UInt32 &ParticleCollisionEventDetailsBase::editSecondaryParticleIndex(void)
{
    editSField(SecondaryParticleIndexFieldMask);

    return _sfSecondaryParticleIndex.getValue();
}

//! Get the value of the ParticleCollisionEventDetails::_sfSecondaryParticleIndex field.
inline
      UInt32  ParticleCollisionEventDetailsBase::getSecondaryParticleIndex(void) const
{
    return _sfSecondaryParticleIndex.getValue();
}

//! Set the value of the ParticleCollisionEventDetails::_sfSecondaryParticleIndex field.
inline
void ParticleCollisionEventDetailsBase::setSecondaryParticleIndex(const UInt32 value)
{
    editSField(SecondaryParticleIndexFieldMask);

    _sfSecondaryParticleIndex.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ParticleCollisionEventDetailsBase::execSync (      ParticleCollisionEventDetailsBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (PrimarySystemFieldMask & whichField))
        _sfPrimarySystem.syncWith(pFrom->_sfPrimarySystem);

    if(FieldBits::NoField != (PrimaryParticleIndexFieldMask & whichField))
        _sfPrimaryParticleIndex.syncWith(pFrom->_sfPrimaryParticleIndex);

    if(FieldBits::NoField != (SecondarySystemFieldMask & whichField))
        _sfSecondarySystem.syncWith(pFrom->_sfSecondarySystem);

    if(FieldBits::NoField != (SecondaryParticleIndexFieldMask & whichField))
        _sfSecondaryParticleIndex.syncWith(pFrom->_sfSecondaryParticleIndex);
}
#endif


inline
const Char8 *ParticleCollisionEventDetailsBase::getClassname(void)
{
    return "ParticleCollisionEventDetails";
}
OSG_GEN_CONTAINERPTR(ParticleCollisionEventDetails);

OSG_END_NAMESPACE

