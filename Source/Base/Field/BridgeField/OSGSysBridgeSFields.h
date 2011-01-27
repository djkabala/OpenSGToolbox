/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *           Copyright (C) 2003 by the OpenSG Forum                          *
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

#ifndef _OSGSYSSBRIDGEFIELDS_H_
#define _OSGSYSSBRIDGEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBridgeSField.h"
#include "OSGSysFieldTraits.h"

OSG_BEGIN_NAMESPACE

#ifndef DOXYGEN_SHOULD_SKIP_THIS

/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<bool, 2>   BridgeSFBool;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Int8>   BridgeSFInt8;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<UInt8>  BridgeSFUInt8;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Int16>  BridgeSFInt16;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<UInt16> BridgeSFUInt16;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Int32>  BridgeSFInt32;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<UInt32> BridgeSFUInt32;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Int64>  BridgeSFInt64;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<UInt64> BridgeSFUInt64;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Real16> BridgeSFReal16;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Real32> BridgeSFReal32;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Fixed32> BridgeSFFixed32;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Real64> BridgeSFReal64;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<void *>   BridgeSFVoidP;

#else // these are the doxygen hacks

/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFBool    : public BridgeSField<bool, 2> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFInt8    : public BridgeSField<Int8> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFUInt8   : public BridgeSField<UInt8> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFInt16   : public BridgeSField<Int16> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFUInt16  : public BridgeSField<UInt16> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFInt32   : public BridgeSField<Int32> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFUInt32  : public BridgeSField<UInt32> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFInt64   : public BridgeSField<Int64> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFUInt64  : public BridgeSField<UInt64> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFReal16  : public BridgeSField<Real16> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFReal32  : public BridgeSField<Real32> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFFixed32 : public BridgeSField<Fixed32> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFReal64  : public BridgeSField<Real64> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVoidP   : public BridgeSField<void *> {};

#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSYSSBRIDGEFIELDS_H_ */
