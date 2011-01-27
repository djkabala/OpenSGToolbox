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

#ifndef _OSGBULLETDBVTBROADPHASE_H_
#define _OSGBULLETDBVTBROADPHASE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBulletDbvtBroadphaseBase.h"

#include "BulletCollision/BroadphaseCollision/btDbvtBroadphase.h"
#include "boost/scoped_ptr.hpp"

OSG_BEGIN_NAMESPACE

/*! \brief BulletDbvtBroadphase class. See \ref
           PageContribBulletBulletDbvtBroadphase for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING BulletDbvtBroadphase : public BulletDbvtBroadphaseBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BulletDbvtBroadphaseBase Inherited;
    typedef BulletDbvtBroadphase     Self;

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
    /*! \name                 External bridge                              */
    /*! \{                                                                 */

    Real32 getExternalVelocityPrediction(void);
    void setExternalVelocityPrediction(const Real32& value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                 Internal Bullet                              */
    /*! \{                                                                 */

    virtual btBroadphaseInterface* getBroadphase(void) const;

    btDbvtBroadphase* getDbvtBroadphase(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BulletDbvtBroadphaseBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BulletDbvtBroadphase(void);
    BulletDbvtBroadphase(const BulletDbvtBroadphase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BulletDbvtBroadphase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Class Specific                             */
    /*! \{                                                                 */

    void onCreate(const BulletDbvtBroadphase *Id = NULL);

    void onDestroy(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    boost::scoped_ptr<btDbvtBroadphase>                _broadphase;

    friend class FieldContainer;
    friend class BulletDbvtBroadphaseBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BulletDbvtBroadphase &source);
};

typedef BulletDbvtBroadphase *BulletDbvtBroadphaseP;

OSG_END_NAMESPACE

#include "OSGBulletDbvtBroadphaseBase.inl"
#include "OSGBulletDbvtBroadphase.inl"

#endif /* _OSGBULLETDBVTBROADPHASE_H_ */
