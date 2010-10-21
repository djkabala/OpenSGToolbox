/*---------------------------------------------------------------------------*\
 *                            OpenSGToolbox                                  *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *   contact: dkabala@vrac.iastate.edu                                       *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 3.                               *
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

#ifndef _OSGPARTICLEGEOMETRYCOLLISIONLISTENER_H_
#define _OSGPARTICLEGEOMETRYCOLLISIONLISTENER_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

#include "OSGEventListener.h"
#include "OSGParticleGeometryCollisionEvent.h"

OSG_BEGIN_NAMESPACE

class OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING ParticleGeometryCollisionListener : public EventListener
{
   /*=========================  PUBLIC  ===============================*/
public:

   virtual void particleCollision(const ParticleGeometryCollisionEventUnrecPtr ColE) = 0;
};

typedef ParticleGeometryCollisionListener* ParticleGeometryCollisionListenerPtr;

OSG_END_NAMESPACE

#endif /* _OSGPARTICLEGEOMETRYCOLLISIONLISTENER_H_ */
