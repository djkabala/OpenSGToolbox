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

#define OSG_COMPILECONTRIBIMAGEPROCESSINGLIB

#include "OSGConfig.h"

#include "OSGTextureFilter.h"
#include "OSGTextureFilterOutputSlotType.h"
#include "OSGTextureFilterInputSlotType.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGTextureFilterBase.cpp file.
// To modify it, please change the .fcd file (OSGTextureFilter.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void TextureFilter::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

TextureObjChunk* TextureFilter::pullTexture(UInt8 OutputSlot) const
{
    OSG_ASSERT(false && "pullTexture() not defined for this TextureFilterType.");
    return NULL;
}

void TextureFilter::update(Action *action, const Vec2f& DrawnSize)
{
    if(isDirty())
    {
        for(UInt32 i(0) ; i < getNumInputSlots() ; ++i)
        {
            editInputSlot(i)->getSourceFilter()->update(action, DrawnSize);
        }

        internalUpdate(action, DrawnSize);

        setDirty(false);
    }
}

bool TextureFilter::attachSource(TextureFilter* const OutputSlotSrc, UInt8 OutputSlot, UInt8 InputSlot)
{
    if(!OutputSlotSrc->isSource())
    {
        SWARNING << "Cannot attach source filter, because the filter is not a Source." << std::endl;
        return false;
    }
    if(!isSink())
    {
        SWARNING << "Cannot attach filters to this TextureFilter, because this TextureFilter is not a Sink." << std::endl;
        return false;
    }
    if(getNumInputSlots() > 0 && InputSlot >= getNumInputSlots())
    {
        SWARNING << "Cannot attach filters to slot " << InputSlot 
                 << ", becuase there are only " << getNumInputSlots() 
                 << " slots." << std::endl;
        return false;
    }

    if(OutputSlotSrc->getNumOutputSlots() > 0 && OutputSlot >= OutputSlotSrc->getNumOutputSlots())
    {
        SWARNING << "Cannot attach filter from output slot " << OutputSlot 
                 << ", becuase there are only " << OutputSlotSrc->getNumOutputSlots() 
                 << " slots on that filter." << std::endl;
        return false;
    }

    if(OutputSlotSrc == NULL)
    {
        SWARNING << "Attempting to attach a NULL TextureFilter." << std::endl;
        return false;
    }


    //Check for Cycles
    if(wouldMakeCyclic(OutputSlotSrc))
    {
        SWARNING << "Failed to add source filter, because doing so would create a cycle in the filter graph." << std::endl;
        return false;
    }
    TextureFilterInputSlot* InputSlotObj(editInputSlot(InputSlot));
    TextureFilterOutputSlot* OutputSlotObj(OutputSlotSrc->editOutputSlot(OutputSlot));

    //Check if the Input slot is already attach to something else
    if(InputSlotObj->isAttached())
    {
        SWARNING << "Failed to attach output slot " << OutputSlot 
                 << " of the given source Filter to input slot " << InputSlot 
                 << " because that slot is already attached to another TextureFilter." << std::endl;
        return false;
    }

    //Check if the Formats for the slots are compatable
    if((InputSlotObj->getTextureFormatClasses() & OutputSlotObj->getTextureFormatClasses()) == 0 )
    {
        SWARNING << "Failed to attach output slot " << OutputSlot 
                 << " of the given source Filter to input slot " << InputSlot 
                 << " because the data format of those two slots are not compatable." << std::endl;
        return false;
    }

    //Check if the Data types for the slots are compatable


    //Attach this given filter to the InputSlot
    InputSlotObj->setSourceFilter(OutputSlotSrc);
    InputSlotObj->setSourceFilterOutputSlot(OutputSlot);

    //Attach this Filter to the Output Slot of the given Filter
    OutputSlotSrc->attachOutputSlot(this, InputSlot);

    //Flag this filter as dirty
    setDirty(true);
    return true;

}

bool TextureFilter::detachSource(UInt8 InputSlot)
{
    if( getNumInputSlots() < -1 || 
        InputSlot < getNumInputSlots())
    {
        TextureFilterInputSlot* InputSlotObj(editInputSlot(InputSlot));
        if(InputSlotObj->isAttached())
        {
            //Detach this Filter from the OutputSlot of the given Filter
            InputSlotObj->getSourceFilter()->detachOutputSlot(this, InputSlotObj->getSourceFilterOutputSlot());

            //Detach the filter at this InputSlot 
            InputSlotObj->setSourceFilter(NULL);

            //Flag this filter as dirty
            setDirty(true);

            return true;
        }
    }
    return false;
}


TextureFilter* TextureFilter::getSource(UInt8 InputSlot) const
{
    const TextureFilterInputSlot* InputSlotObj(getInputSlot(InputSlot));
    if(InputSlotObj->isAttached())
    {
        return InputSlotObj->getSourceFilter();
    }
    else
    {
        return NULL;
    }
}


bool TextureFilter::attachOutputSlot(TextureFilter* const Sink, UInt8 SinkInputSlot, UInt8 OutputSlot)
{
    if(Sink != NULL)
    {
        TextureFilterOutputSlot* OutputSlotObj(editOutputSlot(OutputSlot));
        OutputSlotObj->addSinkFilter(Sink, SinkInputSlot);

        return true;
    }
    else
    {
        return false;
    }
}

bool TextureFilter::detachOutputSlot(TextureFilter* const Sink, UInt8 SinkInputSlot, UInt8 OutputSlot)
{
    if(Sink != NULL)
    {
        TextureFilterOutputSlot* OutputSlotObj(editOutputSlot(OutputSlot));
        if(OutputSlotObj != NULL )
        {
            OutputSlotObj->removeSinkFilter(Sink, SinkInputSlot);

            return true;
        }
    }
    return false;
}

bool TextureFilter::isDirty(void) const
{
    const TextureFilterInputSlot* InputSlotObj(NULL);
    for(UInt32 i(0) ; i < getNumInputSlots() ; ++i)
    {
        InputSlotObj = getInputSlot(i);
        if(InputSlotObj != NULL && InputSlotObj->getSourceFilter()->isDirty())
        {
            return true;
        }
    }

    return getInternalDirty();
}

void TextureFilter::setDirty(bool dirty)
{
    if(getInternalDirty() != dirty)
    {
        setInternalDirty(dirty);
    }
}

bool TextureFilter::wouldMakeCyclic(TextureFilter* const Src)
{
    //Adding this source would make this Filter graph cyclic iff
    //this Filter is one of the downstream nodes

    if(Src == this)
    {
        return true;
    }

    bool Result(false);
    const TextureFilterInputSlot* InputSlotObj(NULL);
    for(UInt32 i(0) ; i < getNumInputSlots() ; ++i)
    {
        InputSlotObj = getInputSlot(i);
        if(InputSlotObj != NULL && 
           InputSlotObj->getSourceFilter() != NULL&& 
           InputSlotObj->getSourceFilter()->wouldMakeCyclic(Src))
        {
            return true;
        }
    }

    return false;
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

TextureFilter::TextureFilter(void) :
    Inherited()
{
}

TextureFilter::TextureFilter(const TextureFilter &source) :
    Inherited(source)
{
}

TextureFilter::~TextureFilter(void)
{
}

/*----------------------------- class specific ----------------------------*/

void TextureFilter::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void TextureFilter::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump TextureFilter NI" << std::endl;
}

OSG_END_NAMESPACE
