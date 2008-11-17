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
 **     class LineParticleSystemDrawer!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &LineParticleSystemDrawerBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 LineParticleSystemDrawerBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
LineParticleSystemDrawerPtr LineParticleSystemDrawerBase::create(void) 
{
    LineParticleSystemDrawerPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = LineParticleSystemDrawerPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
LineParticleSystemDrawerPtr LineParticleSystemDrawerBase::createEmpty(void) 
{ 
    LineParticleSystemDrawerPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the LineParticleSystemDrawer::_sfLineWidthScaling field.
inline
SFReal32 *LineParticleSystemDrawerBase::getSFLineWidthScaling(void)
{
    return &_sfLineWidthScaling;
}

//! Get the LineParticleSystemDrawer::_sfLineLengthElpsScaling field.
inline
SFReal32 *LineParticleSystemDrawerBase::getSFLineLengthElpsScaling(void)
{
    return &_sfLineLengthElpsScaling;
}

//! Get the LineParticleSystemDrawer::_sfLineDirectionSource field.
inline
SFUInt32 *LineParticleSystemDrawerBase::getSFLineDirectionSource(void)
{
    return &_sfLineDirectionSource;
}

//! Get the LineParticleSystemDrawer::_sfLineDirection field.
inline
SFVec3f *LineParticleSystemDrawerBase::getSFLineDirection(void)
{
    return &_sfLineDirection;
}

//! Get the LineParticleSystemDrawer::_sfLineLengthSource field.
inline
SFUInt32 *LineParticleSystemDrawerBase::getSFLineLengthSource(void)
{
    return &_sfLineLengthSource;
}

//! Get the LineParticleSystemDrawer::_sfLineLength field.
inline
SFReal32 *LineParticleSystemDrawerBase::getSFLineLength(void)
{
    return &_sfLineLength;
}


//! Get the value of the LineParticleSystemDrawer::_sfLineWidthScaling field.
inline
Real32 &LineParticleSystemDrawerBase::getLineWidthScaling(void)
{
    return _sfLineWidthScaling.getValue();
}

//! Get the value of the LineParticleSystemDrawer::_sfLineWidthScaling field.
inline
const Real32 &LineParticleSystemDrawerBase::getLineWidthScaling(void) const
{
    return _sfLineWidthScaling.getValue();
}

//! Set the value of the LineParticleSystemDrawer::_sfLineWidthScaling field.
inline
void LineParticleSystemDrawerBase::setLineWidthScaling(const Real32 &value)
{
    _sfLineWidthScaling.setValue(value);
}

//! Get the value of the LineParticleSystemDrawer::_sfLineLengthElpsScaling field.
inline
Real32 &LineParticleSystemDrawerBase::getLineLengthElpsScaling(void)
{
    return _sfLineLengthElpsScaling.getValue();
}

//! Get the value of the LineParticleSystemDrawer::_sfLineLengthElpsScaling field.
inline
const Real32 &LineParticleSystemDrawerBase::getLineLengthElpsScaling(void) const
{
    return _sfLineLengthElpsScaling.getValue();
}

//! Set the value of the LineParticleSystemDrawer::_sfLineLengthElpsScaling field.
inline
void LineParticleSystemDrawerBase::setLineLengthElpsScaling(const Real32 &value)
{
    _sfLineLengthElpsScaling.setValue(value);
}

//! Get the value of the LineParticleSystemDrawer::_sfLineDirectionSource field.
inline
UInt32 &LineParticleSystemDrawerBase::getLineDirectionSource(void)
{
    return _sfLineDirectionSource.getValue();
}

//! Get the value of the LineParticleSystemDrawer::_sfLineDirectionSource field.
inline
const UInt32 &LineParticleSystemDrawerBase::getLineDirectionSource(void) const
{
    return _sfLineDirectionSource.getValue();
}

//! Set the value of the LineParticleSystemDrawer::_sfLineDirectionSource field.
inline
void LineParticleSystemDrawerBase::setLineDirectionSource(const UInt32 &value)
{
    _sfLineDirectionSource.setValue(value);
}

//! Get the value of the LineParticleSystemDrawer::_sfLineDirection field.
inline
Vec3f &LineParticleSystemDrawerBase::getLineDirection(void)
{
    return _sfLineDirection.getValue();
}

//! Get the value of the LineParticleSystemDrawer::_sfLineDirection field.
inline
const Vec3f &LineParticleSystemDrawerBase::getLineDirection(void) const
{
    return _sfLineDirection.getValue();
}

//! Set the value of the LineParticleSystemDrawer::_sfLineDirection field.
inline
void LineParticleSystemDrawerBase::setLineDirection(const Vec3f &value)
{
    _sfLineDirection.setValue(value);
}

//! Get the value of the LineParticleSystemDrawer::_sfLineLengthSource field.
inline
UInt32 &LineParticleSystemDrawerBase::getLineLengthSource(void)
{
    return _sfLineLengthSource.getValue();
}

//! Get the value of the LineParticleSystemDrawer::_sfLineLengthSource field.
inline
const UInt32 &LineParticleSystemDrawerBase::getLineLengthSource(void) const
{
    return _sfLineLengthSource.getValue();
}

//! Set the value of the LineParticleSystemDrawer::_sfLineLengthSource field.
inline
void LineParticleSystemDrawerBase::setLineLengthSource(const UInt32 &value)
{
    _sfLineLengthSource.setValue(value);
}

//! Get the value of the LineParticleSystemDrawer::_sfLineLength field.
inline
Real32 &LineParticleSystemDrawerBase::getLineLength(void)
{
    return _sfLineLength.getValue();
}

//! Get the value of the LineParticleSystemDrawer::_sfLineLength field.
inline
const Real32 &LineParticleSystemDrawerBase::getLineLength(void) const
{
    return _sfLineLength.getValue();
}

//! Set the value of the LineParticleSystemDrawer::_sfLineLength field.
inline
void LineParticleSystemDrawerBase::setLineLength(const Real32 &value)
{
    _sfLineLength.setValue(value);
}


OSG_END_NAMESPACE

#define OSGLINEPARTICLESYSTEMDRAWERBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

