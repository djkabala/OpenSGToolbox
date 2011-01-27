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

#ifndef _OSGBULLETCOLLISIONWORLD_H_
#define _OSGBULLETCOLLISIONWORLD_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBulletCollisionWorldBase.h"

#include "BulletCollision/CollisionDispatch/btCollisionWorld.h"
#include "BulletCollision/CollisionDispatch/btCollisionConfiguration.h"
#include "BulletCollision/CollisionDispatch/btCollisionDispatcher.h"
#include "BulletDynamics/ConstraintSolver/btConstraintSolver.h"

#include "boost/scoped_ptr.hpp"

OSG_BEGIN_NAMESPACE

/*! \brief BulletCollisionWorld class. See \ref
           PageContribBulletBulletCollisionWorld for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING BulletCollisionWorld : public BulletCollisionWorldBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BulletCollisionWorldBase Inherited;
    typedef BulletCollisionWorld     Self;

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

    virtual btCollisionWorld* getWorld(void) const = 0;
    BulletBroadphaseInterface * getBroadphase     (void) const;
    void setBroadphase     (BulletBroadphaseInterface * const value);

    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BulletCollisionWorldBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BulletCollisionWorld(void);
    BulletCollisionWorld(const BulletCollisionWorld &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BulletCollisionWorld(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      External                                */
    /*! \{                                                                 */

    bool getExternalForceUpdateAllAabbs(void);
    void setExternalForceUpdateAllAabbs(bool value);

    /*! \}                                                                 */

    boost::scoped_ptr<btCollisionWorld>         _world;
    boost::scoped_ptr<btCollisionConfiguration> _collisionConfiguration;
    boost::scoped_ptr<btCollisionDispatcher>    _dispatcher;
    boost::scoped_ptr<btConstraintSolver>       _solver;

    /*==========================  PRIVATE  ================================*/

  private:
    friend class FieldContainer;
    friend class BulletCollisionWorldBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BulletCollisionWorld &source);
};

typedef BulletCollisionWorld *BulletCollisionWorldP;

OSG_END_NAMESPACE

#include "OSGBulletBroadphaseInterface.h"
#include "OSGBulletCollisionWorldBase.inl"
#include "OSGBulletCollisionWorld.inl"

#endif /* _OSGBULLETCOLLISIONWORLD_H_ */
