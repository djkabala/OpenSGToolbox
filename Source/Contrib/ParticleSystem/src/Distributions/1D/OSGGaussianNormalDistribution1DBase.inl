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
 **     class GaussianNormalDistribution1D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &GaussianNormalDistribution1DBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 GaussianNormalDistribution1DBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 GaussianNormalDistribution1DBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the GaussianNormalDistribution1D::_sfMean field.

inline
Real32 &GaussianNormalDistribution1DBase::editMean(void)
{
    editSField(MeanFieldMask);

    return _sfMean.getValue();
}

//! Get the value of the GaussianNormalDistribution1D::_sfMean field.
inline
      Real32  GaussianNormalDistribution1DBase::getMean(void) const
{
    return _sfMean.getValue();
}

//! Set the value of the GaussianNormalDistribution1D::_sfMean field.
inline
void GaussianNormalDistribution1DBase::setMean(const Real32 value)
{
    editSField(MeanFieldMask);

    _sfMean.setValue(value);
}
//! Get the value of the GaussianNormalDistribution1D::_sfStandardDeviation field.

inline
Real32 &GaussianNormalDistribution1DBase::editStandardDeviation(void)
{
    editSField(StandardDeviationFieldMask);

    return _sfStandardDeviation.getValue();
}

//! Get the value of the GaussianNormalDistribution1D::_sfStandardDeviation field.
inline
      Real32  GaussianNormalDistribution1DBase::getStandardDeviation(void) const
{
    return _sfStandardDeviation.getValue();
}

//! Set the value of the GaussianNormalDistribution1D::_sfStandardDeviation field.
inline
void GaussianNormalDistribution1DBase::setStandardDeviation(const Real32 value)
{
    editSField(StandardDeviationFieldMask);

    _sfStandardDeviation.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void GaussianNormalDistribution1DBase::execSync (      GaussianNormalDistribution1DBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (MeanFieldMask & whichField))
        _sfMean.syncWith(pFrom->_sfMean);

    if(FieldBits::NoField != (StandardDeviationFieldMask & whichField))
        _sfStandardDeviation.syncWith(pFrom->_sfStandardDeviation);
}
#endif


inline
const Char8 *GaussianNormalDistribution1DBase::getClassname(void)
{
    return "GaussianNormalDistribution1D";
}
OSG_GEN_CONTAINERPTR(GaussianNormalDistribution1D);

OSG_END_NAMESPACE

