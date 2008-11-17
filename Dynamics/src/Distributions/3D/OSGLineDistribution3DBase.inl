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
 **     class LineDistribution3D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &LineDistribution3DBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 LineDistribution3DBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
LineDistribution3DPtr LineDistribution3DBase::create(void) 
{
    LineDistribution3DPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = LineDistribution3DPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
LineDistribution3DPtr LineDistribution3DBase::createEmpty(void) 
{ 
    LineDistribution3DPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the LineDistribution3D::_sfPoint1 field.
inline
SFPnt3f *LineDistribution3DBase::getSFPoint1(void)
{
    return &_sfPoint1;
}

//! Get the LineDistribution3D::_sfPoint2 field.
inline
SFPnt3f *LineDistribution3DBase::getSFPoint2(void)
{
    return &_sfPoint2;
}


//! Get the value of the LineDistribution3D::_sfPoint1 field.
inline
Pnt3f &LineDistribution3DBase::getPoint1(void)
{
    return _sfPoint1.getValue();
}

//! Get the value of the LineDistribution3D::_sfPoint1 field.
inline
const Pnt3f &LineDistribution3DBase::getPoint1(void) const
{
    return _sfPoint1.getValue();
}

//! Set the value of the LineDistribution3D::_sfPoint1 field.
inline
void LineDistribution3DBase::setPoint1(const Pnt3f &value)
{
    _sfPoint1.setValue(value);
}

//! Get the value of the LineDistribution3D::_sfPoint2 field.
inline
Pnt3f &LineDistribution3DBase::getPoint2(void)
{
    return _sfPoint2.getValue();
}

//! Get the value of the LineDistribution3D::_sfPoint2 field.
inline
const Pnt3f &LineDistribution3DBase::getPoint2(void) const
{
    return _sfPoint2.getValue();
}

//! Set the value of the LineDistribution3D::_sfPoint2 field.
inline
void LineDistribution3DBase::setPoint2(const Pnt3f &value)
{
    _sfPoint2.setValue(value);
}


OSG_END_NAMESPACE

#define OSGLINEDISTRIBUTION3DBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

