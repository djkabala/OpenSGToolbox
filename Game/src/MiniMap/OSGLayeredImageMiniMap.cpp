/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *					Authors: David Kabala, Eric Langkamp					 *
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

#define OSG_COMPILEGAMELIB

#include <OpenSG/OSGConfig.h>

#include "OSGLayeredImageMiniMap.h"
#include "MiniMap/Indicators/OSGMiniMapIndicator.h"
#include "MiniMap/Indicators/OSGMiniMapIndicatorComponentGenerator.h"

#include <OpenSG/Toolbox/OSGTextureUtils.h>
#include <OpenSG/UserInterface/OSGAbsoluteLayout.h>
#include <OpenSG/UserInterface/OSGAbsoluteLayoutConstraints.h>

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class osg::LayeredImageMiniMap
A LayeredImageMiniMap. 	
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void LayeredImageMiniMap::initMethod (void)
{
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
void LayeredImageMiniMap::updateAllTransformations(void)
{
	//Viewpoint Indicator
	Pnt3f p;
	Quaternion r;

	getViewPointIndicator()->getTransformation(p,r);
	
	getTransformation()->transform(p);
	getTransformation()->transform(r);


	ViewPointLocation.setValues(p.x(), p.y());
	ViewPointOrientation = r;

	//All other Indicators
	InidicatorLocations.resize(getIndicators().size());
	InidicatorOrientations.resize(getIndicators().size());
	for(UInt32 i(0) ; i<getIndicators().size() ; ++i)
	{
		getIndicators(i)->getTransformation(p,r);
		
		getTransformation()->transform(p);
		getTransformation()->transform(r);


		InidicatorLocations[i].setValues(p.x(), p.y());
		InidicatorOrientations[i] = r;
	}
	
    if(_RotatedIndicator != NullFC)
    {
        //Update Rotation Angle
        beginEditCP(_RotatedIndicator, RotatedComponent::AngleFieldMask);
           _RotatedIndicator->setAngle(3.14157/4);
        endEditCP(_RotatedIndicator, RotatedComponent::AngleFieldMask);

        //Update Rotated Component Position
        AbsoluteLayoutConstraintsPtr RotatedComponentConstraints = AbsoluteLayoutConstraints::Ptr::dcast(_RotatedIndicator->getConstraints());
        Pnt2f AlignedPosition = ViewPointLocation - 0.5f*_RotatedIndicator->getSize();
        beginEditCP(RotatedComponentConstraints, AbsoluteLayoutConstraints::PositionFieldMask);
            RotatedComponentConstraints->setPosition(AlignedPosition);
        endEditCP(RotatedComponentConstraints, AbsoluteLayoutConstraints::PositionFieldMask);
    }
}


void LayeredImageMiniMap::removeTexture(UInt32 index)
{
	if(index > getLayerTextures().size())
	{
		return;
	}

	MFTextureChunkPtr::iterator RemoveIter(getLayerTextures().begin());

	for( UInt32 i(0) ; i<index; ++i)
	{
		++RemoveIter;
	}

	getLayerTextures().erase(RemoveIter);
}

void LayeredImageMiniMap::insertImage(UInt32 index, ImagePtr Image) // meant to insert new image at given index
{
	TextureChunkPtr Tex;
	Tex = createTexture(Image);
	
	if(index > getLayerTextures().size())
	{
		getLayerTextures().push_back(Tex);
		return;
	}

	MFTextureChunkPtr::iterator AddIter(getLayerTextures().begin());

	for( UInt32 i(0) ; i<index; ++i)
	{
		++AddIter;
	}

	getLayerTextures().insert(AddIter, Tex);
}


void LayeredImageMiniMap::setImage(UInt32 index, ImagePtr Image) // Overwrites the image at that location 
{
	if(index > getLayerTextures().size())
	{
		return;
	}
	
	beginEditCP(getLayerTextures()[index], TextureChunk::ImageFieldMask);
		getLayerTextures()[index]->setImage(Image);
	endEditCP(getLayerTextures()[index], TextureChunk::ImageFieldMask);
}

void LayeredImageMiniMap::insertImage(ImagePtr Image) // Image is pushed onto the back of the stack
{
	TextureChunkPtr Tex;
	Tex = createTexture(Image);

	getLayerTextures().push_back(Tex);
}

void LayeredImageMiniMap::drawInternal(const GraphicsPtr Graphics) const
{
	const_cast<LayeredImageMiniMap*>(this)->updateAllTransformations();

   Pnt2f TopLeft, BottomRight;
   getInsideBorderBounds(TopLeft, BottomRight);
   Vec2f ComponentSize(BottomRight-TopLeft);

   

   Graphics->drawQuad(TopLeft,
	                     TopLeft + Vec2f(ComponentSize.x(),0.0f),
						 BottomRight,
						 TopLeft + Vec2f(0.0f, ComponentSize.y()),
						 Vec2f(0.0f,0.0f),Vec2f(1.0f,0.0f), 
						 Vec2f(1.0f,1.0f), Vec2f(0.0f,1.0f), getLayerTextures().front(), getOpacity() );

   if(getCharacterImage() == NullFC)
   {
		Graphics->drawDisc(ViewPointLocation,4.0,4.0,0.0,7.0,10.0,Color4f(1.0,0.0,0.0,1.0),Color4f(1.0,1.0,1.0,1.0),1.0);
   }

   Container::drawInternal(Graphics);
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

void LayeredImageMiniMap::setupDrawInternals(void)
{
    if(getViewPointIndicator() != NullFC && getViewPointIndicator()->getGenerator() != NullFC)
    {
		if(getViewPointIndicator()->getGenerator()->getType().isDerivedFrom(MiniMapIndicatorComponentGenerator::getClassType()))
        {
            _ViewpointIndicatorComponent = MiniMapIndicatorComponentGenerator::Ptr::dcast(getViewPointIndicator()->getGenerator())->getMiniMapComponent(LayeredImageMiniMapPtr(this), false, false);
        }
        else
        {
            _ViewpointIndicatorComponent = getViewPointIndicator()->getGenerator()->getComponent(LayeredImageMiniMapPtr(this),SharedFieldPtr(), 0, 0,false, false);
        }
        

        AbsoluteLayoutConstraintsPtr RotatedComponentConstraints = AbsoluteLayoutConstraints::create();
        _RotatedIndicator = RotatedComponent::create();
        beginEditCP(_RotatedIndicator, RotatedComponent::InternalComponentFieldMask | RotatedComponent::ResizePolicyFieldMask | RotatedComponent::ConstraintsFieldMask);
            _RotatedIndicator->setInternalComponent(_ViewpointIndicatorComponent);
            _RotatedIndicator->setResizePolicy(RotatedComponent::RESIZE_TO_MIN);
            _RotatedIndicator->setConstraints(RotatedComponentConstraints);
        endEditCP(_RotatedIndicator, RotatedComponent::InternalComponentFieldMask | RotatedComponent::ResizePolicyFieldMask | RotatedComponent::ConstraintsFieldMask);

        AbsoluteLayoutPtr MiniMapLayout = AbsoluteLayout::create();
	    beginEditCP(LayeredImageMiniMapPtr(this) , ChildrenFieldMask | LayoutFieldMask);
		    getChildren().clear();
		    getChildren().push_back(_RotatedIndicator);
            setLayout(MiniMapLayout);
	    endEditCP(LayeredImageMiniMapPtr(this) , ChildrenFieldMask | LayoutFieldMask);
    }
}
/*----------------------- constructors & destructors ----------------------*/

LayeredImageMiniMap::LayeredImageMiniMap(void) :
    Inherited()
{
}

LayeredImageMiniMap::LayeredImageMiniMap(const LayeredImageMiniMap &source) :
    Inherited(source)
{
}

LayeredImageMiniMap::~LayeredImageMiniMap(void)
{
}

/*----------------------------- class specific ----------------------------*/

void LayeredImageMiniMap::changed(BitVector whichField, UInt32 origin)
{
    Inherited::changed(whichField, origin);

	if((whichField & IndicatorsFieldMask) || 
	   (whichField & ViewPointIndicatorFieldMask))
	{
		setupDrawInternals();
	}
}

void LayeredImageMiniMap::dump(      UInt32    , 
                         const BitVector ) const
{
    SLOG << "Dump LayeredImageMiniMap NI" << std::endl;
}


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCTemplate_cpp.h,v 1.20 2006/03/16 17:01:53 dirk Exp $";
    static Char8 cvsid_hpp       [] = OSGLAYEREDIMAGEMINIMAPBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGLAYEREDIMAGEMINIMAPBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGLAYEREDIMAGEMINIMAPFIELDS_HEADER_CVSID;
}

#ifdef __sgi
#pragma reset woff 1174
#endif

OSG_END_NAMESPACE

