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
 **     class PolygonBorder!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PolygonBorderBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 PolygonBorderBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
PolygonBorderPtr PolygonBorderBase::create(void) 
{
    PolygonBorderPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = PolygonBorderPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
PolygonBorderPtr PolygonBorderBase::createEmpty(void) 
{ 
    PolygonBorderPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the PolygonBorder::_sfWidth field.
inline
SFReal32 *PolygonBorderBase::getSFWidth(void)
{
    return &_sfWidth;
}

//! Get the PolygonBorder::_sfColor field.
inline
SFColor4f *PolygonBorderBase::getSFColor(void)
{
    return &_sfColor;
}

//! Get the PolygonBorder::_mfVertices field.
inline
MFPnt2f *PolygonBorderBase::getMFVertices(void)
{
    return &_mfVertices;
}


//! Get the value of the PolygonBorder::_sfWidth field.
inline
Real32 &PolygonBorderBase::getWidth(void)
{
    return _sfWidth.getValue();
}

//! Get the value of the PolygonBorder::_sfWidth field.
inline
const Real32 &PolygonBorderBase::getWidth(void) const
{
    return _sfWidth.getValue();
}

//! Set the value of the PolygonBorder::_sfWidth field.
inline
void PolygonBorderBase::setWidth(const Real32 &value)
{
    _sfWidth.setValue(value);
}

//! Get the value of the PolygonBorder::_sfColor field.
inline
Color4f &PolygonBorderBase::getColor(void)
{
    return _sfColor.getValue();
}

//! Get the value of the PolygonBorder::_sfColor field.
inline
const Color4f &PolygonBorderBase::getColor(void) const
{
    return _sfColor.getValue();
}

//! Set the value of the PolygonBorder::_sfColor field.
inline
void PolygonBorderBase::setColor(const Color4f &value)
{
    _sfColor.setValue(value);
}


//! Get the value of the \a index element the PolygonBorder::_mfVertices field.
inline
Pnt2f &PolygonBorderBase::getVertices(const UInt32 index)
{
    return _mfVertices[index];
}

//! Get the PolygonBorder::_mfVertices field.
inline
MFPnt2f &PolygonBorderBase::getVertices(void)
{
    return _mfVertices;
}

//! Get the PolygonBorder::_mfVertices field.
inline
const MFPnt2f &PolygonBorderBase::getVertices(void) const
{
    return _mfVertices;
}

OSG_END_NAMESPACE

#define OSGPOLYGONBORDERBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

