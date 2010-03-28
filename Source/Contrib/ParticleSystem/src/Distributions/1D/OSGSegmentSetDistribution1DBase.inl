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
 **     class SegmentSetDistribution1D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &SegmentSetDistribution1DBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 SegmentSetDistribution1DBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 SegmentSetDistribution1DBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the SegmentSetDistribution1D::_sfTotalLength field.

inline
Real32 &SegmentSetDistribution1DBase::editTotalLength(void)
{
    editSField(TotalLengthFieldMask);

    return _sfTotalLength.getValue();
}

//! Get the value of the SegmentSetDistribution1D::_sfTotalLength field.
inline
      Real32  SegmentSetDistribution1DBase::getTotalLength(void) const
{
    return _sfTotalLength.getValue();
}

//! Set the value of the SegmentSetDistribution1D::_sfTotalLength field.
inline
void SegmentSetDistribution1DBase::setTotalLength(const Real32 value)
{
    editSField(TotalLengthFieldMask);

    _sfTotalLength.setValue(value);
}

//! Get the value of the \a index element the SegmentSetDistribution1D::_mfSegment field.
inline
const Vec2f &SegmentSetDistribution1DBase::getSegment(const UInt32 index) const
{
    return _mfSegment[index];
}

inline
Vec2f &SegmentSetDistribution1DBase::editSegment(const UInt32 index)
{
    editMField(SegmentFieldMask, _mfSegment);

    return _mfSegment[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void SegmentSetDistribution1DBase::execSync (      SegmentSetDistribution1DBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (SegmentFieldMask & whichField))
        _mfSegment.syncWith(pFrom->_mfSegment,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (TotalLengthFieldMask & whichField))
        _sfTotalLength.syncWith(pFrom->_sfTotalLength);
}
#endif


inline
const Char8 *SegmentSetDistribution1DBase::getClassname(void)
{
    return "SegmentSetDistribution1D";
}
OSG_GEN_CONTAINERPTR(SegmentSetDistribution1D);

OSG_END_NAMESPACE

