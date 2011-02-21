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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#define OSG_COMPILELUALIB

#include "OSGConfig.h"
#include "OSGBaseFunctions.h"
#include "OSGBaseInitFunctions.h"
#include "OSGLog.h"
#include "OSGEventDetails.h"
#include "OSGStatCollector.h"

#include "OSGLuaRelease.h"
#include <boost/bind.hpp>
#include <boost/filesystem/operations.hpp>
#include <sstream>

//This is the OSGBase wrapped module in Bindings/OSG_wrap.cpp
extern "C" int luaopen_OSG(lua_State* L); // declare the wrapped module

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::LuaRelease
A FMod SoundRelease Interface. 
*/

//struct AddLuaInitFuncs
//{
    //AddLuaInitFuncs()
    //{
        //addPreFactoryInitFunction(boost::bind(&LuaRelease::init));
        //addPreFactoryExitFunction(boost::bind(&LuaRelease::uninit));
    //}
//} AddLuaInitFuncsInstantiation;

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

LuaRelease *LuaRelease::_the  = NULL;
lua_State *LuaRelease::_State = NULL;

//! WindowEventProducer Produced Events

EventDescription *LuaRelease::_eventDesc[] =
{
    new EventDescription("LuaError", 
                          "Lua Error",
                          LuaErrorEventId, 
                          FieldTraits<LuaErrorEventDetails *>::getType(),
                          true,
                          NULL),
};

EventProducerType LuaRelease::_producerType("LuaReleaseProducerType",
                                            "EventProducerType",
                                            "",
                                            InitEventProducerFunctor(),
                                            _eventDesc,
                                            sizeof(_eventDesc));

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

const EventProducerType &LuaRelease::getProducerType(void) const
{
    return _producerType;
}

LuaRelease *LuaRelease::the(void)
{
    if(_the == NULL)
    {
        _the = new LuaRelease();
    }

    return _the;
}

void LuaRelease::report_errors(lua_State *L, int status)
{
}

bool LuaRelease::init(void)
{
    SLOG << "LuaRelease Initializing." << std::endl;

    _State = lua_open();
    if(_State == NULL)
    {
        SWARNING << "Failed to create lua state." << std::endl;
        return false;
    }

    luaL_openlibs(_State); 

    //Load the OpenSG Bindings
    SLOG << "LuaRelease Loading OpenSG Bindings." << std::endl;
    luaopen_OSG(_State);

    SLOG << "LuaRelease Successfully Initialized." << std::endl;
    return true;
}

bool LuaRelease::recreateLuaState(void)
{
    //Close the Lua State
    if(_State != NULL)
    {
        SLOG << "LuaRelease: closing Lua State." << std::endl;

        lua_close(_State);
        _State = NULL;

        SLOG << "LuaRelease: Lua State Closed." << std::endl;
    }

    SLOG << "LuaRelease: Opening Lua State." << std::endl;

    _State = lua_open();
    if(_State == NULL)
    {
        SWARNING << "LuaRelease: Failed to open lua state." << std::endl;
        return false;
    }

    luaL_openlibs(_State); 

    //Load the OpenSG Bindings
    SLOG << "LuaRelease: Loading OpenSG Bindings." << std::endl;
    luaopen_OSG(_State);

    SLOG << "LuaRelease: Successfully opened Lua State." << std::endl;
    return true;
}

bool LuaRelease::openLuaBindingLib(OpenBoundLuaLibFunctor OpenFunc)
{
    if(_State != NULL)
    {
        SLOG << "LuaRelease: Opening Lua bindings lib." << std::endl;
        OpenFunc(_State);
        SLOG << "LuaRelease: Succefully opened Lua bindings lib." << std::endl;
        return true;
    }
    else
    {
        SWARNING << "LuaRelease: Failed to open lua binding, because the Lua State has not been created.." << std::endl;
        return false;
    }
}

