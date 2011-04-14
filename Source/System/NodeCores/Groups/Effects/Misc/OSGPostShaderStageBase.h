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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class PostShaderStage
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGPOSTSHADERSTAGEBASE_H_
#define _OSGPOSTSHADERSTAGEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGEffectGroupsDef.h"

//#include "OSGBaseTypes.h"

#include "OSGStage.h" // Parent

#include "OSGBaseFields.h"              // ColorBufferFormat type
#include "OSGSysFields.h"               // UseColorTextureBuffer type

#include "OSGPostShaderStageFields.h"

OSG_BEGIN_NAMESPACE

class PostShaderStage;

//! \brief PostShaderStage Base Class.

class OSG_EFFECTGROUPS_DLLMAPPING PostShaderStageBase : public Stage
{
  public:

    typedef Stage Inherited;
    typedef Stage ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(PostShaderStage);
    
    

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ColorBufferFormatFieldId = Inherited::NextFieldId,
        UseColorTextureBufferFieldId = ColorBufferFormatFieldId + 1,
        UseDepthTextureBufferFieldId = UseColorTextureBufferFieldId + 1,
        VertexShaderFieldId = UseDepthTextureBufferFieldId + 1,
        FragmentShaderFieldId = VertexShaderFieldId + 1,
        NextFieldId = FragmentShaderFieldId + 1
    };

    static const OSG::BitVector ColorBufferFormatFieldMask =
        (TypeTraits<BitVector>::One << ColorBufferFormatFieldId);
    static const OSG::BitVector UseColorTextureBufferFieldMask =
        (TypeTraits<BitVector>::One << UseColorTextureBufferFieldId);
    static const OSG::BitVector UseDepthTextureBufferFieldMask =
        (TypeTraits<BitVector>::One << UseDepthTextureBufferFieldId);
    static const OSG::BitVector VertexShaderFieldMask =
        (TypeTraits<BitVector>::One << VertexShaderFieldId);
    static const OSG::BitVector FragmentShaderFieldMask =
        (TypeTraits<BitVector>::One << FragmentShaderFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFGLenum          SFColorBufferFormatType;
    typedef SFBool            SFUseColorTextureBufferType;
    typedef SFBool            SFUseDepthTextureBufferType;
    typedef SFString          SFVertexShaderType;
    typedef SFString          SFFragmentShaderType;

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


                  SFGLenum            *editSFColorBufferFormat(void);
            const SFGLenum            *getSFColorBufferFormat (void) const;

                  SFBool              *editSFUseColorTextureBuffer(void);
            const SFBool              *getSFUseColorTextureBuffer (void) const;

                  SFBool              *editSFUseDepthTextureBuffer(void);
            const SFBool              *getSFUseDepthTextureBuffer (void) const;

                  SFString            *editSFVertexShader   (void);
            const SFString            *getSFVertexShader    (void) const;

                  SFString            *editSFFragmentShader (void);
            const SFString            *getSFFragmentShader  (void) const;


                  GLenum              &editColorBufferFormat(void);
            const GLenum              &getColorBufferFormat (void) const;

                  bool                &editUseColorTextureBuffer(void);
                  bool                 getUseColorTextureBuffer (void) const;

                  bool                &editUseDepthTextureBuffer(void);
                  bool                 getUseDepthTextureBuffer (void) const;

                  std::string         &editVertexShader   (void);
            const std::string         &getVertexShader    (void) const;

                  std::string         &editFragmentShader (void);
            const std::string         &getFragmentShader  (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setColorBufferFormat(const GLenum &value);
            void setUseColorTextureBuffer(const bool value);
            void setUseDepthTextureBuffer(const bool value);
            void setVertexShader   (const std::string &value);
            void setFragmentShader (const std::string &value);

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

    static  PostShaderStageTransitPtr  create          (void);
    static  PostShaderStage           *createEmpty     (void);

    static  PostShaderStageTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  PostShaderStage            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  PostShaderStageTransitPtr  createDependent  (BitVector bFlags);

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

    SFGLenum          _sfColorBufferFormat;
    SFBool            _sfUseColorTextureBuffer;
    SFBool            _sfUseDepthTextureBuffer;
    SFString          _sfVertexShader;
    SFString          _sfFragmentShader;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    PostShaderStageBase(void);
    PostShaderStageBase(const PostShaderStageBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~PostShaderStageBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleColorBufferFormat (void) const;
    EditFieldHandlePtr editHandleColorBufferFormat(void);
    GetFieldHandlePtr  getHandleUseColorTextureBuffer (void) const;
    EditFieldHandlePtr editHandleUseColorTextureBuffer(void);
    GetFieldHandlePtr  getHandleUseDepthTextureBuffer (void) const;
    EditFieldHandlePtr editHandleUseDepthTextureBuffer(void);
    GetFieldHandlePtr  getHandleVertexShader    (void) const;
    EditFieldHandlePtr editHandleVertexShader   (void);
    GetFieldHandlePtr  getHandleFragmentShader  (void) const;
    EditFieldHandlePtr editHandleFragmentShader (void);

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

            void execSync (      PostShaderStageBase *pFrom,
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
    void operator =(const PostShaderStageBase &source);
};

typedef PostShaderStageBase *PostShaderStageBaseP;

typedef CoredNodeRefPtr  <PostShaderStage> PostShaderStageNodeRefPtr;
typedef CoredNodeMTRefPtr<PostShaderStage> PostShaderStageNodeMTRefPtr;

OSG_END_NAMESPACE

#endif /* _OSGPOSTSHADERSTAGEBASE_H_ */
