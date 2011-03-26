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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#include "OSGShaderTextureFilter.h"

#include "OSGFBOViewport.h"
#include "OSGFrameBufferObject.h"
#include "OSGTextureObjChunk.h"
#include "OSGSimpleSHLChunk.h"
#include "OSGSimpleSHLVariableChunk.h"
#include "OSGChunkMaterial.h"
#include "OSGRenderActionBase.h"
#include "OSGTextureBuffer.h"

#include "OSGNode.h"
#include "OSGPassiveBackground.h"
#include "OSGSolidBackground.h"
#include "OSGMatrixCamera.h"
#include "OSGGroup.h"
#include "OSGImage.h"
#include "OSGImageFunctions.h"
#include "OSGPolygonForeground.h"

#include <boost/lexical_cast.hpp>

#include "OSGShaderTextureFilter.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGShaderTextureFilterBase.cpp file.
// To modify it, please change the .fcd file (OSGShaderTextureFilter.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void ShaderTextureFilter::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

std::string ShaderTextureFilter::getDescription(void) const
{
    return std::string("");
}

Real32 ShaderTextureFilter::getDepPixelRadius(void) const
{
    return 0.0f;
}

Int32 ShaderTextureFilter::getNumInputSlots(void) const
{
    return 1;
}

Int32 ShaderTextureFilter::getNumOutputSlots(void) const
{
    return 1;
}

TextureFilterInputSlot* ShaderTextureFilter::editInputSlot(UInt32 InputSlot)
{
    //TODO: Implement
    if(InputSlot == 0)
    {
        return &editShaderInputSlot();
    }
    else
    {
        return NULL;
    }
}

TextureFilterOutputSlot* ShaderTextureFilter::editOutputSlot(UInt32 OutputSlot)
{
    //TODO: Implement
    if(OutputSlot == 0)
    {
        return &editShaderOutputSlot();
    }
    else
    {
        return NULL;
    }
}

TextureObjChunk* ShaderTextureFilter::pullTexture(UInt8 OutputSlot) const
{
    //Just grab the color texture from the FBO
    //TODO: Implement
    return dynamic_cast<TextureBuffer*>(getInternalFBO()->getTarget()->getColorAttachments(0))->getTexture();
}

void ShaderTextureFilter::setFragmentSource(const std::string& code)
{
    getInternalShader()->setFragmentProgram(code);
}

