/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), David Naylor               *
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
 **     class SkeletonBlendedGeometry!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGGeometry.h"                // BaseGeometry Class
#include "OSGJoint.h"                   // Joints Class
#include "OSGSkeleton.h"                // Skeletons Class

#include "OSGSkeletonBlendedGeometryBase.h"
#include "OSGSkeletonBlendedGeometry.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SkeletonBlendedGeometry
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Geometry *      SkeletonBlendedGeometryBase::_sfBaseGeometry
    
*/

/*! \var Joint *         SkeletonBlendedGeometryBase::_mfJoints
    
*/

/*! \var UInt32          SkeletonBlendedGeometryBase::_mfPositionIndexes
    
*/

/*! \var Real32          SkeletonBlendedGeometryBase::_mfBlendAmounts
    
*/

/*! \var Skeleton *      SkeletonBlendedGeometryBase::_mfSkeletons
    
*/

/*! \var UInt32          SkeletonBlendedGeometryBase::_sfBlendMode
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SkeletonBlendedGeometry *>::_type("SkeletonBlendedGeometryPtr", "GeometryPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SkeletonBlendedGeometry *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           SkeletonBlendedGeometry *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           SkeletonBlendedGeometry *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void SkeletonBlendedGeometryBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecGeometryPtr::Description(
        SFUnrecGeometryPtr::getClassType(),
        "BaseGeometry",
        "",
        BaseGeometryFieldId, BaseGeometryFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonBlendedGeometry::editHandleBaseGeometry),
        static_cast<FieldGetMethodSig >(&SkeletonBlendedGeometry::getHandleBaseGeometry));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecJointPtr::Description(
        MFUnrecJointPtr::getClassType(),
        "Joints",
        "",
        JointsFieldId, JointsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonBlendedGeometry::editHandleJoints),
        static_cast<FieldGetMethodSig >(&SkeletonBlendedGeometry::getHandleJoints));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUInt32::Description(
        MFUInt32::getClassType(),
        "PositionIndexes",
        "",
        PositionIndexesFieldId, PositionIndexesFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonBlendedGeometry::editHandlePositionIndexes),
        static_cast<FieldGetMethodSig >(&SkeletonBlendedGeometry::getHandlePositionIndexes));

    oType.addInitialDesc(pDesc);

    pDesc = new MFReal32::Description(
        MFReal32::getClassType(),
        "BlendAmounts",
        "",
        BlendAmountsFieldId, BlendAmountsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonBlendedGeometry::editHandleBlendAmounts),
        static_cast<FieldGetMethodSig >(&SkeletonBlendedGeometry::getHandleBlendAmounts));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUnrecSkeletonPtr::Description(
        MFUnrecSkeletonPtr::getClassType(),
        "Skeletons",
        "",
        SkeletonsFieldId, SkeletonsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonBlendedGeometry::editHandleSkeletons),
        static_cast<FieldGetMethodSig >(&SkeletonBlendedGeometry::getHandleSkeletons));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "BlendMode",
        "",
        BlendModeFieldId, BlendModeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&SkeletonBlendedGeometry::editHandleBlendMode),
        static_cast<FieldGetMethodSig >(&SkeletonBlendedGeometry::getHandleBlendMode));

    oType.addInitialDesc(pDesc);
}


SkeletonBlendedGeometryBase::TypeObject SkeletonBlendedGeometryBase::_type(
    SkeletonBlendedGeometryBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&SkeletonBlendedGeometryBase::createEmptyLocal),
    SkeletonBlendedGeometry::initMethod,
    SkeletonBlendedGeometry::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&SkeletonBlendedGeometry::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SkeletonBlendedGeometry\"\n"
    "\tparent=\"Geometry\"\n"
    "    library=\"TBAnimation\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com), David Naylor               \"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"BaseGeometry\"\n"
    "\t\ttype=\"Geometry\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Joints\"\n"
    "\t\ttype=\"Joint\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"PositionIndexes\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"BlendAmounts\"\n"
    "\t\ttype=\"Real32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"Skeletons\"\n"
    "\t\ttype=\"Skeleton\"\n"
    "        category=\"pointer\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"BlendMode\"\n"
    "\t\ttype=\"UInt32\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SkeletonBlendedGeometryBase::getType(void)
{
    return _type;
}

const FieldContainerType &SkeletonBlendedGeometryBase::getType(void) const
{
    return _type;
}

UInt32 SkeletonBlendedGeometryBase::getContainerSize(void) const
{
    return sizeof(SkeletonBlendedGeometry);
}

/*------------------------- decorator get ------------------------------*/


