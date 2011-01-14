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
 **     class DefaultTreeComponentGenerator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &DefaultTreeComponentGeneratorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 DefaultTreeComponentGeneratorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 DefaultTreeComponentGeneratorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the DefaultTreeComponentGenerator::_sfExpandedDrawObjectPrototype field.
inline
UIDrawObjectCanvas * DefaultTreeComponentGeneratorBase::getExpandedDrawObjectPrototype(void) const
{
    return _sfExpandedDrawObjectPrototype.getValue();
}

//! Set the value of the DefaultTreeComponentGenerator::_sfExpandedDrawObjectPrototype field.
inline
void DefaultTreeComponentGeneratorBase::setExpandedDrawObjectPrototype(UIDrawObjectCanvas * const value)
{
    editSField(ExpandedDrawObjectPrototypeFieldMask);

    _sfExpandedDrawObjectPrototype.setValue(value);
}

//! Get the value of the DefaultTreeComponentGenerator::_sfNotExpandedDrawObjectPrototype field.
inline
UIDrawObjectCanvas * DefaultTreeComponentGeneratorBase::getNotExpandedDrawObjectPrototype(void) const
{
    return _sfNotExpandedDrawObjectPrototype.getValue();
}

//! Set the value of the DefaultTreeComponentGenerator::_sfNotExpandedDrawObjectPrototype field.
inline
void DefaultTreeComponentGeneratorBase::setNotExpandedDrawObjectPrototype(UIDrawObjectCanvas * const value)
{
    editSField(NotExpandedDrawObjectPrototypeFieldMask);

    _sfNotExpandedDrawObjectPrototype.setValue(value);
}

//! Get the value of the DefaultTreeComponentGenerator::_sfLeafDrawObjectPrototype field.
inline
UIDrawObjectCanvas * DefaultTreeComponentGeneratorBase::getLeafDrawObjectPrototype(void) const
{
    return _sfLeafDrawObjectPrototype.getValue();
}

//! Set the value of the DefaultTreeComponentGenerator::_sfLeafDrawObjectPrototype field.
inline
void DefaultTreeComponentGeneratorBase::setLeafDrawObjectPrototype(UIDrawObjectCanvas * const value)
{
    editSField(LeafDrawObjectPrototypeFieldMask);

    _sfLeafDrawObjectPrototype.setValue(value);
}

//! Get the value of the DefaultTreeComponentGenerator::_sfNonLeafDrawObjectPrototype field.
inline
UIDrawObjectCanvas * DefaultTreeComponentGeneratorBase::getNonLeafDrawObjectPrototype(void) const
{
    return _sfNonLeafDrawObjectPrototype.getValue();
}

//! Set the value of the DefaultTreeComponentGenerator::_sfNonLeafDrawObjectPrototype field.
inline
void DefaultTreeComponentGeneratorBase::setNonLeafDrawObjectPrototype(UIDrawObjectCanvas * const value)
{
    editSField(NonLeafDrawObjectPrototypeFieldMask);

    _sfNonLeafDrawObjectPrototype.setValue(value);
}

//! Get the value of the DefaultTreeComponentGenerator::_sfExpandedNonLeafDrawObjectPrototype field.
inline
UIDrawObjectCanvas * DefaultTreeComponentGeneratorBase::getExpandedNonLeafDrawObjectPrototype(void) const
{
    return _sfExpandedNonLeafDrawObjectPrototype.getValue();
}

//! Set the value of the DefaultTreeComponentGenerator::_sfExpandedNonLeafDrawObjectPrototype field.
inline
void DefaultTreeComponentGeneratorBase::setExpandedNonLeafDrawObjectPrototype(UIDrawObjectCanvas * const value)
{
    editSField(ExpandedNonLeafDrawObjectPrototypeFieldMask);

    _sfExpandedNonLeafDrawObjectPrototype.setValue(value);
}

