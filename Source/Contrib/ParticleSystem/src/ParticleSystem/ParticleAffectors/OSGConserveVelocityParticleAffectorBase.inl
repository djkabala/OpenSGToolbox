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
 **     class ConserveVelocityParticleAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ConserveVelocityParticleAffectorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ConserveVelocityParticleAffectorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ConserveVelocityParticleAffectorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the ConserveVelocityParticleAffector::_sfConserve field.

inline
Real32 &ConserveVelocityParticleAffectorBase::editConserve(void)
{
    editSField(ConserveFieldMask);

    return _sfConserve.getValue();
}

//! Get the value of the ConserveVelocityParticleAffector::_sfConserve field.
inline
      Real32  ConserveVelocityParticleAffectorBase::getConserve(void) const
{
    return _sfConserve.getValue();
}

//! Set the value of the ConserveVelocityParticleAffector::_sfConserve field.
inline
void ConserveVelocityParticleAffectorBase::setConserve(const Real32 value)
{
    editSField(ConserveFieldMask);

    _sfConserve.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ConserveVelocityParticleAffectorBase::execSync (      ConserveVelocityParticleAffectorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ConserveFieldMask & whichField))
        _sfConserve.syncWith(pFrom->_sfConserve);
}
#endif


inline
const Char8 *ConserveVelocityParticleAffectorBase::getClassname(void)
{
    return "ConserveVelocityParticleAffector";
}
OSG_GEN_CONTAINERPTR(ConserveVelocityParticleAffector);

OSG_END_NAMESPACE
