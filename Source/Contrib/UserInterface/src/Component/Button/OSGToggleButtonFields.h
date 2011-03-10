/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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


#ifndef _OSGTOGGLEBUTTONFIELDS_H_
#define _OSGTOGGLEBUTTONFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ToggleButton;

OSG_GEN_CONTAINERPTR(ToggleButton);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<ToggleButton *> :
    public FieldTraitsFCPtrBase<ToggleButton *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ToggleButton *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFToggleButtonPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFToggleButtonPtr"; }
};

template<> inline
const Char8 *FieldTraits<ToggleButton *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecToggleButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<ToggleButton *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecToggleButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<ToggleButton *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakToggleButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<ToggleButton *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdToggleButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<ToggleButton *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecToggleButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<ToggleButton *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecToggleButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<ToggleButton *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakToggleButtonPtr"; 
}

template<> inline
const Char8 *FieldTraits<ToggleButton *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdToggleButtonPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ToggleButton *,
                      RecordedRefCountPolicy  > SFRecToggleButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ToggleButton *,
                      UnrecordedRefCountPolicy> SFUnrecToggleButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ToggleButton *,
                      WeakRefCountPolicy      > SFWeakToggleButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<ToggleButton *,
                      NoRefCountPolicy        > SFUncountedToggleButtonPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ToggleButton *,
                      RecordedRefCountPolicy  > MFRecToggleButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ToggleButton *,
                      UnrecordedRefCountPolicy> MFUnrecToggleButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ToggleButton *,
                      WeakRefCountPolicy      > MFWeakToggleButtonPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<ToggleButton *,
                      NoRefCountPolicy        > MFUncountedToggleButtonPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecToggleButtonPtr : 
    public PointerSField<ToggleButton *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecToggleButtonPtr : 
    public PointerSField<ToggleButton *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakToggleButtonPtr :
    public PointerSField<ToggleButton *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedToggleButtonPtr :
    public PointerSField<ToggleButton *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecToggleButtonPtr :
    public PointerMField<ToggleButton *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecToggleButtonPtr :
    public PointerMField<ToggleButton *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakToggleButtonPtr :
    public PointerMField<ToggleButton *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedToggleButtonPtr :
    public PointerMField<ToggleButton *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTOGGLEBUTTONFIELDS_H_ */