bool LuaRelease::uninit(void)
{
    if(_State != NULL)
    {
        SLOG << "LuaRelease Uninitializing." << std::endl;

        lua_close(_State);
        _State = NULL;

        SLOG << "LuaRelease Successfully Uninitialized." << std::endl;
        return true;
    }
    else
    {
        return false;
    }
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

int LuaRelease::runScript(const std::string& Script)
{
    //Start the  scripts run time statistic
    StatTimeElem *ScriptsRunTimeStatElem = StatCollector::getGlobalElem(statScriptsRunTime);
    if(ScriptsRunTimeStatElem) { ScriptsRunTimeStatElem->start(); }

    //Load the Script
    int s = luaL_loadstring(_State, Script.c_str());
    checkError(s);
    if(s != 0)
    {
        //Error loading the string
        if(ScriptsRunTimeStatElem) { ScriptsRunTimeStatElem->stop(); }
        return s;
    }

    // execute Lua program
    s = lua_pcall(_State, 0, LUA_MULTRET, 0);
    checkError(s);

    if(ScriptsRunTimeStatElem) { ScriptsRunTimeStatElem->stop(); }
    return s;
}

int LuaRelease::runScript(const BoostPath& ScriptPath)
{
    if(boost::filesystem::exists(ScriptPath))
    {
        //Start the  scripts run time statistic
        StatTimeElem *ScriptsRunTimeStatElem = StatCollector::getGlobalElem(statScriptsRunTime);
        if(ScriptsRunTimeStatElem) { ScriptsRunTimeStatElem->start(); }

        //Load the Script
        int s = luaL_loadfile(_State, ScriptPath.string().c_str());
        checkError(s);
        if(s != 0)
        {
            //Error loading the string
            if(ScriptsRunTimeStatElem) { ScriptsRunTimeStatElem->stop(); }
            return s;
        }

        // execute Lua program
        s = lua_pcall(_State, 0, LUA_MULTRET, 0);
        checkError(s);

        if(ScriptsRunTimeStatElem) { ScriptsRunTimeStatElem->stop(); }
        return s;
    }
    else
    {
        SWARNING << "LuaRelease::runScript(): File by path: " << ScriptPath.string() << ", does not exist." << std::endl;
        return 0;
    }
}

int LuaRelease::runPushedFunction(UInt32 NumArgs, UInt32 NumReturns)
{
    //Start the  scripts run time statistic
    StatTimeElem *ScriptsRunTimeStatElem = StatCollector::getGlobalElem(statScriptsRunTime);
    if(ScriptsRunTimeStatElem) { ScriptsRunTimeStatElem->start(); }

    int s = lua_pcall(_State, NumArgs, NumReturns, 0);
    checkError(s);

    //Stop the  scripts run time statistic
    if(ScriptsRunTimeStatElem) { ScriptsRunTimeStatElem->stop(); }
    return s;
}

void LuaRelease::checkError(int Status)
{
    switch(Status)
    {
        case 0:
            //No Error
            break;
        case LUA_ERRSYNTAX:
            //Syntax Error
            SWARNING << "Lua Syntax Error: " << lua_tostring(_State, -1) << std::endl;
            produceLuaError(Status);
            lua_pop(_State, 1); // remove error message
            break;
        case LUA_ERRFILE:
            //File Read Error
            SWARNING << "Lua File Load Error: " << lua_tostring(_State, -1) << std::endl;
            printStackTrace();
            produceLuaError(Status);
            lua_pop(_State, 1); // remove error message
            break;
        case LUA_ERRMEM:
            //Memory Allocation Error
            SWARNING << "Lua Memory Allocation Error: " << lua_tostring(_State, -1) << std::endl;
            printStackTrace();
            produceLuaError(Status);
            lua_pop(_State, 1); // remove error message
            break;
        case LUA_ERRRUN:
            //Memory Allocation Error
            SWARNING << "Lua Runtime Error: " << lua_tostring(_State, -1) << std::endl;
            printStackTrace();
            produceLuaError(Status);
            lua_pop(_State, 1); // remove error message
            break;
        case LUA_ERRERR:
            //Memory Allocation Error
            SWARNING << "Lua Error in Error Handler: " << lua_tostring(_State, -1) << std::endl;
            printStackTrace();
            produceLuaError(Status);
            lua_pop(_State, 1); // remove error message
            break;
    }
}

void LuaRelease::printStackTrace(void) const
{
    SWARNING << getCallStack();
}


void LuaRelease::produceLuaError(int Status)
{
    LuaErrorEventDetailsUnrecPtr Details = LuaErrorEventDetails::create(NULL, getSystemTime(), _State, Status);
   
    produceLuaError(Details);
}

void LuaRelease::setPackagePath(const std::string& Pattern)
{
    //Get the package table
    lua_getglobal(_State, "package");
    if (LUA_TTABLE != lua_type(_State, 1))
    {
        SWARNING << "LuaRelease::getPackagePath(): package is not a table" << std::endl;
        return;
    }
    lua_pushlstring(_State, Pattern.c_str(), Pattern.size());
    lua_setfield(_State, 1, "path");
    lua_pop(_State, 1);
}

std::string LuaRelease::getPackagePath(void) const
{
    std::string Result("");

    //Get the package table
    lua_getglobal(_State, "package");
    if (LUA_TTABLE != lua_type(_State, 1))
    {
        SWARNING << "LuaRelease::getPackagePath(): package is not a table" << std::endl;
        return Result;
    }
    lua_getfield(_State, 1, "path");
    if (LUA_TSTRING != lua_type(_State, 2)) 
    {
        SWARNING << "LuaRelease::getPackagePath(): package.path is not a string" << std::endl;
        lua_pop(_State, 1);
        return Result;
    }
    Result = lua_tostring(_State, 2);
    lua_pop(_State, 1);

    return Result;
}

void LuaRelease::setPackageCPath(const std::string& Pattern)
{
    //Get the package table
    lua_getglobal(_State, "package");
    if (LUA_TTABLE != lua_type(_State, 1))
    {
        SWARNING << "LuaRelease::getPackageCPath(): package is not a table" << std::endl;
        return;
    }
    lua_pushlstring(_State, Pattern.c_str(), Pattern.size());
    lua_setfield(_State, 1, "cpath");
    lua_pop(_State, 1);
}

std::string LuaRelease::getPackageCPath(void) const
{
    std::string Result("");

    //Get the package table
    lua_getglobal(_State, "package");
    if (LUA_TTABLE != lua_type(_State, 1))
    {
        SWARNING << "LuaRelease::getPackageCPath(): package is not a table" << std::endl;
        return Result;
    }
    lua_getfield(_State, 1, "cpath");
    if (LUA_TSTRING != lua_type(_State, 2)) 
    {
        SWARNING << "LuaRelease::getPackageCPath(): package.cpath is not a string" << std::endl;
        lua_pop(_State, 1);
        return Result;
    }
    Result = lua_tostring(_State, 2);
    lua_pop(_State, 1);

    return Result;
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

LuaRelease::LuaRelease(void) 
{	
}

LuaRelease::LuaRelease(const LuaRelease &source) 
{
    assert(false && "Sould NOT CALL LuaRelease copy constructor");
}

LuaRelease::~LuaRelease(void)
{
}

OSG_END_NAMESPACE
