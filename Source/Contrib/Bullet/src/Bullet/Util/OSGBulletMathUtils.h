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
#ifndef _CONTRIB_BULLET_MATH_UTILS_H_
#define _CONTRIB_BULLET_MATH_UTILS_H_

#include "OSGConfig.h"
#include "OSGContribBulletDef.h"

#include "OSGVector.h"
#include "OSGMatrix.h"
#include "OSGQuaternion.h"

#include "LinearMath/btVector3.h"
#include "LinearMath/btMatrix3x3.h"
#include "LinearMath/btQuaternion.h"
#include "LinearMath/btTransform.h"
#include "LinearMath/btScalar.h"

OSG_BEGIN_NAMESPACE

namespace bullet
{

    //3-Vectors
    void OSG_CONTRIBBULLET_DLLMAPPING convert(const Vector<btScalar, 3> &Source,
                                              btVector3& Dest);

    void OSG_CONTRIBBULLET_DLLMAPPING convert(const btVector3& Source,
                                              Vector<btScalar, 3> &Dest);

    btVector3 OSG_CONTRIBBULLET_DLLMAPPING convert(const Vector<btScalar, 3> &Source);

    Vector<btScalar, 3> OSG_CONTRIBBULLET_DLLMAPPING convert(const btVector3 &Source);

    //3-Points
    void OSG_CONTRIBBULLET_DLLMAPPING convert(const Point<btScalar, 3> &Source,
                                              btVector3& Dest);

    void OSG_CONTRIBBULLET_DLLMAPPING convert(const btVector3& Source,
                                              Point<btScalar, 3> &Dest);

    btVector3 OSG_CONTRIBBULLET_DLLMAPPING convert(const Point<btScalar, 3> &Source);

    //Transformation matrices
    void OSG_CONTRIBBULLET_DLLMAPPING convert(const TransformationMatrix<btScalar>& Source,
                                              btTransform& Dest);
    
    void OSG_CONTRIBBULLET_DLLMAPPING convert(const btTransform& Source,
                                              TransformationMatrix<btScalar>& Dest);

    btTransform OSG_CONTRIBBULLET_DLLMAPPING convert(const TransformationMatrix<btScalar>& Source);

    TransformationMatrix<btScalar> OSG_CONTRIBBULLET_DLLMAPPING convert(const btTransform &Source);

    //Matrix3x3
    void OSG_CONTRIBBULLET_DLLMAPPING convert(const TransformationMatrix<btScalar>& Source,
                                              btMatrix3x3& Dest);
    
    void OSG_CONTRIBBULLET_DLLMAPPING convert(const btMatrix3x3& Source,
                                              TransformationMatrix<btScalar>& Dest);
    
    //Quaternion
    void OSG_CONTRIBBULLET_DLLMAPPING convert(const QuaternionBase<btScalar>& Source,
                                              btQuaternion& Dest);
    
    void OSG_CONTRIBBULLET_DLLMAPPING convert(const btQuaternion& Source,
                                              QuaternionBase<btScalar>& Dest);

    btQuaternion OSG_CONTRIBBULLET_DLLMAPPING convert(const QuaternionBase<btScalar>& Source);

    QuaternionBase<btScalar> OSG_CONTRIBBULLET_DLLMAPPING convert(const btQuaternion &Source);
};

OSG_END_NAMESPACE

#include "OSGBulletMathUtils.inl"

#endif /*_CONTRIB_BULLET_MATH_UTILS_H_*/


