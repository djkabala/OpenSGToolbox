/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), David Naylor               *
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


#ifndef _OSGJOINTFIELDS_H_
#define _OSGJOINTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGTBAnimationDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class Joint;

OSG_GEN_CONTAINERPTR(Joint);

/*! \ingroup GrpTBAnimationFieldTraits
    \ingroup GrpLibOSGTBAnimation
 */
template <>
struct FieldTraits<Joint *> :
    public FieldTraitsFCPtrBase<Joint *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<Joint *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_TBANIMATION_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFJointPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFJointPtr"; }
};

template<> inline
const Char8 *FieldTraits<Joint *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<Joint *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<Joint *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<Joint *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<Joint *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<Joint *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<Joint *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<Joint *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdJointPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<Joint *,
                      RecordedRefCountPolicy  > SFRecJointPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<Joint *,
                      UnrecordedRefCountPolicy> SFUnrecJointPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<Joint *,
                      WeakRefCountPolicy      > SFWeakJointPtr;
/*! \ingroup GrpTBAnimationFieldSFields */
typedef PointerSField<Joint *,
                      NoRefCountPolicy        > SFUncountedJointPtr;


/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<Joint *,
                      RecordedRefCountPolicy  > MFRecJointPtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<Joint *,
                      UnrecordedRefCountPolicy> MFUnrecJointPtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<Joint *,
                      WeakRefCountPolicy      > MFWeakJointPtr;
/*! \ingroup GrpTBAnimationFieldMFields */
typedef PointerMField<Joint *,
                      NoRefCountPolicy        > MFUncountedJointPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFRecJointPtr : 
    public PointerSField<Joint *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUnrecJointPtr : 
    public PointerSField<Joint *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFWeakJointPtr :
    public PointerSField<Joint *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldSFields \ingroup GrpLibOSGTBAnimation */
struct SFUncountedJointPtr :
    public PointerSField<Joint *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFRecJointPtr :
    public PointerMField<Joint *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFUnrecJointPtr :
    public PointerMField<Joint *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFWeakJointPtr :
    public PointerMField<Joint *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpTBAnimationFieldMFields \ingroup GrpLibOSGTBAnimation */
struct MFUncountedJointPtr :
    public PointerMField<Joint *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGJOINTFIELDS_H_ */
