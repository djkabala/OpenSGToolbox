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
#define OSG_COMPILECONTRIBIMAGEPROCESSINGLIB

// You need this in every OpenSG file
#include "OSGConfig.h"

// The new field type include
#include "OSGTextureFilterInputSlotType.h"

#include "OSGSField.ins"
#include "OSGMField.ins"

OSG_BEGIN_NAMESPACE

TextureFilterInputSlot::TextureFilterInputSlot(void) :
    _SourceFilter(NULL),
    _SourceFilterOutputSlot(0),
    _TextureFormatClasses(0),
    _TextureDataTypeClasses(0),
    _Description("")
{
}

TextureFilterInputSlot::TextureFilterInputSlot(UInt32 TextureFormatClasses,
                                               UInt32 TextureDataTypeClasses,
                                               const std::string& Description) :
    _SourceFilter(NULL),
    _SourceFilterOutputSlot(0),
    _TextureFormatClasses(TextureFormatClasses),
    _TextureDataTypeClasses(TextureDataTypeClasses),
    _Description(Description)
{
}

bool TextureFilterInputSlot::operator==(const TextureFilterInputSlot& Right) const
{
    return (_SourceFilter           == Right._SourceFilter          ) &&
           (_SourceFilterOutputSlot == Right._SourceFilterOutputSlot) &&
           (_TextureFormatClasses   == Right._TextureFormatClasses  ) &&
           (_TextureDataTypeClasses == Right._TextureDataTypeClasses) &&
           (_Description            == Right._Description           );
}

void FieldTraits<TextureFilterInputSlot>::putToStream(const TextureFilterInputSlot   &inVal,
                                                      OutStream &outVal)
{
    //Put the SourceFilter
    TypeTraits<UInt32>::putToStream(inVal.getSourceFilter()->getId(), outVal);
    outVal << ",";

    //Put the SourceFilterOutputSlot
    TypeTraits<UInt8>::putToStream(inVal.getSourceFilterOutputSlot(), outVal);
    outVal << ",";

    //TextureFormatClasses
    TypeTraits<UInt32>::putToStream(inVal.getTextureFormatClasses(), outVal);
    outVal << ",";

    //TextureDataTypeClasses
    TypeTraits<UInt32>::putToStream(inVal.getTextureDataTypeClasses(), outVal);
    outVal << ",";

    //Description
    outVal << inVal.getDescription();
}

bool FieldTraits<TextureFilterInputSlot>::getFromCString(TextureFilterInputSlot  &outVal,
                                                         const Char8     *&inVal)
{
    const Char8 *curInString(inVal);
    if(curInString == NULL) { return false; }

    //Get the SourceFilter
    UInt32 FieldContainerID = TypeTraits<UInt32>::getFromCString(curInString);
    FieldContainer* Filter = FieldContainerFactory::the()->getMappedContainer(FieldContainerID);
    if(Filter == NULL)
    {
        SWARNING << "Could not find Container referenced with Id: "
                 << FieldContainerID
                 << std::endl;
    }
    if(!Filter->getType().isDerivedFrom(TextureFilter::getClassType()))
    {
        SWARNING << "Container referenced with Id: " << FieldContainerID
                 << " is not derived from TextureFilter.  It has type: "
                 << Filter->getType().getCName()
                 << std::endl;
    }
    outVal.setSourceFilter(dynamic_cast<TextureFilter*>(Filter));

    //Get the SourceFilterOutputSlot
    curInString = strchr(curInString, ',');
    ++curInString;
    outVal.setSourceFilterOutputSlot(TypeTraits<UInt8>::getFromCString(curInString));

    //Get the TextureFormatClasses
    curInString = strchr(curInString, ',');
    ++curInString;
    outVal.setTextureFormatClasses(TypeTraits<UInt32>::getFromCString(curInString));

    //Get the TextureDataTypeClasses
    curInString = strchr(curInString, ',');
    ++curInString;
    outVal.setTextureDataTypeClasses(TypeTraits<UInt32>::getFromCString(curInString));

    //Get the Description
    curInString = strchr(curInString, ',');
    ++curInString;
    outVal.setDescription(std::string(curInString));

    return true;
}

