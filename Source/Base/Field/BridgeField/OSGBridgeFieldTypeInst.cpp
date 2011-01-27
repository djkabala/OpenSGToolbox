/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2003 by the OpenSG Forum                   *
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

#define OSG_COMPILEBRIDGEFIELDINST

#include "OSGField.h"

#include "OSGBridgeSField.h"
#include "OSGBridgeSField.ins"

//#include "OSGMField.h"
//#include "OSGMField.ins"

#include "OSGBaseBridgeSFields.h"
//#include "OSGBaseMFields.h"

#include "OSGSysBridgeSFields.h"
//#include "OSGSysMFields.h"

#include "OSGMathBridgeSFields.h"
//#include "OSGMathMFields.h"

#include "OSGVecBridgeSFields.h"
//#include "OSGVecMFields.h"

#include "OSGFieldContainer.h"

OSG_BEGIN_NAMESPACE

namespace
{
    // Type objects for "abstract" types in the type hierarchy.
    // These types do not correspond with any real types, but are used to
    // group the concrete types.
    DataType typeObjBridgeField       ("BridgeField",        "TypeRoot");
}

OSG_FIELD_DLLEXPORT_DEF2(BridgeSField,   bool,       2)
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField,   Int8         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField,  UInt8         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField,  Int16         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, UInt16         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField,  Int32         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, UInt32         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField,  Int64         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, UInt64         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Real16         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Real32         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Fixed32        )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Real64         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, void *         )

//OSG_FIELD_DLLEXPORT_DEF2(MField,   bool,       2)
//OSG_FIELD_DLLEXPORT_DEF1(MField,   Int8         )
//OSG_FIELD_DLLEXPORT_DEF1(MField,  UInt8         )
//OSG_FIELD_DLLEXPORT_DEF1(MField,  Int16         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, UInt16         )
//OSG_FIELD_DLLEXPORT_DEF1(MField,  Int32         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, UInt32         )
//OSG_FIELD_DLLEXPORT_DEF1(MField,  Int64         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, UInt64         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Real16         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Real32         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Fixed32        )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Real64         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, void *         )


OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Color3f        )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Color3fx       )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Color4f        )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Color4fx       )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Color3ub       )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Color4ub       )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, std::string    )
OSG_FIELD_DLLEXPORT_DEF2(BridgeSField, Time,         1)
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, BoxVolume      )
OSG_FIELD_DLLEXPORT_DEF2(BridgeSField, BitVector,    1)
OSG_FIELD_DLLEXPORT_DEF2(BridgeSField, GLenum,       1)
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Plane          )

//OSG_FIELD_DLLEXPORT_DEF1(MField, Color3f        )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Color3fx       )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Color4f        )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Color4fx       )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Color3ub       )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Color4ub       )
//OSG_FIELD_DLLEXPORT_DEF1(MField, std::string    )
//OSG_FIELD_DLLEXPORT_DEF2(MField, Time,         1)
//OSG_FIELD_DLLEXPORT_DEF1(MField, BoxVolume      )
//OSG_FIELD_DLLEXPORT_DEF2(MField, BitVector,    1)
//OSG_FIELD_DLLEXPORT_DEF2(MField, GLenum,       1)
//OSG_FIELD_DLLEXPORT_DEF1(MField, Plane          )

OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec1ub         )
#ifndef OSG_NO_INT8_PNT
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec1b          )
#endif
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec1us         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec1s          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec1f          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec1fx         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec1d          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec1ld         )

OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec2ub         )
#ifndef OSG_NO_INT8_PNT
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec2b          )
#endif
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec2us         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec2s          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec2f          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec2fx         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec2d          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec2ld         )

OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec3ub         )
#ifndef OSG_NO_INT8_PNT
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec3b          )
#endif
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec3us         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec3s          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec3f          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec3fx         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec3d          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec3ld         )

OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec4ub         )
#ifndef OSG_NO_INT8_PNT
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec4b          )
#endif
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec4us         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec4s          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec4f          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec4fx         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec4d          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Vec4ld         )

OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt1ub         )
#ifndef OSG_NO_INT8_PNT
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt1b          )
#endif
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt1us         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt1s          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt1f          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt1fx         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt1d          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt1ld         )

OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt2ub         )
#ifndef OSG_NO_INT8_PNT
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt2b          )
#endif
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt2us         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt2s          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt2f          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt2fx         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt2d          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt2ld         )

OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt3ub         )
#ifndef OSG_NO_INT8_PNT
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt3b          )
#endif
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt3us         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt3s          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt3f          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt3fx         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt3d          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt3ld         )

OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt4ub         )
#ifndef OSG_NO_INT8_PNT
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt4b          )
#endif
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt4us         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt4s          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt4f          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt4fx         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt4d          )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Pnt4ld         )

//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec1ub         )
//#ifndef OSG_NO_INT8_PNT
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec1b          )
//#endif
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec1us         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec1s          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec1f          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec1fx         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec1d          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec1ld         )

//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec2ub         )
//#ifndef OSG_NO_INT8_PNT
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec2b          )
//#endif
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec2us         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec2s          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec2f          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec2fx         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec2d          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec2ld         )

//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec3ub         )
//#ifndef OSG_NO_INT8_PNT
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec3b          )
//#endif
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec3us         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec3s          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec3f          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec3fx         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec3d          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec3ld         )

//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec4ub         )
//#ifndef OSG_NO_INT8_PNT
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec4b          )
//#endif
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec4us         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec4s          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec4f          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec4fx         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec4d          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Vec4ld         )

//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt1ub         )
//#ifndef OSG_NO_INT8_PNT
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt1b          )
//#endif
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt1us         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt1s          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt1f          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt1fx         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt1d          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt1ld         )

//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt2ub         )
//#ifndef OSG_NO_INT8_PNT
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt2b          )
//#endif
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt2us         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt2s          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt2f          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt2fx         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt2d          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt2ld         )

//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt3ub         )
//#ifndef OSG_NO_INT8_PNT
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt3b          )
//#endif
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt3us         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt3s          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt3f          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt3fx         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt3d          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt3ld         )

//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt4ub         )
//#ifndef OSG_NO_INT8_PNT
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt4b          )
//#endif
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt4us         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt4s          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt4f          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt4fx         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt4d          )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Pnt4ld         )

OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Matrix         )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Matrix4d       )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Matrix4fx      )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Quaternion     )
OSG_FIELD_DLLEXPORT_DEF1(BridgeSField, Quaternionfx   )

//OSG_FIELD_DLLEXPORT_DEF1(MField, Matrix         )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Matrix4d       )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Matrix4fx      )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Quaternion     )
//OSG_FIELD_DLLEXPORT_DEF1(MField, Quaternionfx   )

OSG_END_NAMESPACE
