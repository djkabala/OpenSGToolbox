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
 **     class MouseWheelEventDetails!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &MouseWheelEventDetailsBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 MouseWheelEventDetailsBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 MouseWheelEventDetailsBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the MouseWheelEventDetails::_sfScrollType field.

inline
UInt8 &MouseWheelEventDetailsBase::editScrollType(void)
{
    editSField(ScrollTypeFieldMask);

    return _sfScrollType.getValue();
}

//! Get the value of the MouseWheelEventDetails::_sfScrollType field.
inline
      UInt8  MouseWheelEventDetailsBase::getScrollType(void) const
{
    return _sfScrollType.getValue();
}

//! Set the value of the MouseWheelEventDetails::_sfScrollType field.
inline
void MouseWheelEventDetailsBase::setScrollType(const UInt8 value)
{
    editSField(ScrollTypeFieldMask);

    _sfScrollType.setValue(value);
}
//! Get the value of the MouseWheelEventDetails::_sfScrollOrientation field.

inline
UInt8 &MouseWheelEventDetailsBase::editScrollOrientation(void)
{
    editSField(ScrollOrientationFieldMask);

    return _sfScrollOrientation.getValue();
}

//! Get the value of the MouseWheelEventDetails::_sfScrollOrientation field.
inline
      UInt8  MouseWheelEventDetailsBase::getScrollOrientation(void) const
{
    return _sfScrollOrientation.getValue();
}

//! Set the value of the MouseWheelEventDetails::_sfScrollOrientation field.
inline
void MouseWheelEventDetailsBase::setScrollOrientation(const UInt8 value)
{
    editSField(ScrollOrientationFieldMask);

    _sfScrollOrientation.setValue(value);
}
//! Get the value of the MouseWheelEventDetails::_sfWheelRotation field.

inline
Int32 &MouseWheelEventDetailsBase::editWheelRotation(void)
{
    editSField(WheelRotationFieldMask);

    return _sfWheelRotation.getValue();
}

//! Get the value of the MouseWheelEventDetails::_sfWheelRotation field.
inline
      Int32  MouseWheelEventDetailsBase::getWheelRotation(void) const
{
    return _sfWheelRotation.getValue();
}

//! Set the value of the MouseWheelEventDetails::_sfWheelRotation field.
inline
void MouseWheelEventDetailsBase::setWheelRotation(const Int32 value)
{
    editSField(WheelRotationFieldMask);

    _sfWheelRotation.setValue(value);
}
//! Get the value of the MouseWheelEventDetails::_sfLocation field.

inline
Pnt2f &MouseWheelEventDetailsBase::editLocation(void)
{
    editSField(LocationFieldMask);

    return _sfLocation.getValue();
}

//! Get the value of the MouseWheelEventDetails::_sfLocation field.
inline
const Pnt2f &MouseWheelEventDetailsBase::getLocation(void) const
{
    return _sfLocation.getValue();
}

//! Set the value of the MouseWheelEventDetails::_sfLocation field.
inline
void MouseWheelEventDetailsBase::setLocation(const Pnt2f &value)
{
    editSField(LocationFieldMask);

    _sfLocation.setValue(value);
}

//! Get the value of the MouseWheelEventDetails::_sfViewport field.
inline
Viewport * MouseWheelEventDetailsBase::getViewport(void) const
{
    return _sfViewport.getValue();
}

//! Set the value of the MouseWheelEventDetails::_sfViewport field.
inline
void MouseWheelEventDetailsBase::setViewport(Viewport * const value)
{
    editSField(ViewportFieldMask);

    _sfViewport.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void MouseWheelEventDetailsBase::execSync (      MouseWheelEventDetailsBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ScrollTypeFieldMask & whichField))
        _sfScrollType.syncWith(pFrom->_sfScrollType);

    if(FieldBits::NoField != (ScrollOrientationFieldMask & whichField))
        _sfScrollOrientation.syncWith(pFrom->_sfScrollOrientation);

    if(FieldBits::NoField != (WheelRotationFieldMask & whichField))
        _sfWheelRotation.syncWith(pFrom->_sfWheelRotation);

    if(FieldBits::NoField != (LocationFieldMask & whichField))
        _sfLocation.syncWith(pFrom->_sfLocation);

    if(FieldBits::NoField != (ViewportFieldMask & whichField))
        _sfViewport.syncWith(pFrom->_sfViewport);
}
#endif


inline
const Char8 *MouseWheelEventDetailsBase::getClassname(void)
{
    return "MouseWheelEventDetails";
}
OSG_GEN_CONTAINERPTR(MouseWheelEventDetails);

OSG_END_NAMESPACE

