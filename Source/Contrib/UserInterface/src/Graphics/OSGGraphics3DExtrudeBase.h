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
 **     class Graphics3DExtrude
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGGRAPHICS3DEXTRUDEBASE_H_
#define _OSGGRAPHICS3DEXTRUDEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGGraphics.h" // Parent

#include "OSGDepthChunkFields.h"        // UIDepth type
#include "OSGSysFields.h"               // ExtrudeLength type
#include "OSGMaterialFields.h"          // Material type

#include "OSGGraphics3DExtrudeFields.h"

OSG_BEGIN_NAMESPACE

class Graphics3DExtrude;

//! \brief Graphics3DExtrude Base Class.

class OSG_CONTRIBUSERINTERFACE_DLLMAPPING Graphics3DExtrudeBase : public Graphics
{
  public:

    typedef Graphics Inherited;
    typedef Graphics ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(Graphics3DExtrude);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        UIDepthFieldId = Inherited::NextFieldId,
        ExtrudeLengthFieldId = UIDepthFieldId + 1,
        InternalClipPlaneOffsetFieldId = ExtrudeLengthFieldId + 1,
        TextOffsetFieldId = InternalClipPlaneOffsetFieldId + 1,
        Enable3DTextFieldId = TextOffsetFieldId + 1,
        EnableLightingFieldId = Enable3DTextFieldId + 1,
        MaterialFieldId = EnableLightingFieldId + 1,
        NextFieldId = MaterialFieldId + 1
    };

    static const OSG::BitVector UIDepthFieldMask =
        (TypeTraits<BitVector>::One << UIDepthFieldId);
    static const OSG::BitVector ExtrudeLengthFieldMask =
        (TypeTraits<BitVector>::One << ExtrudeLengthFieldId);
    static const OSG::BitVector InternalClipPlaneOffsetFieldMask =
        (TypeTraits<BitVector>::One << InternalClipPlaneOffsetFieldId);
    static const OSG::BitVector TextOffsetFieldMask =
        (TypeTraits<BitVector>::One << TextOffsetFieldId);
    static const OSG::BitVector Enable3DTextFieldMask =
        (TypeTraits<BitVector>::One << Enable3DTextFieldId);
    static const OSG::BitVector EnableLightingFieldMask =
        (TypeTraits<BitVector>::One << EnableLightingFieldId);
    static const OSG::BitVector MaterialFieldMask =
        (TypeTraits<BitVector>::One << MaterialFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecDepthChunkPtr SFUIDepthType;
    typedef SFReal32          SFExtrudeLengthType;
    typedef SFReal32          SFInternalClipPlaneOffsetType;
    typedef SFReal32          SFTextOffsetType;
    typedef SFBool            SFEnable3DTextType;
    typedef SFBool            SFEnableLightingType;
    typedef SFUnrecMaterialPtr SFMaterialType;

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


                  SFReal32            *editSFExtrudeLength  (void);
            const SFReal32            *getSFExtrudeLength   (void) const;

                  SFReal32            *editSFInternalClipPlaneOffset(void);
            const SFReal32            *getSFInternalClipPlaneOffset (void) const;

                  SFReal32            *editSFTextOffset     (void);
            const SFReal32            *getSFTextOffset      (void) const;

                  SFBool              *editSFEnable3DText   (void);
            const SFBool              *getSFEnable3DText    (void) const;

                  SFBool              *editSFEnableLighting (void);
            const SFBool              *getSFEnableLighting  (void) const;
            const SFUnrecMaterialPtr  *getSFMaterial       (void) const;
                  SFUnrecMaterialPtr  *editSFMaterial       (void);


                  Real32              &editExtrudeLength  (void);
                  Real32               getExtrudeLength   (void) const;

                  Real32              &editInternalClipPlaneOffset(void);
                  Real32               getInternalClipPlaneOffset (void) const;

                  Real32              &editTextOffset     (void);
                  Real32               getTextOffset      (void) const;

                  bool                &editEnable3DText   (void);
                  bool                 getEnable3DText    (void) const;

                  bool                &editEnableLighting (void);
                  bool                 getEnableLighting  (void) const;

                  Material * getMaterial       (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setExtrudeLength  (const Real32 value);
            void setInternalClipPlaneOffset(const Real32 value);
            void setTextOffset     (const Real32 value);
            void setEnable3DText   (const bool value);
            void setEnableLighting (const bool value);
            void setMaterial       (Material * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

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

    static  Graphics3DExtrudeTransitPtr  create          (void);
    static  Graphics3DExtrude           *createEmpty     (void);

    static  Graphics3DExtrudeTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  Graphics3DExtrude            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  Graphics3DExtrudeTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecDepthChunkPtr _sfUIDepth;
    SFReal32          _sfExtrudeLength;
    SFReal32          _sfInternalClipPlaneOffset;
    SFReal32          _sfTextOffset;
    SFBool            _sfEnable3DText;
    SFBool            _sfEnableLighting;
    SFUnrecMaterialPtr _sfMaterial;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    Graphics3DExtrudeBase(void);
    Graphics3DExtrudeBase(const Graphics3DExtrudeBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~Graphics3DExtrudeBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const Graphics3DExtrude *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleUIDepth         (void) const;
    EditFieldHandlePtr editHandleUIDepth        (void);
    GetFieldHandlePtr  getHandleExtrudeLength   (void) const;
    EditFieldHandlePtr editHandleExtrudeLength  (void);
    GetFieldHandlePtr  getHandleInternalClipPlaneOffset (void) const;
    EditFieldHandlePtr editHandleInternalClipPlaneOffset(void);
    GetFieldHandlePtr  getHandleTextOffset      (void) const;
    EditFieldHandlePtr editHandleTextOffset     (void);
    GetFieldHandlePtr  getHandleEnable3DText    (void) const;
    EditFieldHandlePtr editHandleEnable3DText   (void);
    GetFieldHandlePtr  getHandleEnableLighting  (void) const;
    EditFieldHandlePtr editHandleEnableLighting (void);
    GetFieldHandlePtr  getHandleMaterial        (void) const;
    EditFieldHandlePtr editHandleMaterial       (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const SFUnrecDepthChunkPtr *getSFUIDepth         (void) const;
                  SFUnrecDepthChunkPtr *editSFUIDepth        (void);


                  DepthChunk * getUIDepth        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setUIDepth        (DepthChunk * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

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

            void execSync (      Graphics3DExtrudeBase *pFrom,
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
    void operator =(const Graphics3DExtrudeBase &source);
};

typedef Graphics3DExtrudeBase *Graphics3DExtrudeBaseP;

OSG_END_NAMESPACE

#endif /* _OSGGRAPHICS3DEXTRUDEBASE_H_ */