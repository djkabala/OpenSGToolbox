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
 **     class TabPanel!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &TabPanelBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 TabPanelBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 TabPanelBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the TabPanel::_sfTabPlacement field.

inline
UInt32 &TabPanelBase::editTabPlacement(void)
{
    editSField(TabPlacementFieldMask);

    return _sfTabPlacement.getValue();
}

//! Get the value of the TabPanel::_sfTabPlacement field.
inline
      UInt32  TabPanelBase::getTabPlacement(void) const
{
    return _sfTabPlacement.getValue();
}

//! Set the value of the TabPanel::_sfTabPlacement field.
inline
void TabPanelBase::setTabPlacement(const UInt32 value)
{
    editSField(TabPlacementFieldMask);

    _sfTabPlacement.setValue(value);
}
//! Get the value of the TabPanel::_sfTabAlignment field.

inline
Real32 &TabPanelBase::editTabAlignment(void)
{
    editSField(TabAlignmentFieldMask);

    return _sfTabAlignment.getValue();
}

//! Get the value of the TabPanel::_sfTabAlignment field.
inline
      Real32  TabPanelBase::getTabAlignment(void) const
{
    return _sfTabAlignment.getValue();
}

//! Set the value of the TabPanel::_sfTabAlignment field.
inline
void TabPanelBase::setTabAlignment(const Real32 value)
{
    editSField(TabAlignmentFieldMask);

    _sfTabAlignment.setValue(value);
}
//! Get the value of the TabPanel::_sfTabRotation field.

inline
UInt32 &TabPanelBase::editTabRotation(void)
{
    editSField(TabRotationFieldMask);

    return _sfTabRotation.getValue();
}

//! Get the value of the TabPanel::_sfTabRotation field.
inline
      UInt32  TabPanelBase::getTabRotation(void) const
{
    return _sfTabRotation.getValue();
}

//! Set the value of the TabPanel::_sfTabRotation field.
inline
void TabPanelBase::setTabRotation(const UInt32 value)
{
    editSField(TabRotationFieldMask);

    _sfTabRotation.setValue(value);
}
//! Get the value of the TabPanel::_sfTabBorderInsets field.

inline
Vec4f &TabPanelBase::editTabBorderInsets(void)
{
    editSField(TabBorderInsetsFieldMask);

    return _sfTabBorderInsets.getValue();
}

//! Get the value of the TabPanel::_sfTabBorderInsets field.
inline
const Vec4f &TabPanelBase::getTabBorderInsets(void) const
{
    return _sfTabBorderInsets.getValue();
}

//! Set the value of the TabPanel::_sfTabBorderInsets field.
inline
void TabPanelBase::setTabBorderInsets(const Vec4f &value)
{
    editSField(TabBorderInsetsFieldMask);

    _sfTabBorderInsets.setValue(value);
}

//! Get the value of the TabPanel::_sfTabBorder field.
inline
Border * TabPanelBase::getTabBorder(void) const
{
    return _sfTabBorder.getValue();
}

//! Set the value of the TabPanel::_sfTabBorder field.
inline
void TabPanelBase::setTabBorder(Border * const value)
{
    editSField(TabBorderFieldMask);

    _sfTabBorder.setValue(value);
}

//! Get the value of the TabPanel::_sfTabBackground field.
inline
Layer * TabPanelBase::getTabBackground(void) const
{
    return _sfTabBackground.getValue();
}

//! Set the value of the TabPanel::_sfTabBackground field.
inline
void TabPanelBase::setTabBackground(Layer * const value)
{
    editSField(TabBackgroundFieldMask);

    _sfTabBackground.setValue(value);
}

//! Get the value of the TabPanel::_sfTabDisabledBorder field.
inline
Border * TabPanelBase::getTabDisabledBorder(void) const
{
    return _sfTabDisabledBorder.getValue();
}

//! Set the value of the TabPanel::_sfTabDisabledBorder field.
inline
void TabPanelBase::setTabDisabledBorder(Border * const value)
{
    editSField(TabDisabledBorderFieldMask);

    _sfTabDisabledBorder.setValue(value);
}

