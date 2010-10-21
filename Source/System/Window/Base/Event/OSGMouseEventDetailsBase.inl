/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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
 **     class MouseEventDetails!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &MouseEventDetailsBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 MouseEventDetailsBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 MouseEventDetailsBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the MouseEventDetails::_sfButton field.

inline
UInt16 &MouseEventDetailsBase::editButton(void)
{
    editSField(ButtonFieldMask);

    return _sfButton.getValue();
}

//! Get the value of the MouseEventDetails::_sfButton field.
inline
      UInt16  MouseEventDetailsBase::getButton(void) const
{
    return _sfButton.getValue();
}

//! Set the value of the MouseEventDetails::_sfButton field.
inline
void MouseEventDetailsBase::setButton(const UInt16 value)
{
    editSField(ButtonFieldMask);

    _sfButton.setValue(value);
}
//! Get the value of the MouseEventDetails::_sfClickCount field.

inline
UInt16 &MouseEventDetailsBase::editClickCount(void)
{
    editSField(ClickCountFieldMask);

    return _sfClickCount.getValue();
}

//! Get the value of the MouseEventDetails::_sfClickCount field.
inline
      UInt16  MouseEventDetailsBase::getClickCount(void) const
{
    return _sfClickCount.getValue();
}

//! Set the value of the MouseEventDetails::_sfClickCount field.
inline
void MouseEventDetailsBase::setClickCount(const UInt16 value)
{
    editSField(ClickCountFieldMask);

    _sfClickCount.setValue(value);
}
//! Get the value of the MouseEventDetails::_sfLocation field.

inline
Pnt2f &MouseEventDetailsBase::editLocation(void)
{
    editSField(LocationFieldMask);

    return _sfLocation.getValue();
}

//! Get the value of the MouseEventDetails::_sfLocation field.
inline
const Pnt2f &MouseEventDetailsBase::getLocation(void) const
{
    return _sfLocation.getValue();
}

//! Set the value of the MouseEventDetails::_sfLocation field.
inline
void MouseEventDetailsBase::setLocation(const Pnt2f &value)
{
    editSField(LocationFieldMask);

    _sfLocation.setValue(value);
}
//! Get the value of the MouseEventDetails::_sfDelta field.

inline
Vec2f &MouseEventDetailsBase::editDelta(void)
{
    editSField(DeltaFieldMask);

    return _sfDelta.getValue();
}

//! Get the value of the MouseEventDetails::_sfDelta field.
inline
const Vec2f &MouseEventDetailsBase::getDelta(void) const
{
    return _sfDelta.getValue();
}

//! Set the value of the MouseEventDetails::_sfDelta field.
inline
void MouseEventDetailsBase::setDelta(const Vec2f &value)
{
    editSField(DeltaFieldMask);

    _sfDelta.setValue(value);
}

//! Get the value of the MouseEventDetails::_sfViewport field.
inline
Viewport * MouseEventDetailsBase::getViewport(void) const
{
    return _sfViewport.getValue();
}

//! Set the value of the MouseEventDetails::_sfViewport field.
inline
void MouseEventDetailsBase::setViewport(Viewport * const value)
{
    editSField(ViewportFieldMask);

    _sfViewport.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void MouseEventDetailsBase::execSync (      MouseEventDetailsBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ButtonFieldMask & whichField))
        _sfButton.syncWith(pFrom->_sfButton);

    if(FieldBits::NoField != (ClickCountFieldMask & whichField))
        _sfClickCount.syncWith(pFrom->_sfClickCount);

    if(FieldBits::NoField != (LocationFieldMask & whichField))
        _sfLocation.syncWith(pFrom->_sfLocation);

    if(FieldBits::NoField != (DeltaFieldMask & whichField))
        _sfDelta.syncWith(pFrom->_sfDelta);

    if(FieldBits::NoField != (ViewportFieldMask & whichField))
        _sfViewport.syncWith(pFrom->_sfViewport);
}
#endif


inline
const Char8 *MouseEventDetailsBase::getClassname(void)
{
    return "MouseEventDetails";
}
OSG_GEN_CONTAINERPTR(MouseEventDetails);

OSG_END_NAMESPACE

