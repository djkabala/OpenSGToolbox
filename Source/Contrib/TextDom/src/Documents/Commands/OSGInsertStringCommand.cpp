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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#define OSG_COMPILETEXTDOMLIB

#include "OSGConfig.h"

#include "OSGInsertStringCommand.h"

#include "OSGNameAttachment.h"


OSG_USING_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::InsertStringCommand
A InsertStringCommand. 
*/

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

CommandType InsertStringCommand::_Type("InsertStringCommand", "UndoableCommand");

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

InsertStringCommandPtr InsertStringCommand::create(FixedHeightLayoutManagerRefPtr Manager,PlainDocumentRefPtr DocumentModel,UInt32 theCaretPosition,std::string theString)
{
	return RefPtr(new InsertStringCommand(Manager,DocumentModel,theCaretPosition,theString));
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

void InsertStringCommand::execute(void)
{
	_theOriginalCaretLine= _Manager->getCaretLine();
	_theOriginalCaretIndex = _Manager->getCaretIndex();

	TextWithProps temp;
	_TheDocumentModel->insertString(_TheOriginalCaretPosition,_StringToBeInserted,temp);

	_Manager->highlightString(_theOriginalCaretLine,_theOriginalCaretIndex,_StringToBeInserted);

	_HasBeenDone = true;
}

std::string InsertStringCommand::getCommandDescription(void) const
{
	return std::string("Insert String ");
}

std::string InsertStringCommand::getPresentationName(void) const
{
	return getCommandDescription();
}

void InsertStringCommand::redo(void)
{
	TextWithProps temp;
	_TheDocumentModel->insertString(_TheOriginalCaretPosition,_StringToBeInserted,temp);

	_Manager->highlightString(_theOriginalCaretLine,_theOriginalCaretIndex,_StringToBeInserted);

	Inherited::redo();
}

void InsertStringCommand::undo(void)
{
	_Manager->highlightString(_theOriginalCaretLine,_theOriginalCaretIndex,_StringToBeInserted);

	_Manager->deleteSelected();

	Inherited::undo();
}

const CommandType &InsertStringCommand::getType(void) const
{
	return _Type;
}
/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

InsertStringCommand::~InsertStringCommand(void)
{
}

/*----------------------------- class specific ----------------------------*/

void InsertStringCommand::operator =(const InsertStringCommand& source)
{
    if(this != &source)
    {
	    Inherited::operator=(source);
    }
}

