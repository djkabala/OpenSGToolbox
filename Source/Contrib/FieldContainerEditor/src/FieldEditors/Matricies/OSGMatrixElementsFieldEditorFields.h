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


#ifndef _OSGMATRIXELEMENTSFIELDEDITORFIELDS_H_
#define _OSGMATRIXELEMENTSFIELDEDITORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribFieldContainerEditorDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class MatrixElementsFieldEditor;

OSG_GEN_CONTAINERPTR(MatrixElementsFieldEditor);

/*! \ingroup GrpContribFieldContainerEditorFieldTraits
    \ingroup GrpLibOSGContribFieldContainerEditor
 */
template <>
struct FieldTraits<MatrixElementsFieldEditor *> :
    public FieldTraitsFCPtrBase<MatrixElementsFieldEditor *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<MatrixElementsFieldEditor *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBFIELDCONTAINEREDITOR_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFMatrixElementsFieldEditorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFMatrixElementsFieldEditorPtr"; }
};

template<> inline
const Char8 *FieldTraits<MatrixElementsFieldEditor *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecMatrixElementsFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatrixElementsFieldEditor *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecMatrixElementsFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatrixElementsFieldEditor *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakMatrixElementsFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatrixElementsFieldEditor *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdMatrixElementsFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatrixElementsFieldEditor *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecMatrixElementsFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatrixElementsFieldEditor *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecMatrixElementsFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatrixElementsFieldEditor *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakMatrixElementsFieldEditorPtr"; 
}

template<> inline
const Char8 *FieldTraits<MatrixElementsFieldEditor *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdMatrixElementsFieldEditorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribFieldContainerEditorFieldSFields */
typedef PointerSField<MatrixElementsFieldEditor *,
                      RecordedRefCountPolicy  > SFRecMatrixElementsFieldEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldSFields */
typedef PointerSField<MatrixElementsFieldEditor *,
                      UnrecordedRefCountPolicy> SFUnrecMatrixElementsFieldEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldSFields */
typedef PointerSField<MatrixElementsFieldEditor *,
                      WeakRefCountPolicy      > SFWeakMatrixElementsFieldEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldSFields */
typedef PointerSField<MatrixElementsFieldEditor *,
                      NoRefCountPolicy        > SFUncountedMatrixElementsFieldEditorPtr;


/*! \ingroup GrpContribFieldContainerEditorFieldMFields */
typedef PointerMField<MatrixElementsFieldEditor *,
                      RecordedRefCountPolicy  > MFRecMatrixElementsFieldEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldMFields */
typedef PointerMField<MatrixElementsFieldEditor *,
                      UnrecordedRefCountPolicy> MFUnrecMatrixElementsFieldEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldMFields */
typedef PointerMField<MatrixElementsFieldEditor *,
                      WeakRefCountPolicy      > MFWeakMatrixElementsFieldEditorPtr;
/*! \ingroup GrpContribFieldContainerEditorFieldMFields */
typedef PointerMField<MatrixElementsFieldEditor *,
                      NoRefCountPolicy        > MFUncountedMatrixElementsFieldEditorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribFieldContainerEditorFieldSFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct SFRecMatrixElementsFieldEditorPtr : 
    public PointerSField<MatrixElementsFieldEditor *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribFieldContainerEditorFieldSFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct SFUnrecMatrixElementsFieldEditorPtr : 
    public PointerSField<MatrixElementsFieldEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribFieldContainerEditorFieldSFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct SFWeakMatrixElementsFieldEditorPtr :
    public PointerSField<MatrixElementsFieldEditor *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribFieldContainerEditorFieldSFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct SFUncountedMatrixElementsFieldEditorPtr :
    public PointerSField<MatrixElementsFieldEditor *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribFieldContainerEditorFieldMFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct MFRecMatrixElementsFieldEditorPtr :
    public PointerMField<MatrixElementsFieldEditor *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribFieldContainerEditorFieldMFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct MFUnrecMatrixElementsFieldEditorPtr :
    public PointerMField<MatrixElementsFieldEditor *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribFieldContainerEditorFieldMFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct MFWeakMatrixElementsFieldEditorPtr :
    public PointerMField<MatrixElementsFieldEditor *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribFieldContainerEditorFieldMFields \ingroup GrpLibOSGContribFieldContainerEditor */
struct MFUncountedMatrixElementsFieldEditorPtr :
    public PointerMField<MatrixElementsFieldEditor *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGMATRIXELEMENTSFIELDEDITORFIELDS_H_ */
