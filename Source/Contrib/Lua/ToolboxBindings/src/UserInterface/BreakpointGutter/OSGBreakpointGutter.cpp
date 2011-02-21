/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 * contact: David Kabala (djkabala@gmail.com)                                *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#include "OSGBreakpointGutter.h"

#include "OSGPopupMenu.h"
#include "OSGMenuItem.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBreakpointGutterBase.cpp file.
// To modify it, please change the .fcd file (OSGBreakpointGutter.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BreakpointGutter::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
void BreakpointGutter::updateLayout(void)
{
    if(getTrackedArea() != NULL)
    {
        Pnt2f TopLeft, BottomRight;
        getInsideInsetsBounds(TopLeft, BottomRight);

        Vec2f LineSize;

        //Set the position and size of all of the Breakpoints
        for(BreakpointButtonMap::iterator LoopItor(_BreakpointButtonMap.begin()) ;
            LoopItor != _BreakpointButtonMap.end() ;
            ++LoopItor)
        {
            LoopItor->second->setSize(LoopItor->second->getPreferredSize());

            LineSize.setValues(BottomRight.x()-TopLeft.x(),
                               getTrackedArea()->getLineHeight(LoopItor->second));

            Pnt2f AlignPos =
                calculateAlignment(Pnt2f(TopLeft.x(), getTrackedArea()->getLineVerticalPosition(i)),
                                   LineSize,
                                   LoopItor->second->getSize(),
                                   0.5f,
                                   0.0f);

            LoopItor->second->setPosition(AlignPos);
        }
    }
}

void BreakpointGutter::mouseClicked(MouseEventDetails* const e)
{
    Int32 LineNum(getLineForPosition());
    if(LineNum >= 0)
    {
        BreakpointPtr TheBreakpoint(getBreakpoint(LineNum));
        if(TheBreakpoint == NULL)
        {
            //Add a breakpoint here
            BreakpointPtr NewFileBreakpoint;

            getBreakpointManager->addBreakpoint(NewFileBreakpoint);
        }
        else
        {
            //Toggle the enabling of this breakpoint
            setBreakpointEnabled(TheBreakpoint,!TheBreakpoint->getEnabled());
        }
    }

    Inherited::mouseClicked(e);
}

Int32 BreakpointGutter::getLineForPosition(const Pnt2f& Position) const
{
    return 0;
}

BreakpointPtr BreakpointGutter::getBreakpoint(UInt32 LineNum) const;
{
    return NULL;
}

void BreakpointGutter::addBreakpoint(BreakpointPtr TheBreakpoint, UInt32 LineNum);
{
    if(TheBreakpoint != NULL)
    {
    }
}

void BreakpointGutter::removeBreakpoint(BreakpointPtr TheBreakpoint);
{
    if(TheBreakpoint != NULL)
    {
    }
}

void BreakpointGutter::removeBreakpoint(UInt32 LineNum);
{
    removeBreakpoint(getBreakpoint(LineNum));
}

void BreakpointGutter::setBreakpointEnabled(BreakpointPtr TheBreakpoint, bool Enabled);
{
    if(TheBreakpoint != NULL)
    {
    }
}

void BreakpointGutter::setBreakpointEnabled(UInt32 LineNum, bool Enabled);
{
    setBreakpointEnabled(getBreakpoint(LineNum), Enabled);
}

void BreakpointGutter::editBreakpoint(BreakpointPtr TheBreakpoint);
{
    if(TheBreakpoint != NULL)
    {
    }
}

