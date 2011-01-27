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

#ifndef _OSGBULLETCONESHAPE_H_
#define _OSGBULLETCONESHAPE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBulletConeShapeBase.h"
#include "BulletCollision/CollisionShapes/btConeShape.h"

OSG_BEGIN_NAMESPACE

/*! \brief BulletConeShape class. See \ref
           PageContribBulletBulletConeShape for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING BulletConeShape : public BulletConeShapeBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BulletConeShapeBase Inherited;
    typedef BulletConeShape     Self;

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

    btConeShape*  getConeShape(void) const;

    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BulletConeShapeBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BulletConeShape(void);
    BulletConeShape(const BulletConeShape &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BulletConeShape(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Class Specific                             */
    /*! \{                                                                 */

    void onCreate(const BulletConeShape *Id = NULL);

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
    friend class BulletConeShapeBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BulletConeShape &source);
};

typedef BulletConeShape *BulletConeShapeP;

OSG_END_NAMESPACE

#include "OSGBulletConeShapeBase.inl"
#include "OSGBulletConeShape.inl"

#endif /* _OSGBULLETCONESHAPE_H_ */
