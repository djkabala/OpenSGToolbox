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

#ifndef _OSGBULLETDYNAMICSWORLD_H_
#define _OSGBULLETDYNAMICSWORLD_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBulletDynamicsWorldBase.h"

#include "BulletDynamics/Dynamics/btDynamicsWorld.h"

OSG_BEGIN_NAMESPACE

/*! \brief BulletDynamicsWorld class. See \ref
           PageContribBulletBulletDynamicsWorld for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING BulletDynamicsWorld : public BulletDynamicsWorldBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BulletDynamicsWorldBase Inherited;
    typedef BulletDynamicsWorld     Self;

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

    virtual btCollisionWorld* getWorld(void) const;
    virtual btDynamicsWorld*  getDynamicsWorld(void) const = 0;

    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BulletDynamicsWorldBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BulletDynamicsWorld(void);
    BulletDynamicsWorld(const BulletDynamicsWorld &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BulletDynamicsWorld(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      External                                */
    /*! \{                                                                 */

    Vec3f getExternalGravity(void);
    void setExternalGravity(const Vec3f& value);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class BulletDynamicsWorldBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BulletDynamicsWorld &source);
};

typedef BulletDynamicsWorld *BulletDynamicsWorldP;

OSG_END_NAMESPACE

#include "OSGBulletRigidBody.h"
#include "OSGBulletTypedConstraint.h"
#include "OSGBulletDynamicsWorldBase.inl"
#include "OSGBulletDynamicsWorld.inl"

#endif /* _OSGBULLETDYNAMICSWORLD_H_ */
