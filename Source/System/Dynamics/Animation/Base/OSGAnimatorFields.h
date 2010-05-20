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


#ifndef _OSGANIMATORFIELDS_H_
#define _OSGANIMATORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGTBAnimationDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class Animator;

OSG_GEN_CONTAINERPTR(Animator);

/*! \ingroup GrpTBAnimationFieldTraits
    \ingroup GrpLibOSGTBAnimation
 */
template <>
struct FieldTraits<Animator *> :
    public FieldTraitsFCPtrBase<Animator *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<Animator *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_TBANIMATION_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFAnimatorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFAnimatorPtr"; }
};

template<> inline
const Char8 *FieldTraits<Animator *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Animator *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Animator *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Animator *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Animator *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Animator *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Animator *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAnimatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Animator *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAnimatorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<Animator *,
                      RecordedRefCountPolicy  > SFRecAnimatorPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<Animator *,
                      UnrecordedRefCountPolicy> SFUnrecAnimatorPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<Animator *,
                      WeakRefCountPolicy      > SFWeakAnimatorPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<Animator *,
                      NoRefCountPolicy        > SFUncountedAnimatorPtr;


/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<Animator *,
                      RecordedRefCountPolicy  > MFRecAnimatorPtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<Animator *,
                      UnrecordedRefCountPolicy> MFUnrecAnimatorPtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<Animator *,
                      WeakRefCountPolicy      > MFWeakAnimatorPtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<Animator *,
                      NoRefCountPolicy        > MFUncountedAnimatorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFRecAnimatorPtr : 
    public PointerSField<Animator *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUnrecAnimatorPtr : 
    public PointerSField<Animator *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFWeakAnimatorPtr :
    public PointerSField<Animator *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUncountedAnimatorPtr :
    public PointerSField<Animator *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFRecAnimatorPtr :
    public PointerMField<Animator *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFUnrecAnimatorPtr :
    public PointerMField<Animator *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFWeakAnimatorPtr :
    public PointerMField<Animator *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFUncountedAnimatorPtr :
    public PointerMField<Animator *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGANIMATORFIELDS_H_ */