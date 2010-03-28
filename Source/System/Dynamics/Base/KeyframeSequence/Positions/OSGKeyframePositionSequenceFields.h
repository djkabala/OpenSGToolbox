/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGKEYFRAMEPOSITIONSEQUENCEFIELDS_H_
#define _OSGKEYFRAMEPOSITIONSEQUENCEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGTBAnimationDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class KeyframePositionSequence;

OSG_GEN_CONTAINERPTR(KeyframePositionSequence);

/*! \ingroup GrpTBAnimationFieldTraits
    \ingroup GrpLibOSGTBAnimation
 */
template <>
struct FieldTraits<KeyframePositionSequence *> :
    public FieldTraitsFCPtrBase<KeyframePositionSequence *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<KeyframePositionSequence *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_TBANIMATION_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFKeyframePositionSequencePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFKeyframePositionSequencePtr"; }
};

template<> inline
const Char8 *FieldTraits<KeyframePositionSequence *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecKeyframePositionSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframePositionSequence *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecKeyframePositionSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframePositionSequence *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakKeyframePositionSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframePositionSequence *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdKeyframePositionSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframePositionSequence *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecKeyframePositionSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframePositionSequence *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecKeyframePositionSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframePositionSequence *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakKeyframePositionSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframePositionSequence *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdKeyframePositionSequencePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<KeyframePositionSequence *,
                      RecordedRefCountPolicy  > SFRecKeyframePositionSequencePtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<KeyframePositionSequence *,
                      UnrecordedRefCountPolicy> SFUnrecKeyframePositionSequencePtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<KeyframePositionSequence *,
                      WeakRefCountPolicy      > SFWeakKeyframePositionSequencePtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<KeyframePositionSequence *,
                      NoRefCountPolicy        > SFUncountedKeyframePositionSequencePtr;


/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<KeyframePositionSequence *,
                      RecordedRefCountPolicy  > MFRecKeyframePositionSequencePtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<KeyframePositionSequence *,
                      UnrecordedRefCountPolicy> MFUnrecKeyframePositionSequencePtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<KeyframePositionSequence *,
                      WeakRefCountPolicy      > MFWeakKeyframePositionSequencePtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<KeyframePositionSequence *,
                      NoRefCountPolicy        > MFUncountedKeyframePositionSequencePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFRecKeyframePositionSequencePtr : 
    public PointerSField<KeyframePositionSequence *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUnrecKeyframePositionSequencePtr : 
    public PointerSField<KeyframePositionSequence *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFWeakKeyframePositionSequencePtr :
    public PointerSField<KeyframePositionSequence *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUncountedKeyframePositionSequencePtr :
    public PointerSField<KeyframePositionSequence *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFRecKeyframePositionSequencePtr :
    public PointerMField<KeyframePositionSequence *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFUnrecKeyframePositionSequencePtr :
    public PointerMField<KeyframePositionSequence *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFWeakKeyframePositionSequencePtr :
    public PointerMField<KeyframePositionSequence *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFUncountedKeyframePositionSequencePtr :
    public PointerMField<KeyframePositionSequence *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGKEYFRAMEPOSITIONSEQUENCEFIELDS_H_ */
