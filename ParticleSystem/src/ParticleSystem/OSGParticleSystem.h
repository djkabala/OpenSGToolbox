/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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

#ifndef _OSGPARTICLESYSTEM_H_
#define _OSGPARTICLESYSTEM_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGParticleSystemDef.h"

#include "OSGParticleSystemBase.h"
#include <OpenSG/Input/OSGUpdateListener.h>
#include <OpenSG/Input/OSGWindowEventProducerFields.h>

#include <set>
#include "ParticleSystem/Events/OSGParticleSystemListener.h"

OSG_BEGIN_NAMESPACE

/*! \brief ParticleSystem class. See \ref 
           PageParticleSystemParticleSystem for a description.
*/

class OSG_PARTICLESYSTEMLIB_DLLMAPPING ParticleSystem : public ParticleSystemBase
{
  private:

    typedef ParticleSystemBase Inherited;

	struct GreaterThanUInt32
	{
	  bool operator()(const UInt32 s1, const UInt32 s2) const;
	};
    /*==========================  PUBLIC  =================================*/
  public:
    static const OSG::BitVector InternalParticlesFieldMask;

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(BitVector  whichField, 
                         UInt32     origin    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0, 
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */

	UInt32 getNumParticles(void) const;
	const Pnt3f& getPosition(const UInt32& Index) const;
	const Pnt3f& getSecPosition(const UInt32& Index) const;
	const Vec3f getPositionChange(const UInt32& Index) const;
	const Vec3f& getNormal(const UInt32& Index) const;
	const Color4f& getColor(const UInt32& Index) const;
	const Vec3f& getSize(const UInt32& Index) const;
	Real32 getLifespan(const UInt32& Index) const;
	Real32 getAge(const UInt32& Index) const;
	const Vec3f& getVelocity(const UInt32& Index) const;
	const Vec3f& getSecVelocity(const UInt32& Index) const;
	const Vec3f getVelocityChange(const UInt32& Index) const;
	const Vec3f& getAcceleration(const UInt32& Index) const;
	UInt64 getProperty(const UInt32& Index) const;

    
	void setPosition(const Pnt3f& Pos, const UInt32& Index);
	void setSecPosition(const Pnt3f& SecPosition, const UInt32& Index);
	void setNormal(const Vec3f& Normal, const UInt32& Index);
	void setColor(const Color4f& Color, const UInt32& Index);
	void setSize(const Vec3f& Size, const UInt32& Index);
	void setLifespan(const Time& Lifespan, const UInt32& Index);
	void setAge(const Time& Age, const UInt32& Index);
	void setVelocity(const Vec3f& Velocity, const UInt32& Index);
	void setSecVelocity(const Vec3f& SecVelocity, const UInt32& Index);
	void setAcceleration(const Vec3f& Acceleration, const UInt32& Index);
	void setProperty(const UInt64& Property, const UInt32& Index);

	
	UInt32 getNumSecPositions(void) const;
	UInt32 getNumNormals(void) const;
	UInt32 getNumColors(void) const;
	UInt32 getNumSizes(void) const;
	UInt32 getNumLifespans(void) const;
	UInt32 getNumAges(void) const;
	UInt32 getNumVelocities(void) const;
	UInt32 getNumSecVelocities(void) const;
	UInt32 getNumAccelerations(void) const;
	UInt32 getNumProperties(void) const;
    
    void addParticleSystemListener(ParticleSystemListenerPtr Listener);
    void removeParticleSystemListener(ParticleSystemListenerPtr Listener);

	bool addParticle(const Pnt3f& Position,
		             const Pnt3f& SecPosition,
					 const Vec3f& Normal,
					 const Color4f& Color,
					 const Vec3f& Size,
					 Real32 Lifespan,
					 Real32 Age,
					 const Vec3f& Velocity,
					 const Vec3f& SecVelocity,
					 const Vec3f& Acceleration,
					 UInt64 Properties);

	bool addParticle(const Pnt3f& Position,
					 const Vec3f& Normal,
					 const Color4f& Color,
					 const Vec3f& Size,
					 Real32 Lifespan,
					 const Vec3f& Velocity,
					 const Vec3f& Acceleration,
					 UInt64 Properties);

    
	bool killParticle(UInt32 Index);

    bool attachUpdateListener(WindowEventProducerPtr UpdateProducer);
    void dettachUpdateListener(WindowEventProducerPtr UpdateProducer);

    /*=========================  PROTECTED  ===============================*/
  protected:

    // Variables should all be in ParticleSystemBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    ParticleSystem(void);
    ParticleSystem(const ParticleSystem &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ParticleSystem(void); 

    /*! \}                                                                 */
    
	typedef std::set<ParticleSystemListenerPtr> ParticleSystemListenerSet;
    typedef ParticleSystemListenerSet::iterator ParticleSystemListenerSetItor;

    ParticleSystemListenerSet       _ParticleSystemListeners;

    void produceSystemUpdated(bool VolumeChanged);
    void produceParticleGenerated(Pnt3f ParticlePos);
    void produceParticleKilled(Pnt3f ParticlePos);
    void produceParticleStolen(Pnt3f ParticlePos);

	class SystemUpdateListener : public UpdateListener
	{
	public:
		SystemUpdateListener(ParticleSystem* TheSystem);
        virtual void update(const UpdateEvent& e);
	private:
		ParticleSystem* _System;
	};

	friend class SystemUpdateListener;

	SystemUpdateListener _SystemUpdateListener;
    
    virtual void update(const Time& elps);

	void addAndExpandSecPositions(const Pnt3f& SecPosition);
	void addAndExpandNormals(const Vec3f& Normal);
	void addAndExpandColors(const Color4f& Color);
	void addAndExpandSizes(const Vec3f& Size);
	void addAndExpandLifespans(Real32 Lifespan);
	void addAndExpandAges(Real32 Age);
	void addAndExpandVelocities(const Vec3f& Velocity);
	void addAndExpandSecVelocities(const Vec3f& SecVelocity);
	void addAndExpandAccelerations(const Vec3f& Acceleration);
	void addAndExpandProperties(UInt64 Properties);

	void removePosition(UInt32 Index);
	void removeSecPosition(UInt32 Index);
	void removeNormal(UInt32 Index);
	void removeColor(UInt32 Index);
	void removeSize(UInt32 Index);
	void removeLifespan(UInt32 Index);
	void removeAge(UInt32 Index);
	void removeVelocity(UInt32 Index);
	void removeSecVelocity(UInt32 Index);
	void removeAcceleration(UInt32 Index);
	void removeProperty(UInt32 Index);

	bool internalKillParticle(UInt32 Index);
	void internalKillParticles();

	bool _isUpdating;
	std::set<UInt32, GreaterThanUInt32> _ParticlesToKill;
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;
    friend class ParticleSystemBase;

    static void initMethod(void);

    // prohibit default functions (move to 'public' if you need one)

    void operator =(const ParticleSystem &source);
};

typedef ParticleSystem *ParticleSystemP;

OSG_END_NAMESPACE

#include "OSGParticleSystemBase.inl"
#include "OSGParticleSystem.inl"

#define OSGPARTICLESYSTEM_HEADER_CVSID "@(#)$Id: FCTemplate_h.h,v 1.23 2005/03/05 11:27:26 dirk Exp $"

#endif /* _OSGPARTICLESYSTEM_H_ */