//! Get the SkeletonBlendedGeometry::_sfBaseGeometry field.
const SFUnrecGeometryPtr *SkeletonBlendedGeometryBase::getSFBaseGeometry(void) const
{
    return &_sfBaseGeometry;
}

SFUnrecGeometryPtr  *SkeletonBlendedGeometryBase::editSFBaseGeometry   (void)
{
    editSField(BaseGeometryFieldMask);

    return &_sfBaseGeometry;
}

//! Get the SkeletonBlendedGeometry::_mfJoints field.
const MFUnrecJointPtr *SkeletonBlendedGeometryBase::getMFJoints(void) const
{
    return &_mfJoints;
}

MFUnrecJointPtr     *SkeletonBlendedGeometryBase::editMFJoints         (void)
{
    editMField(JointsFieldMask, _mfJoints);

    return &_mfJoints;
}

MFUInt32 *SkeletonBlendedGeometryBase::editMFPositionIndexes(void)
{
    editMField(PositionIndexesFieldMask, _mfPositionIndexes);

    return &_mfPositionIndexes;
}

const MFUInt32 *SkeletonBlendedGeometryBase::getMFPositionIndexes(void) const
{
    return &_mfPositionIndexes;
}


MFReal32 *SkeletonBlendedGeometryBase::editMFBlendAmounts(void)
{
    editMField(BlendAmountsFieldMask, _mfBlendAmounts);

    return &_mfBlendAmounts;
}

const MFReal32 *SkeletonBlendedGeometryBase::getMFBlendAmounts(void) const
{
    return &_mfBlendAmounts;
}


//! Get the SkeletonBlendedGeometry::_mfSkeletons field.
const MFUnrecSkeletonPtr *SkeletonBlendedGeometryBase::getMFSkeletons(void) const
{
    return &_mfSkeletons;
}

MFUnrecSkeletonPtr  *SkeletonBlendedGeometryBase::editMFSkeletons      (void)
{
    editMField(SkeletonsFieldMask, _mfSkeletons);

    return &_mfSkeletons;
}

SFUInt32 *SkeletonBlendedGeometryBase::editSFBlendMode(void)
{
    editSField(BlendModeFieldMask);

    return &_sfBlendMode;
}

const SFUInt32 *SkeletonBlendedGeometryBase::getSFBlendMode(void) const
{
    return &_sfBlendMode;
}




void SkeletonBlendedGeometryBase::pushToJoints(Joint * const value)
{
    editMField(JointsFieldMask, _mfJoints);

    _mfJoints.push_back(value);
}

void SkeletonBlendedGeometryBase::assignJoints   (const MFUnrecJointPtr   &value)
{
    MFUnrecJointPtr  ::const_iterator elemIt  =
        value.begin();
    MFUnrecJointPtr  ::const_iterator elemEnd =
        value.end  ();

    static_cast<SkeletonBlendedGeometry *>(this)->clearJoints();

    while(elemIt != elemEnd)
    {
        this->pushToJoints(*elemIt);

        ++elemIt;
    }
}

void SkeletonBlendedGeometryBase::removeFromJoints(UInt32 uiIndex)
{
    if(uiIndex < _mfJoints.size())
    {
        editMField(JointsFieldMask, _mfJoints);

        _mfJoints.erase(uiIndex);
    }
}

void SkeletonBlendedGeometryBase::removeObjFromJoints(Joint * const value)
{
    Int32 iElemIdx = _mfJoints.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(JointsFieldMask, _mfJoints);

        _mfJoints.erase(iElemIdx);
    }
}
void SkeletonBlendedGeometryBase::clearJoints(void)
{
    editMField(JointsFieldMask, _mfJoints);


    _mfJoints.clear();
}

void SkeletonBlendedGeometryBase::pushToSkeletons(Skeleton * const value)
{
    editMField(SkeletonsFieldMask, _mfSkeletons);

    _mfSkeletons.push_back(value);
}

