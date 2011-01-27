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

#ifndef _OSGBULLETAXISSWEEP3_H_
#define _OSGBULLETAXISSWEEP3_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBulletAxisSweep3Base.h"

#include "BulletCollision/BroadphaseCollision/btAxisSweep3.h"
#include "boost/scoped_ptr.hpp"

OSG_BEGIN_NAMESPACE

/*! \brief BulletAxisSweep3 class. See \ref
           PageContribBulletBulletAxisSweep3 for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING BulletAxisSweep3 : public BulletAxisSweep3Base
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BulletAxisSweep3Base Inherited;
    typedef BulletAxisSweep3     Self;

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

    btAxisSweep3* getAxisSweep3(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BulletAxisSweep3Base.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BulletAxisSweep3(void);
    BulletAxisSweep3(const BulletAxisSweep3 &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BulletAxisSweep3(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Class Specific                             */
    /*! \{                                                                 */

    void onCreate(const BulletAxisSweep3 *Id = NULL);

    void onDestroy(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    boost::scoped_ptr<btAxisSweep3> _broadphase;

    friend class FieldContainer;
    friend class BulletAxisSweep3Base;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BulletAxisSweep3 &source);
};

typedef BulletAxisSweep3 *BulletAxisSweep3P;

OSG_END_NAMESPACE

#include "OSGBulletAxisSweep3Base.inl"
#include "OSGBulletAxisSweep3.inl"

#endif /* _OSGBULLETAXISSWEEP3_H_ */
