/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox Particle System                        *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
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
 **     class CollectiveGravityParticleSystemAffector!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECOLLECTIVEGRAVITYPARTICLESYSTEMAFFECTORINST

#include <stdlib.h>
#include <stdio.h>

#include <OpenSG/OSGConfig.h>

#include "OSGCollectiveGravityParticleSystemAffectorBase.h"
#include "OSGCollectiveGravityParticleSystemAffector.h"


OSG_BEGIN_NAMESPACE

const OSG::BitVector  CollectiveGravityParticleSystemAffectorBase::ParticleMassFieldMask = 
    (TypeTraits<BitVector>::One << CollectiveGravityParticleSystemAffectorBase::ParticleMassFieldId);

const OSG::BitVector  CollectiveGravityParticleSystemAffectorBase::GravitationalConstantFieldMask = 
    (TypeTraits<BitVector>::One << CollectiveGravityParticleSystemAffectorBase::GravitationalConstantFieldId);

const OSG::BitVector  CollectiveGravityParticleSystemAffectorBase::ParticleMassSourceFieldMask = 
    (TypeTraits<BitVector>::One << CollectiveGravityParticleSystemAffectorBase::ParticleMassSourceFieldId);

const OSG::BitVector CollectiveGravityParticleSystemAffectorBase::MTInfluenceMask = 
    (Inherited::MTInfluenceMask) | 
    (static_cast<BitVector>(0x0) << Inherited::NextFieldId); 


// Field descriptions

/*! \var Real32          CollectiveGravityParticleSystemAffectorBase::_sfParticleMass
    
*/
/*! \var Real32          CollectiveGravityParticleSystemAffectorBase::_sfGravitationalConstant
    
*/
/*! \var UInt32          CollectiveGravityParticleSystemAffectorBase::_sfParticleMassSource
    
*/

//! CollectiveGravityParticleSystemAffector description

FieldDescription *CollectiveGravityParticleSystemAffectorBase::_desc[] = 
{
    new FieldDescription(SFReal32::getClassType(), 
                     "ParticleMass", 
                     ParticleMassFieldId, ParticleMassFieldMask,
                     false,
                     (FieldAccessMethod) &CollectiveGravityParticleSystemAffectorBase::getSFParticleMass),
    new FieldDescription(SFReal32::getClassType(), 
                     "GravitationalConstant", 
                     GravitationalConstantFieldId, GravitationalConstantFieldMask,
                     false,
                     (FieldAccessMethod) &CollectiveGravityParticleSystemAffectorBase::getSFGravitationalConstant),
    new FieldDescription(SFUInt32::getClassType(), 
                     "ParticleMassSource", 
                     ParticleMassSourceFieldId, ParticleMassSourceFieldMask,
                     false,
                     (FieldAccessMethod) &CollectiveGravityParticleSystemAffectorBase::getSFParticleMassSource)
};


FieldContainerType CollectiveGravityParticleSystemAffectorBase::_type(
    "CollectiveGravityParticleSystemAffector",
    "ParticleSystemAffector",
    NULL,
    (PrototypeCreateF) &CollectiveGravityParticleSystemAffectorBase::createEmpty,
    CollectiveGravityParticleSystemAffector::initMethod,
    _desc,
    sizeof(_desc));

//OSG_FIELD_CONTAINER_DEF(CollectiveGravityParticleSystemAffectorBase, CollectiveGravityParticleSystemAffectorPtr)

/*------------------------------ get -----------------------------------*/

FieldContainerType &CollectiveGravityParticleSystemAffectorBase::getType(void) 
{
    return _type; 
} 

const FieldContainerType &CollectiveGravityParticleSystemAffectorBase::getType(void) const 
{
    return _type;
} 


FieldContainerPtr CollectiveGravityParticleSystemAffectorBase::shallowCopy(void) const 
{ 
    CollectiveGravityParticleSystemAffectorPtr returnValue; 

    newPtr(returnValue, dynamic_cast<const CollectiveGravityParticleSystemAffector *>(this)); 

    return returnValue; 
}

UInt32 CollectiveGravityParticleSystemAffectorBase::getContainerSize(void) const 
{ 
    return sizeof(CollectiveGravityParticleSystemAffector); 
}


#if !defined(OSG_FIXED_MFIELDSYNC)
void CollectiveGravityParticleSystemAffectorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField)
{
    this->executeSyncImpl((CollectiveGravityParticleSystemAffectorBase *) &other, whichField);
}
#else
void CollectiveGravityParticleSystemAffectorBase::executeSync(      FieldContainer &other,
                                    const BitVector      &whichField,                                    const SyncInfo       &sInfo     )
{
    this->executeSyncImpl((CollectiveGravityParticleSystemAffectorBase *) &other, whichField, sInfo);
}
void CollectiveGravityParticleSystemAffectorBase::execBeginEdit(const BitVector &whichField, 
                                            UInt32     uiAspect,
                                            UInt32     uiContainerSize) 
{
    this->execBeginEditImpl(whichField, uiAspect, uiContainerSize);
}

void CollectiveGravityParticleSystemAffectorBase::onDestroyAspect(UInt32 uiId, UInt32 uiAspect)
{
    Inherited::onDestroyAspect(uiId, uiAspect);

}
#endif

/*------------------------- constructors ----------------------------------*/

#ifdef OSG_WIN32_ICL
#pragma warning (disable : 383)
#endif

CollectiveGravityParticleSystemAffectorBase::CollectiveGravityParticleSystemAffectorBase(void) :
    _sfParticleMass           (Real32(10000.0f)), 
    _sfGravitationalConstant  (Real32(0.0000000000667300)), 
    _sfParticleMassSource     (UInt32(CollectiveGravityParticleSystemAffector::MASS_STATIC)), 
    Inherited() 
{
}

