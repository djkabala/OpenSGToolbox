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
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

#ifndef _OSGLUARELEASE_H_
#define _OSGLUARELEASE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribLuaDef.h"
#include "OSGLuaManager.h"

#include <list>

#include "OSGEventProducerType.h"
#include "OSGLuaErrorEventDetails.h"
#include "OSGConsumableEventCombiner.h"
#include "OSGEventDescription.h"
#include "OSGActivity.h"
#include "OSGStatElemTypes.h"

#include <boost/function.hpp>


OSG_BEGIN_NAMESPACE

/*! \brief LuaRelease class. See \ref 
  PageSoundLuaRelease for a description.
  */

class OSG_CONTRIBLUA_DLLMAPPING LuaRelease public LuaManager
{
    friend class LuaActivity;

  private:

    /*==========================  PUBLIC  =================================*/
  public:
    virtual int runScript(const std::string& Script);
    virtual int runScript(const BoostPath& ScriptPath);
    virtual int runPushedFunction(UInt32 NumArgs, UInt32 NumReturns);

    virtual bool init(void);
    virtual bool recreateLuaState(void);
    virtual bool openLuaBindingLib(OpenBoundLuaLibFunctor OpenFunc);
    virtual bool uninit(void);

    virtual void setPackagePath(const std::string& Pattern);
    virtual std::string getPackagePath(void) const;

    virtual void setPackageCPath(const std::string& Pattern);
    virtual std::string getPackageCPath(void) const;

    virtual lua_State *getLuaState(void);

    typedef LuaErrorEventDetails LuaErrorEventDetailsType;
    typedef boost::signals2::signal<void (LuaErrorEventDetails* const, UInt32), ConsumableEventCombiner> LuaErrorEventType;
    typedef boost::function<int ( lua_State* )> OpenBoundLuaLibFunctor;

    enum
    {
        LuaErrorEventId = 1,
        NextEventId     = LuaErrorEventId            + 1
    };

    static LuaRelease* the(void);

    static void report_errors(lua_State *L, int status);

    static const  EventProducerType  &getProducerClassType  (void); 
    static        UInt32              getProducerClassTypeId(void); 
    virtual const EventProducerType &getProducerType(void) const; 

    boost::signals2::connection          attachActivity(UInt32 eventId,
                                                       Activity* TheActivity);
    UInt32                  getNumProducedEvents(void)          const;
    const EventDescription *getProducedEventDescription(const   Char8 *ProducedEventName) const;
    const EventDescription *getProducedEventDescription(UInt32  ProducedEventId) const;
    UInt32                  getProducedEventId(const            Char8 *ProducedEventName) const;

    boost::signals2::connection connectLuaError(const LuaErrorEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    boost::signals2::connection connectLuaError(const LuaErrorEventType::group_type &group,
                                                       const LuaErrorEventType::slot_type &listener,
                                                       boost::signals2::connect_position at= boost::signals2::at_back);
    void   disconnectLuaError       (const LuaErrorEventType::group_type &group);
    void   disconnectAllSlotsLuaError(void);
    bool   isEmptyLuaError          (void) const;
    UInt32 numSlotsLuaError         (void) const;

    lua_State *getLuaState(void);
    void checkError(int Status);

    /*==========================  PRIVATE  ================================*/
  private:

    static LuaRelease* _the;

    static EventDescription   *_eventDesc[];
    static EventProducerType _producerType;
    LuaErrorEventType _LuaErrorEvent;

    // Variables should all be in StubSoundReleaseBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    LuaRelease(void);
    LuaRelease(const LuaRelease &source);
    LuaRelease& operator=(const LuaRelease &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~LuaRelease(void); 

    /*! \}                                                                 */
    static lua_State *_State;

    void produceLuaError(int Status);
    
    void produceLuaError(LuaErrorEventDetailsType* const e);
};

typedef LuaRelease *LuaReleaseP;

OSG_END_NAMESPACE

#include "OSGLuaRelease.inl"

#endif /* _OSGLUARELEASE_H_ */