void BreakpointGutter::editBreakpoint(UInt32 LineNum);
{
    editBreakpoint(getBreakpoint(LineNum));
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/
void BreakpointGutter::updatePopupMenu(UInt32 LineNum)
{
    LocalBreakpointPtr LocalBreakpoint(getBreakpointManager()->getLocalBreakpoint(FilePath, LineNum));
    if(LocalBreakpoint != NULL)
    {
        _AddRemoveBreakpointMenuItem->setText("Remove Breakpoint");

        _EnableDisableBreakpointMenuItem->setEnabled(true);
        if(LocalBreakpoint->getEnabled())
        {
            _AddRemoveBreakpointMenuItem->setText("Disable Breakpoint");
        }
        else
        {
            _AddRemoveBreakpointMenuItem->setText("Enable Breakpoint");
        }

        _EditBreakpointMenuItem->setEnabled(true);
    }
    else
    {
        _AddRemoveBreakpointMenuItem->setText("Add Breakpoint");
        _EnableDisableBreakpointMenuItem->setEnabled(false);
        _EditBreakpointMenuItem->setEnabled(false);
    }
}

void BreakpointGutter::onCreate(const BreakpointGutter *source)
{
	Inherited::onCreate(source);

    if(GlobalSystemState != Startup)
    {
        MenuItemRecPtr _AddRemoveBreakpointMenuItem = MenuItem::create();
        _AddRemoveBreakpointMenuItem->setText("Add Breakpoint");
        _AddRemoveBreakpointActionConnection =
            _AddRemoveBreakpointMenuItem->connectActionPerformed(boost::bind(&BreakpointGutter::handleAddRemoveBreakpointAction, this, _1));

        MenuItemRecPtr _EnableDisableBreakpointMenuItem = MenuItem::create();
        _EnableDisableBreakpointMenuItem->setText("Disable Breakpoint");
        _EnableDisableBreakpointActionConnection =
            _EnableDisableBreakpointMenuItem->connectActionPerformed(boost::bind(&BreakpointGutter::handleEnableDisableBreakpointAction, this, _1));

        MenuItemRecPtr _EditBreakpointMenuItem = MenuItem::create();
        _EditBreakpointMenuItem->setText("Edit Breakpoint");
        _EditBreakpointActionConnection =
            _EditBreakpointMenuItem->connectActionPerformed(boost::bind(&BreakpointGutter::handleEditBreakpointAction, this, _1));

        //Create Popup menu
        PopupMenuRecPtr BreakpointGutterPopupMenu = PopupMenu::create();
        BreakpointGutterPopupMenu->addItem(_AddRemoveBreakpointMenuItem);
        BreakpointGutterPopupMenu->addItem(_EnableDisableBreakpointMenuItem);
        BreakpointGutterPopupMenu->addSeparator();
        BreakpointGutterPopupMenu->addItem(_EditBreakpointMenuItem);

        setPopupMenu(BreakpointGutterPopupMenu);
    }
}

void BreakpointGutter::resolveLinks(void)
{
    Inherited::resolveLinks();

    _AddRemoveBreakpointMenuItem = NULL;
    _EnableDisableBreakpointMenuItem = NULL;
    _EditBreakpointMenuItem = NULL;

    _AddRemoveBreakpointActionConnection.clear();
    _EnableDisableBreakpointActionConnection.clear();
    _EditBreakpointActionConnection.clear();

    _BreakpointCreatedConnection.clear();
    _BreakpointDestroyedConnection.clear();
    _BreakpointEnabledConnection.clear();
    _BreakpointDisabledConnection.clear();
}

void BreakpointGutter::handleAddRemoveBreakpointAction(ActionEventDetails* const e)
{
}

void BreakpointGutter::handleEnableDisableBreakpointAction(ActionEventDetails* const e)
{
}

void BreakpointGutter::handleEditBreakpointAction(ActionEventDetails* const e)
{
}

void BreakpointGutter::handleBreakpointCreated(BreakpointEventDetails* const e)
{
    //Add a breakpoint button at this location
    if()
    {
        ButtonRecPtr BreakpointButton = createBreakpointButton(e->getBreakpoint());
        _BreakpointButtonMap[e->getBreakpoint()] = ButtonLinePair(BreakpointButton,
                                                                  e->getBreakpoint()->getLineNum());

        pushToChildren(BreakpointButton);
    }
}

void BreakpointGutter::handleBreakpointDestroyed(BreakpointEventDetails* const e)
{
    //Remove the breakpoint button at this location
    BreakpointButtonMap::iterator
        FindItor(_BreakpointButtonMap.find(e->getBreakpoint()));

    if(FindItor != _BreakpointButtonMap.end())
    {
        //Remove from children
        removeObjFromChildren(FindItor->first);
        _BreakpointButtonMap.erase(FindItor);
    }
}

void BreakpointGutter::handleBreakpointEnabled(BreakpointEventDetails* const e)
{
    //Enable the Breakpoint button
    BreakpointButtonMap::iterator
        FindItor(_BreakpointButtonMap.find(e->getBreakpoint()));

    if(FindItor != _BreakpointButtonMap.end())
    {
        FindItor->first->setEnabled(true);
    }
}

void BreakpointGutter::handleBreakpointDisabled(BreakpointEventDetails* const e)
{
    //Disable the Breakpoint button
    BreakpointButtonMap::iterator
        FindItor(_BreakpointButtonMap.find(e->getBreakpoint()));

    if(FindItor != _BreakpointButtonMap.end())
    {
        FindItor->first->setEnabled(false);
    }
}

ButtonTransitPtr BreakpointGutter::createBreakpointButton(BreakpointPtr TheBreakpoint) const
{
    //TODO: Implement
    return ButtonTransitPtr(NULL);
}

/*----------------------- constructors & destructors ----------------------*/

BreakpointGutter::BreakpointGutter(void) :
    Inherited()
{
}

BreakpointGutter::BreakpointGutter(const BreakpointGutter &source) :
    Inherited(source)
{
}

BreakpointGutter::~BreakpointGutter(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BreakpointGutter::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void BreakpointGutter::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump BreakpointGutter NI" << std::endl;
}

OSG_END_NAMESPACE
