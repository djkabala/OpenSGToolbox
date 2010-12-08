/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala (djkabala@gmail.com)*
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
 **     class TableDomView!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include "OSGConfig.h"



#include "OSGCell.h"          // Cell Class
#include "OSGUIFont.h"           // Font Class

#include "OSGTableDomViewBase.h"
#include "OSGTableDomView.h"

#include "OSGCellView.h"

#include <boost/bind.hpp>

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::TableDomView
    A UI TableDomView
 */

/***************************************************************************\
 *                        Field Documentation                              *
\***************************************************************************/

/*! \var Cell *       TableDomViewBase::_sfCell
    
*/

/*! \var Vec2f           TableDomViewBase::_sfStartingPosition
    
*/

/*! \var UIFont *        TableDomViewBase::_sfFont
    
*/

/*! \var Color4f         TableDomViewBase::_sfSelectionBoxColor
    
*/

/*! \var Color4f         TableDomViewBase::_sfSelectionTextColor
    
*/

/*! \var Color4f         TableDomViewBase::_sfActiveTextColor
    
*/

/*! \var Color4f         TableDomViewBase::_sfFocusedTextColor
    
*/

/*! \var Color4f         TableDomViewBase::_sfRolloverTextColor
    
*/

/*! \var Color4f         TableDomViewBase::_sfDisabledTextColor
    
*/

/*! \var Color4f         TableDomViewBase::_sfTextColor
    
*/


/***************************************************************************\
 *                      FieldType/FieldTrait Instantiation                 *
\***************************************************************************/

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<TableDomView *>::_type("TableDomViewPtr", "FieldContainerPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(TableDomView *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           TableDomView *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           TableDomView *,
                           0);

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

void TableDomViewBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUnrecCellPtr::Description(
        SFUnrecCellPtr::getClassType(),
        "Cell",
        "",
        CellFieldId, CellFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableDomView::editHandleCell),
        static_cast<FieldGetMethodSig >(&TableDomView::getHandleCell));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec2f::Description(
        SFVec2f::getClassType(),
        "StartingPosition",
        "",
        StartingPositionFieldId, StartingPositionFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableDomView::editHandleStartingPosition),
        static_cast<FieldGetMethodSig >(&TableDomView::getHandleStartingPosition));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecUIFontPtr::Description(
        SFUnrecUIFontPtr::getClassType(),
        "Font",
        "",
        FontFieldId, FontFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableDomView::editHandleFont),
        static_cast<FieldGetMethodSig >(&TableDomView::getHandleFont));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "SelectionBoxColor",
        "",
        SelectionBoxColorFieldId, SelectionBoxColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableDomView::editHandleSelectionBoxColor),
        static_cast<FieldGetMethodSig >(&TableDomView::getHandleSelectionBoxColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "SelectionTextColor",
        "",
        SelectionTextColorFieldId, SelectionTextColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableDomView::editHandleSelectionTextColor),
        static_cast<FieldGetMethodSig >(&TableDomView::getHandleSelectionTextColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "ActiveTextColor",
        "",
        ActiveTextColorFieldId, ActiveTextColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableDomView::editHandleActiveTextColor),
        static_cast<FieldGetMethodSig >(&TableDomView::getHandleActiveTextColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "FocusedTextColor",
        "",
        FocusedTextColorFieldId, FocusedTextColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableDomView::editHandleFocusedTextColor),
        static_cast<FieldGetMethodSig >(&TableDomView::getHandleFocusedTextColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "RolloverTextColor",
        "",
        RolloverTextColorFieldId, RolloverTextColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableDomView::editHandleRolloverTextColor),
        static_cast<FieldGetMethodSig >(&TableDomView::getHandleRolloverTextColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "DisabledTextColor",
        "",
        DisabledTextColorFieldId, DisabledTextColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableDomView::editHandleDisabledTextColor),
        static_cast<FieldGetMethodSig >(&TableDomView::getHandleDisabledTextColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "TextColor",
        "",
        TextColorFieldId, TextColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&TableDomView::editHandleTextColor),
        static_cast<FieldGetMethodSig >(&TableDomView::getHandleTextColor));

    oType.addInitialDesc(pDesc);
}


