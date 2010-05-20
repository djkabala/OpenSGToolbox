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
 **     class RGBColorChooserPanel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &RGBColorChooserPanelBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 RGBColorChooserPanelBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 RGBColorChooserPanelBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the RGBColorChooserPanel::_sfIncludeAlpha field.

inline
bool &RGBColorChooserPanelBase::editIncludeAlpha(void)
{
    editSField(IncludeAlphaFieldMask);

    return _sfIncludeAlpha.getValue();
}

//! Get the value of the RGBColorChooserPanel::_sfIncludeAlpha field.
inline
      bool  RGBColorChooserPanelBase::getIncludeAlpha(void) const
{
    return _sfIncludeAlpha.getValue();
}

//! Set the value of the RGBColorChooserPanel::_sfIncludeAlpha field.
inline
void RGBColorChooserPanelBase::setIncludeAlpha(const bool value)
{
    editSField(IncludeAlphaFieldMask);

    _sfIncludeAlpha.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void RGBColorChooserPanelBase::execSync (      RGBColorChooserPanelBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (IncludeAlphaFieldMask & whichField))
        _sfIncludeAlpha.syncWith(pFrom->_sfIncludeAlpha);
}
#endif


inline
const Char8 *RGBColorChooserPanelBase::getClassname(void)
{
    return "RGBColorChooserPanel";
}
OSG_GEN_CONTAINERPTR(RGBColorChooserPanel);

OSG_END_NAMESPACE
