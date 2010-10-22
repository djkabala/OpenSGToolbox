/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com), Daniel Guilliams           *
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
 **     class ParticleAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGParticleAffectorBase.h"
#include "OSGParticleAffector.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ParticleAffector
    
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var bool            ParticleAffectorBase::_sfActive
    If true then this Affector will be applied.
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ParticleAffector *>::_type("ParticleAffectorPtr", "AttachmentContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ParticleAffector *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           ParticleAffector *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           ParticleAffector *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void ParticleAffectorBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "Active",
        "If true then this Affector will be applied.\n",
        ActiveFieldId, ActiveFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ParticleAffector::editHandleActive),
        static_cast<FieldGetMethodSig >(&ParticleAffector::getHandleActive));

    oType.addInitialDesc(pDesc);
}


ParticleAffectorBase::TypeObject ParticleAffectorBase::_type(
    ParticleAffectorBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    ParticleAffector::initMethod,
    ParticleAffector::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ParticleAffector::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ParticleAffector\"\n"
    "\tparent=\"AttachmentContainer\"\n"
    "    library=\"ContribParticleSystem\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com), Daniel Guilliams           \"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"Active\"\n"
    "\t\ttype=\"bool\"\n"
    "        category=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"true\"\n"
    "\t>\n"
    "\tIf true then this Affector will be applied.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ParticleAffectorBase::getType(void)
{
    return _type;
}

const FieldContainerType &ParticleAffectorBase::getType(void) const
{
    return _type;
}

UInt32 ParticleAffectorBase::getContainerSize(void) const
{
    return sizeof(ParticleAffector);
}

/*------------------------- decorator get ------------------------------*/


SFBool *ParticleAffectorBase::editSFActive(void)
{
    editSField(ActiveFieldMask);

    return &_sfActive;
}

const SFBool *ParticleAffectorBase::getSFActive(void) const
{
    return &_sfActive;
}






/*------------------------------ access -----------------------------------*/

UInt32 ParticleAffectorBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ActiveFieldMask & whichField))
    {
        returnValue += _sfActive.getBinSize();
    }

    return returnValue;
}

void ParticleAffectorBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ActiveFieldMask & whichField))
    {
        _sfActive.copyToBin(pMem);
    }
}

void ParticleAffectorBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ActiveFieldMask & whichField))
    {
        _sfActive.copyFromBin(pMem);
    }
}



/*------------------------- constructors ----------------------------------*/

ParticleAffectorBase::ParticleAffectorBase(void) :
    Inherited(),
    _sfActive                 (bool(true))
{
}

ParticleAffectorBase::ParticleAffectorBase(const ParticleAffectorBase &source) :
    Inherited(source),
    _sfActive                 (source._sfActive                 )
{
}


/*-------------------------- destructors ----------------------------------*/

ParticleAffectorBase::~ParticleAffectorBase(void)
{
}


GetFieldHandlePtr ParticleAffectorBase::getHandleActive          (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfActive,
             this->getType().getFieldDesc(ActiveFieldId),
             const_cast<ParticleAffectorBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr ParticleAffectorBase::editHandleActive         (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfActive,
             this->getType().getFieldDesc(ActiveFieldId),
             this));


    editSField(ActiveFieldMask);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void ParticleAffectorBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    ParticleAffector *pThis = static_cast<ParticleAffector *>(this);

    pThis->execSync(static_cast<ParticleAffector *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void ParticleAffectorBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
