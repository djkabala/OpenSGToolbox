/*---------------------------------------------------------------------------*\
 *                        OpenSG ToolBox Toolbox                             *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <stdlib.h>
#include <stdio.h>

#define OSG_COMPILETOOLBOXLIB

#include <OpenSG/OSGConfig.h>

#include "OSGBlinnMaterial.h"
#include <OpenSG/OSGSHLParameterChunk.h>
#include <OpenSG/OSGSHLChunk.h>
#include <OpenSG/OSGTextureChunk.h>
#include <OpenSG/OSGImage.h>
#include <OpenSG/OSGShaderParameterInt.h>
#include <OpenSG/OSGShaderParameterReal.h>
#include <OpenSG/OSGShaderParameterVec3f.h>
#include <OpenSG/OSGShaderParameterVec4f.h>

#include "OSGMaterialLibrary.h"
#include <boost/lexical_cast.hpp>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::BlinnMaterial

*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BlinnMaterial::initMethod (void)
{
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
void BlinnMaterial::internalCreateShaderParameters(void)
{
    Inherited::internalCreateShaderParameters();
    
    //SpecularEccentricity
    if(getSpecularEccentricityTexture() == NullFC)
    {
        ShaderParameterRealPtr SpecularEccentricityParam = ShaderParameterReal::create();
        SpecularEccentricityParam->setName("SpecularEccentricity");
        getParameters()->getParameters().push_back(SpecularEccentricityParam);
    }
    else
    {
        ShaderParameterIntPtr SpecularEccentricityTexParam = ShaderParameterInt::create();
        SpecularEccentricityTexParam->setName("SpecularEccentricityTexture");
        getParameters()->getParameters().push_back(SpecularEccentricityTexParam);
    }
    
    //SpecularRolloff
    if(getSpecularRolloffTexture() == NullFC)
    {
        ShaderParameterRealPtr SpecularRolloffParam = ShaderParameterReal::create();
        SpecularRolloffParam->setName("SpecularRolloff");
        getParameters()->getParameters().push_back(SpecularRolloffParam);
    }
    else
    {
        ShaderParameterIntPtr SpecularRolloffTexParam = ShaderParameterInt::create();
        SpecularRolloffTexParam->setName("SpecularRolloffTexture");
        getParameters()->getParameters().push_back(SpecularRolloffTexParam);
    }
    
    //SpecularColor
    if(getSpecularColorTexture() == NullFC)
    {
        ShaderParameterVec3fPtr SpecularColorParam = ShaderParameterVec3f::create();
        SpecularColorParam->setName("SpecularColor");
        getParameters()->getParameters().push_back(SpecularColorParam);
    }
    else
    {
        ShaderParameterIntPtr SpecularColorTexParam = ShaderParameterInt::create();
        SpecularColorTexParam->setName("SpecularColorTexture");
        getParameters()->getParameters().push_back(SpecularColorTexParam);
    }
}

void BlinnMaterial::internalUpdateShaderParameters(UInt8& NumTextures, UInt8& ParamIndex)
{
    Inherited::internalUpdateShaderParameters(NumTextures, ParamIndex);
    
    //SpecularEccentricity
    if(getSpecularEccentricityTexture() == NullFC)
    {
        ShaderParameterRealPtr::dcast(getParameters()->getParameters(ParamIndex))->setValue(getSpecularEccentricity());
        ++ParamIndex;
    }
    else
    {
        ShaderParameterIntPtr::dcast(getParameters()->getParameters(ParamIndex))->setValue(NumTextures);
        ++NumTextures;
        ++ParamIndex;
    }
    
    //SpecularRolloff
    if(getSpecularRolloffTexture() == NullFC)
    {
        ShaderParameterRealPtr::dcast(getParameters()->getParameters(ParamIndex))->setValue(getSpecularRolloff());
        ++ParamIndex;
    }
    else
    {
        ShaderParameterIntPtr::dcast(getParameters()->getParameters(ParamIndex))->setValue(NumTextures);
        ++NumTextures;
        ++ParamIndex;
    }

    //SpecularColor
    if(getSpecularColorTexture() == NullFC)
    {
        ShaderParameterVec3fPtr::dcast(getParameters()->getParameters(ParamIndex))->setValue(Vec3f(getSpecularColor().getValuesRGB()));
        ++ParamIndex;
    }
    else
    {
        ShaderParameterIntPtr::dcast(getParameters()->getParameters(ParamIndex))->setValue(NumTextures);
        ++NumTextures;
        ++ParamIndex;
    }
}

void BlinnMaterial::internalAttachChunks(void)
{
    Inherited::internalAttachChunks();

    //SpecularEccentricityTexture
    if(getSpecularEccentricityTexture() != NullFC)
    {
        getChunks().push_back(getSpecularEccentricityTexture());
    }

    //SpecularRolloffTexture
    if(getSpecularRolloffTexture() != NullFC)
    {
        getChunks().push_back(getSpecularRolloffTexture());
    }

    //SpecularColorTexture
    if(getSpecularColorTexture() != NullFC)
    {
        getChunks().push_back(getSpecularColorTexture());
    }
}

bool BlinnMaterial::shouldRecreateChunks(BitVector FieldMask) const
{
    return Inherited::shouldRecreateChunks(FieldMask) ||
        (FieldMask & SpecularEccentricityTextureFieldMask) ||
        (FieldMask & SpecularRolloffTextureFieldMask) ||
        (FieldMask & SpecularColorTextureFieldMask);
}

bool BlinnMaterial::shouldUpdateParameters(BitVector FieldMask) const
{
    return Inherited::shouldUpdateParameters(FieldMask) ||
        (FieldMask & SpecularEccentricityFieldMask) ||
        (FieldMask & SpecularRolloffFieldMask) ||
        (FieldMask & SpecularColorFieldMask);
}

std::string BlinnMaterial::generateFragmentCode(void)
{
    std::string VertColoringAlphaStr("");
    std::string VertColoringRGBStr("");
    if(getVertexColoring())
    {
        VertColoringRGBStr = " * gl_Color.rgb";
        VertColoringAlphaStr = " * gl_Color.a";
    }

    std::string Result("");
    
    //Color
	if(getColorTexture() != NullFC)
	{
		Result += "uniform sampler2D ColorTexture;\n";
	}
    else
    {
		Result += "uniform vec3 Color;\n";
    }

    //Transparency
	if(getTransparencyTexture() != NullFC)
	{
        if(isTransparent())
        {
		    Result += "uniform sampler2D TransparencyTexture;\n";
        }
	}
    else
    {
    }
    if(isTransparent())
    {
	    Result += "uniform vec3 Transparency;\n";
    }
    //AmbientColor
	if(getAmbientColorTexture() != NullFC)
	{
		Result += "uniform sampler2D AmbientColorTexture;\n";
	}
    else
    {
		Result += "uniform vec3 AmbientColor;\n";
    }

    //Incandescence
	if(getIncandescenceTexture() != NullFC)
	{
		Result += "uniform sampler2D IncandescenceTexture;\n";
	}
    else
    {
		Result += "uniform vec3 Incandescence;\n";
    }

    //Normal
	if(getNormalMapTexture() != NullFC)
	{
		Result += "uniform sampler2D NormalTexture;\n";
        
        //Bump Depth
		//if(getBumpDepthTexture() != NullFC)
		//{
			//Result += "uniform sampler2D BumpDepthTexture;\n";
		//}
        //else
        //{
			//Result += "uniform float BumpDepth;\n";
        //}
	}

    //Diffuse
	if(getDiffuseTexture() != NullFC)
	{
		Result += "uniform sampler2D DiffuseTexture;\n";
	}
    else
    {
		Result += "uniform float Diffuse;\n";
    }
    //Transleucence
    //Transleucence Depth
    //Transleucence Focus
    
    //SpecularEccentricity
	if(getSpecularEccentricityTexture() != NullFC)
	{
		Result += "uniform sampler2D SpecularEccentricityTexture;\n";
	}
    else
    {
		Result += "uniform float SpecularEccentricity;\n";
    }
    
    //SpecularRolloff
	if(getSpecularRolloffTexture() != NullFC)
	{
		Result += "uniform sampler2D SpecularRolloffTexture;\n";
	}
    else
    {
		Result += "uniform float SpecularRolloff;\n";
    }
    
    //SpecularColor
	if(getSpecularColorTexture() != NullFC)
	{
		Result += "uniform sampler2D SpecularColorTexture;\n";
	}
    else
    {
		Result += "uniform vec3 SpecularColor;\n";
    }
    
	Result += "varying vec3 LightDir[" + boost::lexical_cast<std::string>(static_cast<UInt32>(getNumLights())) + "];\n"
	"varying vec3 SpotDir[" + boost::lexical_cast<std::string>(static_cast<UInt32>(getNumLights())) + "];\n"
	"varying vec3 ViewDir;\n"

	"void main()\n"
	"{\n"
	"    vec3 LightDirNorm;\n"
	"    vec3 ViewDirNorm = normalize(ViewDir);\n"
    
	"    //Normal\n";
	if(getNormalMapTexture() != NullFC)
	{
		Result += "    vec3 Normal = (texture2D(NormalTexture,gl_TexCoord[0].st).xyz * 2.0) - vec3(1.0);\n";
	}
	else
	{
		Result += "    vec3 Normal = vec3(0.0,0.0,1.0);\n";
	}
    
	Result += "    //For the number of lights\n"
	"    vec3 FragColor = vec3(0.0);\n"
    
	"    float atten;\n"
    
	"    float nDotL;\n"
	"    float nDotH;\n"
	"    float power;\n"
	"    float Dist;\n"
	"    float Alpha = 0.0;\n";
    
    //Ambient Material Color
    if(getAmbientColorTexture() == NullFC)
    {
        Result += "vec3 FragAmbientColor = AmbientColor;\n";
    }
    else
    {
        Result += "vec3 FragAmbientColor = texture2D(AmbientColorTexture,gl_TexCoord[0].st).rgb;\n";
    }
    
    //Diffuse Material Color
    if(getColorTexture() == NullFC)
    {
        Result += "vec3 FragDiffuseColor = Color;\n";
    }
    else
    {
        Result += "vec3 FragDiffuseColor = texture2D(ColorTexture,gl_TexCoord[0].st).rgb;\n";
    }

    //Diffuse Coefficient
    if(getDiffuseTexture() == NullFC)
    {
        Result += "FragDiffuseColor *= Diffuse;\n";
    }
    else
    {
        Result += "FragDiffuseColor *= texture2D(DiffuseTexture,gl_TexCoord[0].st).rgb;\n";
    }

    //SpecularEccentricity
    if(getSpecularEccentricityTexture() == NullFC)
    {
        Result += "float FragSpecularEccentricity = (1.0-SpecularEccentricity) * 128.0;\n";
    }
    else
    {
        Result += "float FragSpecularEccentricity = (1.0-texture2D(SpecularEccentricityTexture,gl_TexCoord[0].st).r) * 128.0;\n";
    }
    
    //SpecularRolloff
    if(getSpecularRolloffTexture() == NullFC)
    {
        Result += "float FragSpecularRolloff = SpecularRolloff;\n";
    }
    else
    {
        Result += "float FragSpecularRolloff = texture2D(SpecularRolloffTexture,gl_TexCoord[0].st).r;\n";
    }
    
    //Specular Color
    if(getSpecularColorTexture() == NullFC)
    {
        Result += "vec3 FragSpecularColor = SpecularColor;\n";
    }
    else
    {
        Result += "vec3 FragSpecularColor = texture2D(SpecularColorTexture,gl_TexCoord[0].st).rgb;\n";
    }

    for(unsigned int i(0) ; i<getNumLights() ; ++i)
    {
	    Result += 
	    "        //Light " + boost::lexical_cast<std::string>(i) + "\n"
        "        Dist = length(LightDir[" + boost::lexical_cast<std::string>(i) + "]);\n"
	    "        LightDirNorm = LightDir[" + boost::lexical_cast<std::string>(i) + "]/Dist;\n"
         
	    "        nDotL = max(0.0, dot(Normal, LightDirNorm));\n"
	    "        nDotH = max(0.0, dot(Normal, 0.5 * (LightDirNorm + ViewDirNorm))); // Blinn\n"
         
	    "        //Eccentricity\n"
        "        power = (nDotL == 0.0) ? 0.0 :  pow(nDotH, FragSpecularEccentricity);\n"
        
        "        //Specular Roll Off\n"
        "        power *= FragSpecularRolloff;\n"
        
	    "        if(gl_LightSource[" + boost::lexical_cast<std::string>(i) + "].position.w == 0.0) //Directional Light\n"
	    "        {\n"
	    "            atten = 1.0;\n"
	    "        }\n"
        "        else if(abs(gl_LightSource[" + boost::lexical_cast<std::string>(i) + "].spotCosCutoff) < 1.0) // Spot Light\n"
	    "        {\n"
        //"           float spotEffect = dot(normalize(gl_LightSource[" + boost::lexical_cast<std::string>(i) + "].spotDirection), -LightDirNorm);\n"
        "           float spotEffect = dot(SpotDir[" + boost::lexical_cast<std::string>(i) + "], -LightDirNorm);\n"
	    "		    if (spotEffect > gl_LightSource[" + boost::lexical_cast<std::string>(i) + "].spotCosCutoff)\n"
	    "            {\n"
	    "                //Compute the attenuation for spotlight\n"
	    "		        spotEffect = pow(spotEffect, gl_LightSource[" + boost::lexical_cast<std::string>(i) + "].spotExponent);\n"
		//"		        atten = spotEffect / (gl_LightSource[" + boost::lexical_cast<std::string>(i) + "].constantAttenuation +\n"
		//"				    gl_LightSource[" + boost::lexical_cast<std::string>(i) + "].linearAttenuation * Dist +\n"
		//"				    gl_LightSource[" + boost::lexical_cast<std::string>(i) + "].quadraticAttenuation * Dist * Dist);\n"
	    "               atten = spotEffect;\n"
	    "            }\n"
	    "            else\n"
	    "            {\n"
	    "                atten = 0.0;\n"
	    "            }\n"
	    "		 }\n"
	    "        else //Point Light\n"
	    "        {\n"
		//"            atten = 1.0/(gl_LightSource[" + boost::lexical_cast<std::string>(i) + "].constantAttenuation +\n"
		//"                gl_LightSource[" + boost::lexical_cast<std::string>(i) + "].linearAttenuation * Dist +\n"
		//"                gl_LightSource[" + boost::lexical_cast<std::string>(i) + "].quadraticAttenuation * Dist * Dist);\n"
	    "            atten = 1.0;\n"
	    "        }\n"
	    "        atten = clamp(atten,0.0,1.0);\n"
         
	    "        //Ambient\n"
        "       FragColor += FragAmbientColor * gl_LightSource[" + boost::lexical_cast<std::string>(i) + "].ambient.rgb;\n"
        //"       FragColor += FragAmbientColor;\n"

	    "        //Diffuse\n"
        "        FragColor += FragDiffuseColor * gl_LightSource[" + boost::lexical_cast<std::string>(i) + "].diffuse.rgb * nDotL * atten;\n"
        
	    "        //Specular\n"
        "        FragColor += FragSpecularColor * gl_LightSource[" + boost::lexical_cast<std::string>(i) + "].specular.rgb * power * atten;\n"
        "        Alpha += power * atten;\n";
        
        //"        FragColor += FragSpecularColor * power;\n"
    }
    
	Result += 
        "    //Global Ambient\n"
        "    FragColor += gl_LightModel.ambient.rgb * FragAmbientColor;\n";
        
        "    //Incandescence\n";
	if(getIncandescenceTexture() != NullFC)
	{
		    Result += "    vec3 Incandescence = texture2D(IncandescenceTexture,gl_TexCoord[0].st).rgb;\n";
	}
    if(getColorTexture() != NullFC)
    {
	    Result += "    FragColor += FragColor*Incandescence;\n";
	    Result += "    FragColor += Incandescence;\n";
    }
    else
    {
	    Result += "    FragColor += Incandescence;\n";
    }
    Result += "    Alpha += 0.3*Incandescence.r + 0.59*Incandescence.g + 0.11*Incandescence.b;\n";
    
    if(getTransparencyTexture() != NullFC)
    {
        if(getTransparencyTexture()->getImage()->hasAlphaChannel())
        {
            Result += "    Alpha = texture2D(TransparencyTexture,gl_TexCoord[0].st).a" + VertColoringAlphaStr + " + Alpha;\n";
            Result += "    Alpha *= 1.0-max(Transparency.r,max(Transparency.g,Transparency.b));\n";
        }
        else
        {
            Result += "    vec3 TransparencyMap = texture2D(TransparencyTexture,gl_TexCoord[0].st).rgb;\n";
            Result += "    Alpha = max(TransparencyMap.r,max(TransparencyMap.g,TransparencyMap.b))" + VertColoringAlphaStr + " + Alpha;\n";
            Result += "    Alpha *= 1.0-max(Transparency.r,max(Transparency.g,Transparency.b));\n";
        }
    }
    else if(getTransparencyTexture() == NullFC && isTransparent())
    {
        //Result += "0.3*Transparency.r + 0.59*Transparency.g + 0.11*Transparency.b";
            Result += "    Alpha = 1.0-max(Transparency.r,max(Transparency.g,Transparency.b))" + VertColoringAlphaStr + " + Alpha;\n";
    }
    else
    {
        if(getVertexColoring())
        {
            Result += "    Alpha = gl_Color.a + Alpha;\n";
        }
        else
        {
            Result += "    Alpha = 1.0;\n";
        }
    }
    Result += "    gl_FragColor = vec4(FragColor,Alpha);\n";
	Result += "}\n";
    return Result;
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

BlinnMaterial::BlinnMaterial(void) :
    Inherited()
{
}

BlinnMaterial::BlinnMaterial(const BlinnMaterial &source) :
    Inherited(source)
{
}

BlinnMaterial::~BlinnMaterial(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BlinnMaterial::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);
}

void BlinnMaterial::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump BlinnMaterial NI" << std::endl;
}


OSG_END_NAMESPACE
