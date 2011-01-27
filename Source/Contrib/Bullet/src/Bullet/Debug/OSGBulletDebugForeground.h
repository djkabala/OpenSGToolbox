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

#ifndef _OSGBULLETDEBUGFOREGROUND_H_
#define _OSGBULLETDEBUGFOREGROUND_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBulletDebugForegroundBase.h"
#include "LinearMath/btIDebugDraw.h"

OSG_BEGIN_NAMESPACE

/*! \brief BulletDebugForeground class. See \ref
           PageContribBulletBulletDebugForeground for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING BulletDebugForeground : public BulletDebugForegroundBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BulletDebugForegroundBase Inherited;
    typedef BulletDebugForeground     Self;

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
    /*! \name                    draw                                      */
    /*! \{                                                                 */

    virtual void draw(DrawEnv *);

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BulletDebugForegroundBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BulletDebugForeground(void);
    BulletDebugForeground(const BulletDebugForeground &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BulletDebugForeground(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    class GLDebugDrawer : public btIDebugDraw
    {
      public:
        typedef btIDebugDraw Inherited;

        GLDebugDrawer(BulletDebugForeground* parent);

        virtual void	drawLine(const btVector3& from,
                                 const btVector3& to,
                                 const btVector3& fromColor,
                                 const btVector3& toColor);

        virtual void	drawLine(const btVector3& from,
                                 const btVector3& to,
                                 const btVector3& color);

        virtual void	drawSphere (const btVector3& p,
                                    btScalar radius,
                                    const btVector3& color);

        virtual void	drawBox (const btVector3& boxMin,
                                 const btVector3& boxMax,
                                 const btVector3& color);

        virtual void	drawBox (const btVector3& boxMin,
                                 const btVector3& boxMax,
                                 const btTransform& trans,
                                 const btVector3& color);

        virtual void	drawTriangle(const btVector3& a,
                                     const btVector3& b,
                                     const btVector3& c,
                                     const btVector3& color,
                                     btScalar alpha);

        virtual void	drawContactPoint(const btVector3& PointOnB,
                                         const btVector3& normalOnB,
                                         btScalar distance,
                                         int lifeTime,
                                         const btVector3& color);

        virtual void drawTransform(const btTransform& transform,
                                   btScalar orthoLen);

        virtual void	reportErrorWarning(const char* warningString);

        virtual void	draw3dText(const btVector3& location,const char* textString);

        virtual void	setDebugMode(int debugMode);

        virtual int		getDebugMode(void) const;

        void setDrawEnv(DrawEnv* pEnv);

      private:
        int _debugMode;
        BulletDebugForeground* _parent; 
        DrawEnv * _Env;
    };
    /*==========================  PRIVATE  ================================*/

  private:
    GLDebugDrawer _Drawer;

    friend class FieldContainer;
    friend class BulletDebugForegroundBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BulletDebugForeground &source);
};

typedef BulletDebugForeground *BulletDebugForegroundP;

OSG_END_NAMESPACE

#include "OSGBulletDebugForegroundBase.inl"
#include "OSGBulletDebugForeground.inl"

#endif /* _OSGBULLETDEBUGFOREGROUND_H_ */
