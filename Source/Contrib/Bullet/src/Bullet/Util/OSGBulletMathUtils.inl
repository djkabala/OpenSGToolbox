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

OSG_BEGIN_NAMESPACE

//3-Vectors
inline
void bullet::convert(const Vector<btScalar, 3>& Source,
                     btVector3& Dest)
{
    Dest.setValue(Source.x(),Source.y(),Source.z());
}

inline
void bullet::convert(const btVector3& Source,
                     Vector<btScalar, 3>& Dest)
{
    Dest.setValues(Source.x(),Source.y(),Source.z());
}

inline
btVector3 bullet::convert(const Vector<btScalar, 3> &Source)
{
    btVector3 Result;
    convert(Source, Result);
    return Result;
}

inline
Vector<btScalar, 3> bullet::convert(const btVector3 &Source)
{
    Vector<btScalar, 3> Result;
    convert(Source, Result);
    return Result;
}

//3-Points
inline
void bullet::convert(const Point<btScalar, 3>& Source,
                     btVector3& Dest)
{
    Dest.setValue(Source.x(),Source.y(),Source.z());
}

inline
void bullet::convert(const btVector3& Source,
                     Point<btScalar, 3>& Dest)
{
    Dest.setValues(Source.x(),Source.y(),Source.z());
}

inline
btVector3 bullet::convert(const Point<btScalar, 3> &Source)
{
    btVector3 Result;
    convert(Source, Result);
    return Result;
}

//Transformation matrices
inline
void bullet::convert(const TransformationMatrix<btScalar>& Source,
                     btTransform& Dest)
{
    Dest.setFromOpenGLMatrix(Source.getValues());
}

inline
void bullet::convert(const btTransform& Source,
                     TransformationMatrix<btScalar>& Dest)
{
    Source.getOpenGLMatrix(Dest.getValues());
}

inline
btTransform bullet::convert(const TransformationMatrix<btScalar>& Source)
{
    btTransform Result;
    convert(Source, Result);
    return Result;
}

inline
TransformationMatrix<btScalar> bullet::convert(const btTransform &Source)
{
    TransformationMatrix<btScalar> Result;
    convert(Source, Result);
    return Result;
}

//Matrix3x3
inline
void bullet::convert(const TransformationMatrix<btScalar>& Source,
                     btMatrix3x3& Dest)
{
    Dest.setValue(Source[0][0], Source[0][1], Source[0][2],
                  Source[1][0], Source[1][1], Source[1][2],
                  Source[2][0], Source[2][1], Source[2][2]);
}

inline
void bullet::convert(const btMatrix3x3& Source,
                     TransformationMatrix<btScalar>& Dest)
{
    Dest.setValue(Source[0][0], Source[0][1], Source[0][2], 0.0f,
                  Source[1][0], Source[1][1], Source[1][2], 0.0f,
                  Source[2][0], Source[2][1], Source[2][2], 0.0f,
                  0.0f, 0.0f, 0.0f, 1.0f);
}

//Quaternion
inline
void bullet::convert(const QuaternionBase<btScalar>& Source,
                     btQuaternion& Dest)
{
    Dest.setValue(Source.x(), Source.y(), Source.z(), Source.w());
}

inline
void bullet::convert(const btQuaternion& Source,
                     QuaternionBase<btScalar>& Dest)
{
    Dest.setValueAsQuat(Source.x(), Source.y(), Source.z(), Source.w());
}

inline
btQuaternion bullet::convert(const QuaternionBase<btScalar>& Source)
{
    btQuaternion Result;
    convert(Source, Result);
    return Result;
}

inline
QuaternionBase<btScalar> bullet::convert(const btQuaternion &Source)
{
    QuaternionBase<btScalar> Result;
    convert(Source, Result);
    return Result;
}

OSG_END_NAMESPACE

