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
 **     class TransformAnimator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TransformAnimatorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 TransformAnimatorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 TransformAnimatorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the TransformAnimator::_sfXTranslationSequence field.
inline
KeyframeNumberSequenceReal32 * TransformAnimatorBase::getXTranslationSequence(void) const
{
    return _sfXTranslationSequence.getValue();
}

//! Set the value of the TransformAnimator::_sfXTranslationSequence field.
inline
void TransformAnimatorBase::setXTranslationSequence(KeyframeNumberSequenceReal32 * const value)
{
    editSField(XTranslationSequenceFieldMask);

    _sfXTranslationSequence.setValue(value);
}

//! Get the value of the TransformAnimator::_sfYTranslationSequence field.
inline
KeyframeNumberSequenceReal32 * TransformAnimatorBase::getYTranslationSequence(void) const
{
    return _sfYTranslationSequence.getValue();
}

//! Set the value of the TransformAnimator::_sfYTranslationSequence field.
inline
void TransformAnimatorBase::setYTranslationSequence(KeyframeNumberSequenceReal32 * const value)
{
    editSField(YTranslationSequenceFieldMask);

    _sfYTranslationSequence.setValue(value);
}

//! Get the value of the TransformAnimator::_sfZTranslationSequence field.
inline
KeyframeNumberSequenceReal32 * TransformAnimatorBase::getZTranslationSequence(void) const
{
    return _sfZTranslationSequence.getValue();
}

//! Set the value of the TransformAnimator::_sfZTranslationSequence field.
inline
void TransformAnimatorBase::setZTranslationSequence(KeyframeNumberSequenceReal32 * const value)
{
    editSField(ZTranslationSequenceFieldMask);

    _sfZTranslationSequence.setValue(value);
}

//! Get the value of the TransformAnimator::_sfXRotationSequence field.
inline
KeyframeNumberSequenceReal32 * TransformAnimatorBase::getXRotationSequence(void) const
{
    return _sfXRotationSequence.getValue();
}

//! Set the value of the TransformAnimator::_sfXRotationSequence field.
inline
void TransformAnimatorBase::setXRotationSequence(KeyframeNumberSequenceReal32 * const value)
{
    editSField(XRotationSequenceFieldMask);

    _sfXRotationSequence.setValue(value);
}

//! Get the value of the TransformAnimator::_sfYRotationSequence field.
inline
KeyframeNumberSequenceReal32 * TransformAnimatorBase::getYRotationSequence(void) const
{
    return _sfYRotationSequence.getValue();
}

//! Set the value of the TransformAnimator::_sfYRotationSequence field.
inline
void TransformAnimatorBase::setYRotationSequence(KeyframeNumberSequenceReal32 * const value)
{
    editSField(YRotationSequenceFieldMask);

    _sfYRotationSequence.setValue(value);
}

//! Get the value of the TransformAnimator::_sfZRotationSequence field.
inline
KeyframeNumberSequenceReal32 * TransformAnimatorBase::getZRotationSequence(void) const
{
    return _sfZRotationSequence.getValue();
}

//! Set the value of the TransformAnimator::_sfZRotationSequence field.
inline
void TransformAnimatorBase::setZRotationSequence(KeyframeNumberSequenceReal32 * const value)
{
    editSField(ZRotationSequenceFieldMask);

    _sfZRotationSequence.setValue(value);
}

//! Get the value of the TransformAnimator::_sfXScaleSequence field.
inline
KeyframeNumberSequenceReal32 * TransformAnimatorBase::getXScaleSequence(void) const
{
    return _sfXScaleSequence.getValue();
}

//! Set the value of the TransformAnimator::_sfXScaleSequence field.
inline
void TransformAnimatorBase::setXScaleSequence(KeyframeNumberSequenceReal32 * const value)
{
    editSField(XScaleSequenceFieldMask);

    _sfXScaleSequence.setValue(value);
}

//! Get the value of the TransformAnimator::_sfYScaleSequence field.
inline
KeyframeNumberSequenceReal32 * TransformAnimatorBase::getYScaleSequence(void) const
{
    return _sfYScaleSequence.getValue();
}

