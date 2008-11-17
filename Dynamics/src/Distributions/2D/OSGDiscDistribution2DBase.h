/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Dynamics                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class DiscDistribution2D
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDISCDISTRIBUTION2DBASE_H_
#define _OSGDISCDISTRIBUTION2DBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGDynamicsDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "Function/OSGFunction.h" // Parent

#include <OpenSG/OSGPnt2fFields.h> // Center type
#include <OpenSG/OSGReal32Fields.h> // MinRadius type
#include <OpenSG/OSGReal32Fields.h> // MaxRadius type
#include <OpenSG/OSGReal32Fields.h> // MinTheta type
#include <OpenSG/OSGReal32Fields.h> // MaxTheta type
#include <OpenSG/OSGUInt32Fields.h> // SurfaceOrEdge type

#include "OSGDiscDistribution2DFields.h"

OSG_BEGIN_NAMESPACE

class DiscDistribution2D;
class BinaryDataHandler;

//! \brief DiscDistribution2D Base Class.

class OSG_DYNAMICSLIB_DLLMAPPING DiscDistribution2DBase : public Function
{
  private:

    typedef Function    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef DiscDistribution2DPtr  Ptr;

    enum
    {
        CenterFieldId        = Inherited::NextFieldId,
        MinRadiusFieldId     = CenterFieldId        + 1,
        MaxRadiusFieldId     = MinRadiusFieldId     + 1,
        MinThetaFieldId      = MaxRadiusFieldId     + 1,
        MaxThetaFieldId      = MinThetaFieldId      + 1,
        SurfaceOrEdgeFieldId = MaxThetaFieldId      + 1,
        NextFieldId          = SurfaceOrEdgeFieldId + 1
    };

    static const OSG::BitVector CenterFieldMask;
    static const OSG::BitVector MinRadiusFieldMask;
    static const OSG::BitVector MaxRadiusFieldMask;
    static const OSG::BitVector MinThetaFieldMask;
    static const OSG::BitVector MaxThetaFieldMask;
    static const OSG::BitVector SurfaceOrEdgeFieldMask;


    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           SFPnt2f             *getSFCenter         (void);
           SFReal32            *getSFMinRadius      (void);
           SFReal32            *getSFMaxRadius      (void);
           SFReal32            *getSFMinTheta       (void);
           SFReal32            *getSFMaxTheta       (void);
           SFUInt32            *getSFSurfaceOrEdge  (void);

           Pnt2f               &getCenter         (void);
     const Pnt2f               &getCenter         (void) const;
           Real32              &getMinRadius      (void);
     const Real32              &getMinRadius      (void) const;
           Real32              &getMaxRadius      (void);
     const Real32              &getMaxRadius      (void) const;
           Real32              &getMinTheta       (void);
     const Real32              &getMinTheta       (void) const;
           Real32              &getMaxTheta       (void);
     const Real32              &getMaxTheta       (void) const;
           UInt32              &getSurfaceOrEdge  (void);
     const UInt32              &getSurfaceOrEdge  (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setCenter         ( const Pnt2f &value );
     void setMinRadius      ( const Real32 &value );
     void setMaxRadius      ( const Real32 &value );
     void setMinTheta       ( const Real32 &value );
     void setMaxTheta       ( const Real32 &value );
     void setSurfaceOrEdge  ( const UInt32 &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  DiscDistribution2DPtr      create          (void); 
    static  DiscDistribution2DPtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFPnt2f             _sfCenter;
    SFReal32            _sfMinRadius;
    SFReal32            _sfMaxRadius;
    SFReal32            _sfMinTheta;
    SFReal32            _sfMaxTheta;
    SFUInt32            _sfSurfaceOrEdge;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DiscDistribution2DBase(void);
    DiscDistribution2DBase(const DiscDistribution2DBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DiscDistribution2DBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      DiscDistribution2DBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      DiscDistribution2DBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const DiscDistribution2DBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef DiscDistribution2DBase *DiscDistribution2DBaseP;

typedef osgIF<DiscDistribution2DBase::isNodeCore,
              CoredNodePtr<DiscDistribution2D>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet DiscDistribution2DNodePtr;

typedef RefPtr<DiscDistribution2DPtr> DiscDistribution2DRefPtr;

OSG_END_NAMESPACE

#define OSGDISCDISTRIBUTION2DBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGDISCDISTRIBUTION2DBASE_H_ */
