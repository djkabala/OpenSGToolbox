/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com),  Behboud Kalantary         *
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


#ifndef _OSGPHYSICSPLANE2DJOINTFIELDS_H_
#define _OSGPHYSICSPLANE2DJOINTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribPhysicsDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class PhysicsPlane2DJoint;

OSG_GEN_CONTAINERPTR(PhysicsPlane2DJoint);

/*! \ingroup GrpContribPhysicsFieldTraits
    \ingroup GrpLibOSGContribPhysics
 */
template <>
struct FieldTraits<PhysicsPlane2DJoint *> :
    public FieldTraitsFCPtrBase<PhysicsPlane2DJoint *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<PhysicsPlane2DJoint *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBPHYSICS_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFPhysicsPlane2DJointPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFPhysicsPlane2DJointPtr"; }
};

template<> inline
const Char8 *FieldTraits<PhysicsPlane2DJoint *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecPhysicsPlane2DJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsPlane2DJoint *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecPhysicsPlane2DJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsPlane2DJoint *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakPhysicsPlane2DJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsPlane2DJoint *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdPhysicsPlane2DJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsPlane2DJoint *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecPhysicsPlane2DJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsPlane2DJoint *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecPhysicsPlane2DJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsPlane2DJoint *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakPhysicsPlane2DJointPtr"; 
}

template<> inline
const Char8 *FieldTraits<PhysicsPlane2DJoint *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdPhysicsPlane2DJointPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsPlane2DJoint *,
                      RecordedRefCountPolicy  > SFRecPhysicsPlane2DJointPtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsPlane2DJoint *,
                      UnrecordedRefCountPolicy> SFUnrecPhysicsPlane2DJointPtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsPlane2DJoint *,
                      WeakRefCountPolicy      > SFWeakPhysicsPlane2DJointPtr;
/*! \ingroup GrpContribPhysicsFieldSFields */
typedef PointerSField<PhysicsPlane2DJoint *,
                      NoRefCountPolicy        > SFUncountedPhysicsPlane2DJointPtr;


/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsPlane2DJoint *,
                      RecordedRefCountPolicy  > MFRecPhysicsPlane2DJointPtr;
/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsPlane2DJoint *,
                      UnrecordedRefCountPolicy> MFUnrecPhysicsPlane2DJointPtr;
/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsPlane2DJoint *,
                      WeakRefCountPolicy      > MFWeakPhysicsPlane2DJointPtr;
/*! \ingroup GrpContribPhysicsFieldMFields */
typedef PointerMField<PhysicsPlane2DJoint *,
                      NoRefCountPolicy        > MFUncountedPhysicsPlane2DJointPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFRecPhysicsPlane2DJointPtr : 
    public PointerSField<PhysicsPlane2DJoint *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFUnrecPhysicsPlane2DJointPtr : 
    public PointerSField<PhysicsPlane2DJoint *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFWeakPhysicsPlane2DJointPtr :
    public PointerSField<PhysicsPlane2DJoint *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldSFields \ingroup GrpLibOSGContribPhysics */
struct SFUncountedPhysicsPlane2DJointPtr :
    public PointerSField<PhysicsPlane2DJoint *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFRecPhysicsPlane2DJointPtr :
    public PointerMField<PhysicsPlane2DJoint *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFUnrecPhysicsPlane2DJointPtr :
    public PointerMField<PhysicsPlane2DJoint *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFWeakPhysicsPlane2DJointPtr :
    public PointerMField<PhysicsPlane2DJoint *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribPhysicsFieldMFields \ingroup GrpLibOSGContribPhysics */
struct MFUncountedPhysicsPlane2DJointPtr :
    public PointerMField<PhysicsPlane2DJoint *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGPHYSICSPLANE2DJOINTFIELDS_H_ */