void ShaderTextureFilter::setVertexSource(const std::string& code)
{
    getInternalShader()->setVertexProgram(code);
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

void ShaderTextureFilter::resolveLinks(void)
{
    Inherited::resolveLinks();

    _DefaultMat = NULL;
}

void ShaderTextureFilter::internalUpdate(Action *action, const Vec2f& DrawnSize)
{
    //Grab unused FBO, with the same properties that this Filter requires

    //Update the FBO

    //Determine if the size of the FBO Texture should be changed
    //Vec2f NewFBOSize(getFBOSize());
    //ImageRecPtr TheImage(getInternalFBO()->getTextures(0)->getImage());
    //if(getFBOSize().x() < 0.0f)
    //{
        //NewFBOSize[0] = DrawnSize.x();
    //}
    //if(getFBOSize().y() < 0.0f)
    //{
        //NewFBOSize[1] = DrawnSize.y();
    //}
    //if(Vec2f(TheImage->getWidth(), TheImage->getHeight()) != NewFBOSize)
    //{
        ////If the size of the FBO Texture has changed then update it
        //for( unsigned int nt = 0;
             //nt < getInternalFBO()->getFrameBufferObject()->getMFColorAttachments()->getSize();
             //++nt )
        //{
            //if()
            //{
                //TextureObjChunkRecPtr tex = getInternalFBO()->getFrameBufferObject()->getColorAttachments(nt);

                //tex->getImage()->set(tex->getImage()->getPixelFormat(),NewFBOSize.x(), NewFBOSize.y(),
                                     //tex->getImage()->getDepth(), tex->getImage()->getMipMapCount(),
                                     //tex->getImage()->getFrameCount(),tex->getImage()->getFrameDelay(),
                                     //NULL,tex->getImage()->getDataType());
            //}
        //}

        //getInternalFBO()->setSize(0,0,NewFBOSize.x()-1, NewFBOSize.y()-1);

        //getInternalFBO()->getFrameBufferObject()->setWidth(NewFBOSize.x());
        //getInternalFBO()->getFrameBufferObject()->setHeight(NewFBOSize.y());
        //getInternalFBO()->getFrameBufferObject()->setDirty(true);

    //}

    //Update the parent window of the FBO
    WindowRecPtr ParentWin(dynamic_cast<RenderActionBase*>(action)->getWindow());
    if(getInternalFBO()->getParent() != ParentWin)
    {
        //getInternalFBO()->setParent(ParentWin);
    }

    //Draw the FBO
    //getInternalFBO()->render(action);

}

FBOViewportTransitPtr ShaderTextureFilter::createDefaultFBO(void)
{
    //Create Root
    NodeRecPtr TheRoot = Node::create();
    TheRoot->setCore(Group::create());

    //Create Camera
    MatrixCameraRecPtr TheCamera = MatrixCamera::create();

    //Create Background
    PassiveBackgroundRecPtr TheBackground = PassiveBackground::create();

    //Create the Material
    _DefaultMat = ChunkMaterial::create();

    //Create Foreground
    //Viewport filled quad that uses the attached material
    PolygonForegroundRecPtr TheFilledQuadForeground = PolygonForeground::create();
    TheFilledQuadForeground->setMaterial(_DefaultMat);
    TheFilledQuadForeground->setNormalizedX(true);
    TheFilledQuadForeground->setNormalizedY(true);
    TheFilledQuadForeground->setScale(1.0f);
    TheFilledQuadForeground->setTile(false);
    TheFilledQuadForeground->editMFPositions()->push_back(Pnt2f(0.0f,0.0f));
    TheFilledQuadForeground->editMFPositions()->push_back(Pnt2f(1.0f,0.0f));
    TheFilledQuadForeground->editMFPositions()->push_back(Pnt2f(1.0f,1.0f));
    TheFilledQuadForeground->editMFPositions()->push_back(Pnt2f(0.0f,1.0f));

    TheFilledQuadForeground->editMFTexCoords()->push_back(Vec3f(0.0f,0.0f,0.0f));
    TheFilledQuadForeground->editMFTexCoords()->push_back(Vec3f(1.0f,0.0f,0.0f));
    TheFilledQuadForeground->editMFTexCoords()->push_back(Vec3f(1.0f,1.0f,0.0f));
    TheFilledQuadForeground->editMFTexCoords()->push_back(Vec3f(0.0f,1.0f,0.0f));

    //Create the Image
    ImageRecPtr TheImage = Image::create();
    TheImage->set(Image::OSG_RGB_PF,2,2);

    //Create the texture
    TextureObjChunkRecPtr TheTextureChunk = TextureObjChunk::create();
    TheTextureChunk->setImage(TheImage);

    TheTextureChunk->setMinFilter(GL_NEAREST);
    TheTextureChunk->setMagFilter(GL_NEAREST);

    TheTextureChunk->setWrapS(GL_CLAMP_TO_EDGE);
    TheTextureChunk->setWrapR(GL_CLAMP_TO_EDGE);

    //TheTextureChunk->setScale(false);
    //TheTextureChunk->setNPOTMatrixScale(true);

    //TheTextureChunk->setEnvMode(GL_REPLACE);
    FrameBufferObjectRecPtr TheFBO = FrameBufferObject::create();

    TheFBO->setWidth(TheTextureChunk->getImage()->getWidth());
    TheFBO->setHeight(TheTextureChunk->getImage()->getHeight());
    //TheFBO->getTextures().push_back(TheTextureChunk);

    //Create FBO
    FBOViewportRecPtr TheFBOViewport = FBOViewport::create();
    TheFBOViewport->setBackground(TheBackground);
    TheFBOViewport->setRoot(TheRoot);
    TheFBOViewport->setCamera(TheCamera);
    TheFBOViewport->setFrameBufferObject(TheFBO);

    TheFBOViewport->setEnabled(true);

    TheFBOViewport->addForeground(TheFilledQuadForeground);

    TheFBOViewport->setSize(0,
                            0,
                            TheTextureChunk->getImage()->getWidth()-1,
                            TheTextureChunk->getImage()->getHeight()-1);

    return FBOViewportTransitPtr(TheFBOViewport);
}

SimpleSHLChunkTransitPtr ShaderTextureFilter::createDefaultShader(void)
{
    return SimpleSHLChunk::create();
}

SimpleSHLVariableChunkTransitPtr ShaderTextureFilter::createDefaultParameters(void)
{
    return SimpleSHLVariableChunk::create();
}

void ShaderTextureFilter::onCreate(const ShaderTextureFilter *source)
{
    FBOViewportRecPtr DefaultFBO = createDefaultFBO();
    setInternalFBO(DefaultFBO);
    SimpleSHLChunkRecPtr DefaultShader = createDefaultShader();
    setInternalShader(DefaultShader);
    SimpleSHLVariableChunkRecPtr DefaultParameters = createDefaultParameters();
    setInternalParameters(DefaultParameters);

    //updateMaterial();
}

void ShaderTextureFilter::onDestroy(void)
{
}

void ShaderTextureFilter::updateMaterial(void)
{
    //Update The Material to use to draw the quad
    _DefaultMat->clearChunks();
    //Attach Shader
    _DefaultMat->addChunk(getInternalShader());

    //Attach Shader Uniform Parameters
    _DefaultMat->addChunk(getInternalParameters());

    std::string TexParamName("");
    for(Int32 i(0) ; i < getNumInputSlots() ; ++i)
    {
        TexParamName = std::string("Slot") + boost::lexical_cast<std::string>(i) + std::string("Texture");

        //Update Shader Uniform Parameters
        getInternalParameters()->updateUniformVariable(TexParamName.c_str(),i);

        const TextureFilterInputSlot* InputSlotObj(getInputSlot(i));
        if(InputSlotObj->isAttached())
        {
            _DefaultMat->addChunk( InputSlotObj->getSourceFilter()->pullTexture(InputSlotObj->getSourceFilterOutputSlot()) );
        }
    }
}

bool ShaderTextureFilter::attachSource(TextureFilter* const OutputSlotSrc, UInt8 OutputSlot, UInt8 InputSlot)
{
    bool Result(Inherited::attachSource(OutputSlotSrc, OutputSlot, InputSlot));
    if(Result)
    {
        updateMaterial();
    }
    return Result;
}

bool ShaderTextureFilter::detachSource(UInt8 InputSlot)
{
    bool Result(Inherited::detachSource(InputSlot));
    if(Result)
    {
        updateMaterial();
    }
    return Result;
}

/*----------------------- constructors & destructors ----------------------*/

ShaderTextureFilter::ShaderTextureFilter(void) :
    Inherited()
{
}

ShaderTextureFilter::ShaderTextureFilter(const ShaderTextureFilter &source) :
    Inherited(source)
{
}

ShaderTextureFilter::~ShaderTextureFilter(void)
{
}

/*----------------------------- class specific ----------------------------*/

void ShaderTextureFilter::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void ShaderTextureFilter::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump ShaderTextureFilter NI" << std::endl;
}

OSG_END_NAMESPACE