#ifdef OSG_WIN32_ICL
#pragma warning (default : 383)
#endif

CollectiveGravityParticleSystemAffectorBase::CollectiveGravityParticleSystemAffectorBase(const CollectiveGravityParticleSystemAffectorBase &source) :
    _sfParticleMass           (source._sfParticleMass           ), 
    _sfGravitationalConstant  (source._sfGravitationalConstant  ), 
    _sfParticleMassSource     (source._sfParticleMassSource     ), 
    Inherited                 (source)
{
}

/*-------------------------- destructors ----------------------------------*/

CollectiveGravityParticleSystemAffectorBase::~CollectiveGravityParticleSystemAffectorBase(void)
{
}

/*------------------------------ access -----------------------------------*/

UInt32 CollectiveGravityParticleSystemAffectorBase::getBinSize(const BitVector &whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ParticleMassFieldMask & whichField))
    {
        returnValue += _sfParticleMass.getBinSize();
    }

    if(FieldBits::NoField != (GravitationalConstantFieldMask & whichField))
    {
        returnValue += _sfGravitationalConstant.getBinSize();
    }

    if(FieldBits::NoField != (ParticleMassSourceFieldMask & whichField))
    {
        returnValue += _sfParticleMassSource.getBinSize();
    }


    return returnValue;
}

void CollectiveGravityParticleSystemAffectorBase::copyToBin(      BinaryDataHandler &pMem,
                                  const BitVector         &whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ParticleMassFieldMask & whichField))
    {
        _sfParticleMass.copyToBin(pMem);
    }

    if(FieldBits::NoField != (GravitationalConstantFieldMask & whichField))
    {
        _sfGravitationalConstant.copyToBin(pMem);
    }

    if(FieldBits::NoField != (ParticleMassSourceFieldMask & whichField))
    {
        _sfParticleMassSource.copyToBin(pMem);
    }


}

void CollectiveGravityParticleSystemAffectorBase::copyFromBin(      BinaryDataHandler &pMem,
                                    const BitVector    &whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ParticleMassFieldMask & whichField))
    {
        _sfParticleMass.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (GravitationalConstantFieldMask & whichField))
    {
        _sfGravitationalConstant.copyFromBin(pMem);
    }

    if(FieldBits::NoField != (ParticleMassSourceFieldMask & whichField))
    {
        _sfParticleMassSource.copyFromBin(pMem);
    }


}

#if !defined(OSG_FIXED_MFIELDSYNC)
void CollectiveGravityParticleSystemAffectorBase::executeSyncImpl(      CollectiveGravityParticleSystemAffectorBase *pOther,
                                        const BitVector         &whichField)
{

    Inherited::executeSyncImpl(pOther, whichField);

    if(FieldBits::NoField != (ParticleMassFieldMask & whichField))
        _sfParticleMass.syncWith(pOther->_sfParticleMass);

    if(FieldBits::NoField != (GravitationalConstantFieldMask & whichField))
        _sfGravitationalConstant.syncWith(pOther->_sfGravitationalConstant);

    if(FieldBits::NoField != (ParticleMassSourceFieldMask & whichField))
        _sfParticleMassSource.syncWith(pOther->_sfParticleMassSource);


}
#else
void CollectiveGravityParticleSystemAffectorBase::executeSyncImpl(      CollectiveGravityParticleSystemAffectorBase *pOther,
                                        const BitVector         &whichField,
                                        const SyncInfo          &sInfo      )
{

    Inherited::executeSyncImpl(pOther, whichField, sInfo);

    if(FieldBits::NoField != (ParticleMassFieldMask & whichField))
        _sfParticleMass.syncWith(pOther->_sfParticleMass);

    if(FieldBits::NoField != (GravitationalConstantFieldMask & whichField))
        _sfGravitationalConstant.syncWith(pOther->_sfGravitationalConstant);

    if(FieldBits::NoField != (ParticleMassSourceFieldMask & whichField))
        _sfParticleMassSource.syncWith(pOther->_sfParticleMassSource);



}

void CollectiveGravityParticleSystemAffectorBase::execBeginEditImpl (const BitVector &whichField, 
                                                 UInt32     uiAspect,
                                                 UInt32     uiContainerSize)
{
    Inherited::execBeginEditImpl(whichField, uiAspect, uiContainerSize);

}
#endif



OSG_END_NAMESPACE

#include <OpenSG/OSGSFieldTypeDef.inl>
#include <OpenSG/OSGMFieldTypeDef.inl>

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldDataTraits<CollectiveGravityParticleSystemAffectorPtr>::_type("CollectiveGravityParticleSystemAffectorPtr", "ParticleSystemAffectorPtr");
#endif

OSG_DLLEXPORT_SFIELD_DEF1(CollectiveGravityParticleSystemAffectorPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);
OSG_DLLEXPORT_MFIELD_DEF1(CollectiveGravityParticleSystemAffectorPtr, OSG_PARTICLESYSTEMLIB_DLLTMPLMAPPING);


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id: FCBaseTemplate_cpp.h,v 1.47 2006/03/17 17:03:19 pdaehne Exp $";
    static Char8 cvsid_hpp       [] = OSGCOLLECTIVEGRAVITYPARTICLESYSTEMAFFECTORBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGCOLLECTIVEGRAVITYPARTICLESYSTEMAFFECTORBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGCOLLECTIVEGRAVITYPARTICLESYSTEMAFFECTORFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
