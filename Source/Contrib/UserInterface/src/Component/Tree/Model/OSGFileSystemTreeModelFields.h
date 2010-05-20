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


#ifndef _OSGFILESYSTEMTREEMODELFIELDS_H_
#define _OSGFILESYSTEMTREEMODELFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class FileSystemTreeModel;

OSG_GEN_CONTAINERPTR(FileSystemTreeModel);

/*! \ingroup GrpContribUserInterfaceFieldTraits
    \ingroup GrpLibOSGContribUserInterface
 */
template <>
struct FieldTraits<FileSystemTreeModel *> :
    public FieldTraitsFCPtrBase<FileSystemTreeModel *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<FileSystemTreeModel *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBUSERINTERFACE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFFileSystemTreeModelPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFFileSystemTreeModelPtr"; }
};

template<> inline
const Char8 *FieldTraits<FileSystemTreeModel *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecFileSystemTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<FileSystemTreeModel *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecFileSystemTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<FileSystemTreeModel *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakFileSystemTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<FileSystemTreeModel *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdFileSystemTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<FileSystemTreeModel *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecFileSystemTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<FileSystemTreeModel *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecFileSystemTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<FileSystemTreeModel *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakFileSystemTreeModelPtr"; 
}

template<> inline
const Char8 *FieldTraits<FileSystemTreeModel *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdFileSystemTreeModelPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<FileSystemTreeModel *,
                      RecordedRefCountPolicy  > SFRecFileSystemTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<FileSystemTreeModel *,
                      UnrecordedRefCountPolicy> SFUnrecFileSystemTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<FileSystemTreeModel *,
                      WeakRefCountPolicy      > SFWeakFileSystemTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldSFields */
typedef PointerSField<FileSystemTreeModel *,
                      NoRefCountPolicy        > SFUncountedFileSystemTreeModelPtr;


/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<FileSystemTreeModel *,
                      RecordedRefCountPolicy  > MFRecFileSystemTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<FileSystemTreeModel *,
                      UnrecordedRefCountPolicy> MFUnrecFileSystemTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<FileSystemTreeModel *,
                      WeakRefCountPolicy      > MFWeakFileSystemTreeModelPtr;
/*! \ingroup GrpContribUserInterfaceFieldMFields */
typedef PointerMField<FileSystemTreeModel *,
                      NoRefCountPolicy        > MFUncountedFileSystemTreeModelPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFRecFileSystemTreeModelPtr : 
    public PointerSField<FileSystemTreeModel *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUnrecFileSystemTreeModelPtr : 
    public PointerSField<FileSystemTreeModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFWeakFileSystemTreeModelPtr :
    public PointerSField<FileSystemTreeModel *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldSFields \ingroup GrpLibOSGContribUserInterface */
struct SFUncountedFileSystemTreeModelPtr :
    public PointerSField<FileSystemTreeModel *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFRecFileSystemTreeModelPtr :
    public PointerMField<FileSystemTreeModel *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUnrecFileSystemTreeModelPtr :
    public PointerMField<FileSystemTreeModel *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFWeakFileSystemTreeModelPtr :
    public PointerMField<FileSystemTreeModel *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribUserInterfaceFieldMFields \ingroup GrpLibOSGContribUserInterface */
struct MFUncountedFileSystemTreeModelPtr :
    public PointerMField<FileSystemTreeModel *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGFILESYSTEMTREEMODELFIELDS_H_ */