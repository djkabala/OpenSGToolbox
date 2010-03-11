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


#ifndef _OSGSKELETONEVENTFIELDS_H_
#define _OSGSKELETONEVENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGTBAnimationDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class SkeletonEvent;

OSG_GEN_CONTAINERPTR(SkeletonEvent);

/*! \ingroup GrpDynamicsFieldTraits
    \ingroup GrpLibOSGDynamics
 */
template <>
struct FieldTraits<SkeletonEvent *> :
    public FieldTraitsFCPtrBase<SkeletonEvent *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SkeletonEvent *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_TBANIMATION_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSkeletonEventPtr"; }
};

template<> inline
const Char8 *FieldTraits<SkeletonEvent *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSkeletonEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonEvent *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSkeletonEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonEvent *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSkeletonEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<SkeletonEvent *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSkeletonEventPtr"; 
}



#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<SkeletonEvent *,
                      RecordedRefCountPolicy  > SFRecSkeletonEventPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<SkeletonEvent *,
                      UnrecordedRefCountPolicy> SFUnrecSkeletonEventPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<SkeletonEvent *,
                      WeakRefCountPolicy      > SFWeakSkeletonEventPtr;
/*! \ingroup GrpDynamicsFieldSFields */
typedef PointerSField<SkeletonEvent *,
                      NoRefCountPolicy        > SFUncountedSkeletonEventPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFRecSkeletonEventPtr : 
    public PointerSField<SkeletonEvent *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUnrecSkeletonEventPtr : 
    public PointerSField<SkeletonEvent *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFWeakSkeletonEventPtr :
    public PointerSField<SkeletonEvent *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDynamicsFieldSFields \ingroup GrpLibOSGDynamics */
struct SFUncountedSkeletonEventPtr :
    public PointerSField<SkeletonEvent *,
                         NoRefCountPolicy> {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSKELETONEVENTFIELDS_H_ */
