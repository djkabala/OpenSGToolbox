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

#ifndef _OSGBULLETCOLLISIONSHAPE_H_
#define _OSGBULLETCOLLISIONSHAPE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBulletCollisionShapeBase.h"
#include "BulletCollision/CollisionShapes/btCollisionShape.h"
#include "boost/scoped_ptr.hpp"

OSG_BEGIN_NAMESPACE

/*! \brief BulletCollisionShape class. See \ref
           PageContribBulletBulletCollisionShape for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING BulletCollisionShape : public BulletCollisionShapeBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BulletCollisionShapeBase Inherited;
    typedef BulletCollisionShape     Self;

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

    btCollisionShape* getShape(void) const;

    void calculateLocalInertia(Real32 mass , Vec3f& localInertia);

    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BulletCollisionShapeBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BulletCollisionShape(void);
    BulletCollisionShape(const BulletCollisionShape &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BulletCollisionShape(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                 External bridge                              */
    /*! \{                                                                 */

    Vec3f getExternalLocalScaling(void);
    void setExternalLocalScaling(const Vec3f& value);

    Real32 getExternalMargin(void);
    void setExternalMargin(const Real32& value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Parent linking                                               */
    /*! \{                                                                 */

    virtual bool linkParent  (FieldContainer * const pParent,
                              UInt16           const childFieldId,
                              UInt16           const parentFieldId);
    virtual bool unlinkParent(FieldContainer * const pParent,
                              UInt16           const parentFieldId);

    /*! \}                                                                 */
    void resetParent(void);

    boost::scoped_ptr<btCollisionShape> _shape;
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class BulletCollisionShapeBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BulletCollisionShape &source);
};

typedef BulletCollisionShape *BulletCollisionShapeP;

OSG_END_NAMESPACE

#include "OSGBulletCollisionShapeBase.inl"
#include "OSGBulletCollisionShape.inl"

#endif /* _OSGBULLETCOLLISIONSHAPE_H_ */
