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

#ifndef _OSGBASESFBRIDGEIELDS_H_
#define _OSGBASESBRIDGEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBridgeSField.h"
#include "OSGBaseFieldTraits.h"

OSG_BEGIN_NAMESPACE

#ifndef DOXYGEN_SHOULD_SKIP_THIS

/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Color3f> BridgeSFColor3f;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Color3fx> BridgeSFColor3fx;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Color4f> BridgeSFColor4f;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Color4fx> BridgeSFColor4fx;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Color3ub> BridgeSFColor3ub;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Color4ub> BridgeSFColor4ub;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<std::string> BridgeSFString;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Time, 1> BridgeSFTime;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<BoxVolume> BridgeSFBoxVolume;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<BitVector, 1>  BridgeSFBitVector;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<GLenum, 1>  BridgeSFGLenum;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Plane> BridgeSFPlane;

#else // these are the doxygen hacks

/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFColor3f : public BridgeSField<Color3f> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFColor3fx : public BridgeSField<Color3fx> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFColor4f : public BridgeSField<Color4f> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFColor4fx : public BridgeSField<Color4fx> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFColor3ub : public BridgeSField<Color3ub> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFColor4ub : public BridgeSField<Color4ub> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFString : public BridgeSField<std::string> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFTime : public BridgeSField<Time, 1> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFBoxVolume : public BridgeSField<BoxVolume> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFBitVector : public BridgeSField<BitVector, 1>  {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFGLenum : public BridgeSField<GLenum, 1> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPlane : public BridgeSField<Plane> {};

#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGBASESBRIDGEFIELDS_H_ */
