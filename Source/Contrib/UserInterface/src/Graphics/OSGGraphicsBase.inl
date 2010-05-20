/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class Graphics!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &GraphicsBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 GraphicsBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 GraphicsBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the Graphics::_sfOpacity field.

inline
Real32 &GraphicsBase::editOpacity(void)
{
    editSField(OpacityFieldMask);

    return _sfOpacity.getValue();
}

//! Get the value of the Graphics::_sfOpacity field.
inline
      Real32  GraphicsBase::getOpacity(void) const
{
    return _sfOpacity.getValue();
}

//! Set the value of the Graphics::_sfOpacity field.
inline
void GraphicsBase::setOpacity(const Real32 value)
{
    editSField(OpacityFieldMask);

    _sfOpacity.setValue(value);
}
//! Get the value of the Graphics::_sfEnablePointAntiAliasing field.

inline
bool &GraphicsBase::editEnablePointAntiAliasing(void)
{
    editSField(EnablePointAntiAliasingFieldMask);

    return _sfEnablePointAntiAliasing.getValue();
}

//! Get the value of the Graphics::_sfEnablePointAntiAliasing field.
inline
      bool  GraphicsBase::getEnablePointAntiAliasing(void) const
{
    return _sfEnablePointAntiAliasing.getValue();
}

//! Set the value of the Graphics::_sfEnablePointAntiAliasing field.
inline
void GraphicsBase::setEnablePointAntiAliasing(const bool value)
{
    editSField(EnablePointAntiAliasingFieldMask);

    _sfEnablePointAntiAliasing.setValue(value);
}
//! Get the value of the Graphics::_sfEnableLineAntiAliasing field.

inline
bool &GraphicsBase::editEnableLineAntiAliasing(void)
{
    editSField(EnableLineAntiAliasingFieldMask);

    return _sfEnableLineAntiAliasing.getValue();
}

//! Get the value of the Graphics::_sfEnableLineAntiAliasing field.
inline
      bool  GraphicsBase::getEnableLineAntiAliasing(void) const
{
    return _sfEnableLineAntiAliasing.getValue();
}

//! Set the value of the Graphics::_sfEnableLineAntiAliasing field.
inline
void GraphicsBase::setEnableLineAntiAliasing(const bool value)
{
    editSField(EnableLineAntiAliasingFieldMask);

    _sfEnableLineAntiAliasing.setValue(value);
}
//! Get the value of the Graphics::_sfEnablePolygonAntiAliasing field.

inline
bool &GraphicsBase::editEnablePolygonAntiAliasing(void)
{
    editSField(EnablePolygonAntiAliasingFieldMask);

    return _sfEnablePolygonAntiAliasing.getValue();
}

//! Get the value of the Graphics::_sfEnablePolygonAntiAliasing field.
inline
      bool  GraphicsBase::getEnablePolygonAntiAliasing(void) const
{
    return _sfEnablePolygonAntiAliasing.getValue();
}

//! Set the value of the Graphics::_sfEnablePolygonAntiAliasing field.
inline
void GraphicsBase::setEnablePolygonAntiAliasing(const bool value)
{
    editSField(EnablePolygonAntiAliasingFieldMask);

    _sfEnablePolygonAntiAliasing.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void GraphicsBase::execSync (      GraphicsBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (OpacityFieldMask & whichField))
        _sfOpacity.syncWith(pFrom->_sfOpacity);

    if(FieldBits::NoField != (EnablePointAntiAliasingFieldMask & whichField))
        _sfEnablePointAntiAliasing.syncWith(pFrom->_sfEnablePointAntiAliasing);

    if(FieldBits::NoField != (EnableLineAntiAliasingFieldMask & whichField))
        _sfEnableLineAntiAliasing.syncWith(pFrom->_sfEnableLineAntiAliasing);

    if(FieldBits::NoField != (EnablePolygonAntiAliasingFieldMask & whichField))
        _sfEnablePolygonAntiAliasing.syncWith(pFrom->_sfEnablePolygonAntiAliasing);
}
#endif


inline
const Char8 *GraphicsBase::getClassname(void)
{
    return "Graphics";
}
OSG_GEN_CONTAINERPTR(Graphics);

OSG_END_NAMESPACE
