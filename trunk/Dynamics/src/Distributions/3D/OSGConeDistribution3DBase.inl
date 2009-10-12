/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Dynamics                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                          Authors: David Kabala                            *
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
 **     class ConeDistribution3D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ConeDistribution3DBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ConeDistribution3DBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ConeDistribution3DPtr ConeDistribution3DBase::create(void) 
{
    ConeDistribution3DPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ConeDistribution3DPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ConeDistribution3DPtr ConeDistribution3DBase::createEmpty(void) 
{ 
    ConeDistribution3DPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the ConeDistribution3D::_sfPosition field.
inline
const SFPnt3f *ConeDistribution3DBase::getSFPosition(void) const
{
    return &_sfPosition;
}

//! Get the ConeDistribution3D::_sfPosition field.
inline
SFPnt3f *ConeDistribution3DBase::editSFPosition(void)
{
    return &_sfPosition;
}

//! Get the ConeDistribution3D::_sfDirection field.
inline
const SFVec3f *ConeDistribution3DBase::getSFDirection(void) const
{
    return &_sfDirection;
}

//! Get the ConeDistribution3D::_sfDirection field.
inline
SFVec3f *ConeDistribution3DBase::editSFDirection(void)
{
    return &_sfDirection;
}

//! Get the ConeDistribution3D::_sfSpread field.
inline
const SFReal32 *ConeDistribution3DBase::getSFSpread(void) const
{
    return &_sfSpread;
}

//! Get the ConeDistribution3D::_sfSpread field.
inline
SFReal32 *ConeDistribution3DBase::editSFSpread(void)
{
    return &_sfSpread;
}

//! Get the ConeDistribution3D::_sfMinTheta field.
inline
const SFReal32 *ConeDistribution3DBase::getSFMinTheta(void) const
{
    return &_sfMinTheta;
}

//! Get the ConeDistribution3D::_sfMinTheta field.
inline
SFReal32 *ConeDistribution3DBase::editSFMinTheta(void)
{
    return &_sfMinTheta;
}

//! Get the ConeDistribution3D::_sfMaxTheta field.
inline
const SFReal32 *ConeDistribution3DBase::getSFMaxTheta(void) const
{
    return &_sfMaxTheta;
}

//! Get the ConeDistribution3D::_sfMaxTheta field.
inline
SFReal32 *ConeDistribution3DBase::editSFMaxTheta(void)
{
    return &_sfMaxTheta;
}

//! Get the ConeDistribution3D::_sfMin field.
inline
const SFReal32 *ConeDistribution3DBase::getSFMin(void) const
{
    return &_sfMin;
}

//! Get the ConeDistribution3D::_sfMin field.
inline
SFReal32 *ConeDistribution3DBase::editSFMin(void)
{
    return &_sfMin;
}

//! Get the ConeDistribution3D::_sfMax field.
inline
const SFReal32 *ConeDistribution3DBase::getSFMax(void) const
{
    return &_sfMax;
}

//! Get the ConeDistribution3D::_sfMax field.
inline
SFReal32 *ConeDistribution3DBase::editSFMax(void)
{
    return &_sfMax;
}

//! Get the ConeDistribution3D::_sfSurfaceOrVolume field.
inline
const SFUInt32 *ConeDistribution3DBase::getSFSurfaceOrVolume(void) const
{
    return &_sfSurfaceOrVolume;
}

//! Get the ConeDistribution3D::_sfSurfaceOrVolume field.
inline
SFUInt32 *ConeDistribution3DBase::editSFSurfaceOrVolume(void)
{
    return &_sfSurfaceOrVolume;
}


//! Get the value of the ConeDistribution3D::_sfPosition field.
inline
Pnt3f &ConeDistribution3DBase::editPosition(void)
{
    return _sfPosition.getValue();
}

//! Get the value of the ConeDistribution3D::_sfPosition field.
inline
const Pnt3f &ConeDistribution3DBase::getPosition(void) const
{
    return _sfPosition.getValue();
}

//! Set the value of the ConeDistribution3D::_sfPosition field.
inline
void ConeDistribution3DBase::setPosition(const Pnt3f &value)
{
    _sfPosition.setValue(value);
}

//! Get the value of the ConeDistribution3D::_sfDirection field.
inline
Vec3f &ConeDistribution3DBase::editDirection(void)
{
    return _sfDirection.getValue();
}

//! Get the value of the ConeDistribution3D::_sfDirection field.
inline
const Vec3f &ConeDistribution3DBase::getDirection(void) const
{
    return _sfDirection.getValue();
}

//! Set the value of the ConeDistribution3D::_sfDirection field.
inline
void ConeDistribution3DBase::setDirection(const Vec3f &value)
{
    _sfDirection.setValue(value);
}

//! Get the value of the ConeDistribution3D::_sfSpread field.
inline
Real32 &ConeDistribution3DBase::editSpread(void)
{
    return _sfSpread.getValue();
}

//! Get the value of the ConeDistribution3D::_sfSpread field.
inline
const Real32 &ConeDistribution3DBase::getSpread(void) const
{
    return _sfSpread.getValue();
}

//! Set the value of the ConeDistribution3D::_sfSpread field.
inline
void ConeDistribution3DBase::setSpread(const Real32 &value)
{
    _sfSpread.setValue(value);
}

//! Get the value of the ConeDistribution3D::_sfMinTheta field.
inline
Real32 &ConeDistribution3DBase::editMinTheta(void)
{
    return _sfMinTheta.getValue();
}

//! Get the value of the ConeDistribution3D::_sfMinTheta field.
inline
const Real32 &ConeDistribution3DBase::getMinTheta(void) const
{
    return _sfMinTheta.getValue();
}

//! Set the value of the ConeDistribution3D::_sfMinTheta field.
inline
void ConeDistribution3DBase::setMinTheta(const Real32 &value)
{
    _sfMinTheta.setValue(value);
}

//! Get the value of the ConeDistribution3D::_sfMaxTheta field.
inline
Real32 &ConeDistribution3DBase::editMaxTheta(void)
{
    return _sfMaxTheta.getValue();
}

//! Get the value of the ConeDistribution3D::_sfMaxTheta field.
inline
const Real32 &ConeDistribution3DBase::getMaxTheta(void) const
{
    return _sfMaxTheta.getValue();
}

//! Set the value of the ConeDistribution3D::_sfMaxTheta field.
inline
void ConeDistribution3DBase::setMaxTheta(const Real32 &value)
{
    _sfMaxTheta.setValue(value);
}

//! Get the value of the ConeDistribution3D::_sfMin field.
inline
Real32 &ConeDistribution3DBase::editMin(void)
{
    return _sfMin.getValue();
}

//! Get the value of the ConeDistribution3D::_sfMin field.
inline
const Real32 &ConeDistribution3DBase::getMin(void) const
{
    return _sfMin.getValue();
}

//! Set the value of the ConeDistribution3D::_sfMin field.
inline
void ConeDistribution3DBase::setMin(const Real32 &value)
{
    _sfMin.setValue(value);
}

//! Get the value of the ConeDistribution3D::_sfMax field.
inline
Real32 &ConeDistribution3DBase::editMax(void)
{
    return _sfMax.getValue();
}

//! Get the value of the ConeDistribution3D::_sfMax field.
inline
const Real32 &ConeDistribution3DBase::getMax(void) const
{
    return _sfMax.getValue();
}

//! Set the value of the ConeDistribution3D::_sfMax field.
inline
void ConeDistribution3DBase::setMax(const Real32 &value)
{
    _sfMax.setValue(value);
}

//! Get the value of the ConeDistribution3D::_sfSurfaceOrVolume field.
inline
UInt32 &ConeDistribution3DBase::editSurfaceOrVolume(void)
{
    return _sfSurfaceOrVolume.getValue();
}

//! Get the value of the ConeDistribution3D::_sfSurfaceOrVolume field.
inline
const UInt32 &ConeDistribution3DBase::getSurfaceOrVolume(void) const
{
    return _sfSurfaceOrVolume.getValue();
}

//! Set the value of the ConeDistribution3D::_sfSurfaceOrVolume field.
inline
void ConeDistribution3DBase::setSurfaceOrVolume(const UInt32 &value)
{
    _sfSurfaceOrVolume.setValue(value);
}


OSG_END_NAMESPACE
