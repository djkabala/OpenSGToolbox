/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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


#ifndef _OSGSCREENTRANSFORMFIELDS_H_
#define _OSGSCREENTRANSFORMFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGGroupDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ScreenTransform;

OSG_GEN_CONTAINERPTR(ScreenTransform);

/*! \ingroup GrpGroupFieldTraits
    \ingroup GrpLibOSGGroup
 */
template <>
struct FieldTraits<ScreenTransform *> :
    public FieldTraitsFCPtrBase<ScreenTransform *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ScreenTransform *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_GROUP_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFScreenTransformPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFScreenTransformPtr"; }
};

template<> inline
const Char8 *FieldTraits<ScreenTransform *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecScreenTransformPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScreenTransform *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecScreenTransformPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScreenTransform *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakScreenTransformPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScreenTransform *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdScreenTransformPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScreenTransform *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecScreenTransformPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScreenTransform *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecScreenTransformPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScreenTransform *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakScreenTransformPtr"; 
}

template<> inline
const Char8 *FieldTraits<ScreenTransform *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdScreenTransformPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<ScreenTransform *,
                      RecordedRefCountPolicy  > SFRecScreenTransformPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<ScreenTransform *,
                      UnrecordedRefCountPolicy> SFUnrecScreenTransformPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<ScreenTransform *,
                      WeakRefCountPolicy      > SFWeakScreenTransformPtr;
/*! \ingroup GrpGroupFieldSFields */
typedef PointerSField<ScreenTransform *,
                      NoRefCountPolicy        > SFUncountedScreenTransformPtr;


/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<ScreenTransform *,
                      RecordedRefCountPolicy  > MFRecScreenTransformPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<ScreenTransform *,
                      UnrecordedRefCountPolicy> MFUnrecScreenTransformPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<ScreenTransform *,
                      WeakRefCountPolicy      > MFWeakScreenTransformPtr;
/*! \ingroup GrpGroupFieldMFields */
typedef PointerMField<ScreenTransform *,
                      NoRefCountPolicy        > MFUncountedScreenTransformPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFRecScreenTransformPtr : 
    public PointerSField<ScreenTransform *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFUnrecScreenTransformPtr : 
    public PointerSField<ScreenTransform *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFWeakScreenTransformPtr :
    public PointerSField<ScreenTransform *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpGroupFieldSFields \ingroup GrpLibOSGGroup */
struct SFUncountedScreenTransformPtr :
    public PointerSField<ScreenTransform *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFRecScreenTransformPtr :
    public PointerMField<ScreenTransform *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFUnrecScreenTransformPtr :
    public PointerMField<ScreenTransform *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFWeakScreenTransformPtr :
    public PointerMField<ScreenTransform *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpGroupFieldMFields \ingroup GrpLibOSGGroup */
struct MFUncountedScreenTransformPtr :
    public PointerMField<ScreenTransform *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSCREENTRANSFORMFIELDS_H_ */
