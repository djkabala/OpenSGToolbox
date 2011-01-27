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

#ifndef _OSGBULLETHANDLER_H_
#define _OSGBULLETHANDLER_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBulletHandlerBase.h"
#include "OSGEventDetailsFields.h"

OSG_BEGIN_NAMESPACE

/*! \brief BulletHandler class. See \ref
           PageContribBulletBulletHandler for a description.
*/

class OSG_CONTRIBBULLET_DLLMAPPING BulletHandler : public BulletHandlerBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BulletHandlerBase Inherited;
    typedef BulletHandler     Self;

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
    void attachUpdateProducer(ReflexiveContainer* const producer);
    void detachUpdateProducer(void);
    bool isUpdateProducerAttached(void) const;
    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in BulletHandlerBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BulletHandler(void);
    BulletHandler(const BulletHandler &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BulletHandler(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    void handleUpdate(EventDetails* const details);
    boost::signals2::connection _UpdateEventConnection;

    void produceSimulationUpdated(UInt32 NumSteps);

    static bool init(void);
    static bool uninit(void);
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class BulletHandlerBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BulletHandler &source);
};

typedef BulletHandler *BulletHandlerP;

OSG_END_NAMESPACE

#include "OSGBulletHandlerBase.inl"
#include "OSGBulletHandler.inl"

#endif /* _OSGBULLETHANDLER_H_ */
