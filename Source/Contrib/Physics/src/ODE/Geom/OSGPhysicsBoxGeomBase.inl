/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com),  Behboud Kalantary         *
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
 **     class PhysicsBoxGeom!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &PhysicsBoxGeomBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 PhysicsBoxGeomBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 PhysicsBoxGeomBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the PhysicsBoxGeom::_sfLengths field.

inline
Vec3f &PhysicsBoxGeomBase::editLengths(void)
{
    editSField(LengthsFieldMask);

    return _sfLengths.getValue();
}

//! Get the value of the PhysicsBoxGeom::_sfLengths field.
inline
const Vec3f &PhysicsBoxGeomBase::getLengths(void) const
{
    return _sfLengths.getValue();
}

//! Set the value of the PhysicsBoxGeom::_sfLengths field.
inline
void PhysicsBoxGeomBase::setLengths(const Vec3f &value)
{
    editSField(LengthsFieldMask);

    _sfLengths.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void PhysicsBoxGeomBase::execSync (      PhysicsBoxGeomBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (LengthsFieldMask & whichField))
        _sfLengths.syncWith(pFrom->_sfLengths);
}
#endif


inline
const Char8 *PhysicsBoxGeomBase::getClassname(void)
{
    return "PhysicsBoxGeom";
}
OSG_GEN_CONTAINERPTR(PhysicsBoxGeom);

OSG_END_NAMESPACE

