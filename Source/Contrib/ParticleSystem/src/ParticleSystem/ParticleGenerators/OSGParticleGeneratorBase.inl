/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), Daniel Guilliams           *
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
 **     class ParticleGenerator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ParticleGeneratorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ParticleGeneratorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ParticleGeneratorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the ParticleGenerator::_sfBeacon field.
inline
Node * ParticleGeneratorBase::getBeacon(void) const
{
    return _sfBeacon.getValue();
}

//! Set the value of the ParticleGenerator::_sfBeacon field.
inline
void ParticleGeneratorBase::setBeacon(Node * const value)
{
    editSField(BeaconFieldMask);

    _sfBeacon.setValue(value);
}
//! Get the value of the ParticleGenerator::_sfGenerateInWorldSpace field.

inline
bool &ParticleGeneratorBase::editGenerateInWorldSpace(void)
{
    editSField(GenerateInWorldSpaceFieldMask);

    return _sfGenerateInWorldSpace.getValue();
}

//! Get the value of the ParticleGenerator::_sfGenerateInWorldSpace field.
inline
      bool  ParticleGeneratorBase::getGenerateInWorldSpace(void) const
{
    return _sfGenerateInWorldSpace.getValue();
}

//! Set the value of the ParticleGenerator::_sfGenerateInWorldSpace field.
inline
void ParticleGeneratorBase::setGenerateInWorldSpace(const bool value)
{
    editSField(GenerateInWorldSpaceFieldMask);

    _sfGenerateInWorldSpace.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ParticleGeneratorBase::execSync (      ParticleGeneratorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (BeaconFieldMask & whichField))
        _sfBeacon.syncWith(pFrom->_sfBeacon);

    if(FieldBits::NoField != (GenerateInWorldSpaceFieldMask & whichField))
        _sfGenerateInWorldSpace.syncWith(pFrom->_sfGenerateInWorldSpace);
}
#endif


inline
const Char8 *ParticleGeneratorBase::getClassname(void)
{
    return "ParticleGenerator";
}
OSG_GEN_CONTAINERPTR(ParticleGenerator);

OSG_END_NAMESPACE
