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
#ifndef _OSG_TEXTUREFILTERINPUTSLOT_TYPE_H_
#define _OSG_TEXTUREFILTERINPUTSLOT_TYPE_H_
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

enum TextureFormatClasses
{
    OSG_TEXTURE_INTERNAL_FORMAT_NONE    = 0,
    OSG_TEXTURE_INTERNAL_FORMAT_COLOR   = 1,
    OSG_TEXTURE_INTERNAL_FORMAT_DEPTH   = 2,
    OSG_TEXTURE_INTERNAL_FORMAT_STENCIL = 4
};

enum TextureDataTypeClasses
{
    OSG_TEXTURE_DATA_TYPE_NONE  = 0,
    OSG_TEXTURE_DATA_TYPE_UINT  = 1,
    OSG_TEXTURE_DATA_TYPE_INT   = 2,
    OSG_TEXTURE_DATA_TYPE_FLOAT = 4,
};

class OSG_CONTRIBIMAGEPROCESSING_DLLMAPPING TextureFilterInputSlot
{
  public:

    friend class TextureFilter;

    TextureFilterInputSlot(void);
    TextureFilterInputSlot(UInt32 TextureFormatClasses,
                           UInt32 TextureDataTypeClasses, 
                           const std::string& Description);

    bool operator==(const TextureFilterInputSlot& Right) const;

    TextureFilter* const getSourceFilter(void) const;
    bool isAttached(void) const;
    UInt8 getSourceFilterOutputSlot(void) const;
    UInt32 getTextureFormatClasses(void) const;
    UInt32 getTextureDataTypeClasses(void) const;
    const std::string& getDescription(void) const;

    void setSourceFilter(TextureFilter* const value);
    void setSourceFilterOutputSlot(UInt8 value);
    void setTextureFormatClasses(UInt32 value);
    void setTextureDataTypeClasses(UInt32 value);
    void setDescription(const std::string& value);
  private:

    TextureFilter* _SourceFilter;
    UInt8          _SourceFilterOutputSlot;
    UInt32         _TextureFormatClasses;   //Color, Depth, or Stencil
    UInt32         _TextureDataTypeClasses; //Unsigned Int, Signed Int, Float
    std::string    _Description;
};

// The FieldDataTraits class contains the methods needed to implement
// the features a Field data element needs to have

template <>
struct FieldTraits<TextureFilterInputSlot> : 
public FieldTraitsTemplateBase<TextureFilterInputSlot>
{
    // Static DataType descriptor, see OSGNewFieldType.cpp for implementation
    static DataType       _type;

    typedef FieldTraits<TextureFilterInputSlot>  Self;

    // Define whether string conversions are available. It is strongly
    // recommended to implement both.
    enum { Convertible = (Self::ToStreamConvertible |
                          Self::FromStringConvertible)  };

    // access method for the DataType
    static DataType &getType(void);

    // Access to the names of the actual Fields
    static const Char8 *getSName(void) { return "SFTextureFilterInputSlot"; }
    static const Char8 *getMName(void) { return "MFTextureFilterInputSlot"; }

    // Create a default instance of the class, needed for Field creation
    static TextureFilterInputSlot getDefault(void) { return TextureFilterInputSlot();   }


    // String conversion

    // Output inVal into outVal
    // the exact mapping doesn't matter, 
    // Our recommendation is to output as a string, 
    // i.e. start and stop with ", as this simplifies integration into the
    // OSG Loader.
    static void putToStream(const TextureFilterInputSlot   &inVal,
                            OutStream &outVal);

    // Setup outVal from the contents of inVal
    // For complicated classes it makes sense to implement this function
    // as a class method and just call that from here  
    static bool getFromCString(TextureFilterInputSlot  &outVal,
                              const Char8     *&inVal);

    // Binary conversion

    // Return the size of the binary version in byte   
    // There are two versions of this function, one for a single object, 
    // one for an array of objects
    static UInt32 getBinSize(const TextureFilterInputSlot & obj);

    static UInt32 getBinSize (const TextureFilterInputSlot *obj, UInt32 num);

    // Copy the object into the BinaryDataHandler
    // the BDH has a number of methods to add a simple type to the stream
    // just use those and use the same order to read them back in.
    // Again there are two versions, one for a single object, one for an 
    // array of objects
    static void copyToBin(BinaryDataHandler &bdh, 
                          const TextureFilterInputSlot &obj);

    static void copyToBin(BinaryDataHandler &bdh,
                          const TextureFilterInputSlot *objs,
                          UInt32 num);


    // Copy the object from the BinaryDataHandler
    // the BDH has a number of methods to get a simple type from the stream
    // just use those and use the same order you used to write them out.
    // Again there are two versions, one for a single object, one for an 
    // array of objects
    static void copyFromBin(BinaryDataHandler &bdh, 
                            TextureFilterInputSlot &obj);

    static void copyFromBin(BinaryDataHandler &bdh,
                            TextureFilterInputSlot *objs,
                            UInt32 num);
};


#ifndef DOXYGEN_SHOULD_SKIP_THIS

// Here the actual Field types are declared
// You don't always have to have both, either is fine

typedef SField<TextureFilterInputSlot> SFTextureFilterInputSlot;
typedef MField<TextureFilterInputSlot> MFTextureFilterInputSlot;

#else // these are the doxygen hacks

/*! \ingroup GrpBaseFieldSingle \ingroup GrpLibOSGBase */
struct SFTextureFilterInputSlot : public SField<TextureFilterInputSlot> {};
struct MFTextureFilterInputSlot : public MField<TextureFilterInputSlot> {};

#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#include "OSGTextureFilter.h"
#include "OSGTextureFilterInputSlotType.inl"

#endif /* _OSG_TEXTUREFILTERINPUTSLOT_TYPE_H_ */
