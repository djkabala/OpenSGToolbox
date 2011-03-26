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

// Source file for new Field type

// This define is only set in this source file. It switches the
// Windows-specific declarations in the header for compiling the Field, 
// not for using it.
#define OSG_COMPILETEXTUREFILTEROUTPUTSLOTTYPEINST

// You need this in every OpenSG file
#include "OSGConfig.h"

// The new field type include
#include "OSGTextureFilterOutputSlotType.h"

// Needed to instantiate some template functions on Windows
#include "OSGSField.ins"
#include "OSGMField.ins"

OSG_BEGIN_NAMESPACE

TextureFilterOutputSlot::TextureFilterOutputSlot(void) : _SinkFilters(),
    _TextureFormatClasses(0),
    _TextureDataTypeClasses(0),
    _Description("")
{
}

TextureFilterOutputSlot::TextureFilterOutputSlot(UInt32 TextureFormatClasses,
                                                 UInt32 TextureDataTypeClasses, 
                                                 const std::string& Description) : _SinkFilters(),
    _TextureFormatClasses(TextureFormatClasses),
    _TextureDataTypeClasses(TextureDataTypeClasses),
    _Description(Description)
{
}

bool TextureFilterOutputSlot::operator==(const TextureFilterOutputSlot& Right) const
{
    return (_SinkFilters == Right._SinkFilters) &&
        (_TextureFormatClasses == Right._TextureFormatClasses) &&
        (_TextureDataTypeClasses == Right._TextureDataTypeClasses) &&
        (_Description == Right._Description);
}

void TextureFilterOutputSlot::addSinkFilter(TextureFilter* const Filter, UInt8 SinkInputSlot)
{
    for(OutSlotVecItor Itor(_SinkFilters.begin()) ; Itor != _SinkFilters.end() ; ++Itor)
    {
        if(Itor->first == Filter &&
           Itor->second == SinkInputSlot)
        {
            return;
        }
    }
    _SinkFilters.push_back(std::pair<TextureFilter* const,UInt8>(Filter, SinkInputSlot));
}

void TextureFilterOutputSlot::removeSinkFilter(TextureFilter* const Filter, UInt8 SinkInputSlot)
{
    for(OutSlotVecItor Itor(_SinkFilters.begin()) ; Itor != _SinkFilters.end() ; ++Itor)
    {
        if(Itor->first == Filter &&
           Itor->second == SinkInputSlot)
        {
            _SinkFilters.erase(Itor);
            return;
        }
    }
}

void TextureFilterOutputSlot::putToStream(OutStream &outVal) const
{
    for(UInt32 i(0) ; i<getSinkFilters().size() ; ++i)
    {
        outVal << "(";

        //Put the SinkFilter
        FieldTraits<UInt32>::putToStream(getSinkFilter(i)->getId(), outVal);
        outVal << ",";

        //Put the Slot
        FieldTraits<UInt8>::putToStream(getSinkFilter(i)->getId(), outVal);

        outVal << "),";
    }

    //TextureFormatClasses
    FieldTraits<UInt32>::putToStream(getTextureFormatClasses(), outVal);
    outVal << ",";

    //TextureDataTypeClasses
    FieldTraits<UInt32>::putToStream(getTextureDataTypeClasses(), outVal);
    outVal << ",";

    //Description
    outVal << getDescription();
}

bool TextureFilterOutputSlot::getFromCString(const Char8     *&inVal)
{
    const Char8 *curInString(inVal);
    if(curInString == NULL) { return false; }

    //Get the SinkFilters
    curInString = strchr(curInString, '(');
    if(curInString == NULL)
    {
        curInString = inVal;
    }
    else
    {
        UInt32 FieldContainerID;
        FieldContainer* Filter;
        UInt8 InputSlot;
        while(curInString != NULL)
        {
            //Move Past the '('
            ++curInString;

            FieldContainerID = TypeTraits<UInt32>::getFromCString(curInString);
            Filter = FieldContainerFactory::the()->getMappedContainer(FieldContainerID);
            if(Filter == NULL)
            {
                SWARNING << "Could not find Container referenced with Id: "
                         << FieldContainerID
                         << std::endl;
            }
            else if(!Filter->getType().isDerivedFrom(TextureFilter::getClassType()))
            {
                SWARNING << "Container referenced with Id: " << FieldContainerID
                         << " is not derived from TextureFilter.  It has type: "
                         << Filter->getType().getCName()
                         << std::endl;
            }
            else
            {
                //Get the Slot
                curInString = strchr(curInString, ',');
                ++curInString;
                InputSlot = TypeTraits<UInt8>::getFromCString(curInString);

                _SinkFilters.push_back(std::pair<TextureFilter* const,UInt8>(dynamic_cast<TextureFilter*>(Filter),InputSlot));
            }

            curInString = strchr(curInString, '(');
        }
        curInString = strrchr(inVal, ')');
    }

    //Get the TextureFormatClasses
    curInString = strchr(curInString, ',');
    ++curInString;
    setTextureFormatClasses(TypeTraits<UInt32>::getFromCString(curInString));

    //Get the TextureDataTypeClasses
    curInString = strchr(curInString, ',');
    ++curInString;
    setTextureDataTypeClasses(TypeTraits<UInt32>::getFromCString(curInString));

    //Get the Description
    curInString = strchr(curInString, ',');
    ++curInString;
    setDescription(std::string(curInString));

    return true;
}

