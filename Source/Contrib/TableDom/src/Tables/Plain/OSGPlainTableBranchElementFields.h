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


#ifndef _OSGPLAINTABLEBRANCHELEMENTFIELDS_H_
#define _OSGPLAINTABLEBRANCHELEMENTFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribTableDomDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class PlainTableBranchElement;

OSG_GEN_CONTAINERPTR(PlainTableBranchElement);

/*! \ingroup GrpContribTableDomFieldTraits
    \ingroup GrpLibOSGContribTableDom
 */
template <>
struct FieldTraits<PlainTableBranchElement *> :
    public FieldTraitsFCPtrBase<PlainTableBranchElement *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<PlainTableBranchElement *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTABLEDOM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFPlainTableBranchElementPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFPlainTableBranchElementPtr"; }
};

template<> inline
const Char8 *FieldTraits<PlainTableBranchElement *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecPlainTableBranchElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<PlainTableBranchElement *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecPlainTableBranchElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<PlainTableBranchElement *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakPlainTableBranchElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<PlainTableBranchElement *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdPlainTableBranchElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<PlainTableBranchElement *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecPlainTableBranchElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<PlainTableBranchElement *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecPlainTableBranchElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<PlainTableBranchElement *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakPlainTableBranchElementPtr"; 
}

template<> inline
const Char8 *FieldTraits<PlainTableBranchElement *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdPlainTableBranchElementPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribTableDomFieldSFields */
typedef PointerSField<PlainTableBranchElement *,
                      RecordedRefCountPolicy  > SFRecPlainTableBranchElementPtr;
/*! \ingroup GrpContribTableDomFieldSFields */
typedef PointerSField<PlainTableBranchElement *,
                      UnrecordedRefCountPolicy> SFUnrecPlainTableBranchElementPtr;
/*! \ingroup GrpContribTableDomFieldSFields */
typedef PointerSField<PlainTableBranchElement *,
                      WeakRefCountPolicy      > SFWeakPlainTableBranchElementPtr;
/*! \ingroup GrpContribTableDomFieldSFields */
typedef PointerSField<PlainTableBranchElement *,
                      NoRefCountPolicy        > SFUncountedPlainTableBranchElementPtr;


/*! \ingroup GrpContribTableDomFieldMFields */
typedef PointerMField<PlainTableBranchElement *,
                      RecordedRefCountPolicy  > MFRecPlainTableBranchElementPtr;
/*! \ingroup GrpContribTableDomFieldMFields */
typedef PointerMField<PlainTableBranchElement *,
                      UnrecordedRefCountPolicy> MFUnrecPlainTableBranchElementPtr;
/*! \ingroup GrpContribTableDomFieldMFields */
typedef PointerMField<PlainTableBranchElement *,
                      WeakRefCountPolicy      > MFWeakPlainTableBranchElementPtr;
/*! \ingroup GrpContribTableDomFieldMFields */
typedef PointerMField<PlainTableBranchElement *,
                      NoRefCountPolicy        > MFUncountedPlainTableBranchElementPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribTableDomFieldSFields \ingroup GrpLibOSGContribTableDom */
struct SFRecPlainTableBranchElementPtr : 
    public PointerSField<PlainTableBranchElement *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribTableDomFieldSFields \ingroup GrpLibOSGContribTableDom */
struct SFUnrecPlainTableBranchElementPtr : 
    public PointerSField<PlainTableBranchElement *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribTableDomFieldSFields \ingroup GrpLibOSGContribTableDom */
struct SFWeakPlainTableBranchElementPtr :
    public PointerSField<PlainTableBranchElement *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribTableDomFieldSFields \ingroup GrpLibOSGContribTableDom */
struct SFUncountedPlainTableBranchElementPtr :
    public PointerSField<PlainTableBranchElement *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribTableDomFieldMFields \ingroup GrpLibOSGContribTableDom */
struct MFRecPlainTableBranchElementPtr :
    public PointerMField<PlainTableBranchElement *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribTableDomFieldMFields \ingroup GrpLibOSGContribTableDom */
struct MFUnrecPlainTableBranchElementPtr :
    public PointerMField<PlainTableBranchElement *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribTableDomFieldMFields \ingroup GrpLibOSGContribTableDom */
struct MFWeakPlainTableBranchElementPtr :
    public PointerMField<PlainTableBranchElement *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribTableDomFieldMFields \ingroup GrpLibOSGContribTableDom */
struct MFUncountedPlainTableBranchElementPtr :
    public PointerMField<PlainTableBranchElement *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGPLAINTABLEBRANCHELEMENTFIELDS_H_ */
