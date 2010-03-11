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


#ifndef _OSGKEYFRAMEVECTORSEQUENCEFIELDS_H_
#define _OSGKEYFRAMEVECTORSEQUENCEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGTBAnimationDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class KeyframeVectorSequence;

OSG_GEN_CONTAINERPTR(KeyframeVectorSequence);

/*! \ingroup GrpDynamicsFieldTraits
    \ingroup GrpLibOSGDynamics
 */
template <>
struct FieldTraits<KeyframeVectorSequence *> :
    public FieldTraitsFCPtrBase<KeyframeVectorSequence *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<KeyframeVectorSequence *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_TBANIMATION_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFKeyframeVectorSequencePtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFKeyframeVectorSequencePtr"; }
};

template<> inline
const Char8 *FieldTraits<KeyframeVectorSequence *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecKeyframeVectorSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeVectorSequence *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecKeyframeVectorSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeVectorSequence *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakKeyframeVectorSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeVectorSequence *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdKeyframeVectorSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeVectorSequence *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecKeyframeVectorSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeVectorSequence *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecKeyframeVectorSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeVectorSequence *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakKeyframeVectorSequencePtr"; 
}

template<> inline
const Char8 *FieldTraits<KeyframeVectorSequence *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdKeyframeVectorSequencePtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<KeyframeVectorSequence *,
                      RecordedRefCountPolicy  > SFRecKeyframeVectorSequencePtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<KeyframeVectorSequence *,
                      UnrecordedRefCountPolicy> SFUnrecKeyframeVectorSequencePtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<KeyframeVectorSequence *,
                      WeakRefCountPolicy      > SFWeakKeyframeVectorSequencePtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<KeyframeVectorSequence *,
                      NoRefCountPolicy        > SFUncountedKeyframeVectorSequencePtr;


/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<KeyframeVectorSequence *,
                      RecordedRefCountPolicy  > MFRecKeyframeVectorSequencePtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<KeyframeVectorSequence *,
                      UnrecordedRefCountPolicy> MFUnrecKeyframeVectorSequencePtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<KeyframeVectorSequence *,
                      WeakRefCountPolicy      > MFWeakKeyframeVectorSequencePtr;
/*! \ingroup GrpDynamicsFieldMFields */
typedef PointerMField<KeyframeVectorSequence *,
                      NoRefCountPolicy        > MFUncountedKeyframeVectorSequencePtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFRecKeyframeVectorSequencePtr : 
    public PointerSField<KeyframeVectorSequence *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecKeyframeVectorSequencePtr : 
    public PointerSField<KeyframeVectorSequence *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFWeakKeyframeVectorSequencePtr :
    public PointerSField<KeyframeVectorSequence *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUncountedKeyframeVectorSequencePtr :
    public PointerSField<KeyframeVectorSequence *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFRecKeyframeVectorSequencePtr :
    public PointerMField<KeyframeVectorSequence *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUnrecKeyframeVectorSequencePtr :
    public PointerMField<KeyframeVectorSequence *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFWeakKeyframeVectorSequencePtr :
    public PointerMField<KeyframeVectorSequence *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDynamicsFieldMFields \ingroup GrpLibOSGDynamics */
struct MFUncountedKeyframeVectorSequencePtr :
    public PointerMField<KeyframeVectorSequence *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGKEYFRAMEVECTORSEQUENCEFIELDS_H_ */
