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

#ifndef _OSGBULLETCAPSULESHAPE_H_
#define _OSGBULLETCAPSULESHAPE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBulletCapsuleShapeBase.h"
#include "BulletCollision/CollisionShapes/btCapsuleShape.h"

OSG_BEGIN_NAMESPACE

/*! \brief BulletCapsuleShape class. See \ref
           PageContribBulletBulletCapsuleShape for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING BulletCapsuleShape : public BulletCapsuleShapeBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BulletCapsuleShapeBase Inherited;
    typedef BulletCapsuleShape     Self;

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

    btCapsuleShape*  getCapsuleShape(void) const;

    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BulletCapsuleShapeBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BulletCapsuleShape(void);
    BulletCapsuleShape(const BulletCapsuleShape &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BulletCapsuleShape(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Class Specific                             */
    /*! \{                                                                 */

    void onCreate(const BulletCapsuleShape *Id = NULL);

    void onDestroy(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                 External bridge                              */
    /*! \{                                                                 */

    Real32 getExternalRadius(void);
    void setExternalRadius(const Real32& value);

    Real32 getExternalHeight(void);
    void setExternalHeight(const Real32& value);

    /*! \}                                                                 */

    Real32 _Radius;
    Real32 _Height;

    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class BulletCapsuleShapeBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BulletCapsuleShape &source);
};

typedef BulletCapsuleShape *BulletCapsuleShapeP;

OSG_END_NAMESPACE

#include "OSGBulletCapsuleShapeBase.inl"
#include "OSGBulletCapsuleShape.inl"

#endif /* _OSGBULLETCAPSULESHAPE_H_ */