UInt32 FieldTraits<TextureFilterInputSlot>::getBinSize(const TextureFilterInputSlot & obj)
{
    UInt32 Size(0);
    Size += sizeof(UInt32)   //SourceFilter
         +  sizeof(UInt8)    //SourceFilterOutputSlot
         +  sizeof(UInt32)   //TextureFormatClasses
         +  sizeof(UInt32)   //TextureDataTypeClasses
         +  FieldTraits<std::string>::getBinSize(obj.getDescription());    //Description

    return Size;
}

UInt32 FieldTraits<TextureFilterInputSlot>::getBinSize (const TextureFilterInputSlot *obj, UInt32 num)
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

void FieldTraits<TextureFilterInputSlot>::copyToBin(BinaryDataHandler &bdh, 
                                                    const TextureFilterInputSlot &obj)
{
    //SourceFilter
    bdh.putValue(obj.getSourceFilter()->getId());

    //SourceFilterOutputSlot
    bdh.putValue(obj.getSourceFilterOutputSlot());

    //TextureFormatClasses
    bdh.putValue(obj.getTextureFormatClasses());

    //TextureDataTypeClasses
    bdh.putValue(obj.getTextureDataTypeClasses());

    //Description
    bdh.putValue(obj.getDescription());
}

void FieldTraits<TextureFilterInputSlot>::copyToBin(BinaryDataHandler &bdh,
                                                    const TextureFilterInputSlot *objs,
                                                    UInt32 num)
{
    for(UInt32 i = 0; i < num; ++i)
    {
        copyToBin(bdh, objs[i]);
    }
}

void FieldTraits<TextureFilterInputSlot>::copyFromBin(BinaryDataHandler &bdh, 
                                                      TextureFilterInputSlot         &obj)
{
    //SourceFilter
    UInt32 ContainerId;
    bdh.getValue(ContainerId);
    FieldContainer* fcp = FieldContainerFactory::the()->getMappedContainer(ContainerId);
    obj.setSourceFilter(dynamic_cast<TextureFilter*>(fcp));

    //SourceFilterOutputSlot
    UInt8 SourceFilterOutputSlot;
    bdh.getValue(SourceFilterOutputSlot);
    obj.setSourceFilterOutputSlot(SourceFilterOutputSlot);

    //TextureFormatClasses
    UInt32 TextureFormatClasses;
    bdh.getValue(TextureFormatClasses);
    obj.setTextureFormatClasses(TextureFormatClasses);

    //TextureDataTypeClasses
    UInt32 TextureDataTypeClasses;
    bdh.getValue(TextureDataTypeClasses);
    obj.setTextureDataTypeClasses(TextureDataTypeClasses);

    //Description
    std::string Description;
    FieldTraits<std::string>::copyFromBin( bdh, Description );
    obj.setDescription(Description);

}

void FieldTraits<TextureFilterInputSlot>::copyFromBin(BinaryDataHandler &bdh,
                                                      TextureFilterInputSlot *objs,
                                                      UInt32 num)
{
    for(UInt32 i = 0; i < num; ++i)
    {
        copyFromBin(bdh, objs[i]);
    }
}

// This is where the DataType for the new Fieldtype is defined.
// The parameters are the name of the type and the name of the parent type
DataType FieldTraits<TextureFilterInputSlot>::_type("TextureFilterInputSlot", "BaseType");

// These macros instantiate the necessary template methods for the fields
OSG_FIELDTRAITS_GETTYPE (        TextureFilterInputSlot)
OSG_FIELD_DLLEXPORT_DEF1(SField, TextureFilterInputSlot)
OSG_FIELD_DLLEXPORT_DEF1(MField, TextureFilterInputSlot)

OSG_END_NAMESPACE

