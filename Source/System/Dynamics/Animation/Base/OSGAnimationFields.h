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


#ifndef _OSGANIMATIONFIELDS_H_
#define _OSGANIMATIONFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGTBAnimationDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class Animation;

OSG_GEN_CONTAINERPTR(Animation);

/*! \ingroup GrpTBAnimationFieldTraits
    \ingroup GrpLibOSGTBAnimation
 */
template <>
struct FieldTraits<Animation *> :
    public FieldTraitsFCPtrBase<Animation *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<Animation *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_TBANIMATION_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFAnimationPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFAnimationPtr"; }
};

template<> inline
const Char8 *FieldTraits<Animation *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecAnimationPtr"; 
}

template<> inline
const Char8 *FieldTraits<Animation *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecAnimationPtr"; 
}

template<> inline
const Char8 *FieldTraits<Animation *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakAnimationPtr"; 
}

template<> inline
const Char8 *FieldTraits<Animation *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdAnimationPtr"; 
}

template<> inline
const Char8 *FieldTraits<Animation *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecAnimationPtr"; 
}

template<> inline
const Char8 *FieldTraits<Animation *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecAnimationPtr"; 
}

template<> inline
const Char8 *FieldTraits<Animation *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakAnimationPtr"; 
}

template<> inline
const Char8 *FieldTraits<Animation *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdAnimationPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<Animation *,
                      RecordedRefCountPolicy  > SFRecAnimationPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<Animation *,
                      UnrecordedRefCountPolicy> SFUnrecAnimationPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<Animation *,
                      WeakRefCountPolicy      > SFWeakAnimationPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<Animation *,
                      NoRefCountPolicy        > SFUncountedAnimationPtr;


/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<Animation *,
                      RecordedRefCountPolicy  > MFRecAnimationPtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<Animation *,
                      UnrecordedRefCountPolicy> MFUnrecAnimationPtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<Animation *,
                      WeakRefCountPolicy      > MFWeakAnimationPtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<Animation *,
                      NoRefCountPolicy        > MFUncountedAnimationPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFRecAnimationPtr : 
    public PointerSField<Animation *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUnrecAnimationPtr : 
    public PointerSField<Animation *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFWeakAnimationPtr :
    public PointerSField<Animation *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUncountedAnimationPtr :
    public PointerSField<Animation *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFRecAnimationPtr :
    public PointerMField<Animation *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFUnrecAnimationPtr :
    public PointerMField<Animation *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFWeakAnimationPtr :
    public PointerMField<Animation *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFUncountedAnimationPtr :
    public PointerMField<Animation *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGANIMATIONFIELDS_H_ */
