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
 **     class DynamicsParticleGenerator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &DynamicsParticleGeneratorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 DynamicsParticleGeneratorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 DynamicsParticleGeneratorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the DynamicsParticleGenerator::_sfPositionDistribution field.
inline
Distribution3D * DynamicsParticleGeneratorBase::getPositionDistribution(void) const
{
    return _sfPositionDistribution.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfPositionDistribution field.
inline
void DynamicsParticleGeneratorBase::setPositionDistribution(Distribution3D * const value)
{
    editSField(PositionDistributionFieldMask);

    _sfPositionDistribution.setValue(value);
}

//! Get the value of the DynamicsParticleGenerator::_sfSecPositionDistribution field.
inline
Distribution3D * DynamicsParticleGeneratorBase::getSecPositionDistribution(void) const
{
    return _sfSecPositionDistribution.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfSecPositionDistribution field.
inline
void DynamicsParticleGeneratorBase::setSecPositionDistribution(Distribution3D * const value)
{
    editSField(SecPositionDistributionFieldMask);

    _sfSecPositionDistribution.setValue(value);
}

//! Get the value of the DynamicsParticleGenerator::_sfNormalDistribution field.
inline
Distribution3D * DynamicsParticleGeneratorBase::getNormalDistribution(void) const
{
    return _sfNormalDistribution.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfNormalDistribution field.
inline
void DynamicsParticleGeneratorBase::setNormalDistribution(Distribution3D * const value)
{
    editSField(NormalDistributionFieldMask);

    _sfNormalDistribution.setValue(value);
}

//! Get the value of the DynamicsParticleGenerator::_sfColorDistribution field.
inline
Distribution3D * DynamicsParticleGeneratorBase::getColorDistribution(void) const
{
    return _sfColorDistribution.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfColorDistribution field.
inline
void DynamicsParticleGeneratorBase::setColorDistribution(Distribution3D * const value)
{
    editSField(ColorDistributionFieldMask);

    _sfColorDistribution.setValue(value);
}

//! Get the value of the DynamicsParticleGenerator::_sfTransparencyDistribution field.
inline
Distribution1D * DynamicsParticleGeneratorBase::getTransparencyDistribution(void) const
{
    return _sfTransparencyDistribution.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfTransparencyDistribution field.
inline
void DynamicsParticleGeneratorBase::setTransparencyDistribution(Distribution1D * const value)
{
    editSField(TransparencyDistributionFieldMask);

    _sfTransparencyDistribution.setValue(value);
}

//! Get the value of the DynamicsParticleGenerator::_sfSizeDistribution field.
inline
Distribution3D * DynamicsParticleGeneratorBase::getSizeDistribution(void) const
{
    return _sfSizeDistribution.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfSizeDistribution field.
inline
void DynamicsParticleGeneratorBase::setSizeDistribution(Distribution3D * const value)
{
    editSField(SizeDistributionFieldMask);

    _sfSizeDistribution.setValue(value);
}

//! Get the value of the DynamicsParticleGenerator::_sfLifespanDistribution field.
inline
Distribution1D * DynamicsParticleGeneratorBase::getLifespanDistribution(void) const
{
    return _sfLifespanDistribution.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfLifespanDistribution field.
inline
void DynamicsParticleGeneratorBase::setLifespanDistribution(Distribution1D * const value)
{
    editSField(LifespanDistributionFieldMask);

    _sfLifespanDistribution.setValue(value);
}

//! Get the value of the DynamicsParticleGenerator::_sfAgeDistribution field.
inline
Distribution1D * DynamicsParticleGeneratorBase::getAgeDistribution(void) const
{
    return _sfAgeDistribution.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfAgeDistribution field.
inline
void DynamicsParticleGeneratorBase::setAgeDistribution(Distribution1D * const value)
{
    editSField(AgeDistributionFieldMask);

    _sfAgeDistribution.setValue(value);
}

//! Get the value of the DynamicsParticleGenerator::_sfVelocityDistribution field.
inline
Distribution3D * DynamicsParticleGeneratorBase::getVelocityDistribution(void) const
{
    return _sfVelocityDistribution.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfVelocityDistribution field.
inline
void DynamicsParticleGeneratorBase::setVelocityDistribution(Distribution3D * const value)
{
    editSField(VelocityDistributionFieldMask);

    _sfVelocityDistribution.setValue(value);
}

//! Get the value of the DynamicsParticleGenerator::_sfSecVelocityDistribution field.
inline
Distribution3D * DynamicsParticleGeneratorBase::getSecVelocityDistribution(void) const
{
    return _sfSecVelocityDistribution.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfSecVelocityDistribution field.
inline
void DynamicsParticleGeneratorBase::setSecVelocityDistribution(Distribution3D * const value)
{
    editSField(SecVelocityDistributionFieldMask);

    _sfSecVelocityDistribution.setValue(value);
}

//! Get the value of the DynamicsParticleGenerator::_sfAccelerationDistribution field.
inline
Distribution3D * DynamicsParticleGeneratorBase::getAccelerationDistribution(void) const
{
    return _sfAccelerationDistribution.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfAccelerationDistribution field.
inline
void DynamicsParticleGeneratorBase::setAccelerationDistribution(Distribution3D * const value)
{
    editSField(AccelerationDistributionFieldMask);

    _sfAccelerationDistribution.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void DynamicsParticleGeneratorBase::execSync (      DynamicsParticleGeneratorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (PositionDistributionFieldMask & whichField))
        _sfPositionDistribution.syncWith(pFrom->_sfPositionDistribution);

    if(FieldBits::NoField != (SecPositionDistributionFieldMask & whichField))
        _sfSecPositionDistribution.syncWith(pFrom->_sfSecPositionDistribution);

    if(FieldBits::NoField != (NormalDistributionFieldMask & whichField))
        _sfNormalDistribution.syncWith(pFrom->_sfNormalDistribution);

    if(FieldBits::NoField != (ColorDistributionFieldMask & whichField))
        _sfColorDistribution.syncWith(pFrom->_sfColorDistribution);

    if(FieldBits::NoField != (TransparencyDistributionFieldMask & whichField))
        _sfTransparencyDistribution.syncWith(pFrom->_sfTransparencyDistribution);

    if(FieldBits::NoField != (SizeDistributionFieldMask & whichField))
        _sfSizeDistribution.syncWith(pFrom->_sfSizeDistribution);

    if(FieldBits::NoField != (LifespanDistributionFieldMask & whichField))
        _sfLifespanDistribution.syncWith(pFrom->_sfLifespanDistribution);

    if(FieldBits::NoField != (AgeDistributionFieldMask & whichField))
        _sfAgeDistribution.syncWith(pFrom->_sfAgeDistribution);

    if(FieldBits::NoField != (VelocityDistributionFieldMask & whichField))
        _sfVelocityDistribution.syncWith(pFrom->_sfVelocityDistribution);

    if(FieldBits::NoField != (SecVelocityDistributionFieldMask & whichField))
        _sfSecVelocityDistribution.syncWith(pFrom->_sfSecVelocityDistribution);

    if(FieldBits::NoField != (AccelerationDistributionFieldMask & whichField))
        _sfAccelerationDistribution.syncWith(pFrom->_sfAccelerationDistribution);
}
#endif


inline
const Char8 *DynamicsParticleGeneratorBase::getClassname(void)
{
    return "DynamicsParticleGenerator";
}
OSG_GEN_CONTAINERPTR(DynamicsParticleGenerator);

OSG_END_NAMESPACE

