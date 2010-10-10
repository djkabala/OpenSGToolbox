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

#ifndef _OSGINSERTSTRING_COMMAND_H_
#define _OSGINSERTSTRING_COMMAND_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribTextDomDef.h"


#include "OSGUndoableCommand.h"

#include "OSGFixedHeightLayoutManager.h"
#include "OSGPlainDocument.h"


OSG_BEGIN_NAMESPACE

class InsertStringCommand;
typedef boost::shared_ptr<InsertStringCommand> InsertStringCommandPtr;

class OSG_CONTRIBTEXTDOM_DLLMAPPING InsertStringCommand: public UndoableCommand
{
protected:

	enum {LEFT,RIGHT,UP,DOWN,HOME,END,HOMEOFNEXTLINE,PAGEUP,PAGEDOWN};

	typedef UndoableCommand Inherited;
	typedef InsertStringCommand Self;
	typedef InsertStringCommandPtr RefPtr;

    InsertStringCommand(FixedHeightLayoutManagerRefPtr Manager,PlainDocumentRefPtr DocumentModel,UInt32 theCaretPosition,std::string theString);// here
	InsertStringCommand(const InsertStringCommand& source);

	void operator =(const InsertStringCommand& source);

	static CommandType _Type;
	
	virtual void execute(void);
	virtual std::string getPresentationName(void) const;
	virtual void redo(void);
	virtual void undo(void);

	FixedHeightLayoutManagerRefPtr _Manager;
	PlainDocumentRefPtr _TheDocumentModel;
	UInt32 _TheOriginalCaretPosition;
	std::string _StringToBeInserted;
	UInt32 _theOriginalCaretLine;
	UInt32 _theOriginalCaretIndex;

public:

	virtual std::string getCommandDescription(void) const;

    virtual const CommandType &getType(void) const;
	
    static const CommandType &getClassType(void);

	virtual ~InsertStringCommand(void);
	
    static InsertStringCommandPtr create(FixedHeightLayoutManagerRefPtr Manager,PlainDocumentRefPtr DocumentModel,UInt32 theCaretPosition,std::string theString);// here
};

OSG_END_NAMESPACE

#include "OSGInsertStringCommand.inl"

#endif /* _OSGINSERTSTRING_COMMAND_H_ */
