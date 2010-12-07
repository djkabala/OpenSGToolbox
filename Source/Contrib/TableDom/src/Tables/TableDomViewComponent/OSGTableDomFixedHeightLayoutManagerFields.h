/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala*
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


#ifndef _OSGTABLEDOMFIXEDHEIGHTLAYOUTMANAGERFIELDS_H_
#define _OSGTABLEDOMFIXEDHEIGHTLAYOUTMANAGERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OpenSG/OSGConfig.h"
#include "OSGContribTableDomDef.h"

#include "OpenSG/OSGFieldContainerFields.h"
#include "OpenSG/OSGPointerSField.h"
#include "OpenSG/OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class TableDomFixedHeightLayoutManager;

OSG_GEN_CONTAINERPTR(TableDomFixedHeightLayoutManager);

/*! \ingroup GrpContribTableDomFieldTraits
    \ingroup GrpLibOSGContribTableDom
 */
template <>
struct FieldTraits<TableDomFixedHeightLayoutManager *> :
    public FieldTraitsFCPtrBase<TableDomFixedHeightLayoutManager *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<TableDomFixedHeightLayoutManager *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBTABLEDOM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFTableDomFixedHeightLayoutManagerPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFTableDomFixedHeightLayoutManagerPtr"; }
};

template<> inline
const Char8 *FieldTraits<TableDomFixedHeightLayoutManager *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecTableDomFixedHeightLayoutManagerPtr"; 
}

template<> inline
const Char8 *FieldTraits<TableDomFixedHeightLayoutManager *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecTableDomFixedHeightLayoutManagerPtr"; 
}

template<> inline
const Char8 *FieldTraits<TableDomFixedHeightLayoutManager *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakTableDomFixedHeightLayoutManagerPtr"; 
}

template<> inline
const Char8 *FieldTraits<TableDomFixedHeightLayoutManager *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdTableDomFixedHeightLayoutManagerPtr"; 
}

template<> inline
const Char8 *FieldTraits<TableDomFixedHeightLayoutManager *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecTableDomFixedHeightLayoutManagerPtr"; 
}

template<> inline
const Char8 *FieldTraits<TableDomFixedHeightLayoutManager *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecTableDomFixedHeightLayoutManagerPtr"; 
}

template<> inline
const Char8 *FieldTraits<TableDomFixedHeightLayoutManager *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakTableDomFixedHeightLayoutManagerPtr"; 
}

template<> inline
const Char8 *FieldTraits<TableDomFixedHeightLayoutManager *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdTableDomFixedHeightLayoutManagerPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribTableDomFieldSFields */
typedef PointerSField<TableDomFixedHeightLayoutManager *,
                      RecordedRefCountPolicy  > SFRecTableDomFixedHeightLayoutManagerPtr;
/*! \ingroup GrpContribTableDomFieldSFields */
typedef PointerSField<TableDomFixedHeightLayoutManager *,
                      UnrecordedRefCountPolicy> SFUnrecTableDomFixedHeightLayoutManagerPtr;
/*! \ingroup GrpContribTableDomFieldSFields */
typedef PointerSField<TableDomFixedHeightLayoutManager *,
                      WeakRefCountPolicy      > SFWeakTableDomFixedHeightLayoutManagerPtr;
/*! \ingroup GrpContribTableDomFieldSFields */
typedef PointerSField<TableDomFixedHeightLayoutManager *,
                      NoRefCountPolicy        > SFUncountedTableDomFixedHeightLayoutManagerPtr;


/*! \ingroup GrpContribTableDomFieldMFields */
typedef PointerMField<TableDomFixedHeightLayoutManager *,
                      RecordedRefCountPolicy  > MFRecTableDomFixedHeightLayoutManagerPtr;
/*! \ingroup GrpContribTableDomFieldMFields */
typedef PointerMField<TableDomFixedHeightLayoutManager *,
                      UnrecordedRefCountPolicy> MFUnrecTableDomFixedHeightLayoutManagerPtr;
/*! \ingroup GrpContribTableDomFieldMFields */
typedef PointerMField<TableDomFixedHeightLayoutManager *,
                      WeakRefCountPolicy      > MFWeakTableDomFixedHeightLayoutManagerPtr;
/*! \ingroup GrpContribTableDomFieldMFields */
typedef PointerMField<TableDomFixedHeightLayoutManager *,
                      NoRefCountPolicy        > MFUncountedTableDomFixedHeightLayoutManagerPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribTableDomFieldSFields \ingroup GrpLibOSGContribTableDom */
struct SFRecTableDomFixedHeightLayoutManagerPtr : 
    public PointerSField<TableDomFixedHeightLayoutManager *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribTableDomFieldSFields \ingroup GrpLibOSGContribTableDom */
struct SFUnrecTableDomFixedHeightLayoutManagerPtr : 
    public PointerSField<TableDomFixedHeightLayoutManager *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribTableDomFieldSFields \ingroup GrpLibOSGContribTableDom */
struct SFWeakTableDomFixedHeightLayoutManagerPtr :
    public PointerSField<TableDomFixedHeightLayoutManager *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribTableDomFieldSFields \ingroup GrpLibOSGContribTableDom */
struct SFUncountedTableDomFixedHeightLayoutManagerPtr :
    public PointerSField<TableDomFixedHeightLayoutManager *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribTableDomFieldMFields \ingroup GrpLibOSGContribTableDom */
struct MFRecTableDomFixedHeightLayoutManagerPtr :
    public PointerMField<TableDomFixedHeightLayoutManager *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribTableDomFieldMFields \ingroup GrpLibOSGContribTableDom */
struct MFUnrecTableDomFixedHeightLayoutManagerPtr :
    public PointerMField<TableDomFixedHeightLayoutManager *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribTableDomFieldMFields \ingroup GrpLibOSGContribTableDom */
struct MFWeakTableDomFixedHeightLayoutManagerPtr :
    public PointerMField<TableDomFixedHeightLayoutManager *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribTableDomFieldMFields \ingroup GrpLibOSGContribTableDom */
struct MFUncountedTableDomFixedHeightLayoutManagerPtr :
    public PointerMField<TableDomFixedHeightLayoutManager *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGTABLEDOMFIXEDHEIGHTLAYOUTMANAGERFIELDS_H_ */