void TextureFilterOutputSlot::copyFromBin(BinaryDataHandler &bdh)
{
    //Num Sink Filters
    UInt32 NumSinkFilters(0);
    bdh.getValue(NumSinkFilters);

    //Sink Filters
    _SinkFilters.clear();

    UInt32 FieldId;
    FieldContainer* fcp;
    UInt8 SlotNum;
    for(UInt32 i(0) ; i<NumSinkFilters ; ++i)
    {
        //Get the SinkFilter
        bdh.getValue(FieldId);
        fcp = FieldContainerFactory::the()->getMappedContainer(FieldId);

        //Get the Slot
        bdh.getValue(SlotNum);

        //Add the SinkFilter
        _SinkFilters.push_back(std::pair<TextureFilter* const,UInt8>(dynamic_cast<TextureFilter*>(fcp),SlotNum));
    }

    //TextureFormatClasses
    UInt32 TextureFormatClasses;
    bdh.getValue(TextureFormatClasses);
    setTextureFormatClasses(TextureFormatClasses);

    //TextureDataTypeClasses
    UInt32 TextureDataTypeClasses;
    bdh.getValue(TextureDataTypeClasses);
    setTextureDataTypeClasses(TextureDataTypeClasses);

    //Description
    std::string Description;
    FieldTraits<std::string>::copyFromBin( bdh, Description );
    setDescription(Description);

}

void TextureFilterOutputSlot::copyToBin(BinaryDataHandler &bdh) const
{
    //Num Sink Filters
    bdh.putValue(getNumSinkFilters());

    //Sink Filters
    for(UInt32 i(0) ; i<getNumSinkFilters() ; ++i)
    {
        //Put the SinkFilter
        bdh.putValue(getSinkFilter(i)->getId());

        //Put the Slot
        bdh.putValue(getSinkFilterInputSlot(i));
    }

    //TextureFormatClasses
    bdh.putValue(getTextureFormatClasses());

    //TextureDataTypeClasses
    bdh.putValue(getTextureDataTypeClasses());

    //Description
    bdh.putValue(getDescription());
}

void FieldTraits<TextureFilterOutputSlot>::putToStream(const TextureFilterOutputSlot   &inVal,
                                                       OutStream &outVal)
{
    inVal.putToStream(outVal);
}

bool FieldTraits<TextureFilterOutputSlot>::getFromCString(      TextureFilterOutputSlot  &outVal,
                                                                const Char8     *&inVal)
{
    return outVal.getFromCString(inVal);
}

UInt32 FieldTraits<TextureFilterOutputSlot>::getBinSize(const TextureFilterOutputSlot & obj)
{
    UInt32 Size(0);
    Size += sizeof(UInt32)   //Number of Sink Filters
        + (sizeof(UInt32)+sizeof(UInt8))*obj.getNumSinkFilters()  //SinkFilters
        + sizeof(UInt32)    //TextureFormatClasses
        + sizeof(UInt32)    //TextureDataTypeClasses
        + FieldTraits<std::string>::getBinSize(obj.getDescription());    //Description

    return Size;
}

UInt32 FieldTraits<TextureFilterOutputSlot>::getBinSize (const TextureFilterOutputSlot *obj, UInt32 num)
{
    //Size:
    //Sum of all the objs
    UInt32 SizeSum(0);
    for(UInt32 i = 0; i < num; ++i)
    {
        SizeSum += getBinSize(obj[i]);
    }
    return SizeSum;
}

void FieldTraits<TextureFilterOutputSlot>::copyToBin(      BinaryDataHandler &bdh, 
                                                           const TextureFilterOutputSlot         &obj)
{
    obj.copyToBin(bdh);
}

void FieldTraits<TextureFilterOutputSlot>::copyToBin(      BinaryDataHandler &bdh,
                                                           const TextureFilterOutputSlot         *objs,
                                                           UInt32             num)
{
    for(UInt32 i = 0; i < num; ++i)
    {
        copyToBin(bdh, objs[i]);
    }
}

void FieldTraits<TextureFilterOutputSlot>::copyFromBin(BinaryDataHandler &bdh,
                                                       TextureFilterOutputSlot &obj)
{
    obj.copyFromBin(bdh);
}

void FieldTraits<TextureFilterOutputSlot>::copyFromBin(BinaryDataHandler &bdh,
                                                       TextureFilterOutputSlot *objs,
                                                       UInt32 num)
{
    for(UInt32 i = 0; i < num; ++i)
    {
        copyFromBin(bdh, objs[i]);
    }
}

// This is where the DataType for the new Fieldtype is defined.
// The parameters are the name of the type and the name of the parent type
DataType FieldTraits<TextureFilterOutputSlot>::_type("TextureFilterOutputSlot", "BaseType");

// These macros instantiate the necessary template methods for the fields
OSG_FIELDTRAITS_GETTYPE (        TextureFilterOutputSlot)
OSG_FIELD_DLLEXPORT_DEF1(SField, TextureFilterOutputSlot)
OSG_FIELD_DLLEXPORT_DEF1(MField, TextureFilterOutputSlot)


OSG_END_NAMESPACE

