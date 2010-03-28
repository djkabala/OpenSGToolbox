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


#ifndef _OSGANIMATIONGROUPFIELDS_H_
#define _OSGANIMATIONGROUPFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGTBAnimationDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class AnimationGroup;

OSG_GEN_CONTAINERPTR(AnimationGroup);

/*! \ingroup GrpTBAnimationFieldTraits
    \ingroup GrpLibOSGTBAnimation
 */
template <>
struct FieldTraits<AnimationGroup *> :
    public FieldTraitsFCPtrBase<AnimationGroup *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<AnimationGroup *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_TBANIMATION_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFAnimationGroupPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFAnimationGroupPtr"; }
};

template<> inline
const Char8 *FieldTraits<AnimationGroup *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAnimationGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimationGroup *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAnimationGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimationGroup *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAnimationGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimationGroup *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAnimationGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimationGroup *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAnimationGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimationGroup *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAnimationGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimationGroup *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAnimationGroupPtr"; 
}

template<> inline
const Char8 *FieldTraits<AnimationGroup *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAnimationGroupPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<AnimationGroup *,
                      RecordedRefCountPolicy  > SFRecAnimationGroupPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<AnimationGroup *,
                      UnrecordedRefCountPolicy> SFUnrecAnimationGroupPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<AnimationGroup *,
                      WeakRefCountPolicy      > SFWeakAnimationGroupPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<AnimationGroup *,
                      NoRefCountPolicy        > SFUncountedAnimationGroupPtr;


/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<AnimationGroup *,
                      RecordedRefCountPolicy  > MFRecAnimationGroupPtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<AnimationGroup *,
                      UnrecordedRefCountPolicy> MFUnrecAnimationGroupPtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<AnimationGroup *,
                      WeakRefCountPolicy      > MFWeakAnimationGroupPtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<AnimationGroup *,
                      NoRefCountPolicy        > MFUncountedAnimationGroupPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFRecAnimationGroupPtr : 
    public PointerSField<AnimationGroup *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUnrecAnimationGroupPtr : 
    public PointerSField<AnimationGroup *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFWeakAnimationGroupPtr :
    public PointerSField<AnimationGroup *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUncountedAnimationGroupPtr :
    public PointerSField<AnimationGroup *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFRecAnimationGroupPtr :
    public PointerMField<AnimationGroup *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFUnrecAnimationGroupPtr :
    public PointerMField<AnimationGroup *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFWeakAnimationGroupPtr :
    public PointerMField<AnimationGroup *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFUncountedAnimationGroupPtr :
    public PointerMField<AnimationGroup *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGANIMATIONGROUPFIELDS_H_ */
