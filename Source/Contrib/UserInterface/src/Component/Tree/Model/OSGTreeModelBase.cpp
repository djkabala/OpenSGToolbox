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
 **     class TreeModel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"




#include "OSGTreeModelBase.h"
#include "OSGTreeModel.h"

#include <boost/bind.hpp>

#include "OSGEvent.h"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TreeModel
    A UI TreeModel.
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TreeModel *>::_type("TreeModelPtr", "FieldContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TreeModel *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TreeModel *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TreeModel *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TreeModelBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;

    pDesc = new SFEventProducerPtr::Description(
        SFEventProducerPtr::getClassType(),
        "EventProducer",
        "Event Producer",
        EventProducerFieldId,EventProducerFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&TreeModel::invalidEditField),
        static_cast     <FieldGetMethodSig >(&TreeModel::invalidGetField));

    oType.addInitialDesc(pDesc);
}


TreeModelBase::TypeObject TreeModelBase::_type(
    TreeModelBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    TreeModel::initMethod,
    TreeModel::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TreeModel::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TreeModel\"\n"
    "\tparent=\"FieldContainer\"\n"
    "    library=\"ContribUserInterface\"\n"
    "    pointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    authors=\"David Kabala (djkabala@gmail.com)                             \"\n"
    ">\n"
    "A UI TreeModel.\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"TreeNodesChanged\"\n"
    "\t\ttype=\"TreeModelEventPtr\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"TreeNodesInserted\"\n"
    "\t\ttype=\"TreeModelEventPtr\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"TreeNodesRemoved\"\n"
    "\t\ttype=\"TreeModelEventPtr\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"TreeNodesWillBeRemoved\"\n"
    "\t\ttype=\"TreeModelEventPtr\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "\t<ProducedMethod\n"
    "\t\tname=\"TreeStructureChanged\"\n"
    "\t\ttype=\"TreeModelEventPtr\"\n"
    "\t>\n"
    "\t</ProducedMethod>\n"
    "</FieldContainer>\n",
    "A UI TreeModel.\n"
    );

//! TreeModel Produced Methods

MethodDescription *TreeModelBase::_methodDesc[] =
{
    new MethodDescription("TreeNodesChanged", 
                    "",
                     TreeNodesChangedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("TreeNodesInserted", 
                    "",
                     TreeNodesInsertedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("TreeNodesRemoved", 
                    "",
                     TreeNodesRemovedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("TreeNodesWillBeRemoved", 
                    "",
                     TreeNodesWillBeRemovedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod()),
    new MethodDescription("TreeStructureChanged", 
                    "",
                     TreeStructureChangedMethodId, 
                     SFUnrecEventPtr::getClassType(),
                     FunctorAccessMethod())
};

EventProducerType TreeModelBase::_producerType(
    "TreeModelProducerType",
    "EventProducerType",
    "",
    InitEventProducerFunctor(),
    _methodDesc,
    sizeof(_methodDesc));

/*------------------------------ get -----------------------------------*/

FieldContainerType &TreeModelBase::getType(void)
{
    return _type;
}

const FieldContainerType &TreeModelBase::getType(void) const
{
    return _type;
}

const EventProducerType &TreeModelBase::getProducerType(void) const
{
    return _producerType;
}

UInt32 TreeModelBase::getContainerSize(void) const
{
    return sizeof(TreeModel);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 TreeModelBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        returnValue += _sfEventProducer.getBinSize();
    }

    return returnValue;
}

void TreeModelBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyToBin(pMem);
    }
}

void TreeModelBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EventProducerFieldMask & whichField))
    {
        _sfEventProducer.copyFromBin(pMem);
    }
}




/*------------------------- constructors ----------------------------------*/

TreeModelBase::TreeModelBase(void) :
    _Producer(&getProducerType()),
    Inherited(),
    _sfEventProducer(&_Producer)
{
}

TreeModelBase::TreeModelBase(const TreeModelBase &source) :
    _Producer(&source.getProducerType()),
    Inherited(source),
    _sfEventProducer(&_Producer)
{
}


/*-------------------------- destructors ----------------------------------*/

TreeModelBase::~TreeModelBase(void)
{
}



#ifdef OSG_MT_CPTR_ASPECT
void TreeModelBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TreeModel *pThis = static_cast<TreeModel *>(this);

    pThis->execSync(static_cast<TreeModel *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void TreeModelBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


OSG_END_NAMESPACE
