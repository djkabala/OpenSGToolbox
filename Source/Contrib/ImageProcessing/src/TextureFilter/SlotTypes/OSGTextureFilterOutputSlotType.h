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

#ifndef _OSG_TEXTUREFILTEROUTPUTSLOT_TYPE_H_
#define _OSG_TEXTUREFILTEROUTPUTSLOT_TYPE_H_
#ifdef __sgi
#pragma once
#endif

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include "OSGConfig.h"
#include "OSGContribImageProcessingDef.h"

#include "OSGFieldType.h"
#include "OSGFieldTraits.h"

#include "OSGSField.h"
#include "OSGMField.h"
#include "OSGBaseTypes.h"
#include "OSGFieldContainerFactory.h"

#include <vector>

#include "OSGTextureFilterFields.h"

OSG_BEGIN_NAMESPACE

class OSG_CONTRIBIMAGEPROCESSING_DLLMAPPING TextureFilterOutputSlot
{
  public:
    friend class TextureFilter;
    typedef std::vector<std::pair<TextureFilter*, UInt8> > OutSlotVec;
    typedef OutSlotVec::iterator OutSlotVecItor;

    TextureFilterOutputSlot(void);
    TextureFilterOutputSlot(UInt32 TextureFormatClasses,
                            UInt32 TextureDataTypeClasses,
                            const std::string& Description);

    bool operator==(const TextureFilterOutputSlot& Right) const;

    const OutSlotVec& getSinkFilters(void) const;
    TextureFilter* getSinkFilter(UInt32 Index) const;
    UInt32 getNumSinkFilters(void) const;
    UInt8 getSinkFilterInputSlot(UInt32 Index) const;

    UInt32 getTextureFormatClasses(void) const;
    UInt32 getTextureDataTypeClasses(void) const;
    const std::string& getDescription(void) const;

    void addSinkFilter(TextureFilter* const Filter, UInt8 SinkInputSlot);
    void removeSinkFilter(TextureFilter* const Filter, UInt8 SinkInputSlot);

    void setTextureFormatClasses(UInt32 value);
    void setTextureDataTypeClasses(UInt32 value);
    void setDescription(const std::string& value);

    void putToStream(OutStream &outVal) const;
    bool getFromCString(const Char8     *&inVal);

    void copyFromBin(BinaryDataHandler &bdh);
    void copyToBin(BinaryDataHandler &bdh) const;

  private:

    OutSlotVec  _SinkFilters;
    UInt32  _TextureFormatClasses;   //Color, Depth, or Stencil
    UInt32  _TextureDataTypeClasses; //Unsigned Int, Signed Int, or Float
    std::string  _Description;
};

// The FieldDataTraits class contains the methods needed to implement
// the features a Field data element needs to have

template <>
struct OSG_CONTRIBIMAGEPROCESSING_DLLMAPPING FieldTraits<TextureFilterOutputSlot> : public FieldTraitsTemplateBase<TextureFilterOutputSlot>
{
    // Static DataType descriptor, see OSGNewFieldType.cpp for implementation
    static DataType       _type;

    typedef FieldTraits<TextureFilterOutputSlot>  Self;

    // Define whether string conversions are available. It is strongly
    // recommended to implement both.
    enum { Convertible = (Self::ToStreamConvertible |
                          Self::FromStringConvertible)  };

    // access method for the DataType
    static DataType &getType(void);

    // Access to the names of the actual Fields
    static const Char8 *getSName(void) { return "SFTextureFilterOutputSlot"; }
    static const Char8 *getMName(void) { return "MFTextureFilterOutputSlot"; }

    // Create a default instance of the class, needed for Field creation
    static TextureFilterOutputSlot getDefault(void) { return TextureFilterOutputSlot();   }


    // String conversion

    // Output inVal into outVal
    // the exact mapping doesn't matter, 
    // Our recommendation is to output as a string, 
    // i.e. start and stop with ", as this simplifies integration into the
    // OSG Loader.
    static void putToStream(const TextureFilterOutputSlot   &inVal,
                            OutStream &outVal);

    // Setup outVal from the contents of inVal
    // For complicated classes it makes sense to implement this function
    // as a class method and just call that from here  
    static bool getFromCString(TextureFilterOutputSlot  &outVal,
                               const Char8 *&inVal);

    // Binary conversion

    // Return the size of the binary version in byte   
    // There are two versions of this function, one for a single object, 
    // one for an array of objects
    static UInt32 getBinSize(const TextureFilterOutputSlot & obj);

    static UInt32 getBinSize (const TextureFilterOutputSlot *obj, UInt32 num);

    // Copy the object into the BinaryDataHandler
    // the BDH has a number of methods to add a simple type to the stream
    // just use those and use the same order to read them back in.
    // Again there are two versions, one for a single object, one for an 
    // array of objects
    static void copyToBin(BinaryDataHandler &bdh, 
                          const TextureFilterOutputSlot &obj);

    static void copyToBin(BinaryDataHandler &bdh,
                          const TextureFilterOutputSlot *objs,
                          UInt32 num);


    // Copy the object from the BinaryDataHandler
    // the BDH has a number of methods to get a simple type from the stream
    // just use those and use the same order you used to write them out.
    // Again there are two versions, one for a single object, one for an 
    // array of objects
    static void copyFromBin(BinaryDataHandler &bdh, 
                            TextureFilterOutputSlot         &obj);

    static void copyFromBin(BinaryDataHandler &bdh,
                            TextureFilterOutputSlot *objs,
                            UInt32 num);
};

#ifndef DOXYGEN_SHOULD_SKIP_THIS

// Here the actual Field types are declared
// You don't always have to have both, either is fine

typedef SField<TextureFilterOutputSlot> SFTextureFilterOutputSlot;
typedef MField<TextureFilterOutputSlot> MFTextureFilterOutputSlot;

#else // these are the doxygen hacks

/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct SFTextureFilterOutputSlot : public SField<TextureFilterOutputSlot> {};
struct MFTextureFilterOutputSlot : public MField<TextureFilterOutputSlot> {};

#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#include "OSGTextureFilter.h"

#include "OSGTextureFilterOutputSlotType.inl"

#endif /* _OSG_TEXTUREFILTEROUTPUTSLOT_TYPE_H_ */