TableDomViewBase::TypeObject TableDomViewBase::_type(
    TableDomViewBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    NULL,
    TableDomView::initMethod,
    TableDomView::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&TableDomView::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"TableDomView\"\n"
    "\tparent=\"FieldContainer\"\n"
    "\tlibrary=\"ContribTableDom\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"abstract\"\n"
    "\tsystemcomponent=\"false\"\n"
    "\tparentsystemcomponent=\"false\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"true\"\n"
    "\tisNodeCore=\"false\"\n"
    "    \tauthors=\"David Kabala (djkabala@gmail.com)\"\n"
    ">\n"
    "A UI TableDomView\n"
    "\t<Field\n"
    "\t\tname=\"Cell\"\n"
    "\t\ttype=\"Cell\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\n"
    "\t<Field\n"
    "\t\tname=\"StartingPosition\"\n"
    "\t\ttype=\"Vec2f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.0,0.0\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\n"
    "\t<Field\n"
    "\t\tname=\"Font\"\n"
    "\t\ttype=\"UIFont\"\n"
    "\t\tcategory=\"pointer\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t\n"
    "\t<Field\n"
    "\t\tname=\"SelectionBoxColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.0,0.0,1.0,1.0\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t\n"
    "\t<Field\n"
    "\t\tname=\"SelectionTextColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.0,1.0,1.0,1.0\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t\n"
    "\t<Field\n"
    "\t\tname=\"ActiveTextColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t\n"
    "\t<Field\n"
    "\t\tname=\"FocusedTextColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t\n"
    "\t<Field\n"
    "\t\tname=\"RolloverTextColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t\n"
    "\t<Field\n"
    "\t\tname=\"DisabledTextColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t\n"
    "\t<Field\n"
    "\t\tname=\"TextColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcategory=\"data\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t\n"
    "</FieldContainer>\n",
    "A UI TableDomView\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &TableDomViewBase::getType(void)
{
    return _type;
}

const FieldContainerType &TableDomViewBase::getType(void) const
{
    return _type;
}

UInt32 TableDomViewBase::getContainerSize(void) const
{
    return sizeof(TableDomView);
}

/*------------------------- decorator get ------------------------------*/


//! Get the TableDomView::_sfCell field.
const SFUnrecCellPtr *TableDomViewBase::getSFCell(void) const
{
    return &_sfCell;
}

SFUnrecCellPtr   *TableDomViewBase::editSFCell        (void)
{
    editSField(CellFieldMask);

    return &_sfCell;
}

SFVec2f *TableDomViewBase::editSFStartingPosition(void)
{
    editSField(StartingPositionFieldMask);

    return &_sfStartingPosition;
}

const SFVec2f *TableDomViewBase::getSFStartingPosition(void) const
{
    return &_sfStartingPosition;
}


//! Get the TableDomView::_sfFont field.
const SFUnrecUIFontPtr *TableDomViewBase::getSFFont(void) const
{
    return &_sfFont;
}

SFUnrecUIFontPtr    *TableDomViewBase::editSFFont           (void)
{
    editSField(FontFieldMask);

    return &_sfFont;
}

SFColor4f *TableDomViewBase::editSFSelectionBoxColor(void)
{
    editSField(SelectionBoxColorFieldMask);

    return &_sfSelectionBoxColor;
}

const SFColor4f *TableDomViewBase::getSFSelectionBoxColor(void) const
{
    return &_sfSelectionBoxColor;
}


SFColor4f *TableDomViewBase::editSFSelectionTextColor(void)
{
    editSField(SelectionTextColorFieldMask);

    return &_sfSelectionTextColor;
}

const SFColor4f *TableDomViewBase::getSFSelectionTextColor(void) const
{
    return &_sfSelectionTextColor;
}


SFColor4f *TableDomViewBase::editSFActiveTextColor(void)
{
    editSField(ActiveTextColorFieldMask);

    return &_sfActiveTextColor;
}

const SFColor4f *TableDomViewBase::getSFActiveTextColor(void) const
{
    return &_sfActiveTextColor;
}


SFColor4f *TableDomViewBase::editSFFocusedTextColor(void)
{
    editSField(FocusedTextColorFieldMask);

    return &_sfFocusedTextColor;
}

const SFColor4f *TableDomViewBase::getSFFocusedTextColor(void) const
{
    return &_sfFocusedTextColor;
}


SFColor4f *TableDomViewBase::editSFRolloverTextColor(void)
{
    editSField(RolloverTextColorFieldMask);

    return &_sfRolloverTextColor;
}

const SFColor4f *TableDomViewBase::getSFRolloverTextColor(void) const
{
    return &_sfRolloverTextColor;
}


SFColor4f *TableDomViewBase::editSFDisabledTextColor(void)
{
    editSField(DisabledTextColorFieldMask);

    return &_sfDisabledTextColor;
}

const SFColor4f *TableDomViewBase::getSFDisabledTextColor(void) const
{
    return &_sfDisabledTextColor;
}


SFColor4f *TableDomViewBase::editSFTextColor(void)
{
    editSField(TextColorFieldMask);

    return &_sfTextColor;
}

const SFColor4f *TableDomViewBase::getSFTextColor(void) const
{
    return &_sfTextColor;
}






/*------------------------------ access -----------------------------------*/

UInt32 TableDomViewBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CellFieldMask & whichField))
    {
        returnValue += _sfCell.getBinSize();
    }
    if(FieldBits::NoField != (StartingPositionFieldMask & whichField))
    {
        returnValue += _sfStartingPosition.getBinSize();
    }
    if(FieldBits::NoField != (FontFieldMask & whichField))
    {
        returnValue += _sfFont.getBinSize();
    }
    if(FieldBits::NoField != (SelectionBoxColorFieldMask & whichField))
    {
        returnValue += _sfSelectionBoxColor.getBinSize();
    }
    if(FieldBits::NoField != (SelectionTextColorFieldMask & whichField))
    {
        returnValue += _sfSelectionTextColor.getBinSize();
    }
    if(FieldBits::NoField != (ActiveTextColorFieldMask & whichField))
    {
        returnValue += _sfActiveTextColor.getBinSize();
    }
    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
    {
        returnValue += _sfFocusedTextColor.getBinSize();
    }
    if(FieldBits::NoField != (RolloverTextColorFieldMask & whichField))
    {
        returnValue += _sfRolloverTextColor.getBinSize();
    }
    if(FieldBits::NoField != (DisabledTextColorFieldMask & whichField))
    {
        returnValue += _sfDisabledTextColor.getBinSize();
    }
    if(FieldBits::NoField != (TextColorFieldMask & whichField))
    {
        returnValue += _sfTextColor.getBinSize();
    }

    return returnValue;
}

void TableDomViewBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CellFieldMask & whichField))
    {
        _sfCell.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StartingPositionFieldMask & whichField))
    {
        _sfStartingPosition.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FontFieldMask & whichField))
    {
        _sfFont.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SelectionBoxColorFieldMask & whichField))
    {
        _sfSelectionBoxColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SelectionTextColorFieldMask & whichField))
    {
        _sfSelectionTextColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ActiveTextColorFieldMask & whichField))
    {
        _sfActiveTextColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
    {
        _sfFocusedTextColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RolloverTextColorFieldMask & whichField))
    {
        _sfRolloverTextColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DisabledTextColorFieldMask & whichField))
    {
        _sfDisabledTextColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TextColorFieldMask & whichField))
    {
        _sfTextColor.copyToBin(pMem);
    }
}

void TableDomViewBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CellFieldMask & whichField))
    {
        _sfCell.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StartingPositionFieldMask & whichField))
    {
        _sfStartingPosition.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FontFieldMask & whichField))
    {
        _sfFont.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SelectionBoxColorFieldMask & whichField))
    {
        _sfSelectionBoxColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SelectionTextColorFieldMask & whichField))
    {
        _sfSelectionTextColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ActiveTextColorFieldMask & whichField))
    {
        _sfActiveTextColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FocusedTextColorFieldMask & whichField))
    {
        _sfFocusedTextColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RolloverTextColorFieldMask & whichField))
    {
        _sfRolloverTextColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DisabledTextColorFieldMask & whichField))
    {
        _sfDisabledTextColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TextColorFieldMask & whichField))
    {
        _sfTextColor.copyFromBin(pMem);
    }
}



