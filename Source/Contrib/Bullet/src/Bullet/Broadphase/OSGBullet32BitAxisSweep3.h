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

#ifndef _OSGBULLET32BITAXISSWEEP3_H_
#define _OSGBULLET32BITAXISSWEEP3_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBullet32BitAxisSweep3Base.h"

#include "BulletCollision/BroadphaseCollision/btAxisSweep3.h"
#include "boost/scoped_ptr.hpp"

OSG_BEGIN_NAMESPACE

/*! \brief Bullet32BitAxisSweep3 class. See \ref
           PageContribBulletBullet32BitAxisSweep3 for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING Bullet32BitAxisSweep3 : public Bullet32BitAxisSweep3Base
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef Bullet32BitAxisSweep3Base Inherited;
    typedef Bullet32BitAxisSweep3     Self;

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         details    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0,
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                 Internal Bullet                              */
    /*! \{                                                                 */

    virtual btBroadphaseInterface* getBroadphase(void) const;

    bt32BitAxisSweep3* get32BitAxisSweep3(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in Bullet32BitAxisSweep3Base.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    Bullet32BitAxisSweep3(void);
    Bullet32BitAxisSweep3(const Bullet32BitAxisSweep3 &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~Bullet32BitAxisSweep3(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Class Specific                             */
    /*! \{                                                                 */

    void onCreate(const Bullet32BitAxisSweep3 *Id = NULL);

    void onDestroy(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    boost::scoped_ptr<bt32BitAxisSweep3> _broadphase;

    friend class FieldContainer;
    friend class Bullet32BitAxisSweep3Base;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const Bullet32BitAxisSweep3 &source);
};

typedef Bullet32BitAxisSweep3 *Bullet32BitAxisSweep3P;

OSG_END_NAMESPACE

#include "OSGBullet32BitAxisSweep3Base.inl"
#include "OSGBullet32BitAxisSweep3.inl"

#endif /* _OSGBULLET32BITAXISSWEEP3_H_ */
