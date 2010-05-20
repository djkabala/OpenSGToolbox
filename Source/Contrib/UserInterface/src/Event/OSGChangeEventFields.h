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


#ifndef _OSGCHANGEEVENTFIELDS_H_
#define _OSGCHANGEEVENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ChangeEvent;

OSG_GEN_CONTAINERPTR(ChangeEvent);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<ChangeEvent *> :
    public FieldTraitsFCPtrBase<ChangeEvent *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ChangeEvent *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFChangeEventPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFChangeEventPtr"; }
};

template<> inline
const Char8 *FieldTraits<ChangeEvent *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecChangeEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeEvent *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecChangeEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeEvent *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakChangeEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeEvent *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdChangeEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeEvent *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecChangeEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeEvent *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecChangeEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeEvent *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakChangeEventPtr"; 
}

template<> inline
const Char8 *FieldTraits<ChangeEvent *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdChangeEventPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ChangeEvent *,
                      RecordedRefCountPolicy  > SFRecChangeEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ChangeEvent *,
                      UnrecordedRefCountPolicy> SFUnrecChangeEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ChangeEvent *,
                      WeakRefCountPolicy      > SFWeakChangeEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ChangeEvent *,
                      NoRefCountPolicy        > SFUncountedChangeEventPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ChangeEvent *,
                      RecordedRefCountPolicy  > MFRecChangeEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ChangeEvent *,
                      UnrecordedRefCountPolicy> MFUnrecChangeEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ChangeEvent *,
                      WeakRefCountPolicy      > MFWeakChangeEventPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ChangeEvent *,
                      NoRefCountPolicy        > MFUncountedChangeEventPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecChangeEventPtr : 
    public PointerSField<ChangeEvent *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecChangeEventPtr : 
    public PointerSField<ChangeEvent *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakChangeEventPtr :
    public PointerSField<ChangeEvent *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedChangeEventPtr :
    public PointerSField<ChangeEvent *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecChangeEventPtr :
    public PointerMField<ChangeEvent *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecChangeEventPtr :
    public PointerMField<ChangeEvent *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakChangeEventPtr :
    public PointerMField<ChangeEvent *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedChangeEventPtr :
    public PointerMField<ChangeEvent *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGCHANGEEVENTFIELDS_H_ */