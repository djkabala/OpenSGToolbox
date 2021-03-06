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


#ifndef _OSGSPINNERDEFAULTEDITORFIELDS_H_
#define _OSGSPINNERDEFAULTEDITORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class SpinnerDefaultEditor;

OSG_GEN_CONTAINERPTR(SpinnerDefaultEditor);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<SpinnerDefaultEditor *> :
    public FieldTraitsFCPtrBase<SpinnerDefaultEditor *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<SpinnerDefaultEditor *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFSpinnerDefaultEditorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFSpinnerDefaultEditorPtr"; }
};

template<> inline
const Char8 *FieldTraits<SpinnerDefaultEditor *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecSpinnerDefaultEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerDefaultEditor *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecSpinnerDefaultEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerDefaultEditor *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakSpinnerDefaultEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerDefaultEditor *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdSpinnerDefaultEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerDefaultEditor *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecSpinnerDefaultEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerDefaultEditor *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecSpinnerDefaultEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerDefaultEditor *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakSpinnerDefaultEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<SpinnerDefaultEditor *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdSpinnerDefaultEditorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<SpinnerDefaultEditor *,
                      RecordedRefCountPolicy  > SFRecSpinnerDefaultEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<SpinnerDefaultEditor *,
                      UnrecordedRefCountPolicy> SFUnrecSpinnerDefaultEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<SpinnerDefaultEditor *,
                      WeakRefCountPolicy      > SFWeakSpinnerDefaultEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<SpinnerDefaultEditor *,
                      NoRefCountPolicy        > SFUncountedSpinnerDefaultEditorPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<SpinnerDefaultEditor *,
                      RecordedRefCountPolicy  > MFRecSpinnerDefaultEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<SpinnerDefaultEditor *,
                      UnrecordedRefCountPolicy> MFUnrecSpinnerDefaultEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<SpinnerDefaultEditor *,
                      WeakRefCountPolicy      > MFWeakSpinnerDefaultEditorPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<SpinnerDefaultEditor *,
                      NoRefCountPolicy        > MFUncountedSpinnerDefaultEditorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecSpinnerDefaultEditorPtr : 
    public PointerSField<SpinnerDefaultEditor *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecSpinnerDefaultEditorPtr : 
    public PointerSField<SpinnerDefaultEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakSpinnerDefaultEditorPtr :
    public PointerSField<SpinnerDefaultEditor *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedSpinnerDefaultEditorPtr :
    public PointerSField<SpinnerDefaultEditor *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecSpinnerDefaultEditorPtr :
    public PointerMField<SpinnerDefaultEditor *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecSpinnerDefaultEditorPtr :
    public PointerMField<SpinnerDefaultEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakSpinnerDefaultEditorPtr :
    public PointerMField<SpinnerDefaultEditor *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedSpinnerDefaultEditorPtr :
    public PointerMField<SpinnerDefaultEditor *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSPINNERDEFAULTEDITORFIELDS_H_ */