void SkeletonBlendedGeometryBase::assignSkeletons(const MFUnrecSkeletonPtr &value)
{
    MFUnrecSkeletonPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecSkeletonPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<SkeletonBlendedGeometry *>(this)->clearSkeletons();

    while(elemIt != elemEnd)
    {
        this->pushToSkeletons(*elemIt);

        ++elemIt;
    }
}

void SkeletonBlendedGeometryBase::removeFromSkeletons(UInt32 uiIndex)
{
    if(uiIndex < _mfSkeletons.size())
    {
        editMField(SkeletonsFieldMask, _mfSkeletons);

        _mfSkeletons.erase(uiIndex);
    }
}

void SkeletonBlendedGeometryBase::removeObjFromSkeletons(Skeleton * const value)
{
    Int32 iElemIdx = _mfSkeletons.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(SkeletonsFieldMask, _mfSkeletons);

        _mfSkeletons.erase(iElemIdx);
    }
}
void SkeletonBlendedGeometryBase::clearSkeletons(void)
{
    editMField(SkeletonsFieldMask, _mfSkeletons);


    _mfSkeletons.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 SkeletonBlendedGeometryBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (BaseGeometryFieldMask & whichField))
    {
        returnValue += _sfBaseGeometry.getBinSize();
    }
    if(FieldBits::NoField != (JointsFieldMask & whichField))
    {
        returnValue += _mfJoints.getBinSize();
    }
    if(FieldBits::NoField != (PositionIndexesFieldMask & whichField))
    {
        returnValue += _mfPositionIndexes.getBinSize();
    }
    if(FieldBits::NoField != (BlendAmountsFieldMask & whichField))
    {
        returnValue += _mfBlendAmounts.getBinSize();
    }
    if(FieldBits::NoField != (SkeletonsFieldMask & whichField))
    {
        returnValue += _mfSkeletons.getBinSize();
    }
    if(FieldBits::NoField != (BlendModeFieldMask & whichField))
    {
        returnValue += _sfBlendMode.getBinSize();
    }

    return returnValue;
}

void SkeletonBlendedGeometryBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (BaseGeometryFieldMask & whichField))
    {
        _sfBaseGeometry.copyToBin(pMem);
    }
    if(FieldBits::NoField != (JointsFieldMask & whichField))
    {
        _mfJoints.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PositionIndexesFieldMask & whichField))
    {
        _mfPositionIndexes.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BlendAmountsFieldMask & whichField))
    {
        _mfBlendAmounts.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SkeletonsFieldMask & whichField))
    {
        _mfSkeletons.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BlendModeFieldMask & whichField))
    {
        _sfBlendMode.copyToBin(pMem);
    }
}

void SkeletonBlendedGeometryBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (BaseGeometryFieldMask & whichField))
    {
        _sfBaseGeometry.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (JointsFieldMask & whichField))
    {
        _mfJoints.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PositionIndexesFieldMask & whichField))
    {
        _mfPositionIndexes.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BlendAmountsFieldMask & whichField))
    {
        _mfBlendAmounts.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SkeletonsFieldMask & whichField))
    {
        _mfSkeletons.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BlendModeFieldMask & whichField))
    {
        _sfBlendMode.copyFromBin(pMem);
    }
}

