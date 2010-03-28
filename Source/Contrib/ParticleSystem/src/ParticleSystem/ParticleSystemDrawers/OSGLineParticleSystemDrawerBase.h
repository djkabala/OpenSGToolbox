/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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
 **     class LineParticleSystemDrawer
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGLINEPARTICLESYSTEMDRAWERBASE_H_
#define _OSGLINEPARTICLESYSTEMDRAWERBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribParticleSystemDef.h"

//#include "OSGBaseTypes.h"

#include "OSGParticleSystemDrawer.h" // Parent

#include "OSGSysFields.h"               // LineWidthScaling type
#include "OSGVecFields.h"               // LineDirection type

#include "OSGLineParticleSystemDrawerFields.h"

OSG_BEGIN_NAMESPACE

class LineParticleSystemDrawer;

//! \brief LineParticleSystemDrawer Base Class.

class OSG_CONTRIBPARTICLESYSTEM_DLLMAPPING LineParticleSystemDrawerBase : public ParticleSystemDrawer
{
  public:

    typedef ParticleSystemDrawer Inherited;
    typedef ParticleSystemDrawer ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(LineParticleSystemDrawer);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        LineWidthScalingFieldId = Inherited::NextFieldId,
        LineLengthScalingFieldId = LineWidthScalingFieldId + 1,
        LineDirectionSourceFieldId = LineLengthScalingFieldId + 1,
        LineDirectionFieldId = LineDirectionSourceFieldId + 1,
        LineLengthSourceFieldId = LineDirectionFieldId + 1,
        LineLengthFieldId = LineLengthSourceFieldId + 1,
        EndPointFadingFieldId = LineLengthFieldId + 1,
        NextFieldId = EndPointFadingFieldId + 1
    };

    static const OSG::BitVector LineWidthScalingFieldMask =
        (TypeTraits<BitVector>::One << LineWidthScalingFieldId);
    static const OSG::BitVector LineLengthScalingFieldMask =
        (TypeTraits<BitVector>::One << LineLengthScalingFieldId);
    static const OSG::BitVector LineDirectionSourceFieldMask =
        (TypeTraits<BitVector>::One << LineDirectionSourceFieldId);
    static const OSG::BitVector LineDirectionFieldMask =
        (TypeTraits<BitVector>::One << LineDirectionFieldId);
    static const OSG::BitVector LineLengthSourceFieldMask =
        (TypeTraits<BitVector>::One << LineLengthSourceFieldId);
    static const OSG::BitVector LineLengthFieldMask =
        (TypeTraits<BitVector>::One << LineLengthFieldId);
    static const OSG::BitVector EndPointFadingFieldMask =
        (TypeTraits<BitVector>::One << EndPointFadingFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFReal32          SFLineWidthScalingType;
    typedef SFReal32          SFLineLengthScalingType;
    typedef SFUInt32          SFLineDirectionSourceType;
    typedef SFVec3f           SFLineDirectionType;
    typedef SFUInt32          SFLineLengthSourceType;
    typedef SFReal32          SFLineLengthType;
    typedef SFVec2f           SFEndPointFadingType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFReal32            *editSFLineWidthScaling(void);
            const SFReal32            *getSFLineWidthScaling (void) const;

                  SFReal32            *editSFLineLengthScaling(void);
            const SFReal32            *getSFLineLengthScaling (void) const;

                  SFUInt32            *editSFLineDirectionSource(void);
            const SFUInt32            *getSFLineDirectionSource (void) const;

                  SFVec3f             *editSFLineDirection  (void);
            const SFVec3f             *getSFLineDirection   (void) const;

                  SFUInt32            *editSFLineLengthSource(void);
            const SFUInt32            *getSFLineLengthSource (void) const;

                  SFReal32            *editSFLineLength     (void);
            const SFReal32            *getSFLineLength      (void) const;

                  SFVec2f             *editSFEndPointFading (void);
            const SFVec2f             *getSFEndPointFading  (void) const;


                  Real32              &editLineWidthScaling(void);
                  Real32               getLineWidthScaling (void) const;

                  Real32              &editLineLengthScaling(void);
                  Real32               getLineLengthScaling (void) const;

                  UInt32              &editLineDirectionSource(void);
                  UInt32               getLineDirectionSource (void) const;

                  Vec3f               &editLineDirection  (void);
            const Vec3f               &getLineDirection   (void) const;

                  UInt32              &editLineLengthSource(void);
                  UInt32               getLineLengthSource (void) const;

                  Real32              &editLineLength     (void);
                  Real32               getLineLength      (void) const;

                  Vec2f               &editEndPointFading (void);
            const Vec2f               &getEndPointFading  (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setLineWidthScaling(const Real32 value);
            void setLineLengthScaling(const Real32 value);
            void setLineDirectionSource(const UInt32 value);
            void setLineDirection  (const Vec3f &value);
            void setLineLengthSource(const UInt32 value);
            void setLineLength     (const Real32 value);
            void setEndPointFading (const Vec2f &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  LineParticleSystemDrawerTransitPtr  create          (void);
    static  LineParticleSystemDrawer           *createEmpty     (void);

    static  LineParticleSystemDrawerTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  LineParticleSystemDrawer            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  LineParticleSystemDrawerTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFReal32          _sfLineWidthScaling;
    SFReal32          _sfLineLengthScaling;
    SFUInt32          _sfLineDirectionSource;
    SFVec3f           _sfLineDirection;
    SFUInt32          _sfLineLengthSource;
    SFReal32          _sfLineLength;
    SFVec2f           _sfEndPointFading;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    LineParticleSystemDrawerBase(void);
    LineParticleSystemDrawerBase(const LineParticleSystemDrawerBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~LineParticleSystemDrawerBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleLineWidthScaling (void) const;
    EditFieldHandlePtr editHandleLineWidthScaling(void);
    GetFieldHandlePtr  getHandleLineLengthScaling (void) const;
    EditFieldHandlePtr editHandleLineLengthScaling(void);
    GetFieldHandlePtr  getHandleLineDirectionSource (void) const;
    EditFieldHandlePtr editHandleLineDirectionSource(void);
    GetFieldHandlePtr  getHandleLineDirection   (void) const;
    EditFieldHandlePtr editHandleLineDirection  (void);
    GetFieldHandlePtr  getHandleLineLengthSource (void) const;
    EditFieldHandlePtr editHandleLineLengthSource(void);
    GetFieldHandlePtr  getHandleLineLength      (void) const;
    EditFieldHandlePtr editHandleLineLength     (void);
    GetFieldHandlePtr  getHandleEndPointFading  (void) const;
    EditFieldHandlePtr editHandleEndPointFading (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      LineParticleSystemDrawerBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const LineParticleSystemDrawerBase &source);
};

typedef LineParticleSystemDrawerBase *LineParticleSystemDrawerBaseP;

OSG_END_NAMESPACE

#endif /* _OSGLINEPARTICLESYSTEMDRAWERBASE_H_ */
