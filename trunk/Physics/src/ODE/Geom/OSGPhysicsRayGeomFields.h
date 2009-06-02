/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
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


#ifndef _OSGPHYSICSRAYGEOMFIELDS_H_
#define _OSGPHYSICSRAYGEOMFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGPhysicsConfig.h"

#include <OpenSG/OSGFieldContainerPtr.h>
#include <OpenSG/OSGNodeCoreFieldDataType.h>
#include "OSGPhysicsConfig.h"

#include "OSGPhysicsGeomFields.h"

OSG_BEGIN_NAMESPACE

class PhysicsRayGeom;

#if !defined(OSG_DO_DOC)   // created as a dummy class, remove to prevent doubles
//! PhysicsRayGeomPtr

typedef FCPtr<PhysicsGeomPtr, PhysicsRayGeom> PhysicsRayGeomPtr;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpContribFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldDataTraits<PhysicsRayGeomPtr> : 
    public FieldTraitsRecurseMapper<PhysicsRayGeomPtr, true>
{
    static DataType             _type;                       

    enum                        { StringConvertable = 0x00 };
    enum                        { bHasParent        = 0x01 };

    static DataType   &getType (void) { return _type;        }

    static const char *getSName(void) { return "SFPhysicsRayGeomPtr"; }
    static const char *getMName(void) { return "MFPhysicsRayGeomPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsRecurseMapper<PhysicsRayGeomPtr, true>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpContribFieldSingle */

typedef SField<PhysicsRayGeomPtr> SFPhysicsRayGeomPtr;
#endif

#ifndef OSG_COMPILEPHYSICSRAYGEOMINST
OSG_DLLEXPORT_DECL1(SField, PhysicsRayGeomPtr, OSG_PHYSICSLIB_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpContribFieldMulti */

typedef MField<PhysicsRayGeomPtr> MFPhysicsRayGeomPtr;
#endif

#ifndef OSG_COMPILEPHYSICSRAYGEOMINST
OSG_DLLEXPORT_DECL1(MField, PhysicsRayGeomPtr, OSG_PHYSICSLIB_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGPHYSICSRAYGEOMFIELDS_HEADER_CVSID "@(#)$Id: OSGPhysicsRayGeomFields.h,v 1.2 2006/02/20 17:04:21 dirk Exp $"

#endif /* _OSGPHYSICSRAYGEOMFIELDS_H_ */
