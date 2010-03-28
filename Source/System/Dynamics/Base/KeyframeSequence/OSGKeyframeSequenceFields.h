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


#ifndef _OSGKEYFRAMESEQUENCEFIELDS_H_
#define _OSGKEYFRAMESEQUENCEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGTBAnimationDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class KeyframeSequence;

OSG_GEN_CONTAINERPTR(KeyframeSequence);

/*! \ingroup GrpTBAnimationFieldTraits
    \ingroup GrpLibOSGTBAnimation
 */
template <>
struct FieldTraits<KeyframeSequence *> :
    public FieldTraitsFCPtrBase<KeyframeSequence *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<KeyframeSequence *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_TBANIMATION_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFKeyframeSequencePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFKeyframeSequencePtr"; }
};

template<> inline
const Char8 *FieldTraits<KeyframeSequence *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecKeyframeSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeSequence *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecKeyframeSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeSequence *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakKeyframeSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeSequence *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdKeyframeSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeSequence *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecKeyframeSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeSequence *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecKeyframeSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeSequence *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakKeyframeSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeSequence *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdKeyframeSequencePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<KeyframeSequence *,
                      RecordedRefCountPolicy  > SFRecKeyframeSequencePtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<KeyframeSequence *,
                      UnrecordedRefCountPolicy> SFUnrecKeyframeSequencePtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<KeyframeSequence *,
                      WeakRefCountPolicy      > SFWeakKeyframeSequencePtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<KeyframeSequence *,
                      NoRefCountPolicy        > SFUncountedKeyframeSequencePtr;


/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<KeyframeSequence *,
                      RecordedRefCountPolicy  > MFRecKeyframeSequencePtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<KeyframeSequence *,
                      UnrecordedRefCountPolicy> MFUnrecKeyframeSequencePtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<KeyframeSequence *,
                      WeakRefCountPolicy      > MFWeakKeyframeSequencePtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<KeyframeSequence *,
                      NoRefCountPolicy        > MFUncountedKeyframeSequencePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFRecKeyframeSequencePtr : 
    public PointerSField<KeyframeSequence *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUnrecKeyframeSequencePtr : 
    public PointerSField<KeyframeSequence *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFWeakKeyframeSequencePtr :
    public PointerSField<KeyframeSequence *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUncountedKeyframeSequencePtr :
    public PointerSField<KeyframeSequence *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFRecKeyframeSequencePtr :
    public PointerMField<KeyframeSequence *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFUnrecKeyframeSequencePtr :
    public PointerMField<KeyframeSequence *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFWeakKeyframeSequencePtr :
    public PointerMField<KeyframeSequence *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFUncountedKeyframeSequencePtr :
    public PointerMField<KeyframeSequence *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGKEYFRAMESEQUENCEFIELDS_H_ */