/*------------------------- constructors ----------------------------------*/

TableDomViewBase::TableDomViewBase(void) :
    Inherited(),
    _sfCell                (NULL),
    _sfStartingPosition       (Vec2f(0.0,0.0)),
    _sfFont                   (NULL),
    _sfSelectionBoxColor      (Color4f(0.0,0.0,1.0,1.0)),
    _sfSelectionTextColor     (Color4f(1.0,1.0,1.0,1.0)),
    _sfActiveTextColor        (),
    _sfFocusedTextColor       (),
    _sfRolloverTextColor      (),
    _sfDisabledTextColor      (),
    _sfTextColor              ()
{
}

TableDomViewBase::TableDomViewBase(const TableDomViewBase &source) :
    Inherited(source),
    _sfCell                (NULL),
    _sfStartingPosition       (source._sfStartingPosition       ),
    _sfFont                   (NULL),
    _sfSelectionBoxColor      (source._sfSelectionBoxColor      ),
    _sfSelectionTextColor     (source._sfSelectionTextColor     ),
    _sfActiveTextColor        (source._sfActiveTextColor        ),
    _sfFocusedTextColor       (source._sfFocusedTextColor       ),
    _sfRolloverTextColor      (source._sfRolloverTextColor      ),
    _sfDisabledTextColor      (source._sfDisabledTextColor      ),
    _sfTextColor              (source._sfTextColor              )
{
}


/*-------------------------- destructors ----------------------------------*/

TableDomViewBase::~TableDomViewBase(void)
{
}

void TableDomViewBase::onCreate(const TableDomView *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        TableDomView *pThis = static_cast<TableDomView *>(this);

        pThis->setCell(source->getCell());

        pThis->setFont(source->getFont());
    }
}

