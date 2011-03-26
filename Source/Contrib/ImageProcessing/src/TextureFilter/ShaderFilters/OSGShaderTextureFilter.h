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

#ifndef _OSGSHADERTEXTUREFILTER_H_
#define _OSGSHADERTEXTUREFILTER_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGShaderTextureFilterBase.h"

#include "OSGChunkMaterialFields.h"
#include "OSGMathMFields.h"
#include "OSGMathSFields.h"

OSG_BEGIN_NAMESPACE

/*! \brief ShaderTextureFilter class. See \ref
           PageImageProcessingShaderTextureFilter for a description.
*/

class OSG_CONTRIBIMAGEPROCESSING_DLLMAPPING ShaderTextureFilter : public ShaderTextureFilterBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef ShaderTextureFilterBase Inherited;
    typedef ShaderTextureFilter     Self;

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
    /*! \name                     Shader                                   */
    /*! \{                                                                 */
    virtual TextureObjChunk* pullTexture(UInt8 OutputSlot = 0) const;

    virtual void setFragmentSource(const std::string& code);

    virtual void setVertexSource(const std::string& code);
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Filter                                   */
    /*! \{                                                                 */

    //Description
    virtual std::string getDescription(void) const;

    //Pixel Radius of Filter
    //This should return the max distance, in pixels, that 
    //this filter may require for utilizing neighboring pixels
    virtual Real32 getDepPixelRadius(void) const;

    //Input Slots
    virtual Int32 getNumInputSlots(void) const;

    //Output Slots
    virtual Int32 getNumOutputSlots(void) const;

    virtual bool attachSource(TextureFilter* const OutputSlotSrc,
                              UInt8 OutputSlot,
                              UInt8 InputSlot = 0);
    virtual bool detachSource(UInt8 InputSlot = 0);
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name            Shader Uniform Parameters                         */
    /*! \{                                                                 */
    template<class ValueT>
    bool addUniformVariable    (const Char8 *name, const ValueT &value);

    template<class ValueT>
    bool updateUniformVariable (const Char8 *name, const ValueT &value);

    template<class ValueT>
    bool getUniformVariable    (const Char8 *name,       ValueT &value);
    
    bool subUniformVariable   (const Char8 *name);

    void clearUniformVariables(      void       );
    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in ShaderTextureFilterBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    ShaderTextureFilter(void);
    ShaderTextureFilter(const ShaderTextureFilter &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ShaderTextureFilter(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    void onCreate(const ShaderTextureFilter *source = NULL);
    void onDestroy(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    virtual void internalUpdate(Action *action, const Vec2f& DrawnSize);

    virtual TextureFilterInputSlot* editInputSlot(UInt32 InputSlot = 0); 

    virtual TextureFilterOutputSlot* editOutputSlot(UInt32 OutputSlot = 0); 

    FBOViewportTransitPtr createDefaultFBO(void);
    SimpleSHLChunkTransitPtr createDefaultShader(void);
    SimpleSHLVariableChunkTransitPtr createDefaultParameters(void);
    void updateMaterial(void);
    
    ChunkMaterialRecPtr _DefaultMat;
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class ShaderTextureFilterBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const ShaderTextureFilter &source);
};

typedef ShaderTextureFilter *ShaderTextureFilterP;

OSG_END_NAMESPACE

#include "OSGSimpleSHLVariableChunk.h"
#include "OSGShaderTextureFilterBase.inl"
#include "OSGShaderTextureFilter.inl"

#endif /* _OSGSHADERTEXTUREFILTER_H_ */
