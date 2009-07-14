/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox Particle System                        *
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
 **     class DynamicsParticleGenerator
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGDYNAMICSPARTICLEGENERATORBASE_H_
#define _OSGDYNAMICSPARTICLEGENERATORBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGParticleSystemDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGParticleGenerator.h" // Parent

#include <OpenSG/Dynamics/OSGFunctionFields.h> // PositionFunction type
#include <OpenSG/Dynamics/OSGFunctionFields.h> // SecPositionFunction type
#include <OpenSG/Dynamics/OSGFunctionFields.h> // NormalFunction type
#include <OpenSG/Dynamics/OSGFunctionFields.h> // ColorFunction type
#include <OpenSG/Dynamics/OSGFunctionFields.h> // TransparencyFunction type
#include <OpenSG/Dynamics/OSGFunctionFields.h> // SizeFunction type
#include <OpenSG/Dynamics/OSGFunctionFields.h> // LifespanFunction type
#include <OpenSG/Dynamics/OSGFunctionFields.h> // AgeFunction type
#include <OpenSG/Dynamics/OSGFunctionFields.h> // VelocityFunction type
#include <OpenSG/Dynamics/OSGFunctionFields.h> // SecVelocityFunction type
#include <OpenSG/Dynamics/OSGFunctionFields.h> // AccelerationFunction type
#include <OpenSG/Dynamics/OSGFunctionFields.h> // PropertyFunction type

#include "OSGDynamicsParticleGeneratorFields.h"

OSG_BEGIN_NAMESPACE

class DynamicsParticleGenerator;
class BinaryDataHandler;

//! \brief DynamicsParticleGenerator Base Class.

class OSG_PARTICLESYSTEMLIB_DLLMAPPING DynamicsParticleGeneratorBase : public ParticleGenerator
{
  private:

    typedef ParticleGenerator    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef DynamicsParticleGeneratorPtr  Ptr;

    enum
    {
        PositionFunctionFieldId     = Inherited::NextFieldId,
        SecPositionFunctionFieldId  = PositionFunctionFieldId     + 1,
        NormalFunctionFieldId       = SecPositionFunctionFieldId  + 1,
        ColorFunctionFieldId        = NormalFunctionFieldId       + 1,
        TransparencyFunctionFieldId = ColorFunctionFieldId        + 1,
        SizeFunctionFieldId         = TransparencyFunctionFieldId + 1,
        LifespanFunctionFieldId     = SizeFunctionFieldId         + 1,
        AgeFunctionFieldId          = LifespanFunctionFieldId     + 1,
        VelocityFunctionFieldId     = AgeFunctionFieldId          + 1,
        SecVelocityFunctionFieldId  = VelocityFunctionFieldId     + 1,
        AccelerationFunctionFieldId = SecVelocityFunctionFieldId  + 1,
        PropertyFunctionFieldId     = AccelerationFunctionFieldId + 1,
        NextFieldId                 = PropertyFunctionFieldId     + 1
    };

    static const OSG::BitVector PositionFunctionFieldMask;
    static const OSG::BitVector SecPositionFunctionFieldMask;
    static const OSG::BitVector NormalFunctionFieldMask;
    static const OSG::BitVector ColorFunctionFieldMask;
    static const OSG::BitVector TransparencyFunctionFieldMask;
    static const OSG::BitVector SizeFunctionFieldMask;
    static const OSG::BitVector LifespanFunctionFieldMask;
    static const OSG::BitVector AgeFunctionFieldMask;
    static const OSG::BitVector VelocityFunctionFieldMask;
    static const OSG::BitVector SecVelocityFunctionFieldMask;
    static const OSG::BitVector AccelerationFunctionFieldMask;
    static const OSG::BitVector PropertyFunctionFieldMask;


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

