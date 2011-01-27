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

#ifndef _OSGBULLETGIMPACTMESHSHAPE_H_
#define _OSGBULLETGIMPACTMESHSHAPE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBulletGImpactMeshShapeBase.h"
#include "BulletCollision/Gimpact/btGImpactCollisionAlgorithm.h"
#include "BulletCollision/CollisionShapes/btTriangleIndexVertexArray.h"

OSG_BEGIN_NAMESPACE

/*! \brief BulletGImpactMeshShape class. See \ref
           PageContribBulletBulletGImpactMeshShape for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING BulletGImpactMeshShape : public BulletGImpactMeshShapeBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BulletGImpactMeshShapeBase Inherited;
    typedef BulletGImpactMeshShape     Self;

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

    btGImpactMeshShape*  getGImpactMeshShape(void) const;

    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BulletGImpactMeshShapeBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BulletGImpactMeshShape(void);
    BulletGImpactMeshShape(const BulletGImpactMeshShape &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BulletGImpactMeshShape(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Class Specific                             */
    /*! \{                                                                 */

    void onCreate(const BulletGImpactMeshShape *Id = NULL);

    void onDestroy(void);

    /*! \}                                                                 */
    void makeBulletShape(void);
    /*==========================  PRIVATE  ================================*/

  private:
    boost::scoped_ptr<btTriangleIndexVertexArray> _BulletTriWrapper;

    std::vector<int> _TriIndexes;

    friend class FieldContainer;
    friend class BulletGImpactMeshShapeBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BulletGImpactMeshShape &source);
};

typedef BulletGImpactMeshShape *BulletGImpactMeshShapeP;

OSG_END_NAMESPACE

#include "OSGBulletGImpactMeshShapeBase.inl"
#include "OSGBulletGImpactMeshShape.inl"

#endif /* _OSGBULLETGIMPACTMESHSHAPE_H_ */
