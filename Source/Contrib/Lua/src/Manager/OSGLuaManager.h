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

#ifndef _OSGLUAMANAGER_H_
#define _OSGLUAMANAGER_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribLuaDef.h"

#include "lua.hpp"
#include "OSGPathType.h"


OSG_BEGIN_NAMESPACE

class OSG_CONTRIBLUA_DLLMAPPING LuaManager
{
  private:

    /*==========================  PUBLIC  =================================*/
  public:
    virtual int runScript(const std::string& Script) = 0;
    virtual int runScript(const BoostPath& ScriptPath) = 0;
    virtual int runPushedFunction(UInt32 NumArgs, UInt32 NumReturns) = 0;

    virtual bool init(void) = 0;
    virtual bool recreateLuaState(void) = 0;
    virtual bool openLuaBindingLib(OpenBoundLuaLibFunctor OpenFunc) = 0;
    virtual bool uninit(void) = 0;

    virtual void setPackagePath(const std::string& Pattern) = 0;
    virtual std::string getPackagePath(void) const = 0;

    virtual void setPackageCPath(const std::string& Pattern) = 0;
    virtual std::string getPackageCPath(void) const = 0;

    virtual lua_State *getLuaState(void) = 0;

    static StatElemDesc<StatTimeElem   > statScriptsRunTime;
    /*==========================  PRIVATE  ================================*/
  private:

    // Variables should all be in StubSoundManagerBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    LuaManager(void);
    LuaManager(const LuaManager &source);
    LuaManager& operator=(const LuaManager &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~LuaManager(void); 

    /*! \}                                                                 */
};

typedef LuaManager *LuaManagerP;

OSG_END_NAMESPACE

#include "OSGLuaManager.inl"

#endif /* _OSGLUAMANAGER_H_ */

