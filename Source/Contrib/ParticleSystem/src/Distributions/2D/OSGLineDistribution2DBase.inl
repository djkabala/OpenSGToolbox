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
 **     class LineDistribution2D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &LineDistribution2DBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 LineDistribution2DBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 LineDistribution2DBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the LineDistribution2D::_sfPoint1 field.

inline
Pnt2f &LineDistribution2DBase::editPoint1(void)
{
    editSField(Point1FieldMask);

    return _sfPoint1.getValue();
}

//! Get the value of the LineDistribution2D::_sfPoint1 field.
inline
const Pnt2f &LineDistribution2DBase::getPoint1(void) const
{
    return _sfPoint1.getValue();
}

//! Set the value of the LineDistribution2D::_sfPoint1 field.
inline
void LineDistribution2DBase::setPoint1(const Pnt2f &value)
{
    editSField(Point1FieldMask);

    _sfPoint1.setValue(value);
}
//! Get the value of the LineDistribution2D::_sfPoint2 field.

inline
Pnt2f &LineDistribution2DBase::editPoint2(void)
{
    editSField(Point2FieldMask);

    return _sfPoint2.getValue();
}

//! Get the value of the LineDistribution2D::_sfPoint2 field.
inline
const Pnt2f &LineDistribution2DBase::getPoint2(void) const
{
    return _sfPoint2.getValue();
}

//! Set the value of the LineDistribution2D::_sfPoint2 field.
inline
void LineDistribution2DBase::setPoint2(const Pnt2f &value)
{
    editSField(Point2FieldMask);

    _sfPoint2.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void LineDistribution2DBase::execSync (      LineDistribution2DBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (Point1FieldMask & whichField))
        _sfPoint1.syncWith(pFrom->_sfPoint1);

    if(FieldBits::NoField != (Point2FieldMask & whichField))
        _sfPoint2.syncWith(pFrom->_sfPoint2);
}
#endif


inline
const Char8 *LineDistribution2DBase::getClassname(void)
{
    return "LineDistribution2D";
}
OSG_GEN_CONTAINERPTR(LineDistribution2D);

OSG_END_NAMESPACE

