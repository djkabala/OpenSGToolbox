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

#ifndef _OSGBULLETSOFTBODY_H_
#define _OSGBULLETSOFTBODY_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBulletSoftBodyBase.h"
#include "OSGBulletSimulationEventDetailsFields.h"
#include "OSGBulletHandlerFields.h"

#include "BulletSoftBody/btSoftBody.h"

#include "boost/scoped_ptr.hpp"

class btSoftRigidDynamicsWorld;

OSG_BEGIN_NAMESPACE

/*! \brief BulletSoftBody class. See \ref
           PageContribBulletBulletSoftBody for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING BulletSoftBody : public BulletSoftBodyBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BulletSoftBodyBase Inherited;
    typedef BulletSoftBody     Self;

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
    void attachHandler(BulletHandler* const handler);
    void deattachHandler(void);

    static BulletSoftBodyTransitPtr create(Geometry* const BaseGeometry,
                                           btSoftRigidDynamicsWorld* dynamicsWorld);
    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BulletSoftBodyBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BulletSoftBody(void);
    BulletSoftBody(const BulletSoftBody &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BulletSoftBody(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
	/*---------------------------------------------------------------------*/
	/*! \name                   Class Specific                             */
	/*! \{                                                                 */

	void onCreate(const BulletSoftBody *Id = NULL);

	void onDestroy(void);
	
	/*! \}                                                                 */
    void handleUpdate(BulletSimulationEventDetails* const details);
    boost::signals2::connection _UpdateEventConnection;
    /*==========================  PRIVATE  ================================*/

  private:
    btSoftBodyWorldInfo	_worldInfo;
    boost::scoped_ptr<btSoftBody> _body;
    
    friend class FieldContainer;
    friend class BulletSoftBodyBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BulletSoftBody &source);
};

typedef BulletSoftBody *BulletSoftBodyP;

OSG_END_NAMESPACE

#include "OSGBulletSoftBodyBase.inl"
#include "OSGBulletSoftBody.inl"

#endif /* _OSGBULLETSOFTBODY_H_ */
