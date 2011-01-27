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

#ifndef _OSGBULLETCYLINDERSHAPE_H_
#define _OSGBULLETCYLINDERSHAPE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBulletCylinderShapeBase.h"
#include "BulletCollision/CollisionShapes/btCylinderShape.h"

OSG_BEGIN_NAMESPACE

/*! \brief BulletCylinderShape class. See \ref
           PageContribBulletBulletCylinderShape for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING BulletCylinderShape : public BulletCylinderShapeBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BulletCylinderShapeBase Inherited;
    typedef BulletCylinderShape     Self;

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

    btCylinderShape*  getCylinderShape(void) const;

    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BulletCylinderShapeBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BulletCylinderShape(void);
    BulletCylinderShape(const BulletCylinderShape &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BulletCylinderShape(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Class Specific                             */
    /*! \{                                                                 */

    void onCreate(const BulletCylinderShape *Id = NULL);

    void onDestroy(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                 External bridge                              */
    /*! \{                                                                 */

    Vec3f getExternalHalfExtents(void);
    void setExternalHalfExtents(const Vec3f& value);

    /*! \}                                                                 */

    Vec3f _HalfExtents;

    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class BulletCylinderShapeBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BulletCylinderShape &source);
};

typedef BulletCylinderShape *BulletCylinderShapeP;

OSG_END_NAMESPACE

#include "OSGBulletCylinderShapeBase.inl"
#include "OSGBulletCylinderShape.inl"

#endif /* _OSGBULLETCYLINDERSHAPE_H_ */