//! Get the value of the DefaultTreeComponentGenerator::_sfNodeLabelPrototype field.
inline
Label * DefaultTreeComponentGeneratorBase::getNodeLabelPrototype(void) const
{
    return _sfNodeLabelPrototype.getValue();
}

//! Set the value of the DefaultTreeComponentGenerator::_sfNodeLabelPrototype field.
inline
void DefaultTreeComponentGeneratorBase::setNodeLabelPrototype(Label * const value)
{
    editSField(NodeLabelPrototypeFieldMask);

    _sfNodeLabelPrototype.setValue(value);
}

//! Get the value of the DefaultTreeComponentGenerator::_sfNodePanelPrototype field.
inline
Panel * DefaultTreeComponentGeneratorBase::getNodePanelPrototype(void) const
{
    return _sfNodePanelPrototype.getValue();
}

//! Set the value of the DefaultTreeComponentGenerator::_sfNodePanelPrototype field.
inline
void DefaultTreeComponentGeneratorBase::setNodePanelPrototype(Panel * const value)
{
    editSField(NodePanelPrototypeFieldMask);

    _sfNodePanelPrototype.setValue(value);
}

//! Get the value of the DefaultTreeComponentGenerator::_sfSelectedBackground field.
inline
Layer * DefaultTreeComponentGeneratorBase::getSelectedBackground(void) const
{
    return _sfSelectedBackground.getValue();
}

//! Set the value of the DefaultTreeComponentGenerator::_sfSelectedBackground field.
inline
void DefaultTreeComponentGeneratorBase::setSelectedBackground(Layer * const value)
{
    editSField(SelectedBackgroundFieldMask);

    _sfSelectedBackground.setValue(value);
}

//! Get the value of the DefaultTreeComponentGenerator::_sfNonSelectedBackground field.
inline
Layer * DefaultTreeComponentGeneratorBase::getNonSelectedBackground(void) const
{
    return _sfNonSelectedBackground.getValue();
}

//! Set the value of the DefaultTreeComponentGenerator::_sfNonSelectedBackground field.
inline
void DefaultTreeComponentGeneratorBase::setNonSelectedBackground(Layer * const value)
{
    editSField(NonSelectedBackgroundFieldMask);

    _sfNonSelectedBackground.setValue(value);
}

//! Get the value of the DefaultTreeComponentGenerator::_sfSelectedForeground field.
inline
Layer * DefaultTreeComponentGeneratorBase::getSelectedForeground(void) const
{
    return _sfSelectedForeground.getValue();
}

//! Set the value of the DefaultTreeComponentGenerator::_sfSelectedForeground field.
inline
void DefaultTreeComponentGeneratorBase::setSelectedForeground(Layer * const value)
{
    editSField(SelectedForegroundFieldMask);

    _sfSelectedForeground.setValue(value);
}

//! Get the value of the DefaultTreeComponentGenerator::_sfNonSelectedForeground field.
inline
Layer * DefaultTreeComponentGeneratorBase::getNonSelectedForeground(void) const
{
    return _sfNonSelectedForeground.getValue();
}

//! Set the value of the DefaultTreeComponentGenerator::_sfNonSelectedForeground field.
inline
void DefaultTreeComponentGeneratorBase::setNonSelectedForeground(Layer * const value)
{
    editSField(NonSelectedForegroundFieldMask);

    _sfNonSelectedForeground.setValue(value);
}

//! Get the value of the DefaultTreeComponentGenerator::_sfSelectedBorder field.
inline
Border * DefaultTreeComponentGeneratorBase::getSelectedBorder(void) const
{
    return _sfSelectedBorder.getValue();
}

//! Set the value of the DefaultTreeComponentGenerator::_sfSelectedBorder field.
inline
void DefaultTreeComponentGeneratorBase::setSelectedBorder(Border * const value)
{
    editSField(SelectedBorderFieldMask);

    _sfSelectedBorder.setValue(value);
}
//! Get the value of the DefaultTreeComponentGenerator::_sfSelectedTextColor field.

