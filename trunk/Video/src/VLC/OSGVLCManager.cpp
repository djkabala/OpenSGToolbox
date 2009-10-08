/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Video                               *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                 Authors: David Kabala, Daniel Guilliams                   *
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
#include "OSGVLCManager.h"
#include "OSGVLCVideoWrapper.h"

#ifdef WIN32


OSG_BEGIN_NAMESPACE

VLCManager *VLCManager::_the = NULL;

VideoManager *VLCManager::the(void)
{
    if(_the == NULL)
        _the = new VLCManager;

    return _the;
}

VideoWrapperPtr VLCManager::createVideoWrapper(void) const
{
	return VLCVideoWrapper::create();
}

void VLCManager::init(int   argc, char *argv[])
{
	// this will change
	/*
    HRESULT hr;
    hr = CoInitialize(NULL);
    if (FAILED(hr))
    {
        printf("ERROR - Could not initialize COM library");
        return;
    }
	*/
}

void VLCManager::exit(void)
{
    CoUninitialize();
}

/*-------------------------------------------------------------------------*/
/*                            Constructors                                 */

VLCManager::VLCManager(void)
{
}
    
/*-------------------------------------------------------------------------*/
/*                             Destructor                                  */

VLCManager::~VLCManager(void)
{
}

OSG_END_NAMESPACE

#endif