//! create a new instance of the class
SkeletonBlendedGeometryTransitPtr SkeletonBlendedGeometryBase::createLocal(BitVector bFlags)
{
    SkeletonBlendedGeometryTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<SkeletonBlendedGeometry>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
SkeletonBlendedGeometryTransitPtr SkeletonBlendedGeometryBase::createDependent(BitVector bFlags)
{
    SkeletonBlendedGeometryTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<SkeletonBlendedGeometry>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
SkeletonBlendedGeometryTransitPtr SkeletonBlendedGeometryBase::create(void)
{
    SkeletonBlendedGeometryTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<SkeletonBlendedGeometry>(tmpPtr);
    }

    return fc;
}

SkeletonBlendedGeometry *SkeletonBlendedGeometryBase::createEmptyLocal(BitVector bFlags)
{
    SkeletonBlendedGeometry *returnValue;

    newPtr<SkeletonBlendedGeometry>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
SkeletonBlendedGeometry *SkeletonBlendedGeometryBase::createEmpty(void)
{
    SkeletonBlendedGeometry *returnValue;

    newPtr<SkeletonBlendedGeometry>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr SkeletonBlendedGeometryBase::shallowCopyLocal(
    BitVector bFlags) const
{
    SkeletonBlendedGeometry *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SkeletonBlendedGeometry *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr SkeletonBlendedGeometryBase::shallowCopyDependent(
    BitVector bFlags) const
{
    SkeletonBlendedGeometry *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const SkeletonBlendedGeometry *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr SkeletonBlendedGeometryBase::shallowCopy(void) const
{
    SkeletonBlendedGeometry *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const SkeletonBlendedGeometry *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

SkeletonBlendedGeometryBase::SkeletonBlendedGeometryBase(void) :
    Inherited(),
    _sfBaseGeometry           (NULL),
    _mfJoints                 (),
    _mfPositionIndexes        (),
    _mfBlendAmounts           (),
    _mfSkeletons              (),
    _sfBlendMode              ()
{
}

SkeletonBlendedGeometryBase::SkeletonBlendedGeometryBase(const SkeletonBlendedGeometryBase &source) :
    Inherited(source),
    _sfBaseGeometry           (NULL),
    _mfJoints                 (),
    _mfPositionIndexes        (source._mfPositionIndexes        ),
    _mfBlendAmounts           (source._mfBlendAmounts           ),
    _mfSkeletons              (),
    _sfBlendMode              (source._sfBlendMode              )
{
}


/*-------------------------- destructors ----------------------------------*/

SkeletonBlendedGeometryBase::~SkeletonBlendedGeometryBase(void)
{
}

void SkeletonBlendedGeometryBase::onCreate(const SkeletonBlendedGeometry *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        SkeletonBlendedGeometry *pThis = static_cast<SkeletonBlendedGeometry *>(this);

        pThis->setBaseGeometry(source->getBaseGeometry());

        MFUnrecJointPtr::const_iterator JointsIt  =
            source->_mfJoints.begin();
        MFUnrecJointPtr::const_iterator JointsEnd =
            source->_mfJoints.end  ();

        while(JointsIt != JointsEnd)
        {
            pThis->pushToJoints(*JointsIt);

            ++JointsIt;
        }

        MFUnrecSkeletonPtr::const_iterator SkeletonsIt  =
            source->_mfSkeletons.begin();
        MFUnrecSkeletonPtr::const_iterator SkeletonsEnd =
            source->_mfSkeletons.end  ();

        while(SkeletonsIt != SkeletonsEnd)
        {
            pThis->pushToSkeletons(*SkeletonsIt);

            ++SkeletonsIt;
        }
    }
}

GetFieldHandlePtr SkeletonBlendedGeometryBase::getHandleBaseGeometry    (void) const
{
    SFUnrecGeometryPtr::GetHandlePtr returnValue(
        new  SFUnrecGeometryPtr::GetHandle(
             &_sfBaseGeometry,
             this->getType().getFieldDesc(BaseGeometryFieldId),
             const_cast<SkeletonBlendedGeometryBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonBlendedGeometryBase::editHandleBaseGeometry   (void)
{
    SFUnrecGeometryPtr::EditHandlePtr returnValue(
        new  SFUnrecGeometryPtr::EditHandle(
             &_sfBaseGeometry,
             this->getType().getFieldDesc(BaseGeometryFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&SkeletonBlendedGeometry::setBaseGeometry,
                    static_cast<SkeletonBlendedGeometry *>(this), _1));

    editSField(BaseGeometryFieldMask);

    return returnValue;
}

GetFieldHandlePtr SkeletonBlendedGeometryBase::getHandleJoints          (void) const
{
    MFUnrecJointPtr::GetHandlePtr returnValue(
        new  MFUnrecJointPtr::GetHandle(
             &_mfJoints,
             this->getType().getFieldDesc(JointsFieldId),
             const_cast<SkeletonBlendedGeometryBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonBlendedGeometryBase::editHandleJoints         (void)
{
    MFUnrecJointPtr::EditHandlePtr returnValue(
        new  MFUnrecJointPtr::EditHandle(
             &_mfJoints,
             this->getType().getFieldDesc(JointsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&SkeletonBlendedGeometry::pushToJoints,
                    static_cast<SkeletonBlendedGeometry *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&SkeletonBlendedGeometry::removeFromJoints,
                    static_cast<SkeletonBlendedGeometry *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&SkeletonBlendedGeometry::removeObjFromJoints,
                    static_cast<SkeletonBlendedGeometry *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&SkeletonBlendedGeometry::clearJoints,
                    static_cast<SkeletonBlendedGeometry *>(this)));

    editMField(JointsFieldMask, _mfJoints);

    return returnValue;
}

GetFieldHandlePtr SkeletonBlendedGeometryBase::getHandlePositionIndexes (void) const
{
    MFUInt32::GetHandlePtr returnValue(
        new  MFUInt32::GetHandle(
             &_mfPositionIndexes,
             this->getType().getFieldDesc(PositionIndexesFieldId),
             const_cast<SkeletonBlendedGeometryBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonBlendedGeometryBase::editHandlePositionIndexes(void)
{
    MFUInt32::EditHandlePtr returnValue(
        new  MFUInt32::EditHandle(
             &_mfPositionIndexes,
             this->getType().getFieldDesc(PositionIndexesFieldId),
             this));


    editMField(PositionIndexesFieldMask, _mfPositionIndexes);

    return returnValue;
}

GetFieldHandlePtr SkeletonBlendedGeometryBase::getHandleBlendAmounts    (void) const
{
    MFReal32::GetHandlePtr returnValue(
        new  MFReal32::GetHandle(
             &_mfBlendAmounts,
             this->getType().getFieldDesc(BlendAmountsFieldId),
             const_cast<SkeletonBlendedGeometryBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonBlendedGeometryBase::editHandleBlendAmounts   (void)
{
    MFReal32::EditHandlePtr returnValue(
        new  MFReal32::EditHandle(
             &_mfBlendAmounts,
             this->getType().getFieldDesc(BlendAmountsFieldId),
             this));


    editMField(BlendAmountsFieldMask, _mfBlendAmounts);

    return returnValue;
}

GetFieldHandlePtr SkeletonBlendedGeometryBase::getHandleSkeletons       (void) const
{
    MFUnrecSkeletonPtr::GetHandlePtr returnValue(
        new  MFUnrecSkeletonPtr::GetHandle(
             &_mfSkeletons,
             this->getType().getFieldDesc(SkeletonsFieldId),
             const_cast<SkeletonBlendedGeometryBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonBlendedGeometryBase::editHandleSkeletons      (void)
{
    MFUnrecSkeletonPtr::EditHandlePtr returnValue(
        new  MFUnrecSkeletonPtr::EditHandle(
             &_mfSkeletons,
             this->getType().getFieldDesc(SkeletonsFieldId),
             this));

    returnValue->setAddMethod(
        boost::bind(&SkeletonBlendedGeometry::pushToSkeletons,
                    static_cast<SkeletonBlendedGeometry *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&SkeletonBlendedGeometry::removeFromSkeletons,
                    static_cast<SkeletonBlendedGeometry *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&SkeletonBlendedGeometry::removeObjFromSkeletons,
                    static_cast<SkeletonBlendedGeometry *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&SkeletonBlendedGeometry::clearSkeletons,
                    static_cast<SkeletonBlendedGeometry *>(this)));

    editMField(SkeletonsFieldMask, _mfSkeletons);

    return returnValue;
}

GetFieldHandlePtr SkeletonBlendedGeometryBase::getHandleBlendMode       (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfBlendMode,
             this->getType().getFieldDesc(BlendModeFieldId),
             const_cast<SkeletonBlendedGeometryBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr SkeletonBlendedGeometryBase::editHandleBlendMode      (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfBlendMode,
             this->getType().getFieldDesc(BlendModeFieldId),
             this));


    editSField(BlendModeFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void SkeletonBlendedGeometryBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    SkeletonBlendedGeometry *pThis = static_cast<SkeletonBlendedGeometry *>(this);

    pThis->execSync(static_cast<SkeletonBlendedGeometry *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *SkeletonBlendedGeometryBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    SkeletonBlendedGeometry *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SkeletonBlendedGeometry *>(pRefAspect),
                  dynamic_cast<const SkeletonBlendedGeometry *>(this));

    return returnValue;
}
#endif

void SkeletonBlendedGeometryBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<SkeletonBlendedGeometry *>(this)->setBaseGeometry(NULL);

    static_cast<SkeletonBlendedGeometry *>(this)->clearJoints();

    static_cast<SkeletonBlendedGeometry *>(this)->clearSkeletons();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfPositionIndexes.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfBlendAmounts.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


OSG_END_NAMESPACE
