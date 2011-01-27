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

#ifndef _OSGBULLETGPU3DGRIDBROADPHASE_H_
#define _OSGBULLETGPU3DGRIDBROADPHASE_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBulletGpu3DGridBroadphaseBase.h"

#include "BulletMultiThreaded/btGpu3DGridBroadphase.h"
#include "boost/scoped_ptr.hpp"

OSG_BEGIN_NAMESPACE

/*! \brief BulletGpu3DGridBroadphase class. See \ref
           PageContribBulletBulletGpu3DGridBroadphase for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING BulletGpu3DGridBroadphase : public BulletGpu3DGridBroadphaseBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BulletGpu3DGridBroadphaseBase Inherited;
    typedef BulletGpu3DGridBroadphase     Self;

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
    /*---------------------------------------------------------------------*/
    /*! \name                 Internal Bullet                              */
    /*! \{                                                                 */

    virtual btBroadphaseInterface* getBroadphase(void) const;

    btGpu3DGridBroadphase* getGpu3DGridBroadphase(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BulletGpu3DGridBroadphaseBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BulletGpu3DGridBroadphase(void);
    BulletGpu3DGridBroadphase(const BulletGpu3DGridBroadphase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BulletGpu3DGridBroadphase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Class Specific                             */
    /*! \{                                                                 */

    void onCreate(const BulletGpu3DGridBroadphase *Id = NULL);

    void onDestroy(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    boost::scoped_ptr<btGpu3DGridBroadphase> _broadphase;

    friend class FieldContainer;
    friend class BulletGpu3DGridBroadphaseBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BulletGpu3DGridBroadphase &source);
};

typedef BulletGpu3DGridBroadphase *BulletGpu3DGridBroadphaseP;

OSG_END_NAMESPACE

#include "OSGBulletGpu3DGridBroadphaseBase.inl"
#include "OSGBulletGpu3DGridBroadphase.inl"

#endif /* _OSGBULLETGPU3DGRIDBROADPHASE_H_ */
