/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox Particle System                        *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *   Authors: David Kabala, David Oluwatimi                                  *
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

#include <OpenSG/OSGConfig.h>

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


/*------------------------------ get -----------------------------------*/

//! Get the DynamicsParticleGenerator::_sfPositionFunction field.
inline
SFFunctionPtr *DynamicsParticleGeneratorBase::getSFPositionFunction(void)
{
    return &_sfPositionFunction;
}

//! Get the DynamicsParticleGenerator::_sfSecPositionFunction field.
inline
SFFunctionPtr *DynamicsParticleGeneratorBase::getSFSecPositionFunction(void)
{
    return &_sfSecPositionFunction;
}

//! Get the DynamicsParticleGenerator::_sfNormalFunction field.
inline
SFFunctionPtr *DynamicsParticleGeneratorBase::getSFNormalFunction(void)
{
    return &_sfNormalFunction;
}

//! Get the DynamicsParticleGenerator::_sfColorFunction field.
inline
SFFunctionPtr *DynamicsParticleGeneratorBase::getSFColorFunction(void)
{
    return &_sfColorFunction;
}

//! Get the DynamicsParticleGenerator::_sfSizeFunction field.
inline
SFFunctionPtr *DynamicsParticleGeneratorBase::getSFSizeFunction(void)
{
    return &_sfSizeFunction;
}

//! Get the DynamicsParticleGenerator::_sfLifespanFunction field.
inline
SFFunctionPtr *DynamicsParticleGeneratorBase::getSFLifespanFunction(void)
{
    return &_sfLifespanFunction;
}

//! Get the DynamicsParticleGenerator::_sfAgeFunction field.
inline
SFFunctionPtr *DynamicsParticleGeneratorBase::getSFAgeFunction(void)
{
    return &_sfAgeFunction;
}

//! Get the DynamicsParticleGenerator::_sfVelocityFunction field.
inline
SFFunctionPtr *DynamicsParticleGeneratorBase::getSFVelocityFunction(void)
{
    return &_sfVelocityFunction;
}

//! Get the DynamicsParticleGenerator::_sfSecVelocityFunction field.
inline
SFFunctionPtr *DynamicsParticleGeneratorBase::getSFSecVelocityFunction(void)
{
    return &_sfSecVelocityFunction;
}

//! Get the DynamicsParticleGenerator::_sfAccelerationFunction field.
inline
SFFunctionPtr *DynamicsParticleGeneratorBase::getSFAccelerationFunction(void)
{
    return &_sfAccelerationFunction;
}

//! Get the DynamicsParticleGenerator::_sfPropertyFunction field.
inline
SFFunctionPtr *DynamicsParticleGeneratorBase::getSFPropertyFunction(void)
{
    return &_sfPropertyFunction;
}


//! Get the value of the DynamicsParticleGenerator::_sfPositionFunction field.
inline
FunctionPtr &DynamicsParticleGeneratorBase::getPositionFunction(void)
{
    return _sfPositionFunction.getValue();
}

