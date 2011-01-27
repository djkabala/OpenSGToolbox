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

#ifndef _OSGBULLETDISCRETEDYNAMICSWORLD_H_
#define _OSGBULLETDISCRETEDYNAMICSWORLD_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBulletDiscreteDynamicsWorldBase.h"

#include "BulletDynamics/Dynamics/btDiscreteDynamicsWorld.h"

OSG_BEGIN_NAMESPACE

/*! \brief BulletDiscreteDynamicsWorld class. See \ref
           PageContribBulletBulletDiscreteDynamicsWorld for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING BulletDiscreteDynamicsWorld : public BulletDiscreteDynamicsWorldBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BulletDiscreteDynamicsWorldBase Inherited;
    typedef BulletDiscreteDynamicsWorld     Self;

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

    virtual btDynamicsWorld*         getDynamicsWorld(void) const;
    virtual btDiscreteDynamicsWorld* getDiscreteDynamicsWorld(void) const;

    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BulletDiscreteDynamicsWorldBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BulletDiscreteDynamicsWorld(void);
    BulletDiscreteDynamicsWorld(const BulletDiscreteDynamicsWorld &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BulletDiscreteDynamicsWorld(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Class Specific                             */
    /*! \{                                                                 */

    void onCreate(const BulletDiscreteDynamicsWorld *Id = NULL);

    void onDestroy(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      External                                */
    /*! \{                                                                 */
    
    bool getExternalSynchronizeAllMotionsStates(void);
    void setExternalSynchronizeAllMotionsStates(bool value);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    friend class FieldContainer;
    friend class BulletDiscreteDynamicsWorldBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BulletDiscreteDynamicsWorld &source);
};

typedef BulletDiscreteDynamicsWorld *BulletDiscreteDynamicsWorldP;

OSG_END_NAMESPACE

#include "OSGBulletDiscreteDynamicsWorldBase.inl"
#include "OSGBulletDiscreteDynamicsWorld.inl"

#endif /* _OSGBULLETDISCRETEDYNAMICSWORLD_H_ */