inline
Color4f &DefaultTreeComponentGeneratorBase::editSelectedTextColor(void)
{
    editSField(SelectedTextColorFieldMask);

    return _sfSelectedTextColor.getValue();
}

//! Get the value of the DefaultTreeComponentGenerator::_sfSelectedTextColor field.
inline
const Color4f &DefaultTreeComponentGeneratorBase::getSelectedTextColor(void) const
{
    return _sfSelectedTextColor.getValue();
}

//! Set the value of the DefaultTreeComponentGenerator::_sfSelectedTextColor field.
inline
void DefaultTreeComponentGeneratorBase::setSelectedTextColor(const Color4f &value)
{
    editSField(SelectedTextColorFieldMask);

    _sfSelectedTextColor.setValue(value);
}
//! Get the value of the DefaultTreeComponentGenerator::_sfNonSelectedTextColor field.

inline
Color4f &DefaultTreeComponentGeneratorBase::editNonSelectedTextColor(void)
{
    editSField(NonSelectedTextColorFieldMask);

    return _sfNonSelectedTextColor.getValue();
}

//! Get the value of the DefaultTreeComponentGenerator::_sfNonSelectedTextColor field.
inline
const Color4f &DefaultTreeComponentGeneratorBase::getNonSelectedTextColor(void) const
{
    return _sfNonSelectedTextColor.getValue();
}

//! Set the value of the DefaultTreeComponentGenerator::_sfNonSelectedTextColor field.
inline
void DefaultTreeComponentGeneratorBase::setNonSelectedTextColor(const Color4f &value)
{
    editSField(NonSelectedTextColorFieldMask);

    _sfNonSelectedTextColor.setValue(value);
}

//! Get the value of the DefaultTreeComponentGenerator::_sfFocusedBorder field.
inline
Border * DefaultTreeComponentGeneratorBase::getFocusedBorder(void) const
{
    return _sfFocusedBorder.getValue();
}

//! Set the value of the DefaultTreeComponentGenerator::_sfFocusedBorder field.
inline
void DefaultTreeComponentGeneratorBase::setFocusedBorder(Border * const value)
{
    editSField(FocusedBorderFieldMask);

    _sfFocusedBorder.setValue(value);
}
//! Get the value of the DefaultTreeComponentGenerator::_sfFocusedTextColor field.

inline
Color4f &DefaultTreeComponentGeneratorBase::editFocusedTextColor(void)
{
    editSField(FocusedTextColorFieldMask);

    return _sfFocusedTextColor.getValue();
}

//! Get the value of the DefaultTreeComponentGenerator::_sfFocusedTextColor field.
inline
const Color4f &DefaultTreeComponentGeneratorBase::getFocusedTextColor(void) const
{
    return _sfFocusedTextColor.getValue();
}

//! Set the value of the DefaultTreeComponentGenerator::_sfFocusedTextColor field.
inline
void DefaultTreeComponentGeneratorBase::setFocusedTextColor(const Color4f &value)
{
    editSField(FocusedTextColorFieldMask);

    _sfFocusedTextColor.setValue(value);
}

//! Get the value of the DefaultTreeComponentGenerator::_sfFocusedBackground field.
inline
Layer * DefaultTreeComponentGeneratorBase::getFocusedBackground(void) const
{
    return _sfFocusedBackground.getValue();
}

//! Set the value of the DefaultTreeComponentGenerator::_sfFocusedBackground field.
inline
void DefaultTreeComponentGeneratorBase::setFocusedBackground(Layer * const value)
{
    editSField(FocusedBackgroundFieldMask);

    _sfFocusedBackground.setValue(value);
}

//! Get the value of the DefaultTreeComponentGenerator::_sfFocusedForeground field.
inline
Layer * DefaultTreeComponentGeneratorBase::getFocusedForeground(void) const
{
    return _sfFocusedForeground.getValue();
}

