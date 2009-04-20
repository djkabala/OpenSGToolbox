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
 **     class BoxDistribution3D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &BoxDistribution3DBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 BoxDistribution3DBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
BoxDistribution3DPtr BoxDistribution3DBase::create(void) 
{
    BoxDistribution3DPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = BoxDistribution3DPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
BoxDistribution3DPtr BoxDistribution3DBase::createEmpty(void) 
{ 
    BoxDistribution3DPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the BoxDistribution3D::_sfMinPoint field.
inline
SFPnt3f *BoxDistribution3DBase::getSFMinPoint(void)
{
    return &_sfMinPoint;
}

//! Get the BoxDistribution3D::_sfMaxPoint field.
inline
SFPnt3f *BoxDistribution3DBase::getSFMaxPoint(void)
{
    return &_sfMaxPoint;
}

//! Get the BoxDistribution3D::_sfSurfaceOrVolume field.
inline
SFUInt32 *BoxDistribution3DBase::getSFSurfaceOrVolume(void)
{
    return &_sfSurfaceOrVolume;
}


//! Get the value of the BoxDistribution3D::_sfMinPoint field.
inline
Pnt3f &BoxDistribution3DBase::getMinPoint(void)
{
    return _sfMinPoint.getValue();
}

//! Get the value of the BoxDistribution3D::_sfMinPoint field.
inline
const Pnt3f &BoxDistribution3DBase::getMinPoint(void) const
{
    return _sfMinPoint.getValue();
}

//! Set the value of the BoxDistribution3D::_sfMinPoint field.
inline
void BoxDistribution3DBase::setMinPoint(const Pnt3f &value)
{
    _sfMinPoint.setValue(value);
}

//! Get the value of the BoxDistribution3D::_sfMaxPoint field.
inline
Pnt3f &BoxDistribution3DBase::getMaxPoint(void)
{
    return _sfMaxPoint.getValue();
}

//! Get the value of the BoxDistribution3D::_sfMaxPoint field.
inline
const Pnt3f &BoxDistribution3DBase::getMaxPoint(void) const
{
    return _sfMaxPoint.getValue();
}

//! Set the value of the BoxDistribution3D::_sfMaxPoint field.
inline
void BoxDistribution3DBase::setMaxPoint(const Pnt3f &value)
{
    _sfMaxPoint.setValue(value);
}

//! Get the value of the BoxDistribution3D::_sfSurfaceOrVolume field.
inline
UInt32 &BoxDistribution3DBase::getSurfaceOrVolume(void)
{
    return _sfSurfaceOrVolume.getValue();
}

//! Get the value of the BoxDistribution3D::_sfSurfaceOrVolume field.
inline
const UInt32 &BoxDistribution3DBase::getSurfaceOrVolume(void) const
{
    return _sfSurfaceOrVolume.getValue();
}

//! Set the value of the BoxDistribution3D::_sfSurfaceOrVolume field.
inline
void BoxDistribution3DBase::setSurfaceOrVolume(const UInt32 &value)
{
    _sfSurfaceOrVolume.setValue(value);
}


OSG_END_NAMESPACE

#define OSGBOXDISTRIBUTION3DBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"