//! Get the value of the DynamicsParticleGenerator::_sfPositionFunction field.
inline
const FunctionPtr &DynamicsParticleGeneratorBase::getPositionFunction(void) const
{
    return _sfPositionFunction.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfPositionFunction field.
inline
void DynamicsParticleGeneratorBase::setPositionFunction(const FunctionPtr &value)
{
    _sfPositionFunction.setValue(value);
}

//! Get the value of the DynamicsParticleGenerator::_sfSecPositionFunction field.
inline
FunctionPtr &DynamicsParticleGeneratorBase::getSecPositionFunction(void)
{
    return _sfSecPositionFunction.getValue();
}

//! Get the value of the DynamicsParticleGenerator::_sfSecPositionFunction field.
inline
const FunctionPtr &DynamicsParticleGeneratorBase::getSecPositionFunction(void) const
{
    return _sfSecPositionFunction.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfSecPositionFunction field.
inline
void DynamicsParticleGeneratorBase::setSecPositionFunction(const FunctionPtr &value)
{
    _sfSecPositionFunction.setValue(value);
}

//! Get the value of the DynamicsParticleGenerator::_sfNormalFunction field.
inline
FunctionPtr &DynamicsParticleGeneratorBase::getNormalFunction(void)
{
    return _sfNormalFunction.getValue();
}

//! Get the value of the DynamicsParticleGenerator::_sfNormalFunction field.
inline
const FunctionPtr &DynamicsParticleGeneratorBase::getNormalFunction(void) const
{
    return _sfNormalFunction.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfNormalFunction field.
inline
void DynamicsParticleGeneratorBase::setNormalFunction(const FunctionPtr &value)
{
    _sfNormalFunction.setValue(value);
}

//! Get the value of the DynamicsParticleGenerator::_sfColorFunction field.
inline
FunctionPtr &DynamicsParticleGeneratorBase::getColorFunction(void)
{
    return _sfColorFunction.getValue();
}

//! Get the value of the DynamicsParticleGenerator::_sfColorFunction field.
inline
const FunctionPtr &DynamicsParticleGeneratorBase::getColorFunction(void) const
{
    return _sfColorFunction.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfColorFunction field.
inline
void DynamicsParticleGeneratorBase::setColorFunction(const FunctionPtr &value)
{
    _sfColorFunction.setValue(value);
}

//! Get the value of the DynamicsParticleGenerator::_sfSizeFunction field.
inline
FunctionPtr &DynamicsParticleGeneratorBase::getSizeFunction(void)
{
    return _sfSizeFunction.getValue();
}

//! Get the value of the DynamicsParticleGenerator::_sfSizeFunction field.
inline
const FunctionPtr &DynamicsParticleGeneratorBase::getSizeFunction(void) const
{
    return _sfSizeFunction.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfSizeFunction field.
inline
void DynamicsParticleGeneratorBase::setSizeFunction(const FunctionPtr &value)
{
    _sfSizeFunction.setValue(value);
}

//! Get the value of the DynamicsParticleGenerator::_sfLifespanFunction field.
inline
FunctionPtr &DynamicsParticleGeneratorBase::getLifespanFunction(void)
{
    return _sfLifespanFunction.getValue();
}

//! Get the value of the DynamicsParticleGenerator::_sfLifespanFunction field.
inline
const FunctionPtr &DynamicsParticleGeneratorBase::getLifespanFunction(void) const
{
    return _sfLifespanFunction.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfLifespanFunction field.
inline
void DynamicsParticleGeneratorBase::setLifespanFunction(const FunctionPtr &value)
{
    _sfLifespanFunction.setValue(value);
}

//! Get the value of the DynamicsParticleGenerator::_sfAgeFunction field.
inline
FunctionPtr &DynamicsParticleGeneratorBase::getAgeFunction(void)
{
    return _sfAgeFunction.getValue();
}

//! Get the value of the DynamicsParticleGenerator::_sfAgeFunction field.
inline
const FunctionPtr &DynamicsParticleGeneratorBase::getAgeFunction(void) const
{
    return _sfAgeFunction.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfAgeFunction field.
inline
void DynamicsParticleGeneratorBase::setAgeFunction(const FunctionPtr &value)
{
    _sfAgeFunction.setValue(value);
}

//! Get the value of the DynamicsParticleGenerator::_sfVelocityFunction field.
inline
FunctionPtr &DynamicsParticleGeneratorBase::getVelocityFunction(void)
{
    return _sfVelocityFunction.getValue();
}

//! Get the value of the DynamicsParticleGenerator::_sfVelocityFunction field.
inline
const FunctionPtr &DynamicsParticleGeneratorBase::getVelocityFunction(void) const
{
    return _sfVelocityFunction.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfVelocityFunction field.
inline
void DynamicsParticleGeneratorBase::setVelocityFunction(const FunctionPtr &value)
{
    _sfVelocityFunction.setValue(value);
}

//! Get the value of the DynamicsParticleGenerator::_sfSecVelocityFunction field.
inline
FunctionPtr &DynamicsParticleGeneratorBase::getSecVelocityFunction(void)
{
    return _sfSecVelocityFunction.getValue();
}

//! Get the value of the DynamicsParticleGenerator::_sfSecVelocityFunction field.
inline
const FunctionPtr &DynamicsParticleGeneratorBase::getSecVelocityFunction(void) const
{
    return _sfSecVelocityFunction.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfSecVelocityFunction field.
inline
void DynamicsParticleGeneratorBase::setSecVelocityFunction(const FunctionPtr &value)
{
    _sfSecVelocityFunction.setValue(value);
}

//! Get the value of the DynamicsParticleGenerator::_sfAccelerationFunction field.
inline
FunctionPtr &DynamicsParticleGeneratorBase::getAccelerationFunction(void)
{
    return _sfAccelerationFunction.getValue();
}

//! Get the value of the DynamicsParticleGenerator::_sfAccelerationFunction field.
inline
const FunctionPtr &DynamicsParticleGeneratorBase::getAccelerationFunction(void) const
{
    return _sfAccelerationFunction.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfAccelerationFunction field.
inline
void DynamicsParticleGeneratorBase::setAccelerationFunction(const FunctionPtr &value)
{
    _sfAccelerationFunction.setValue(value);
}

//! Get the value of the DynamicsParticleGenerator::_sfPropertyFunction field.
inline
FunctionPtr &DynamicsParticleGeneratorBase::getPropertyFunction(void)
{
    return _sfPropertyFunction.getValue();
}

//! Get the value of the DynamicsParticleGenerator::_sfPropertyFunction field.
inline
const FunctionPtr &DynamicsParticleGeneratorBase::getPropertyFunction(void) const
{
    return _sfPropertyFunction.getValue();
}

//! Set the value of the DynamicsParticleGenerator::_sfPropertyFunction field.
inline
void DynamicsParticleGeneratorBase::setPropertyFunction(const FunctionPtr &value)
{
    _sfPropertyFunction.setValue(value);
}


OSG_END_NAMESPACE

#define OSGDYNAMICSPARTICLEGENERATORBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

