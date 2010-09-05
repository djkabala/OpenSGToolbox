/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)                             *
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
 **     class MaterialFieldContainerEditor!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGMaterialFieldContainerEditorBase.h"
#include "OSGMaterialFieldContainerEditor.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MaterialFieldContainerEditor
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var UInt32          MaterialFieldContainerEditorBase::_sfMaterialShape
    The Geometric shape used to present the material.
*/

/*! \var Real32          MaterialFieldContainerEditorBase::_sfAnimateRate
    The rate to rotate the geometry presenting the material.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<MaterialFieldContainerEditor *>::_type("MaterialFieldContainerEditorPtr", "AbstractFieldContainerEditorPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(MaterialFieldContainerEditor *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           MaterialFieldContainerEditor *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           MaterialFieldContainerEditor *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void MaterialFieldContainerEditorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "MaterialShape",
        "The Geometric shape used to present the material.\n",
        MaterialShapeFieldId, MaterialShapeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MaterialFieldContainerEditor::editHandleMaterialShape),
        static_cast<FieldGetMethodSig >(&MaterialFieldContainerEditor::getHandleMaterialShape));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "AnimateRate",
        "The rate to rotate the geometry presenting the material.\n",
        AnimateRateFieldId, AnimateRateFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&MaterialFieldContainerEditor::editHandleAnimateRate),
        static_cast<FieldGetMethodSig >(&MaterialFieldContainerEditor::getHandleAnimateRate));

    oType.addInitialDesc(pDesc);
}


MaterialFieldContainerEditorBase::TypeObject MaterialFieldContainerEditorBase::_type(
    MaterialFieldContainerEditorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&MaterialFieldContainerEditorBase::createEmptyLocal),
    MaterialFieldContainerEditor::initMethod,
    MaterialFieldContainerEditor::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&MaterialFieldContainerEditor::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"MaterialFieldContainerEditor\"\n"
    "\tparent=\"AbstractFieldContainerEditor\"\n"
    "    library=\"ContribFieldContainerEditor\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"MaterialShape\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"MaterialFieldContainerEditor::SPHERE_SHAPE\"\n"
    "\t>\n"
    "    The Geometric shape used to present the material.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"AnimateRate\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"1.0f\"\n"
    "\t>\n"
    "    The rate to rotate the geometry presenting the material.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MaterialFieldContainerEditorBase::getType(void)
{
    return _type;
}

const FieldContainerType &MaterialFieldContainerEditorBase::getType(void) const
{
    return _type;
}

UInt32 MaterialFieldContainerEditorBase::getContainerSize(void) const
{
    return sizeof(MaterialFieldContainerEditor);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *MaterialFieldContainerEditorBase::editSFMaterialShape(void)
{
    editSField(MaterialShapeFieldMask);

    return &_sfMaterialShape;
}

const SFUInt32 *MaterialFieldContainerEditorBase::getSFMaterialShape(void) const
{
    return &_sfMaterialShape;
}


SFReal32 *MaterialFieldContainerEditorBase::editSFAnimateRate(void)
{
    editSField(AnimateRateFieldMask);

    return &_sfAnimateRate;
}

const SFReal32 *MaterialFieldContainerEditorBase::getSFAnimateRate(void) const
{
    return &_sfAnimateRate;
}






/*------------------------------ access -----------------------------------*/

UInt32 MaterialFieldContainerEditorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (MaterialShapeFieldMask & whichField))
    {
        returnValue += _sfMaterialShape.getBinSize();
    }
    if(FieldBits::NoField != (AnimateRateFieldMask & whichField))
    {
        returnValue += _sfAnimateRate.getBinSize();
    }

    return returnValue;
}

void MaterialFieldContainerEditorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialShapeFieldMask & whichField))
    {
        _sfMaterialShape.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AnimateRateFieldMask & whichField))
    {
        _sfAnimateRate.copyToBin(pMem);
    }
}

void MaterialFieldContainerEditorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (MaterialShapeFieldMask & whichField))
    {
        _sfMaterialShape.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AnimateRateFieldMask & whichField))
    {
        _sfAnimateRate.copyFromBin(pMem);
    }
}

//! create a new instance of the class
MaterialFieldContainerEditorTransitPtr MaterialFieldContainerEditorBase::createLocal(BitVector bFlags)
{
    MaterialFieldContainerEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<MaterialFieldContainerEditor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
MaterialFieldContainerEditorTransitPtr MaterialFieldContainerEditorBase::createDependent(BitVector bFlags)
{
    MaterialFieldContainerEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<MaterialFieldContainerEditor>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
MaterialFieldContainerEditorTransitPtr MaterialFieldContainerEditorBase::create(void)
{
    MaterialFieldContainerEditorTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<MaterialFieldContainerEditor>(tmpPtr);
    }

    return fc;
}

MaterialFieldContainerEditor *MaterialFieldContainerEditorBase::createEmptyLocal(BitVector bFlags)
{
    MaterialFieldContainerEditor *returnValue;

    newPtr<MaterialFieldContainerEditor>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
MaterialFieldContainerEditor *MaterialFieldContainerEditorBase::createEmpty(void)
{
    MaterialFieldContainerEditor *returnValue;

    newPtr<MaterialFieldContainerEditor>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr MaterialFieldContainerEditorBase::shallowCopyLocal(
    BitVector bFlags) const
{
    MaterialFieldContainerEditor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MaterialFieldContainerEditor *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr MaterialFieldContainerEditorBase::shallowCopyDependent(
    BitVector bFlags) const
{
    MaterialFieldContainerEditor *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const MaterialFieldContainerEditor *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr MaterialFieldContainerEditorBase::shallowCopy(void) const
{
    MaterialFieldContainerEditor *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const MaterialFieldContainerEditor *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

MaterialFieldContainerEditorBase::MaterialFieldContainerEditorBase(void) :
    Inherited(),
    _sfMaterialShape          (UInt32(MaterialFieldContainerEditor::SPHERE_SHAPE)),
    _sfAnimateRate            (Real32(1.0f))
{
}

MaterialFieldContainerEditorBase::MaterialFieldContainerEditorBase(const MaterialFieldContainerEditorBase &source) :
    Inherited(source),
    _sfMaterialShape          (source._sfMaterialShape          ),
    _sfAnimateRate            (source._sfAnimateRate            )
{
}


/*-------------------------- destructors ----------------------------------*/

MaterialFieldContainerEditorBase::~MaterialFieldContainerEditorBase(void)
{
}


GetFieldHandlePtr MaterialFieldContainerEditorBase::getHandleMaterialShape   (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfMaterialShape,
             this->getType().getFieldDesc(MaterialShapeFieldId),
             const_cast<MaterialFieldContainerEditorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MaterialFieldContainerEditorBase::editHandleMaterialShape  (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfMaterialShape,
             this->getType().getFieldDesc(MaterialShapeFieldId),
             this));


    editSField(MaterialShapeFieldMask);

    return returnValue;
}

GetFieldHandlePtr MaterialFieldContainerEditorBase::getHandleAnimateRate     (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfAnimateRate,
             this->getType().getFieldDesc(AnimateRateFieldId),
             const_cast<MaterialFieldContainerEditorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr MaterialFieldContainerEditorBase::editHandleAnimateRate    (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfAnimateRate,
             this->getType().getFieldDesc(AnimateRateFieldId),
             this));


    editSField(AnimateRateFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void MaterialFieldContainerEditorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    MaterialFieldContainerEditor *pThis = static_cast<MaterialFieldContainerEditor *>(this);

    pThis->execSync(static_cast<MaterialFieldContainerEditor *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *MaterialFieldContainerEditorBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    MaterialFieldContainerEditor *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MaterialFieldContainerEditor *>(pRefAspect),
                  dynamic_cast<const MaterialFieldContainerEditor *>(this));

    return returnValue;
}
#endif

void MaterialFieldContainerEditorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE