/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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
 **     class FlowLayout!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &FlowLayoutBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 FlowLayoutBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
FlowLayoutPtr FlowLayoutBase::create(void) 
{
    FlowLayoutPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = FlowLayoutPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
FlowLayoutPtr FlowLayoutBase::createEmpty(void) 
{ 
    FlowLayoutPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the FlowLayout::_sfOrientation field.
inline
SFUInt32 *FlowLayoutBase::getSFOrientation(void)
{
    return &_sfOrientation;
}

//! Get the FlowLayout::_sfHorizontalGap field.
inline
SFReal32 *FlowLayoutBase::getSFHorizontalGap(void)
{
    return &_sfHorizontalGap;
}

//! Get the FlowLayout::_sfVerticalGap field.
inline
SFReal32 *FlowLayoutBase::getSFVerticalGap(void)
{
    return &_sfVerticalGap;
}

//! Get the FlowLayout::_sfMajorAxisAlignment field.
inline
SFReal32 *FlowLayoutBase::getSFMajorAxisAlignment(void)
{
    return &_sfMajorAxisAlignment;
}

//! Get the FlowLayout::_sfMinorAxisAlignment field.
inline
SFReal32 *FlowLayoutBase::getSFMinorAxisAlignment(void)
{
    return &_sfMinorAxisAlignment;
}

//! Get the FlowLayout::_sfComponentAlignment field.
inline
SFReal32 *FlowLayoutBase::getSFComponentAlignment(void)
{
    return &_sfComponentAlignment;
}


//! Get the value of the FlowLayout::_sfOrientation field.
inline
UInt32 &FlowLayoutBase::getOrientation(void)
{
    return _sfOrientation.getValue();
}

//! Get the value of the FlowLayout::_sfOrientation field.
inline
const UInt32 &FlowLayoutBase::getOrientation(void) const
{
    return _sfOrientation.getValue();
}

//! Set the value of the FlowLayout::_sfOrientation field.
inline
void FlowLayoutBase::setOrientation(const UInt32 &value)
{
    _sfOrientation.setValue(value);
}

//! Get the value of the FlowLayout::_sfHorizontalGap field.
inline
Real32 &FlowLayoutBase::getHorizontalGap(void)
{
    return _sfHorizontalGap.getValue();
}

//! Get the value of the FlowLayout::_sfHorizontalGap field.
inline
const Real32 &FlowLayoutBase::getHorizontalGap(void) const
{
    return _sfHorizontalGap.getValue();
}

//! Set the value of the FlowLayout::_sfHorizontalGap field.
inline
void FlowLayoutBase::setHorizontalGap(const Real32 &value)
{
    _sfHorizontalGap.setValue(value);
}

//! Get the value of the FlowLayout::_sfVerticalGap field.
inline
Real32 &FlowLayoutBase::getVerticalGap(void)
{
    return _sfVerticalGap.getValue();
}

//! Get the value of the FlowLayout::_sfVerticalGap field.
inline
const Real32 &FlowLayoutBase::getVerticalGap(void) const
{
    return _sfVerticalGap.getValue();
}

//! Set the value of the FlowLayout::_sfVerticalGap field.
inline
void FlowLayoutBase::setVerticalGap(const Real32 &value)
{
    _sfVerticalGap.setValue(value);
}

//! Get the value of the FlowLayout::_sfMajorAxisAlignment field.
inline
Real32 &FlowLayoutBase::getMajorAxisAlignment(void)
{
    return _sfMajorAxisAlignment.getValue();
}

//! Get the value of the FlowLayout::_sfMajorAxisAlignment field.
inline
const Real32 &FlowLayoutBase::getMajorAxisAlignment(void) const
{
    return _sfMajorAxisAlignment.getValue();
}

//! Set the value of the FlowLayout::_sfMajorAxisAlignment field.
inline
void FlowLayoutBase::setMajorAxisAlignment(const Real32 &value)
{
    _sfMajorAxisAlignment.setValue(value);
}

//! Get the value of the FlowLayout::_sfMinorAxisAlignment field.
inline
Real32 &FlowLayoutBase::getMinorAxisAlignment(void)
{
    return _sfMinorAxisAlignment.getValue();
}

//! Get the value of the FlowLayout::_sfMinorAxisAlignment field.
inline
const Real32 &FlowLayoutBase::getMinorAxisAlignment(void) const
{
    return _sfMinorAxisAlignment.getValue();
}

//! Set the value of the FlowLayout::_sfMinorAxisAlignment field.
inline
void FlowLayoutBase::setMinorAxisAlignment(const Real32 &value)
{
    _sfMinorAxisAlignment.setValue(value);
}

//! Get the value of the FlowLayout::_sfComponentAlignment field.
inline
Real32 &FlowLayoutBase::getComponentAlignment(void)
{
    return _sfComponentAlignment.getValue();
}

//! Get the value of the FlowLayout::_sfComponentAlignment field.
inline
const Real32 &FlowLayoutBase::getComponentAlignment(void) const
{
    return _sfComponentAlignment.getValue();
}

//! Set the value of the FlowLayout::_sfComponentAlignment field.
inline
void FlowLayoutBase::setComponentAlignment(const Real32 &value)
{
    _sfComponentAlignment.setValue(value);
}


OSG_END_NAMESPACE

#define OSGFLOWLAYOUTBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