//! Get the value of the TabPanel::_sfTabDisabledBackground field.
inline
Layer * TabPanelBase::getTabDisabledBackground(void) const
{
    return _sfTabDisabledBackground.getValue();
}

//! Set the value of the TabPanel::_sfTabDisabledBackground field.
inline
void TabPanelBase::setTabDisabledBackground(Layer * const value)
{
    editSField(TabDisabledBackgroundFieldMask);

    _sfTabDisabledBackground.setValue(value);
}

//! Get the value of the TabPanel::_sfTabFocusedBorder field.
inline
Border * TabPanelBase::getTabFocusedBorder(void) const
{
    return _sfTabFocusedBorder.getValue();
}

//! Set the value of the TabPanel::_sfTabFocusedBorder field.
inline
void TabPanelBase::setTabFocusedBorder(Border * const value)
{
    editSField(TabFocusedBorderFieldMask);

    _sfTabFocusedBorder.setValue(value);
}

//! Get the value of the TabPanel::_sfTabFocusedBackground field.
inline
Layer * TabPanelBase::getTabFocusedBackground(void) const
{
    return _sfTabFocusedBackground.getValue();
}

//! Set the value of the TabPanel::_sfTabFocusedBackground field.
inline
void TabPanelBase::setTabFocusedBackground(Layer * const value)
{
    editSField(TabFocusedBackgroundFieldMask);

    _sfTabFocusedBackground.setValue(value);
}

//! Get the value of the TabPanel::_sfTabRolloverBorder field.
inline
Border * TabPanelBase::getTabRolloverBorder(void) const
{
    return _sfTabRolloverBorder.getValue();
}

//! Set the value of the TabPanel::_sfTabRolloverBorder field.
inline
void TabPanelBase::setTabRolloverBorder(Border * const value)
{
    editSField(TabRolloverBorderFieldMask);

    _sfTabRolloverBorder.setValue(value);
}

//! Get the value of the TabPanel::_sfTabRolloverBackground field.
inline
Layer * TabPanelBase::getTabRolloverBackground(void) const
{
    return _sfTabRolloverBackground.getValue();
}

//! Set the value of the TabPanel::_sfTabRolloverBackground field.
inline
void TabPanelBase::setTabRolloverBackground(Layer * const value)
{
    editSField(TabRolloverBackgroundFieldMask);

    _sfTabRolloverBackground.setValue(value);
}

//! Get the value of the TabPanel::_sfTabActiveBorder field.
inline
Border * TabPanelBase::getTabActiveBorder(void) const
{
    return _sfTabActiveBorder.getValue();
}

//! Set the value of the TabPanel::_sfTabActiveBorder field.
inline
void TabPanelBase::setTabActiveBorder(Border * const value)
{
    editSField(TabActiveBorderFieldMask);

    _sfTabActiveBorder.setValue(value);
}

//! Get the value of the TabPanel::_sfTabActiveBackground field.
inline
Layer * TabPanelBase::getTabActiveBackground(void) const
{
    return _sfTabActiveBackground.getValue();
}

//! Set the value of the TabPanel::_sfTabActiveBackground field.
inline
void TabPanelBase::setTabActiveBackground(Layer * const value)
{
    editSField(TabActiveBackgroundFieldMask);

    _sfTabActiveBackground.setValue(value);
}
//! Get the value of the TabPanel::_sfContentBorderInsets field.

inline
Vec2f &TabPanelBase::editContentBorderInsets(void)
{
    editSField(ContentBorderInsetsFieldMask);

    return _sfContentBorderInsets.getValue();
}

//! Get the value of the TabPanel::_sfContentBorderInsets field.
inline
const Vec2f &TabPanelBase::getContentBorderInsets(void) const
{
    return _sfContentBorderInsets.getValue();
}

