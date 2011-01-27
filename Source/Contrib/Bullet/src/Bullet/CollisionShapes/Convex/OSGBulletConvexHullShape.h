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

#ifndef _OSGBULLETCONVEXHULLSHAPE_H_
#define _OSGBULLETCONVEXHULLSHAPE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBulletConvexHullShapeBase.h"
#include "BulletCollision/CollisionShapes/btConvexHullShape.h"

OSG_BEGIN_NAMESPACE

/*! \brief BulletConvexHullShape class. See \ref
           PageContribBulletBulletConvexHullShape for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING BulletConvexHullShape : public BulletConvexHullShapeBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BulletConvexHullShapeBase Inherited;
    typedef BulletConvexHullShape     Self;

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

    btConvexHullShape*  getConvexHullShape(void) const;

    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BulletConvexHullShapeBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BulletConvexHullShape(void);
    BulletConvexHullShape(const BulletConvexHullShape &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BulletConvexHullShape(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Class Specific                             */
    /*! \{                                                                 */

    void onCreate(const BulletConvexHullShape *Id = NULL);

    void onDestroy(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class BulletConvexHullShapeBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BulletConvexHullShape &source);
};

typedef BulletConvexHullShape *BulletConvexHullShapeP;

OSG_END_NAMESPACE

#include "OSGBulletConvexHullShapeBase.inl"
#include "OSGBulletConvexHullShape.inl"

#endif /* _OSGBULLETCONVEXHULLSHAPE_H_ */