//! Set the value of the TransformAnimator::_sfYScaleSequence field.
inline
void TransformAnimatorBase::setYScaleSequence(KeyframeNumberSequenceReal32 * const value)
{
    editSField(YScaleSequenceFieldMask);

    _sfYScaleSequence.setValue(value);
}

//! Get the value of the TransformAnimator::_sfZScaleSequence field.
inline
KeyframeNumberSequenceReal32 * TransformAnimatorBase::getZScaleSequence(void) const
{
    return _sfZScaleSequence.getValue();
}

//! Set the value of the TransformAnimator::_sfZScaleSequence field.
inline
void TransformAnimatorBase::setZScaleSequence(KeyframeNumberSequenceReal32 * const value)
{
    editSField(ZScaleSequenceFieldMask);

    _sfZScaleSequence.setValue(value);
}

//! Get the value of the TransformAnimator::_sfTranslationSequence field.
inline
KeyframeVectorSequenceVec3f * TransformAnimatorBase::getTranslationSequence(void) const
{
    return _sfTranslationSequence.getValue();
}

//! Set the value of the TransformAnimator::_sfTranslationSequence field.
inline
void TransformAnimatorBase::setTranslationSequence(KeyframeVectorSequenceVec3f * const value)
{
    editSField(TranslationSequenceFieldMask);

    _sfTranslationSequence.setValue(value);
}

//! Get the value of the TransformAnimator::_sfScaleSequence field.
inline
KeyframeVectorSequenceVec3f * TransformAnimatorBase::getScaleSequence(void) const
{
    return _sfScaleSequence.getValue();
}

//! Set the value of the TransformAnimator::_sfScaleSequence field.
inline
void TransformAnimatorBase::setScaleSequence(KeyframeVectorSequenceVec3f * const value)
{
    editSField(ScaleSequenceFieldMask);

    _sfScaleSequence.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void TransformAnimatorBase::execSync (      TransformAnimatorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (XTranslationSequenceFieldMask & whichField))
        _sfXTranslationSequence.syncWith(pFrom->_sfXTranslationSequence);

    if(FieldBits::NoField != (YTranslationSequenceFieldMask & whichField))
        _sfYTranslationSequence.syncWith(pFrom->_sfYTranslationSequence);

    if(FieldBits::NoField != (ZTranslationSequenceFieldMask & whichField))
        _sfZTranslationSequence.syncWith(pFrom->_sfZTranslationSequence);

    if(FieldBits::NoField != (XRotationSequenceFieldMask & whichField))
        _sfXRotationSequence.syncWith(pFrom->_sfXRotationSequence);

    if(FieldBits::NoField != (YRotationSequenceFieldMask & whichField))
        _sfYRotationSequence.syncWith(pFrom->_sfYRotationSequence);

    if(FieldBits::NoField != (ZRotationSequenceFieldMask & whichField))
        _sfZRotationSequence.syncWith(pFrom->_sfZRotationSequence);

    if(FieldBits::NoField != (XScaleSequenceFieldMask & whichField))
        _sfXScaleSequence.syncWith(pFrom->_sfXScaleSequence);

    if(FieldBits::NoField != (YScaleSequenceFieldMask & whichField))
        _sfYScaleSequence.syncWith(pFrom->_sfYScaleSequence);

    if(FieldBits::NoField != (ZScaleSequenceFieldMask & whichField))
        _sfZScaleSequence.syncWith(pFrom->_sfZScaleSequence);

    if(FieldBits::NoField != (TranslationSequenceFieldMask & whichField))
        _sfTranslationSequence.syncWith(pFrom->_sfTranslationSequence);

    if(FieldBits::NoField != (ScaleSequenceFieldMask & whichField))
        _sfScaleSequence.syncWith(pFrom->_sfScaleSequence);
}
#endif


inline
const Char8 *TransformAnimatorBase::getClassname(void)
{
    return "TransformAnimator";
}
OSG_GEN_CONTAINERPTR(TransformAnimator);

OSG_END_NAMESPACE

