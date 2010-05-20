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
 **     class GeoVolumeDistribution3D!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGGeometry.h"                // Volume Class

#include "OSGGeoVolumeDistribution3DBase.h"
#include "OSGGeoVolumeDistribution3D.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::GeoVolumeDistribution3D
    An GeoVolumeDistribution3D.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Geometry *      GeoVolumeDistribution3DBase::_sfVolume
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<GeoVolumeDistribution3D *>::_type("GeoVolumeDistribution3DPtr", "Distribution3DPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(GeoVolumeDistribution3D *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           GeoVolumeDistribution3D *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           GeoVolumeDistribution3D *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void GeoVolumeDistribution3DBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecGeometryPtr::Description(
        SFUnrecGeometryPtr::getClassType(),
        "Volume",
        "",
        VolumeFieldId, VolumeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&GeoVolumeDistribution3D::editHandleVolume),
        static_cast<FieldGetMethodSig >(&GeoVolumeDistribution3D::getHandleVolume));

    oType.addInitialDesc(pDesc);
}


GeoVolumeDistribution3DBase::TypeObject GeoVolumeDistribution3DBase::_type(
    GeoVolumeDistribution3DBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&GeoVolumeDistribution3DBase::createEmptyLocal),
    GeoVolumeDistribution3D::initMethod,
    GeoVolumeDistribution3D::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&GeoVolumeDistribution3D::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"GeoVolumeDistribution3D\"\n"
    "\tparent=\"Distribution3D\"\n"
    "    library=\"ContribParticleSystem\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "An GeoVolumeDistribution3D.\n"
    "\t<Field\n"
    "\t\tname=\"Volume\"\n"
    "\t\ttype=\"Geometry\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "An GeoVolumeDistribution3D.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &GeoVolumeDistribution3DBase::getType(void)
{
    return _type;
}

const FieldContainerType &GeoVolumeDistribution3DBase::getType(void) const
{
    return _type;
}

UInt32 GeoVolumeDistribution3DBase::getContainerSize(void) const
{
    return sizeof(GeoVolumeDistribution3D);
}

/*------------------------- decorator get ------------------------------*/


//! Get the GeoVolumeDistribution3D::_sfVolume field.
const SFUnrecGeometryPtr *GeoVolumeDistribution3DBase::getSFVolume(void) const
{
    return &_sfVolume;
}

SFUnrecGeometryPtr  *GeoVolumeDistribution3DBase::editSFVolume         (void)
{
    editSField(VolumeFieldMask);

    return &_sfVolume;
}





/*------------------------------ access -----------------------------------*/

UInt32 GeoVolumeDistribution3DBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (VolumeFieldMask & whichField))
    {
        returnValue += _sfVolume.getBinSize();
    }

    return returnValue;
}

void GeoVolumeDistribution3DBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (VolumeFieldMask & whichField))
    {
        _sfVolume.copyToBin(pMem);
    }
}

void GeoVolumeDistribution3DBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (VolumeFieldMask & whichField))
    {
        _sfVolume.copyFromBin(pMem);
    }
}

//! create a new instance of the class
GeoVolumeDistribution3DTransitPtr GeoVolumeDistribution3DBase::createLocal(BitVector bFlags)
{
    GeoVolumeDistribution3DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<GeoVolumeDistribution3D>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
GeoVolumeDistribution3DTransitPtr GeoVolumeDistribution3DBase::createDependent(BitVector bFlags)
{
    GeoVolumeDistribution3DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<GeoVolumeDistribution3D>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
GeoVolumeDistribution3DTransitPtr GeoVolumeDistribution3DBase::create(void)
{
    GeoVolumeDistribution3DTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<GeoVolumeDistribution3D>(tmpPtr);
    }

    return fc;
}

GeoVolumeDistribution3D *GeoVolumeDistribution3DBase::createEmptyLocal(BitVector bFlags)
{
    GeoVolumeDistribution3D *returnValue;

    newPtr<GeoVolumeDistribution3D>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
GeoVolumeDistribution3D *GeoVolumeDistribution3DBase::createEmpty(void)
{
    GeoVolumeDistribution3D *returnValue;

    newPtr<GeoVolumeDistribution3D>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr GeoVolumeDistribution3DBase::shallowCopyLocal(
    BitVector bFlags) const
{
    GeoVolumeDistribution3D *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GeoVolumeDistribution3D *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr GeoVolumeDistribution3DBase::shallowCopyDependent(
    BitVector bFlags) const
{
    GeoVolumeDistribution3D *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const GeoVolumeDistribution3D *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr GeoVolumeDistribution3DBase::shallowCopy(void) const
{
    GeoVolumeDistribution3D *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const GeoVolumeDistribution3D *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

GeoVolumeDistribution3DBase::GeoVolumeDistribution3DBase(void) :
    Inherited(),
    _sfVolume                 (NULL)
{
}

GeoVolumeDistribution3DBase::GeoVolumeDistribution3DBase(const GeoVolumeDistribution3DBase &source) :
    Inherited(source),
    _sfVolume                 (NULL)
{
}


/*-------------------------- destructors ----------------------------------*/

GeoVolumeDistribution3DBase::~GeoVolumeDistribution3DBase(void)
{
}

void GeoVolumeDistribution3DBase::onCreate(const GeoVolumeDistribution3D *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        GeoVolumeDistribution3D *pThis = static_cast<GeoVolumeDistribution3D *>(this);

        pThis->setVolume(source->getVolume());
    }
}

GetFieldHandlePtr GeoVolumeDistribution3DBase::getHandleVolume          (void) const
{
    SFUnrecGeometryPtr::GetHandlePtr returnValue(
        new  SFUnrecGeometryPtr::GetHandle(
             &_sfVolume,
             this->getType().getFieldDesc(VolumeFieldId),
             const_cast<GeoVolumeDistribution3DBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr GeoVolumeDistribution3DBase::editHandleVolume         (void)
{
    SFUnrecGeometryPtr::EditHandlePtr returnValue(
        new  SFUnrecGeometryPtr::EditHandle(
             &_sfVolume,
             this->getType().getFieldDesc(VolumeFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&GeoVolumeDistribution3D::setVolume,
                    static_cast<GeoVolumeDistribution3D *>(this), _1));

    editSField(VolumeFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void GeoVolumeDistribution3DBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    GeoVolumeDistribution3D *pThis = static_cast<GeoVolumeDistribution3D *>(this);

    pThis->execSync(static_cast<GeoVolumeDistribution3D *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *GeoVolumeDistribution3DBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    GeoVolumeDistribution3D *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const GeoVolumeDistribution3D *>(pRefAspect),
                  dynamic_cast<const GeoVolumeDistribution3D *>(this));

    return returnValue;
}
#endif

void GeoVolumeDistribution3DBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<GeoVolumeDistribution3D *>(this)->setVolume(NULL);


}


OSG_END_NAMESPACE