/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2002 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
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
 **     class SphereDistribution3D
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSPHEREDISTRIBUTION3DBASE_H_
#define _OSGSPHEREDISTRIBUTION3DBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGDynamicsConfig.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGDistribution3D.h" // Parent

#include <OpenSG/OSGPnt3fFields.h> // Center type
#include <OpenSG/OSGReal32Fields.h> // InnerRadius type
#include <OpenSG/OSGReal32Fields.h> // OuterRadius type
#include <OpenSG/OSGReal32Fields.h> // MinTheta type
#include <OpenSG/OSGReal32Fields.h> // MaxTheta type
#include <OpenSG/OSGReal32Fields.h> // MinZ type
#include <OpenSG/OSGReal32Fields.h> // MaxZ type

#include "OSGSphereDistribution3DFields.h"

OSG_BEGIN_NAMESPACE

class SphereDistribution3D;
class BinaryDataHandler;

//! \brief SphereDistribution3D Base Class.

class OSG_DYNAMICS_CLASS_API SphereDistribution3DBase : public Distribution3D
{
  private:

    typedef Distribution3D    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef SphereDistribution3DPtr  Ptr;

    enum
    {
        CenterFieldId      = Inherited::NextFieldId,
        InnerRadiusFieldId = CenterFieldId      + 1,
        OuterRadiusFieldId = InnerRadiusFieldId + 1,
        MinThetaFieldId    = OuterRadiusFieldId + 1,
        MaxThetaFieldId    = MinThetaFieldId    + 1,
        MinZFieldId        = MaxThetaFieldId    + 1,
        MaxZFieldId        = MinZFieldId        + 1,
        NextFieldId        = MaxZFieldId        + 1
    };

    static const OSG::BitVector CenterFieldMask;
    static const OSG::BitVector InnerRadiusFieldMask;
    static const OSG::BitVector OuterRadiusFieldMask;
    static const OSG::BitVector MinThetaFieldMask;
    static const OSG::BitVector MaxThetaFieldMask;
    static const OSG::BitVector MinZFieldMask;
    static const OSG::BitVector MaxZFieldMask;


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

           SFPnt3f             *getSFCenter         (void);
           SFReal32            *getSFInnerRadius    (void);
           SFReal32            *getSFOuterRadius    (void);
           SFReal32            *getSFMinTheta       (void);
           SFReal32            *getSFMaxTheta       (void);
           SFReal32            *getSFMinZ           (void);
           SFReal32            *getSFMaxZ           (void);

           Pnt3f               &getCenter         (void);
     const Pnt3f               &getCenter         (void) const;
           Real32              &getInnerRadius    (void);
     const Real32              &getInnerRadius    (void) const;
           Real32              &getOuterRadius    (void);
     const Real32              &getOuterRadius    (void) const;
           Real32              &getMinTheta       (void);
     const Real32              &getMinTheta       (void) const;
           Real32              &getMaxTheta       (void);
     const Real32              &getMaxTheta       (void) const;
           Real32              &getMinZ           (void);
     const Real32              &getMinZ           (void) const;
           Real32              &getMaxZ           (void);
     const Real32              &getMaxZ           (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setCenter         ( const Pnt3f &value );
     void setInnerRadius    ( const Real32 &value );
     void setOuterRadius    ( const Real32 &value );
     void setMinTheta       ( const Real32 &value );
     void setMaxTheta       ( const Real32 &value );
     void setMinZ           ( const Real32 &value );
     void setMaxZ           ( const Real32 &value );

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

    static  SphereDistribution3DPtr      create          (void); 
    static  SphereDistribution3DPtr      createEmpty     (void); 

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

    SFPnt3f             _sfCenter;
    SFReal32            _sfInnerRadius;
    SFReal32            _sfOuterRadius;
    SFReal32            _sfMinTheta;
    SFReal32            _sfMaxTheta;
    SFReal32            _sfMinZ;
    SFReal32            _sfMaxZ;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SphereDistribution3DBase(void);
    SphereDistribution3DBase(const SphereDistribution3DBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SphereDistribution3DBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      SphereDistribution3DBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      SphereDistribution3DBase *pOther,
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
    void operator =(const SphereDistribution3DBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef SphereDistribution3DBase *SphereDistribution3DBaseP;

typedef osgIF<SphereDistribution3DBase::isNodeCore,
              CoredNodePtr<SphereDistribution3D>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet SphereDistribution3DNodePtr;

typedef RefPtr<SphereDistribution3DPtr> SphereDistribution3DRefPtr;

OSG_END_NAMESPACE

#define OSGSPHEREDISTRIBUTION3DBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGSPHEREDISTRIBUTION3DBASE_H_ */
