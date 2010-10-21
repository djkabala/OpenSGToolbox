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


#ifndef _OSGDIALOGWINDOWEVENTDETAILSFIELDS_H_
#define _OSGDIALOGWINDOWEVENTDETAILSFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class DialogWindowEventDetails;

OSG_GEN_CONTAINERPTR(DialogWindowEventDetails);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<DialogWindowEventDetails *> :
    public FieldTraitsFCPtrBase<DialogWindowEventDetails *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<DialogWindowEventDetails *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFDialogWindowEventDetailsPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFDialogWindowEventDetailsPtr"; }
};

template<> inline
const Char8 *FieldTraits<DialogWindowEventDetails *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecDialogWindowEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<DialogWindowEventDetails *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecDialogWindowEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<DialogWindowEventDetails *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakDialogWindowEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<DialogWindowEventDetails *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdDialogWindowEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<DialogWindowEventDetails *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecDialogWindowEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<DialogWindowEventDetails *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecDialogWindowEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<DialogWindowEventDetails *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakDialogWindowEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<DialogWindowEventDetails *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdDialogWindowEventDetailsPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<DialogWindowEventDetails *,
                      RecordedRefCountPolicy  > SFRecDialogWindowEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<DialogWindowEventDetails *,
                      UnrecordedRefCountPolicy> SFUnrecDialogWindowEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<DialogWindowEventDetails *,
                      WeakRefCountPolicy      > SFWeakDialogWindowEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<DialogWindowEventDetails *,
                      NoRefCountPolicy        > SFUncountedDialogWindowEventDetailsPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<DialogWindowEventDetails *,
                      RecordedRefCountPolicy  > MFRecDialogWindowEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<DialogWindowEventDetails *,
                      UnrecordedRefCountPolicy> MFUnrecDialogWindowEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<DialogWindowEventDetails *,
                      WeakRefCountPolicy      > MFWeakDialogWindowEventDetailsPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<DialogWindowEventDetails *,
                      NoRefCountPolicy        > MFUncountedDialogWindowEventDetailsPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecDialogWindowEventDetailsPtr : 
    public PointerSField<DialogWindowEventDetails *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecDialogWindowEventDetailsPtr : 
    public PointerSField<DialogWindowEventDetails *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakDialogWindowEventDetailsPtr :
    public PointerSField<DialogWindowEventDetails *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedDialogWindowEventDetailsPtr :
    public PointerSField<DialogWindowEventDetails *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecDialogWindowEventDetailsPtr :
    public PointerMField<DialogWindowEventDetails *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecDialogWindowEventDetailsPtr :
    public PointerMField<DialogWindowEventDetails *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakDialogWindowEventDetailsPtr :
    public PointerMField<DialogWindowEventDetails *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedDialogWindowEventDetailsPtr :
    public PointerMField<DialogWindowEventDetails *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGDIALOGWINDOWEVENTDETAILSFIELDS_H_ */
