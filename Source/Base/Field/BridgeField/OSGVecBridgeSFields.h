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

#ifndef _OSGVECSBRIDGEFIELDS_H_
#define _OSGVECSBRIDGEFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBridgeSField.h"
#include "OSGVecFieldTraits.h"

OSG_BEGIN_NAMESPACE

#ifndef DOXYGEN_SHOULD_SKIP_THIS

/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec2ub> BridgeSFVec2ub;


#ifndef OSG_NO_INT8_PNT
/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec2b> BridgeSFVec2b;
#endif


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec2us> BridgeSFVec2us;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec2s> BridgeSFVec2s;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec2f> BridgeSFVec2f;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec2fx> BridgeSFVec2fx;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec2d> BridgeSFVec2d;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec2ld> BridgeSFVec2ld;





/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec3ub> BridgeSFVec3ub;


#ifndef OSG_NO_INT8_PNT
/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec3b> BridgeSFVec3b;
#endif


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec3us> BridgeSFVec3us;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec3s> BridgeSFVec3s;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec3f> BridgeSFVec3f;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec3fx> BridgeSFVec3fx;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec3d> BridgeSFVec3d;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec3ld> BridgeSFVec3ld;





/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec4ub> BridgeSFVec4ub;


#ifndef OSG_NO_INT8_PNT
/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec4b> BridgeSFVec4b;
#endif


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec4us> BridgeSFVec4us;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec4s> BridgeSFVec4s;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec4f> BridgeSFVec4f;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec4fx> BridgeSFVec4fx;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec4d> BridgeSFVec4d;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Vec4ld> BridgeSFVec4ld;




/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt2ub> BridgeSFPnt2ub;


#ifndef OSG_NO_INT8_PNT
/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt2b> BridgeSFPnt2b;
#endif


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt2us> BridgeSFPnt2us;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt2s> BridgeSFPnt2s;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt2f> BridgeSFPnt2f;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt2fx> BridgeSFPnt2fx;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt2d> BridgeSFPnt2d;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt2ld> BridgeSFPnt2ld;





/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt3ub> BridgeSFPnt3ub;


#ifndef OSG_NO_INT8_PNT
/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt3b> BridgeSFPnt3b;
#endif


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt3us> BridgeSFPnt3us;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt3s> BridgeSFPnt3s;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt3f> BridgeSFPnt3f;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt3fx> BridgeSFPnt3fx;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt3d> BridgeSFPnt3d;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt3ld> BridgeSFPnt3ld;





/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt4ub> BridgeSFPnt4ub;


#ifndef OSG_NO_INT8_PNT
/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt4b> BridgeSFPnt4b;
#endif


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt4us> BridgeSFPnt4us;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt4s> BridgeSFPnt4s;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt4f> BridgeSFPnt4f;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt4fx> BridgeSFPnt4fx;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt4d> BridgeSFPnt4d;


/*! \ingroup GrpBaseFieldSingle */
typedef BridgeSField<Pnt4ld> BridgeSFPnt4ld;

#else // these are the doxygen hacks

/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec2ub : public BridgeSField<Vec2ub> {};
#ifndef OSG_NO_INT8_PNT
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec2b : public BridgeSField<Vec2b> {};
#endif
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec2us : public BridgeSField<Vec2us> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec2s : public BridgeSField<Vec2s> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec2f : public BridgeSField<Vec2f> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec2fx : public BridgeSField<Vec2fx> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec2d : public BridgeSField<Vec2d> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec2ld : public BridgeSField<Vec2ld> {};

/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec3ub : public BridgeSField<Vec3ub> {};
#ifndef OSG_NO_INT8_PNT
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec3b : public BridgeSField<Vec3b> {};
#endif
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec3us : public BridgeSField<Vec3us> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec3s : public BridgeSField<Vec3s> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec3f : public BridgeSField<Vec3f> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec3fx : public BridgeSField<Vec3fx> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec3d : public BridgeSField<Vec3d> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec3ld : public BridgeSField<Vec3ld> {};

/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec4ub : public BridgeSField<Vec4ub> {};
#ifndef OSG_NO_INT8_PNT
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec4b : public BridgeSField<Vec4b> {};
#endif
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec4us : public BridgeSField<Vec4us> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec4s : public BridgeSField<Vec4s> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec4f : public BridgeSField<Vec4f> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec4fx : public BridgeSField<Vec4fx> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec4d : public BridgeSField<Vec4d> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFVec4ld : public BridgeSField<Vec4ld> {};


/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt2ub : public BridgeSField<Pnt2ub> {};
#ifndef OSG_NO_INT8_PNT
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt2b : public BridgeSField<Pnt2b> {};
#endif
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt2us : public BridgeSField<Pnt2us> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt2s : public BridgeSField<Pnt2s> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt2f : public BridgeSField<Pnt2f> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt2fx : public BridgeSField<Pnt2fx> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt2d : public BridgeSField<Pnt2d> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt2ld : public BridgeSField<Pnt2ld> {};

/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt3ub : public BridgeSField<Pnt3ub> {};
#ifndef OSG_NO_INT8_PNT
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt3b : public BridgeSField<Pnt3b> {};
#endif
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt3us : public BridgeSField<Pnt3us> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt3s : public BridgeSField<Pnt3s> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt3f : public BridgeSField<Pnt3f> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt3fx : public BridgeSField<Pnt3fx> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt3d : public BridgeSField<Pnt3d> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt3ld : public BridgeSField<Pnt3ld> {};

/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt4ub : public BridgeSField<Pnt4ub> {};
#ifndef OSG_NO_INT8_PNT
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt4b : public BridgeSField<Pnt4b> {};
#endif
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt4us : public BridgeSField<Pnt4us> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt4s : public BridgeSField<Pnt4s> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt4f : public BridgeSField<Pnt4f> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt4fx : public BridgeSField<Pnt4fx> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt4d : public BridgeSField<Pnt4d> {};
/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct BridgeSFPnt4ld : public BridgeSField<Pnt4ld> {};

#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGVECSBRIDGEFIELDS_H_ */
