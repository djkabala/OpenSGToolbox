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

#ifndef _OSGMATHSBRIDGEFIELDS_H_
#define _OSGMATHSBRIDGEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGSField.h"
#include "OSGMathFieldTraits.h"

OSG_BEGIN_NAMESPACE

#ifndef DOXYGEN_SHOULD_SKIP_THIS

/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Matrix      > BridgeSFMatrix;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Matrix4d    > BridgeSFMatrix4d;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Matrix4fx   > BridgeSFMatrix4fx;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Quaternion  > BridgeSFQuaternion;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Quaternionfx> BridgeSFQuaternionfx;

#else // these are the doxygen hacks

/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFMatrix : public BridgeSField<Matrix> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFMatrix4d : public BridgeSField<Matrix4d> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFMatrix4fx : public BridgeSField<Matrix4fx> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFQuaternion : public BridgeSField<Quaternion> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFQuaternionfx : public BridgeSField<Quaternionfx> {};

#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGMATHSBRIDGEFIELDS_H_ */