           SFFunctionPtr       *getSFPositionFunction(void);
           SFFunctionPtr       *getSFSecPositionFunction(void);
           SFFunctionPtr       *getSFNormalFunction (void);
           SFFunctionPtr       *getSFColorFunction  (void);
           SFFunctionPtr       *getSFTransparencyFunction(void);
           SFFunctionPtr       *getSFSizeFunction   (void);
           SFFunctionPtr       *getSFLifespanFunction(void);
           SFFunctionPtr       *getSFAgeFunction    (void);
           SFFunctionPtr       *getSFVelocityFunction(void);
           SFFunctionPtr       *getSFSecVelocityFunction(void);
           SFFunctionPtr       *getSFAccelerationFunction(void);
           SFFunctionPtr       *getSFPropertyFunction(void);

           FunctionPtr         &getPositionFunction(void);
     const FunctionPtr         &getPositionFunction(void) const;
           FunctionPtr         &getSecPositionFunction(void);
     const FunctionPtr         &getSecPositionFunction(void) const;
           FunctionPtr         &getNormalFunction (void);
     const FunctionPtr         &getNormalFunction (void) const;
           FunctionPtr         &getColorFunction  (void);
     const FunctionPtr         &getColorFunction  (void) const;
           FunctionPtr         &getTransparencyFunction(void);
     const FunctionPtr         &getTransparencyFunction(void) const;
           FunctionPtr         &getSizeFunction   (void);
     const FunctionPtr         &getSizeFunction   (void) const;
           FunctionPtr         &getLifespanFunction(void);
     const FunctionPtr         &getLifespanFunction(void) const;
           FunctionPtr         &getAgeFunction    (void);
     const FunctionPtr         &getAgeFunction    (void) const;
           FunctionPtr         &getVelocityFunction(void);
     const FunctionPtr         &getVelocityFunction(void) const;
           FunctionPtr         &getSecVelocityFunction(void);
     const FunctionPtr         &getSecVelocityFunction(void) const;
           FunctionPtr         &getAccelerationFunction(void);
     const FunctionPtr         &getAccelerationFunction(void) const;
           FunctionPtr         &getPropertyFunction(void);
     const FunctionPtr         &getPropertyFunction(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setPositionFunction( const FunctionPtr &value );
     void setSecPositionFunction( const FunctionPtr &value );
     void setNormalFunction ( const FunctionPtr &value );
     void setColorFunction  ( const FunctionPtr &value );
     void setTransparencyFunction( const FunctionPtr &value );
     void setSizeFunction   ( const FunctionPtr &value );
     void setLifespanFunction( const FunctionPtr &value );
     void setAgeFunction    ( const FunctionPtr &value );
     void setVelocityFunction( const FunctionPtr &value );
     void setSecVelocityFunction( const FunctionPtr &value );
     void setAccelerationFunction( const FunctionPtr &value );
     void setPropertyFunction( const FunctionPtr &value );

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
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFFunctionPtr       _sfPositionFunction;
    SFFunctionPtr       _sfSecPositionFunction;
    SFFunctionPtr       _sfNormalFunction;
    SFFunctionPtr       _sfColorFunction;
    SFFunctionPtr       _sfTransparencyFunction;
    SFFunctionPtr       _sfSizeFunction;
    SFFunctionPtr       _sfLifespanFunction;
    SFFunctionPtr       _sfAgeFunction;
    SFFunctionPtr       _sfVelocityFunction;
    SFFunctionPtr       _sfSecVelocityFunction;
    SFFunctionPtr       _sfAccelerationFunction;
    SFFunctionPtr       _sfPropertyFunction;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    DynamicsParticleGeneratorBase(void);
    DynamicsParticleGeneratorBase(const DynamicsParticleGeneratorBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~DynamicsParticleGeneratorBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      DynamicsParticleGeneratorBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      DynamicsParticleGeneratorBase *pOther,
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
    void operator =(const DynamicsParticleGeneratorBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef DynamicsParticleGeneratorBase *DynamicsParticleGeneratorBaseP;

typedef osgIF<DynamicsParticleGeneratorBase::isNodeCore,
              CoredNodePtr<DynamicsParticleGenerator>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet DynamicsParticleGeneratorNodePtr;

typedef RefPtr<DynamicsParticleGeneratorPtr> DynamicsParticleGeneratorRefPtr;

OSG_END_NAMESPACE

#define OSGDYNAMICSPARTICLEGENERATORBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGDYNAMICSPARTICLEGENERATORBASE_H_ */
