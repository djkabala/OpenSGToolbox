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

#ifndef _OSGBULLETSPHERESHAPE_H_
#define _OSGBULLETSPHERESHAPE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBulletSphereShapeBase.h"
#include "BulletCollision/CollisionShapes/btSphereShape.h"

OSG_BEGIN_NAMESPACE

/*! \brief BulletSphereShape class. See \ref
           PageContribBulletBulletSphereShape for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING BulletSphereShape : public BulletSphereShapeBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BulletSphereShapeBase Inherited;
    typedef BulletSphereShape     Self;

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

    btSphereShape*  getSphereShape(void) const;

    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BulletSphereShapeBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BulletSphereShape(void);
    BulletSphereShape(const BulletSphereShape &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BulletSphereShape(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Class Specific                             */
    /*! \{                                                                 */

    void onCreate(const BulletSphereShape *Id = NULL);

    void onDestroy(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                 External bridge                              */
    /*! \{                                                                 */

    Real32 getExternalRadius(void);
    void setExternalRadius(const Real32& value);

    /*! \}                                                                 */

    Real32 _Radius;

    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class BulletSphereShapeBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BulletSphereShape &source);
};

typedef BulletSphereShape *BulletSphereShapeP;

OSG_END_NAMESPACE

#include "OSGBulletSphereShapeBase.inl"
#include "OSGBulletSphereShape.inl"

#endif /* _OSGBULLETSPHERESHAPE_H_ */
