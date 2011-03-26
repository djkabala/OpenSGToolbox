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
#ifndef _OPENSG_TEXTURE_CLASS_UTILS_H_
#define _OPENSG_TEXTURE_CLASS_UTILS_H_

#include "OSGConfig.h"
#include "OSGContribImageProcessingDef.h"

#include "OSGTextureObjChunk.h"

OSG_BEGIN_NAMESPACE

/**
 * \brief Get the class of the data format of the texture.
 * 
 * @param tex A texture object.
 */
UInt32 OSG_CONTRIBIMAGEPROCESSING_DLLMAPPING determinTextureFormatClasses(TextureObjChunk* const tex);

/**
 * \brief Get the type class of the data format of the texture.
 * 
 * @param tex A texture object.
 */
UInt32 OSG_CONTRIBIMAGEPROCESSING_DLLMAPPING determinTextureDataTypeClasses(TextureObjChunk* const tex);

OSG_END_NAMESPACE

#endif


