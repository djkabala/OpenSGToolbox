/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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

#ifndef _OSGSTUBSOUND_H_
#define _OSGSTUBSOUND_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>

#include "OSGStubSoundBase.h"

OSG_BEGIN_NAMESPACE

/*! \brief StubSound class. See \ref 
           PageSoundStubSound for a description.
*/

class OSG_SOUNDLIB_DLLMAPPING StubSound : public StubSoundBase
{
  private:

    typedef StubSoundBase Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

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

	virtual UInt32 play(void);
	virtual Real32 getLength(void) const;
    
    virtual UInt32 getNumChannels(void) const;
    virtual UInt32 getNumPlayingChannels(void) const;
    virtual bool isPlaying(UInt32 ChannelID) const;
    virtual bool isValid(UInt32 ChannelID) const;
	virtual void stop(UInt32 ChannelID);

    
	virtual void pause(UInt32 ChannelID);
	virtual void unpause(UInt32 ChannelID);
	virtual void pauseToggle(UInt32 ChannelID);
    virtual bool isPaused(UInt32 ChannelID) const;

    
	virtual void seek(Real32 pos, UInt32 ChannelID);
    virtual Real32 getTime(UInt32 ChannelID) const;


	virtual void setChannelPosition(const Pnt3f &pos, UInt32 ChannelID);
	virtual Pnt3f getChannelPosition(UInt32 ChannelID) const;

	virtual void setChannelVelocity(const Vec3f &vec, UInt32 ChannelID);
	virtual Vec3f getChannelVelocity(UInt32 ChannelID) const;

	virtual void setChannelVolume(Real32 volume, UInt32 ChannelID);
	virtual Real32 getChannelVolume(UInt32 ChannelID) const;
	virtual bool getMute(UInt32 ChannelID) const;
	virtual void mute(bool shouldMute, UInt32 ChannelID);
    
	virtual void setAllChannelsVolume(Real32 volume);
	virtual void stopAllChannels(void);
	virtual void setAllChannelPaused(bool paused);
	virtual void setAllChannelMute(bool shouldMute);
    /*=========================  PROTECTED  ===============================*/
  protected:

    // Variables should all be in StubSoundBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    StubSound(void);
    StubSound(const StubSound &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~StubSound(void); 

    /*! \}                                                                 */
    
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;
    friend class StubSoundBase;

    static void initMethod(void);
	void update();

    // prohibit default functions (move to 'public' if you need one)

    void operator =(const StubSound &source);
};

typedef StubSound *StubSoundP;

OSG_END_NAMESPACE

#include "OSGStubSoundBase.inl"
#include "OSGStubSound.inl"

#define OSGSTUBSOUND_HEADER_CVSID "@(#)$Id: FCTemplate_h.h,v 1.23 2005/03/05 11:27:26 dirk Exp $"

#endif /* _OSGSTUBSOUND_H_ */
