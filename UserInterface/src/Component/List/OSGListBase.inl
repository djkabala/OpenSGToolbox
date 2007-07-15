/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     class List!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ListBase::getClassType(void)
{
    return _type; 
} 

//! access the numerical type of the class
inline
OSG::UInt32 ListBase::getClassTypeId(void) 
{
    return _type.getId(); 
} 

//! create a new instance of the class
inline
ListPtr ListBase::create(void) 
{
    ListPtr fc; 

    if(getClassType().getPrototype() != OSG::NullFC) 
    {
        fc = ListPtr::dcast(
            getClassType().getPrototype()-> shallowCopy()); 
    }
    
    return fc; 
}

//! create an empty new instance of the class, do not copy the prototype
inline
ListPtr ListBase::createEmpty(void) 
{ 
    ListPtr returnValue; 
    
    newPtr(returnValue); 

    return returnValue; 
}


/*------------------------------ get -----------------------------------*/

//! Get the List::_sfCellLayout field.
inline
SFUInt32 *ListBase::getSFCellLayout(void)
{
    return &_sfCellLayout;
}

//! Get the List::_mfList field.
inline
MFComponentPtr *ListBase::getMFList(void)
{
    return &_mfList;
}

//! Get the List::_mfSelectedIndices field.
inline
MFUInt32 *ListBase::getMFSelectedIndices(void)
{
    return &_mfSelectedIndices;
}


//! Get the value of the List::_sfCellLayout field.
inline
UInt32 &ListBase::getCellLayout(void)
{
    return _sfCellLayout.getValue();
}

//! Get the value of the List::_sfCellLayout field.
inline
const UInt32 &ListBase::getCellLayout(void) const
{
    return _sfCellLayout.getValue();
}

//! Set the value of the List::_sfCellLayout field.
inline
void ListBase::setCellLayout(const UInt32 &value)
{
    _sfCellLayout.setValue(value);
}


//! Get the value of the \a index element the List::_mfList field.
inline
ComponentPtr &ListBase::getList(const UInt32 index)
{
    return _mfList[index];
}

//! Get the List::_mfList field.
inline
MFComponentPtr &ListBase::getList(void)
{
    return _mfList;
}

//! Get the List::_mfList field.
inline
const MFComponentPtr &ListBase::getList(void) const
{
    return _mfList;
}

//! Get the value of the \a index element the List::_mfSelectedIndices field.
inline
UInt32 &ListBase::getSelectedIndices(const UInt32 index)
{
    return _mfSelectedIndices[index];
}

//! Get the List::_mfSelectedIndices field.
inline
MFUInt32 &ListBase::getSelectedIndices(void)
{
    return _mfSelectedIndices;
}

//! Get the List::_mfSelectedIndices field.
inline
const MFUInt32 &ListBase::getSelectedIndices(void) const
{
    return _mfSelectedIndices;
}

OSG_END_NAMESPACE

#define OSGLISTBASE_INLINE_CVSID "@(#)$Id: FCBaseTemplate_inl.h,v 1.20 2002/12/04 14:22:22 dirk Exp $"