//! Set the value of the TabPanel::_sfContentBorderInsets field.
inline
void TabPanelBase::setContentBorderInsets(const Vec2f &value)
{
    editSField(ContentBorderInsetsFieldMask);

    _sfContentBorderInsets.setValue(value);
}

//! Get the value of the TabPanel::_sfContentBorder field.
inline
Border * TabPanelBase::getContentBorder(void) const
{
    return _sfContentBorder.getValue();
}

//! Set the value of the TabPanel::_sfContentBorder field.
inline
void TabPanelBase::setContentBorder(Border * const value)
{
    editSField(ContentBorderFieldMask);

    _sfContentBorder.setValue(value);
}

//! Get the value of the TabPanel::_sfContentBackground field.
inline
Layer * TabPanelBase::getContentBackground(void) const
{
    return _sfContentBackground.getValue();
}

//! Set the value of the TabPanel::_sfContentBackground field.
inline
void TabPanelBase::setContentBackground(Layer * const value)
{
    editSField(ContentBackgroundFieldMask);

    _sfContentBackground.setValue(value);
}

//! Get the value of the TabPanel::_sfContentDisabledBorder field.
inline
Border * TabPanelBase::getContentDisabledBorder(void) const
{
    return _sfContentDisabledBorder.getValue();
}

//! Set the value of the TabPanel::_sfContentDisabledBorder field.
inline
void TabPanelBase::setContentDisabledBorder(Border * const value)
{
    editSField(ContentDisabledBorderFieldMask);

    _sfContentDisabledBorder.setValue(value);
}

//! Get the value of the TabPanel::_sfContentDisabledBackground field.
inline
Layer * TabPanelBase::getContentDisabledBackground(void) const
{
    return _sfContentDisabledBackground.getValue();
}

//! Set the value of the TabPanel::_sfContentDisabledBackground field.
inline
void TabPanelBase::setContentDisabledBackground(Layer * const value)
{
    editSField(ContentDisabledBackgroundFieldMask);

    _sfContentDisabledBackground.setValue(value);
}

//! Get the value of the TabPanel::_sfContentRolloverBorder field.
inline
Border * TabPanelBase::getContentRolloverBorder(void) const
{
    return _sfContentRolloverBorder.getValue();
}

//! Set the value of the TabPanel::_sfContentRolloverBorder field.
inline
void TabPanelBase::setContentRolloverBorder(Border * const value)
{
    editSField(ContentRolloverBorderFieldMask);

    _sfContentRolloverBorder.setValue(value);
}

//! Get the value of the TabPanel::_sfContentRolloverBackground field.
inline
Layer * TabPanelBase::getContentRolloverBackground(void) const
{
    return _sfContentRolloverBackground.getValue();
}

//! Set the value of the TabPanel::_sfContentRolloverBackground field.
inline
void TabPanelBase::setContentRolloverBackground(Layer * const value)
{
    editSField(ContentRolloverBackgroundFieldMask);

    _sfContentRolloverBackground.setValue(value);
}

//! Get the value of the TabPanel::_sfSelectionModel field.
inline
SingleSelectionModel * TabPanelBase::getSelectionModel(void) const
{
    return _sfSelectionModel.getValue();
}

//! Set the value of the TabPanel::_sfSelectionModel field.
inline
void TabPanelBase::setSelectionModel(SingleSelectionModel * const value)
{
    editSField(SelectionModelFieldMask);

    _sfSelectionModel.setValue(value);
}

//! Get the value of the \a index element the TabPanel::_mfTabs field.
inline
Component * TabPanelBase::getTabs(const UInt32 index) const
{
    return _mfTabs[index];
}

