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

#ifndef _OSGBULLETBVHTRIANGLEMESHSHAPE_H_
#define _OSGBULLETBVHTRIANGLEMESHSHAPE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBulletBvhTriangleMeshShapeBase.h"
#include "BulletCollision/CollisionShapes/btBvhTriangleMeshShape.h"
#include "BulletCollision/CollisionShapes/btTriangleIndexVertexArray.h"

OSG_BEGIN_NAMESPACE

/*! \brief BulletBvhTriangleMeshShape class. See \ref
           PageContribBulletBulletBvhTriangleMeshShape for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING BulletBvhTriangleMeshShape : public BulletBvhTriangleMeshShapeBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BulletBvhTriangleMeshShapeBase Inherited;
    typedef BulletBvhTriangleMeshShape     Self;

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

    btBvhTriangleMeshShape*  getBvhTriangleMeshShape(void) const;

    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BulletBvhTriangleMeshShapeBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BulletBvhTriangleMeshShape(void);
    BulletBvhTriangleMeshShape(const BulletBvhTriangleMeshShape &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BulletBvhTriangleMeshShape(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Class Specific                             */
    /*! \{                                                                 */

    void onCreate(const BulletBvhTriangleMeshShape *Id = NULL);

    void onDestroy(void);

    /*! \}                                                                 */
    void makeBulletShape(void);
    /*==========================  PRIVATE  ================================*/

  private:
    boost::scoped_ptr<btTriangleIndexVertexArray> _BulletTriWrapper;

    std::vector<int> _TriIndexes;

    friend class FieldContainer;
    friend class BulletBvhTriangleMeshShapeBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BulletBvhTriangleMeshShape &source);
};

typedef BulletBvhTriangleMeshShape *BulletBvhTriangleMeshShapeP;

OSG_END_NAMESPACE

#include "OSGBulletBvhTriangleMeshShapeBase.inl"
#include "OSGBulletBvhTriangleMeshShape.inl"

#endif /* _OSGBULLETBVHTRIANGLEMESHSHAPE_H_ */