GetFieldHandlePtr TableDomViewBase::getHandleCell         (void) const
{
    SFUnrecCellPtr::GetHandlePtr returnValue(
        new  SFUnrecCellPtr::GetHandle(
             &_sfCell,
             this->getType().getFieldDesc(CellFieldId),
             const_cast<TableDomViewBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableDomViewBase::editHandleCell        (void)
{
    SFUnrecCellPtr::EditHandlePtr returnValue(
        new  SFUnrecCellPtr::EditHandle(
             &_sfCell,
             this->getType().getFieldDesc(CellFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&TableDomView::setCell,
                    static_cast<TableDomView *>(this), _1));

    editSField(CellFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableDomViewBase::getHandleStartingPosition (void) const
{
    SFVec2f::GetHandlePtr returnValue(
        new  SFVec2f::GetHandle(
             &_sfStartingPosition,
             this->getType().getFieldDesc(StartingPositionFieldId),
             const_cast<TableDomViewBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableDomViewBase::editHandleStartingPosition(void)
{
    SFVec2f::EditHandlePtr returnValue(
        new  SFVec2f::EditHandle(
             &_sfStartingPosition,
             this->getType().getFieldDesc(StartingPositionFieldId),
             this));


    editSField(StartingPositionFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableDomViewBase::getHandleFont            (void) const
{
    SFUnrecUIFontPtr::GetHandlePtr returnValue(
        new  SFUnrecUIFontPtr::GetHandle(
             &_sfFont,
             this->getType().getFieldDesc(FontFieldId),
             const_cast<TableDomViewBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableDomViewBase::editHandleFont           (void)
{
    SFUnrecUIFontPtr::EditHandlePtr returnValue(
        new  SFUnrecUIFontPtr::EditHandle(
             &_sfFont,
             this->getType().getFieldDesc(FontFieldId),
             this));

    returnValue->setSetMethod(
        boost::bind(&TableDomView::setFont,
                    static_cast<TableDomView *>(this), _1));

    editSField(FontFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableDomViewBase::getHandleSelectionBoxColor (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfSelectionBoxColor,
             this->getType().getFieldDesc(SelectionBoxColorFieldId),
             const_cast<TableDomViewBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableDomViewBase::editHandleSelectionBoxColor(void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfSelectionBoxColor,
             this->getType().getFieldDesc(SelectionBoxColorFieldId),
             this));


    editSField(SelectionBoxColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableDomViewBase::getHandleSelectionTextColor (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfSelectionTextColor,
             this->getType().getFieldDesc(SelectionTextColorFieldId),
             const_cast<TableDomViewBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableDomViewBase::editHandleSelectionTextColor(void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfSelectionTextColor,
             this->getType().getFieldDesc(SelectionTextColorFieldId),
             this));


    editSField(SelectionTextColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableDomViewBase::getHandleActiveTextColor (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfActiveTextColor,
             this->getType().getFieldDesc(ActiveTextColorFieldId),
             const_cast<TableDomViewBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableDomViewBase::editHandleActiveTextColor(void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfActiveTextColor,
             this->getType().getFieldDesc(ActiveTextColorFieldId),
             this));


    editSField(ActiveTextColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableDomViewBase::getHandleFocusedTextColor (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfFocusedTextColor,
             this->getType().getFieldDesc(FocusedTextColorFieldId),
             const_cast<TableDomViewBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableDomViewBase::editHandleFocusedTextColor(void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfFocusedTextColor,
             this->getType().getFieldDesc(FocusedTextColorFieldId),
             this));


    editSField(FocusedTextColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableDomViewBase::getHandleRolloverTextColor (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfRolloverTextColor,
             this->getType().getFieldDesc(RolloverTextColorFieldId),
             const_cast<TableDomViewBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableDomViewBase::editHandleRolloverTextColor(void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfRolloverTextColor,
             this->getType().getFieldDesc(RolloverTextColorFieldId),
             this));


    editSField(RolloverTextColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableDomViewBase::getHandleDisabledTextColor (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfDisabledTextColor,
             this->getType().getFieldDesc(DisabledTextColorFieldId),
             const_cast<TableDomViewBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableDomViewBase::editHandleDisabledTextColor(void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfDisabledTextColor,
             this->getType().getFieldDesc(DisabledTextColorFieldId),
             this));


    editSField(DisabledTextColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr TableDomViewBase::getHandleTextColor       (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfTextColor,
             this->getType().getFieldDesc(TextColorFieldId),
             const_cast<TableDomViewBase *>(this)));

    return returnValue;
}

EditFieldHandlePtr TableDomViewBase::editHandleTextColor      (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfTextColor,
             this->getType().getFieldDesc(TextColorFieldId),
             this));


    editSField(TextColorFieldMask);

    return returnValue;
}



#ifdef OSG_MT_CPTR_ASPECT
void TableDomViewBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    TableDomView *pThis = static_cast<TableDomView *>(this);

    pThis->execSync(static_cast<TableDomView *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif



void TableDomViewBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<TableDomView *>(this)->setCell(NULL);

    static_cast<TableDomView *>(this)->setFont(NULL);


}


OSG_END_NAMESPACE