//! Get the value of the \a index element the TabPanel::_mfTabContents field.
inline
Component * TabPanelBase::getTabContents(const UInt32 index) const
{
    return _mfTabContents[index];
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void TabPanelBase::execSync (      TabPanelBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (TabsFieldMask & whichField))
        _mfTabs.syncWith(pFrom->_mfTabs,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (TabContentsFieldMask & whichField))
        _mfTabContents.syncWith(pFrom->_mfTabContents,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (TabPlacementFieldMask & whichField))
        _sfTabPlacement.syncWith(pFrom->_sfTabPlacement);

    if(FieldBits::NoField != (TabAlignmentFieldMask & whichField))
        _sfTabAlignment.syncWith(pFrom->_sfTabAlignment);

    if(FieldBits::NoField != (TabRotationFieldMask & whichField))
        _sfTabRotation.syncWith(pFrom->_sfTabRotation);

    if(FieldBits::NoField != (TabBorderInsetsFieldMask & whichField))
        _sfTabBorderInsets.syncWith(pFrom->_sfTabBorderInsets);

    if(FieldBits::NoField != (TabBorderFieldMask & whichField))
        _sfTabBorder.syncWith(pFrom->_sfTabBorder);

    if(FieldBits::NoField != (TabBackgroundFieldMask & whichField))
        _sfTabBackground.syncWith(pFrom->_sfTabBackground);

    if(FieldBits::NoField != (TabDisabledBorderFieldMask & whichField))
        _sfTabDisabledBorder.syncWith(pFrom->_sfTabDisabledBorder);

    if(FieldBits::NoField != (TabDisabledBackgroundFieldMask & whichField))
        _sfTabDisabledBackground.syncWith(pFrom->_sfTabDisabledBackground);

    if(FieldBits::NoField != (TabFocusedBorderFieldMask & whichField))
        _sfTabFocusedBorder.syncWith(pFrom->_sfTabFocusedBorder);

    if(FieldBits::NoField != (TabFocusedBackgroundFieldMask & whichField))
        _sfTabFocusedBackground.syncWith(pFrom->_sfTabFocusedBackground);

    if(FieldBits::NoField != (TabRolloverBorderFieldMask & whichField))
        _sfTabRolloverBorder.syncWith(pFrom->_sfTabRolloverBorder);

    if(FieldBits::NoField != (TabRolloverBackgroundFieldMask & whichField))
        _sfTabRolloverBackground.syncWith(pFrom->_sfTabRolloverBackground);

    if(FieldBits::NoField != (TabActiveBorderFieldMask & whichField))
        _sfTabActiveBorder.syncWith(pFrom->_sfTabActiveBorder);

    if(FieldBits::NoField != (TabActiveBackgroundFieldMask & whichField))
        _sfTabActiveBackground.syncWith(pFrom->_sfTabActiveBackground);

    if(FieldBits::NoField != (ContentBorderInsetsFieldMask & whichField))
        _sfContentBorderInsets.syncWith(pFrom->_sfContentBorderInsets);

    if(FieldBits::NoField != (ContentBorderFieldMask & whichField))
        _sfContentBorder.syncWith(pFrom->_sfContentBorder);

    if(FieldBits::NoField != (ContentBackgroundFieldMask & whichField))
        _sfContentBackground.syncWith(pFrom->_sfContentBackground);

    if(FieldBits::NoField != (ContentDisabledBorderFieldMask & whichField))
        _sfContentDisabledBorder.syncWith(pFrom->_sfContentDisabledBorder);

    if(FieldBits::NoField != (ContentDisabledBackgroundFieldMask & whichField))
        _sfContentDisabledBackground.syncWith(pFrom->_sfContentDisabledBackground);

    if(FieldBits::NoField != (ContentRolloverBorderFieldMask & whichField))
        _sfContentRolloverBorder.syncWith(pFrom->_sfContentRolloverBorder);

    if(FieldBits::NoField != (ContentRolloverBackgroundFieldMask & whichField))
        _sfContentRolloverBackground.syncWith(pFrom->_sfContentRolloverBackground);

    if(FieldBits::NoField != (SelectionModelFieldMask & whichField))
        _sfSelectionModel.syncWith(pFrom->_sfSelectionModel);
}
#endif


inline
const Char8 *TabPanelBase::getClassname(void)
{
    return "TabPanel";
}
OSG_GEN_CONTAINERPTR(TabPanel);

OSG_END_NAMESPACE