//! Set the value of the DefaultTreeComponentGenerator::_sfFocusedForeground field.
inline
void DefaultTreeComponentGeneratorBase::setFocusedForeground(Layer * const value)
{
    editSField(FocusedForegroundFieldMask);

    _sfFocusedForeground.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void DefaultTreeComponentGeneratorBase::execSync (      DefaultTreeComponentGeneratorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (ExpandedDrawObjectPrototypeFieldMask & whichField))
        _sfExpandedDrawObjectPrototype.syncWith(pFrom->_sfExpandedDrawObjectPrototype);

    if(FieldBits::NoField != (NotExpandedDrawObjectPrototypeFieldMask & whichField))
        _sfNotExpandedDrawObjectPrototype.syncWith(pFrom->_sfNotExpandedDrawObjectPrototype);

    if(FieldBits::NoField != (LeafDrawObjectPrototypeFieldMask & whichField))
        _sfLeafDrawObjectPrototype.syncWith(pFrom->_sfLeafDrawObjectPrototype);

    if(FieldBits::NoField != (NonLeafDrawObjectPrototypeFieldMask & whichField))
        _sfNonLeafDrawObjectPrototype.syncWith(pFrom->_sfNonLeafDrawObjectPrototype);

    if(FieldBits::NoField != (ExpandedNonLeafDrawObjectPrototypeFieldMask & whichField))
        _sfExpandedNonLeafDrawObjectPrototype.syncWith(pFrom->_sfExpandedNonLeafDrawObjectPrototype);

    if(FieldBits::NoField != (NodeLabelPrototypeFieldMask & whichField))
        _sfNodeLabelPrototype.syncWith(pFrom->_sfNodeLabelPrototype);

    if(FieldBits::NoField != (NodePanelPrototypeFieldMask & whichField))
        _sfNodePanelPrototype.syncWith(pFrom->_sfNodePanelPrototype);

    if(FieldBits::NoField != (SelectedBackgroundFieldMask & whichField))
        _sfSelectedBackground.syncWith(pFrom->_sfSelectedBackground);

    if(FieldBits::NoField != (NonSelectedBackgroundFieldMask & whichField))
        _sfNonSelectedBackground.syncWith(pFrom->_sfNonSelectedBackground);

    if(FieldBits::NoField != (SelectedForegroundFieldMask & whichField))
        _sfSelectedForeground.syncWith(pFrom->_sfSelectedForeground);

    if(FieldBits::NoField != (NonSelectedForegroundFieldMask & whichField))
        _sfNonSelectedForeground.syncWith(pFrom->_sfNonSelectedForeground);

    if(FieldBits::NoField != (SelectedBorderFieldMask & whichField))
        _sfSelectedBorder.syncWith(pFrom->_sfSelectedBorder);

    if(FieldBits::NoField != (SelectedTextColorFieldMask & whichField))
        _sfSelectedTextColor.syncWith(pFrom->_sfSelectedTextColor);

    if(FieldBits::NoField != (NonSelectedTextColorFieldMask & whichField))
        _sfNonSelectedTextColor.syncWith(pFrom->_sfNonSelectedTextColor);

    if(FieldBits::NoField != (FocusedBorderFieldMask & whichField))
        _sfFocusedBorder.syncWith(pFrom->_sfFocusedBorder);

    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
        _sfFocusedTextColor.syncWith(pFrom->_sfFocusedTextColor);

    if(FieldBits::NoField != (FocusedBackgroundFieldMask & whichField))
        _sfFocusedBackground.syncWith(pFrom->_sfFocusedBackground);

    if(FieldBits::NoField != (FocusedForegroundFieldMask & whichField))
        _sfFocusedForeground.syncWith(pFrom->_sfFocusedForeground);
}
#endif


inline
const Char8 *DefaultTreeComponentGeneratorBase::getClassname(void)
{
    return "DefaultTreeComponentGenerator";
}
OSG_GEN_CONTAINERPTR(DefaultTreeComponentGenerator);

OSG_END_NAMESPACE

