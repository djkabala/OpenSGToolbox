/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Video                               *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
                           Authors: David Kabala                            
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

#ifndef _OSGVIDEOLISTENER_H_
#define _OSGVIDEOLISTENER_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "OSGVideoDef.h"

#include <OpenSG/Toolbox/OSGEventListener.h>
#include "OSGVideoEvent.h"

OSG_BEGIN_NAMESPACE

class OSG_VIDEOLIB_DLLMAPPING VideoListener : public EventListener
{
    /*=========================  PUBLIC  ===============================*/
  public:
  
    virtual void paused(const VideoEventPtr e) = 0;
    virtual void unpaused(const VideoEventPtr e) = 0;
    virtual void started(const VideoEventPtr e) = 0;
    virtual void stopped(const VideoEventPtr e) = 0;
    virtual void opened(const VideoEventPtr e) = 0;
    virtual void closed(const VideoEventPtr e) = 0;
    virtual void ended(const VideoEventPtr e) = 0;
    virtual void cycled(const VideoEventPtr e) = 0;
    virtual void seeked(const VideoEventPtr e) = 0;
};

typedef VideoListener* VideoListenerPtr;

OSG_END_NAMESPACE

#endif /* _OSGVIDEOLISTENER_H_ */
