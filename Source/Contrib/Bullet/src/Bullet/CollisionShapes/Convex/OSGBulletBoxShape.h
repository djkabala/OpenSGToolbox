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

#ifndef _OSGBULLETBOXSHAPE_H_
#define _OSGBULLETBOXSHAPE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBulletBoxShapeBase.h"
#include "BulletCollision/CollisionShapes/btBoxShape.h"

OSG_BEGIN_NAMESPACE

/*! \brief BulletBoxShape class. See \ref
           PageContribBulletBulletBoxShape for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING BulletBoxShape : public BulletBoxShapeBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BulletBoxShapeBase Inherited;
    typedef BulletBoxShape     Self;

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

    btBoxShape*  getBoxShape(void) const;

    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BulletBoxShapeBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BulletBoxShape(void);
    BulletBoxShape(const BulletBoxShape &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BulletBoxShape(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Class Specific                             */
    /*! \{                                                                 */

    void onCreate(const BulletBoxShape *Id = NULL);

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
    friend class BulletBoxShapeBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BulletBoxShape &source);
};

typedef BulletBoxShape *BulletBoxShapeP;

OSG_END_NAMESPACE

#include "OSGBulletBoxShapeBase.inl"
#include "OSGBulletBoxShape.inl"

#endif /* _OSGBULLETBOXSHAPE_H_ */
