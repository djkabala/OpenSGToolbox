/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Dynamics                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
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


#ifndef _OSGCYLINDERDISTRIBUTION3DFIELDS_H_
#define _OSGCYLINDERDISTRIBUTION3DFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>

#include <OpenSG/OSGFieldContainerPtr.h>
#include <OpenSG/OSGNodeCoreFieldDataType.h>
#include "OSGDynamicsDef.h"

#include "Function/OSGFunctionFields.h"

OSG_BEGIN_NAMESPACE

class CylinderDistribution3D;

#if !defined(OSG_DO_DOC)   // created as a dummy class, remove to prevent doubles
//! CylinderDistribution3DPtr

typedef FCPtr<FunctionPtr, CylinderDistribution3D> CylinderDistribution3DPtr;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpDynamicsFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldDataTraits<CylinderDistribution3DPtr> : 
    public FieldTraitsRecurseMapper<CylinderDistribution3DPtr, true>
{
    static DataType             _type;                       

    enum                        { StringConvertable = 0x00 };
    enum                        { bHasParent        = 0x01 };

    static DataType   &getType (void) { return _type;        }

    static const char *getSName(void) { return "SFCylinderDistribution3DPtr"; }
    static const char *getMName(void) { return "MFCylinderDistribution3DPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsRecurseMapper<CylinderDistribution3DPtr, true>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpDynamicsFieldSingle */

typedef SField<CylinderDistribution3DPtr> SFCylinderDistribution3DPtr;
#endif

#ifndef OSG_COMPILECYLINDERDISTRIBUTION3DINST
OSG_DLLEXPORT_DECL1(SField, CylinderDistribution3DPtr, OSG_DYNAMICSLIB_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpDynamicsFieldMulti */

typedef MField<CylinderDistribution3DPtr> MFCylinderDistribution3DPtr;
#endif

#ifndef OSG_COMPILECYLINDERDISTRIBUTION3DINST
OSG_DLLEXPORT_DECL1(MField, CylinderDistribution3DPtr, OSG_DYNAMICSLIB_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGCYLINDERDISTRIBUTION3DFIELDS_HEADER_CVSID "@(#)$Id: FCFieldsTemplate_h.h,v 1.26 2006/02/20 16:55:35 dirk Exp $"

#endif /* _OSGCYLINDERDISTRIBUTION3DFIELDS_H_ */
