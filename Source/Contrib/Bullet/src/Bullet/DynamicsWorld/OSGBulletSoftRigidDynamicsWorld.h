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

#ifndef _OSGBULLETSOFTRIGIDDYNAMICSWORLD_H_
#define _OSGBULLETSOFTRIGIDDYNAMICSWORLD_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBulletSoftRigidDynamicsWorldBase.h"

#include "BulletSoftBody/btSoftRigidDynamicsWorld.h"

OSG_BEGIN_NAMESPACE

/*! \brief BulletSoftRigidDynamicsWorld class. See \ref
           PageContribBulletBulletSoftRigidDynamicsWorld for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING BulletSoftRigidDynamicsWorld : public BulletSoftRigidDynamicsWorldBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BulletSoftRigidDynamicsWorldBase Inherited;
    typedef BulletSoftRigidDynamicsWorld     Self;

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

    virtual btSoftRigidDynamicsWorld* getSoftRigidDynamicsWorld(void) const;

    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BulletSoftRigidDynamicsWorldBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BulletSoftRigidDynamicsWorld(void);
    BulletSoftRigidDynamicsWorld(const BulletSoftRigidDynamicsWorld &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BulletSoftRigidDynamicsWorld(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Class Specific                             */
    /*! \{                                                                 */

    void onCreate(const BulletSoftRigidDynamicsWorld *Id = NULL);

    void onDestroy(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      External                                */
    /*! \{                                                                 */
    
    Int32 getExternalDrawFlags(void);
    void setExternalDrawFlags(const Int32& value);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class BulletSoftRigidDynamicsWorldBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BulletSoftRigidDynamicsWorld &source);
};

typedef BulletSoftRigidDynamicsWorld *BulletSoftRigidDynamicsWorldP;

OSG_END_NAMESPACE

#include "OSGBulletSoftRigidDynamicsWorldBase.inl"
#include "OSGBulletSoftRigidDynamicsWorld.inl"

#endif /* _OSGBULLETSOFTRIGIDDYNAMICSWORLD_H_ */
