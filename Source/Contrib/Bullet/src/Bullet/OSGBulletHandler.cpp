/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"
#include "OSGUpdateEventDetails.h"
#include "OSGBulletDynamicsWorld.h"
#include "OSGBulletTypedConstraint.h"

#include "OSGBulletHandler.h"

#include "LinearMath/btScalar.h"
//#include "BulletDynamics/Dynamics/btDiscreteDynamicsWorld.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBulletHandlerBase.cpp file.
// To modify it, please change the .fcd file (OSGBulletHandler.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BulletHandler::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::Static)
    {
        addPreFactoryInitFunction(boost::bind(&BulletHandler::init));
        addPostFactoryExitFunction(boost::bind(&BulletHandler::uninit));
    }
}

bool BulletHandler::init(void)
{
    SLOG << "Initializing Bullet." << std::endl;
    SLOG << "Bullet version: " << btGetVersion() << std::endl;
    return true;
}

bool BulletHandler::uninit(void)
{
    SLOG << "Uninitializing Bullet." << std::endl;
    return true;
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

void BulletHandler::attachUpdateProducer(ReflexiveContainer* const producer)
{
    if(_UpdateEventConnection.connected())
    {
        _UpdateEventConnection.disconnect();
    }
    //Get the Id of the UpdateEvent
    const EventDescription* Desc(producer->getProducerType().findEventDescription("Update"));
    if(Desc == NULL)
    {
        SWARNING << "There is no Update event defined on " << producer->getType().getName() << " types." << std::endl;
    }
    else
    {
        _UpdateEventConnection = producer->connectEvent(Desc->getEventId(), boost::bind(&BulletHandler::handleUpdate, this, _1), boost::signals2::at_back);
    }
}

void BulletHandler::handleUpdate(EventDetails* const details)
{
    //Time since last update, in seconds
    Real32 dt(static_cast<UpdateEventDetails* const>(details)->getElapsedTime());

    //Step the simulation
    UInt32 NumSimSteps(0);
    NumSimSteps = getDynamicsWorld()->getDynamicsWorld()->stepSimulation(dt,getMaxStepsPerUpdate(),getStepSize());

    produceSimulationUpdated(NumSimSteps);
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/
void BulletHandler::produceSimulationUpdated(UInt32 NumSteps)
{                           
    BulletSimulationEventDetailsUnrecPtr Details = BulletSimulationEventDetails::create(this,
                                                                                        getTimeStamp(),
                                                                                        NumSteps);
   
    Inherited::produceSimulationUpdated(Details);
}

/*----------------------- constructors & destructors ----------------------*/

BulletHandler::BulletHandler(void) :
    Inherited()
{
}

BulletHandler::BulletHandler(const BulletHandler &source) :
    Inherited(source)
{
}

BulletHandler::~BulletHandler(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BulletHandler::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void BulletHandler::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump BulletHandler NI" << std::endl;
}

OSG_END_NAMESPACE
