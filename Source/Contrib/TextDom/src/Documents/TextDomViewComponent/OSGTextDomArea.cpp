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
\*------------------------- --------------------------------------------------*/
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

#define OSG_COMPILECONTRIBTEXTDOMLIB

#include <OSGConfig.h>

#include "OSGTextFileHandler.h"
#include "OSGTextDomArea.h"
#include "OSGUIDrawingSurface.h"
#include "OSGUIDrawUtils.h"
#include "OSGWindowEventProducer.h"
#include "OSGInternalWindow.h"
#include "OSGLookAndFeelManager.h"
#include "OSGStringUtils.h"
#include "OSGScrollBar.h"
#include "OSGUIViewport.h"
#include "OSGSearchWindow.h"
#include "OSGAdvancedTextDomArea.h"
#include "OSGInsertCharacterCommand.h"
#include "OSGDeleteSelectedCommand.h"
#include "OSGDeleteCharacterCommand.h"
#include "OSGSetTextCommand.h"
#include "OSGInsertStringCommand.h"
#include "cctype" 


OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGTextDomAreaBase.cpp file.
// To modify it, please change the .fcd file (OSGTextDomArea.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void TextDomArea::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}

EventConnection TextDomArea::addDocumentModelChangedListener(DocumentModelChangedListenerPtr Listener)
{
   _DocumentModelChangedListeners.insert(Listener);
   return EventConnection(
       boost::bind(&TextDomArea::isDocumentModelChangedListenerAttached, this, Listener),
       boost::bind(&TextDomArea::removeDocumentModelChangedListener, this, Listener));
   
}

bool TextDomArea::isDocumentModelChangedListenerAttached(DocumentModelChangedListenerPtr Listener) const
{
    return _DocumentModelChangedListeners.find(Listener) != _DocumentModelChangedListeners.end();
}

void TextDomArea::removeDocumentModelChangedListener(DocumentModelChangedListenerPtr Listener)
{
   DocumentModelChangedListenerSetItor EraseIter(_DocumentModelChangedListeners.find(Listener));
   if(EraseIter != _DocumentModelChangedListeners.end())
   {
      _DocumentModelChangedListeners.erase(EraseIter);
   }
}


void TextDomArea::produceDocumentModelChanged(const DocumentModelChangedEventP e)
{
	DocumentModelChangedListenerSet Listeners(_DocumentModelChangedListeners);
    for(DocumentModelChangedListenerSetConstItor SetItor(Listeners.begin()) ; SetItor != Listeners.end() ; ++SetItor)
    {
	    (*SetItor)->changedUpdate(e);
    }
    _Producer.produceEvent(DocumentModelChangedMethodId,e);
}

void TextDomArea::loadFile(BoostPath pathOfFile)
{
	PlainDocumentRefPtr temp=dynamic_pointer_cast<PlainDocument>(TextFileHandler::the()->forceRead(pathOfFile));
	if(temp)
	{
		setDocumentModel(temp);
		handleDocumentModelChanged();
	}
}

void TextDomArea::saveFile(BoostPath pathOfFile)
{
	TextFileHandler::the()->forceWrite(getDocumentModel(),pathOfFile);
}

void TextDomArea::stringToUpper(std::string& strToConvert)
{
   for(unsigned int i=0;i<strToConvert.length();i++)
   {
	   strToConvert[i] = toupper(strToConvert[i]);
   }
}

std::string TextDomArea::initialSearchStringModification(std::string stringToBeLookedFor,bool isUseRegExChecked)
{
	
	std::string specialcharacters = ".|*?+(){}[]^$\\";
	std::string temp="";
	if(!isUseRegExChecked)
	{
		for(UInt32 i=0;i<stringToBeLookedFor.length();i++)
		{
			size_t found;
			found=specialcharacters.find(stringToBeLookedFor[i]);
			if (found!=std::string::npos)
			{
				temp+="\\"+stringToBeLookedFor[i];
			}
			else
			{
				temp+=stringToBeLookedFor[i];
			}
		}
		stringToBeLookedFor=temp;
	}
	return stringToBeLookedFor;

}

void TextDomArea::regexCompiling(std::string stringToBeLookedFor,boost::xpressive::sregex& rex,bool isCaseChecked,bool isWholeWordChecked)
{
	if(isCaseChecked)
		if(isWholeWordChecked)
			rex = boost::xpressive::sregex::compile("\\b"+stringToBeLookedFor+"\\b");
		else
			rex = boost::xpressive::sregex::compile(stringToBeLookedFor);
	else
		if(isWholeWordChecked)
			rex = boost::xpressive::sregex::compile("\\b"+stringToBeLookedFor+"\\b", boost::xpressive::regex_constants::icase);
		else
			rex = boost::xpressive::sregex::compile(stringToBeLookedFor, boost::xpressive::regex_constants::icase);
}

void TextDomArea::bookmarkAllUsingRegEx(std::string stringToBeLookedFor,bool isCaseChecked,bool isWholeWordChecked,bool isUseRegExChecked)
{
	boost::xpressive::sregex rex;
	
	stringToBeLookedFor = initialSearchStringModification(stringToBeLookedFor,isUseRegExChecked);

	regexCompiling(stringToBeLookedFor,rex,isCaseChecked,isWholeWordChecked);

	for(UInt32 i=0;i<Manager->getRootElement()->getElementCount();i++)
	{
		PlainDocumentLeafElementRefPtr theElement = dynamic_pointer_cast<PlainDocumentLeafElement>(Manager->getRootElement()->getElement(i));
		std::string stringToBeSearchedIn = theElement->getText();

		boost::xpressive::smatch what;
 
		if( boost::xpressive::regex_search( stringToBeSearchedIn, what, rex ) )
		{
			editMFBookmarkedLines()->push_back(i);   
		}
	}
}

void TextDomArea::replaceAllUsingRegEx(std::string stringToBeLookedFor,std::string theReplaceText,bool isCaseChecked,bool isWholeWordChecked,bool isUseRegExChecked)
{
	
	boost::xpressive::sregex rex;

	stringToBeLookedFor = initialSearchStringModification(stringToBeLookedFor,isUseRegExChecked);

	regexCompiling(stringToBeLookedFor,rex,isCaseChecked,isWholeWordChecked);

	for(UInt32 i=0;i<Manager->getRootElement()->getElementCount();i++)
	{
		PlainDocumentLeafElementRefPtr theElement = dynamic_pointer_cast<PlainDocumentLeafElement>(Manager->getRootElement()->getElement(i));
		std::string stringToBeSearchedIn = theElement->getText();

		boost::xpressive::smatch what;

		if( boost::xpressive::regex_search( stringToBeSearchedIn, what, rex ) )
		{
			std::string str = regex_replace( stringToBeSearchedIn, rex, theReplaceText );
			setTextUsingCommandManager(theElement,str);
		}
	}
}

bool TextDomArea::searchForStringInDocumentUsingRegEx(std::string stringToBeLookedFor,bool isCaseChecked,bool isWholeWordChecked,bool searchUp,bool wrapAround,bool isUseRegExChecked)
{
	
	boost::xpressive::sregex rex;

	stringToBeLookedFor = initialSearchStringModification(stringToBeLookedFor,isUseRegExChecked);

	regexCompiling(stringToBeLookedFor,rex,isCaseChecked,isWholeWordChecked);

	Int32 i=Manager->getCaretLine();
	UInt32 count=0;
	UInt32 totalElements = Manager->getRootElement()->getElementCount();

	for(;;count++)
	{
		// conditions to exit on...
		if(!wrapAround)
		{
			if(!searchUp)
			{
				if(i>=totalElements)break;
			}
			else
			{
				if(i<0)break;
			}
		}
		else
		{
			if(count>=totalElements)break;
		}

		PlainDocumentLeafElementRefPtr theElement = dynamic_pointer_cast<PlainDocumentLeafElement>(Manager->getRootElement()->getElement(i));
		std::string stringToBeSearchedIn = theElement->getText();

		if(i==Manager->getCaretLine()) stringToBeSearchedIn = stringToBeSearchedIn.substr(Manager->getCaretIndex());

		boost::xpressive::smatch what;
 
		if( boost::xpressive::regex_search( stringToBeSearchedIn, what, rex ) )
		{
			UInt32 temphsi = what.position();
			if(i==Manager->getCaretLine())temphsi+=Manager->getCaretIndex();
			Manager->setHSI(temphsi);
			Manager->setHSL(i);
			Manager->setHEL(i);
			Manager->setHEI(temphsi+ what.length());
			Manager->setCaretLine(i);
			Manager->setCaretIndex(temphsi+ what.length() );
			Manager->recalculateCaretPositions();
			Manager->checkCaretVisibility();

			return true;
		}

		// incrementing values 
		if(!wrapAround)
		{
			if(!searchUp)
			{
				++i;
			}
			else
			{
				--i;
			}
		}
		else
		{
			if(!searchUp)
			{
				i=(i+1)%totalElements;
			}
			else
			{
				--i;
				if(i<0)
				{
					i=totalElements-1;
				}
			}
		}
	}
	return false;
}


UInt32 TextDomArea::getTopmostVisibleLineNumber(void)
{
	return Manager->getTopmostVisibleLineNumber();
}

UInt32 TextDomArea::getLinesToBeDisplayed(void)
{
	return Manager->getLinesToBeDisplayed();
}

Real32 TextDomArea::getHeightOfLine(void)
{
	return Manager->getHeightOfLine();
}

void TextDomArea::drawInternal(const GraphicsWeakPtr Graphics, Real32 Opacity) const
{
	if(Manager)
	{
		drawHighlightBG(Graphics,Opacity);
		drawBookmarkHighlight(Graphics,Opacity);
		drawLineHighlight(Graphics,Opacity);
		drawBraceHighlight(Graphics,Opacity);
	}
	
	// ask manager to draw visible views
	
	if(Manager && Manager->getMFVisibleViews()->size()>0)	// draw the view by calling the view's draw function
	{
		
		for(UInt32 i=0;i<Manager->getMFVisibleViews()->size();i++)
		{
			Manager->getVisibleViews(i)->drawView(Graphics,Opacity);
		}
	}
	
	if(Manager && _CaretUpdateListener.DrawCaret())
		drawTheCaret(Graphics,Opacity);
}

void TextDomArea::drawHighlightBG(const GraphicsWeakPtr Graphics, Real32 Opacity) const
{
	if(Manager->getRootElement())
	{
		if(Manager->getHSL() != Manager->getHEL() ||  Manager->getHSI() != Manager->getHEI() )
		{
			if(Manager->isStartLocationBeforeEndLocation())
			{
				drawHighlightBGInternal(Graphics,Opacity,Manager->getHSL(),Manager->getHSI(),Manager->getHEL(),Manager->getHEI());
			}
			else
			{
				drawHighlightBGInternal(Graphics,Opacity,Manager->getHEL(),Manager->getHEI(),Manager->getHSL(),Manager->getHSI());
			}
		}
	}
}
void TextDomArea::drawHighlightBGInternal(const GraphicsWeakPtr Graphics, Real32 Opacity,UInt32 lesserLine,UInt32 lesserIndex,UInt32 greaterLine,UInt32 greaterIndex) const
{
	for(UInt32 i=lesserLine+1;i<greaterLine;i++)
	{
		PlainDocumentLeafElementRefPtr theElement = dynamic_pointer_cast<PlainDocumentLeafElement>(Manager->getRootElement()->getElement(i));
		
		if(theElement)
		{
			Pnt2f topLeft,bottomRight;
			getFont()->getBounds(theElement->getText(),topLeft,bottomRight);

			Graphics->drawRect(Pnt2f(Manager->getGutterSpace() + Manager->getGutterSeparation(),i*Manager->getHeightOfLine()),Pnt2f(Manager->getGutterSpace() + Manager->getGutterSeparation()+ bottomRight.x(),(i+1)*Manager->getHeightOfLine()),Color4f(0.7,0.7,0.95,1),Opacity);
		}
	}

	if(lesserLine== greaterLine)
	{
		Graphics->drawRect(Manager->getXYPosition(lesserLine,lesserIndex,true),Manager->getXYPosition(greaterLine,greaterIndex,false),Color4f(0.7,0.7,0.95,1),Opacity);
	}
	else
	{
		// draw the first line
		Graphics->drawRect(Manager->getXYPosition(lesserLine,lesserIndex,true),Manager->getEndXYPosition(lesserLine),Color4f(0.7,0.7,0.95,1),Opacity);

		// draw the last line
		Graphics->drawRect(Manager->getStartXYPosition(greaterLine),Manager->getXYPosition(greaterLine,greaterIndex,false),Color4f(0.7,0.7,0.95,1),Opacity);
	}

}


void TextDomArea::drawLineHighlight(const GraphicsWeakPtr Graphics, Real32 Opacity) const
{
	Graphics->drawRect(Pnt2f(0,Manager->getCaretYPosition()),Pnt2f(Manager->getPreferredWidth(),Manager->getCaretYPosition()+Manager->getHeightOfLine()),Color4f(0.7,0.7,0.7,0.5),Opacity);
}

void TextDomArea::drawBookmarkHighlight(const GraphicsWeakPtr Graphics, Real32 Opacity) const
{
	for(UInt32 i=0;i<getMFBookmarkedLines()->size();i++)
		Graphics->drawRect(Pnt2f(0,Manager->getHeightOfLine()*getBookmarkedLines(i)),Pnt2f(Manager->getPreferredWidth(),Manager->getHeightOfLine()*(getBookmarkedLines(i)+1)),Color4f(0.7,0.0,0.7,0.5),Opacity);
}

void TextDomArea::drawBraceHighlight(const GraphicsWeakPtr Graphics, Real32 Opacity) const
{
	if(Manager->getBracesHighlightFlag())
	{
		if(Manager->getStartingBraceLine() != -1 && Manager->getStartingBraceIndex() != -1)
		{
			Pnt2f thePosition = Manager->getXYPosition(Manager->getStartingBraceLine(),Manager->getStartingBraceIndex(),true);
			Graphics->drawRect(thePosition,Pnt2f(thePosition.x()+5,thePosition.y()+Manager->getHeightOfLine()),Color4f(0.7,0.7,0.0,1.0),Opacity);
		}
		if(Manager->getEndingBraceLine() != -1 && Manager->getEndingBraceIndex() != -1)
		{
			if(Manager->getEndingBraceLine()<Manager->getRootElement()->getElementCount())
			{
				PlainDocumentLeafElementRefPtr temp = dynamic_pointer_cast<PlainDocumentLeafElement>(Manager->getRootElement()->getElement(Manager->getEndingBraceLine()));
				if(Manager->getEndingBraceIndex() < temp->getTextLength())
				{
					Pnt2f thePosition = Manager->getXYPosition(Manager->getEndingBraceLine(),Manager->getEndingBraceIndex(),true);
					Graphics->drawRect(thePosition,Pnt2f(thePosition.x()+5,thePosition.y()+Manager->getHeightOfLine()),Color4f(0.7,0.7,0.0,1.0),Opacity);
				}
			}
		}
	}
}


void TextDomArea::drawTheCaret(const GraphicsWeakPtr Graphics, Real32 Opacity) const
{
	Graphics->drawRect(Pnt2f(Manager->getCaretXPosition(),Manager->getCaretYPosition()),Pnt2f(Manager->getCaretXPosition()+2,Manager->getCaretYPosition()+Manager->getHeightOfLine()),Color4f(0,0,0,1),Opacity);
}


TextDomArea::DocumentModifiedListener::DocumentModifiedListener(TextDomAreaRefPtr TheTextDomArea)
{
	_TextDomArea = TheTextDomArea;
}

void TextDomArea::DocumentModifiedListener::changedUpdate(const DocumentEventUnrecPtr e)
{
	_TextDomArea->changedUpdate(e);
}

void TextDomArea::DocumentModifiedListener::insertUpdate(const DocumentEventUnrecPtr e)
{
	_TextDomArea->insertUpdate(e);
}

void TextDomArea::DocumentModifiedListener::removeUpdate(const DocumentEventUnrecPtr e)
{
	_TextDomArea->removeUpdate(e);
}

void TextDomArea::changedUpdate(const DocumentEventUnrecPtr e)
{
}

void TextDomArea::insertUpdate(const DocumentEventUnrecPtr e)
{
	Manager->updateViews();
	Manager->updateSize();
	Manager->calculatePreferredSize();
	updatePreferredSize();
}

void TextDomArea::removeUpdate(const DocumentEventUnrecPtr e)
{
	Manager->updateViews();
	Manager->updateSize();
	Manager->calculatePreferredSize();
	updatePreferredSize();
}

void TextDomArea::mouseDragged(const MouseEventUnrecPtr e)
{
   if(_IsMousePressed && e->getButton() == e->BUTTON1)
	{
		Manager->calculateCaretPosition(DrawingSurfaceToComponent(e->getLocation(), TextDomAreaRefPtr(this)) , true);	
	}
}

void TextDomArea::keyTyped(const KeyEventUnrecPtr e)
{
	TextWithProps temp;
	_CurrentCaretBlinkElps=0;
	_CaretUpdateListener.setDrawCaret(true);

	if(e->getKey() == KeyEvent::KEY_ESCAPE)
    {
	    if(this->getParentWindow() != NULL && this->getParentWindow()->getDrawingSurface()!=NULL&& this->getParentWindow()->getDrawingSurface()->getEventProducer() != NULL)
	    {
            disconnect();
        }
    }
	else if(e->getKey() == KeyEvent::KEY_UP)
    {
	    Manager->moveTheCaret(UP,(getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_SHIFT),(getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_CONTROL));
		Manager->printDebugInformation();
    }
	else if(e->getKey() == KeyEvent::KEY_DOWN)
    {
	    Manager->moveTheCaret(DOWN,(getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_SHIFT),(getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_CONTROL));
		Manager->printDebugInformation();
    }
	else if(e->getKey() == KeyEvent::KEY_LEFT)
    {
		Manager->moveTheCaret(LEFT,(getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_SHIFT),(getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_CONTROL));
		Manager->printDebugInformation();
    }
	else if(e->getKey() == KeyEvent::KEY_RIGHT)
    {
	    Manager->moveTheCaret(RIGHT,(getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_SHIFT),(getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_CONTROL));
		Manager->printDebugInformation();
    }
	else if(e->getKey() == KeyEvent::KEY_PAGE_UP)
    {
	    Manager->moveTheCaret(PAGEUP,(getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_SHIFT),(getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_CONTROL));
	}
	else if(e->getKey() == KeyEvent::KEY_PAGE_DOWN)
    {
	    Manager->moveTheCaret(PAGEDOWN,(getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_SHIFT),(getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_CONTROL));
	}
	else if(e->getKey() == KeyEvent::KEY_BACK_SPACE)
	{
		if(Manager->isSomethingSelected())
		{
			deleteSelectedUsingCommandManager();//Manager->deleteSelected();
		}
		else
		{
			if(Manager->getCaretLine()!=0 || Manager->getCaretIndex()!=0)
			{
				Manager->moveTheCaret(LEFT,false,false);
				deleteCharacterUsingCommandManager();//getDocumentModel()->deleteCharacter(Manager->getCaretLine(),Manager->getCaretIndex());
			}
		}
	}
	else if(e->getKey() == KeyEvent::KEY_DELETE)
	{
		if(Manager->isSomethingSelected())
		{
			deleteSelectedUsingCommandManager();//Manager->deleteSelected();
		}
		else
		{
			deleteCharacterUsingCommandManager();//getDocumentModel()->deleteCharacter(Manager->getCaretLine(),Manager->getCaretIndex());
		}
	}
	else if(e->getKey() == KeyEvent::KEY_ENTER)
	{
		if(Manager->isSomethingSelected())
		{
			deleteSelectedUsingCommandManager();//Manager->deleteSelected();
		}
		insertCharacterUsingCommandManager('\n',-1,-1);
	}
	else if(e->getKey() == KeyEvent::KEY_HOME)
	{
		Manager->moveTheCaret(HOME,(getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_SHIFT),(getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_CONTROL));
	}
	else if(e->getKey() == KeyEvent::KEY_END)
	{
		Manager->moveTheCaret(END,(getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_SHIFT),(getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_CONTROL));

	}
	else if(e->getKey() == KeyEvent::KEY_TAB)
	{
		tabHandler(getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_SHIFT);
	}
	else
	{
		if(isPrintableChar(e->getKeyChar()) || e->getKey() == KeyEvent::KEY_SPACE)
		{
			if(getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
			{

				if(e->getKey() == KeyEvent::KEY_A)
					Manager->selectAll();

				if(e->getKey() == KeyEvent::KEY_C)
				{
					std::string stringToTheClipboard = getHighlightedString();
					getParentWindow()->getDrawingSurface()->getEventProducer()->putClipboard(stringToTheClipboard);
				}
				if(e->getKey() == KeyEvent::KEY_V)
				{
					std::string theClipboard = getParentWindow()->getDrawingSurface()->getEventProducer()->getClipboard();
					handlePastingAString(theClipboard);
				}
				if(e->getKey() == KeyEvent::KEY_Z)
				{
					if(_TheUndoManager->canUndo())
					{
						_TheUndoManager->undo();
					}
				}
				if(e->getKey() == KeyEvent::KEY_Y)
				{
					if(_TheUndoManager->canRedo())
					{
						_TheUndoManager->redo();
					}
				}
			}
			else
			{
				if(Manager->isSomethingSelected())
				{
					deleteSelectedUsingCommandManager();//Manager->deleteSelected();
				}
				if(Manager->isStartingBraces(e->getKeyChar()))
				{
					Manager->removeBracesHighlightIndices();
					Manager->setStartingBraces(e->getKeyChar(),Manager->getCaretIndex(),Manager->getCaretLine());
				}
				else if(Manager->isEndingBraces(e->getKeyChar()))
				{
					Manager->removeBracesHighlightIndices();
					Manager->setEndingBraces(e->getKeyChar(),Manager->getCaretIndex(),Manager->getCaretLine());
				}
				insertCharacterUsingCommandManager(e->getKeyChar(),-1,-1);

				/*getDocumentModel()->insertCharacter(Manager->getCaretIndex(),Manager->getCaretLine(),e->getKeyChar(),temp);
				Manager->moveTheCaret(RIGHT,false,false);
				Manager->DoIfLineLongerThanPreferredSize();*/
			}
		}
	}
}


void TextDomArea::tabHandler(bool isShiftPressed)
{
	UInt32 lesserLine,greaterLine,lesserIndex;
	TextWithProps temp;
	UInt32 oldHSI = Manager->getHSI();
	UInt32 oldHSL = Manager->getHSL();
	UInt32 oldHEI = Manager->getHEI();
	UInt32 oldHEL = Manager->getHEL();

	PlainDocumentLeafElementRefPtr theElement;
	if(Manager->getHSL() <= Manager->getHEL())
	{
		lesserLine = Manager->getHSL();
		lesserIndex = Manager->getHSI();
		greaterLine = Manager->getHEL();
	}
	else
	{
		lesserLine = Manager->getHEL();
		lesserIndex = Manager->getHEI();
		greaterLine = Manager->getHSL();
	}

	UInt32 count=0;
	if(Manager->isSomethingSelected())
	{
		if(!isShiftPressed)
		{
			for(UInt32 caretLine = lesserLine;caretLine<=greaterLine;caretLine++)
			{
				for(UInt32 i=0;i<getTabSize();i++)
				{
					//getDocumentModel()->insertCharacter(0,caretLine,' ',temp);
					insertCharacterUsingCommandManager(' ',caretLine,0);
				}
				//Manager->DoIfLineLongerThanPreferredSize();
			}
		
		}
		else
		{
			for(UInt32 caretLine = lesserLine;caretLine<=greaterLine;caretLine++)
			{
				theElement = dynamic_pointer_cast<PlainDocumentLeafElement>(Manager->getRootElement()->getElement(caretLine));
				std::string theString = theElement->getText();
				Int32 i;
				for(i=0;i<theElement->getTextLength()-2,i<getTabSize();i++)
				{
					if(theString[i]!=' ')break;
					if(caretLine == Manager->getCaretLine())Manager->moveTheCaret(LEFT,false,false);
					if(caretLine == lesserLine)count--;
				}
				theString = theString.substr(i);
				setTextUsingCommandManager(theElement,theString);
				//theElement->setText(theString);
				
			}
			Manager->setHSI(0);
			Manager->setHSL(lesserLine);
			Manager->setHEI(0);
			Manager->setHEL(greaterLine);
		}
	}
	else
	{
		if(!isShiftPressed)
		{
			for(UInt32 i=0;i<getTabSize();i++)
			{
				//getDocumentModel()->insertCharacter(Manager->getCaretIndex(),Manager->getCaretLine(),' ',temp);
				insertCharacterUsingCommandManager(' ',-1,-1);
				//Manager->moveTheCaret(RIGHT,false,false);
			}
			//Manager->DoIfLineLongerThanPreferredSize();	
		}
		else
		{
			theElement = dynamic_pointer_cast<PlainDocumentLeafElement>(Manager->getRootElement()->getElement(Manager->getCaretLine()));
			std::string theString = theElement->getText();
			Int32 i,count=0;
			Int32 initIndex = Manager->getCaretIndex();
			for(i=Manager->getCaretIndex()-1;i>=0,count<getTabSize();i--,count++)
			{
				if(i<0 || theString[i]!=' ')break;
				Manager->moveTheCaret(LEFT,false,false);
			}
			theString = theString.substr(0,Manager->getCaretIndex())+theString.substr(initIndex);
			setTextUsingCommandManager(theElement,theString);
			//theElement->setText(theString);
		}
	}
}


void TextDomArea::handlePastingAString(std::string theClipboard)
{
	
	TextWithProps temp;
	if(Manager->isSomethingSelected())
	{
		deleteSelectedUsingCommandManager();//Manager->deleteSelected();
	}
	
	//getDocumentModel()->insertString(getCaretPosition(),theClipboard,temp);/// need to deal with this......
	insertStringUsingCommandManager(Manager->CaretLineAndIndexToCaretOffsetInDOM(Manager->getCaretLine(),Manager->getCaretIndex()),theClipboard);

	Manager->updateViews();
	Manager->updateSize();
	updatePreferredSize();
}

void TextDomArea::insertCharacterUsingCommandManager(char theCharacter,UInt32 line,UInt32 index)
{
	CommandPtr theCommand = InsertCharacterCommand::create(Manager,dynamic_cast<PlainDocument*>(getDocumentModel()),theCharacter,line,index);
	_TheCommandManager->executeCommand(theCommand);
}

void TextDomArea::deleteCharacterUsingCommandManager()
{
	CommandPtr theCommand = DeleteCharacterCommand::create(Manager,dynamic_cast<PlainDocument*>(getDocumentModel()));
	_TheCommandManager->executeCommand(theCommand);
}

void TextDomArea::deleteSelectedUsingCommandManager(void)
{
	CommandPtr theCommand = DeleteSelectedCommand::create(Manager,this);
	_TheCommandManager->executeCommand(theCommand);
}

void TextDomArea::setTextUsingCommandManager(PlainDocumentLeafElementRefPtr theElement,std::string theString)
{
	CommandPtr theCommand = SetTextCommand::create(theElement,theString);
	_TheCommandManager->executeCommand(theCommand);
}

void TextDomArea::insertStringUsingCommandManager(UInt32 caretPosition,std::string theString)
{
	CommandPtr theCommand = InsertStringCommand::create(Manager,dynamic_cast<PlainDocument*>(getDocumentModel()),caretPosition,theString);
	_TheCommandManager->executeCommand(theCommand);
}

TextDomAreaRefPtr TextDomArea::getDuplicatedTextDomArea(void)
{
	TextDomAreaRefPtr newPtr = TextDomArea::create();
	newPtr->setWrapStyleWord(this->getWrapStyleWord());
    newPtr->setPreferredSize(this->getPreferredSize());
    newPtr->setMinSize(this->getMinSize());
	newPtr->setFont(this->getFont());
	newPtr->setDocumentModel(this->getDocumentModel());
	newPtr->handleDocumentModelChanged();
	return newPtr;
}

std::string TextDomArea::getHighlightedString(void)
{
	if(Manager->getHSL() != Manager->getHEL() ||  Manager->getHSI() != Manager->getHEI() )
	{
		if(Manager->isStartLocationBeforeEndLocation())
		{
			return(getHighlightedStringInternal(Manager->getHSL(),Manager->getHSI(),Manager->getHEL(),Manager->getHEI()));
		}
		else
		{
			return(getHighlightedStringInternal(Manager->getHEL(),Manager->getHEI(),Manager->getHSL(),Manager->getHSI()));
		}
	}
	else 
	{
		return "";
	}
}

std::string TextDomArea::getHighlightedStringInternal(UInt32 lesserLine,UInt32 lesserIndex,UInt32 greaterLine,UInt32 greaterIndex)
{
	std::string firstLine="";
	std::string lastLine="";
	std::string intermediateLines="";
	PlainDocumentLeafElementRefPtr temp1 = dynamic_pointer_cast<PlainDocumentLeafElement>(Manager->getRootElement()->getElement(lesserLine));
	std::string temp2 = temp1->getText();
	if(lesserLine== greaterLine)
	{
		return temp2.substr(lesserIndex,greaterIndex-lesserIndex);
	}
	else
	{
		// get the first line 
		firstLine = temp2.substr(lesserIndex);

		// get the last line
		temp1 = dynamic_pointer_cast<PlainDocumentLeafElement>(Manager->getRootElement()->getElement(greaterLine));
		temp2 = temp1->getText();
		lastLine = temp2.substr(0,greaterIndex);
	}

	for(UInt32 i=lesserLine+1;i<greaterLine;i++)
	{
		PlainDocumentLeafElementRefPtr theElement = dynamic_pointer_cast<PlainDocumentLeafElement>(Manager->getRootElement()->getElement(i));
		intermediateLines+=theElement->getText();
	}

	return firstLine + intermediateLines + lastLine;
}

void TextDomArea::setupCursor(void)
{
    UInt32 Cursor;
    if(getEnabled())
    {
        Cursor = WindowEventProducer::CURSOR_I_BEAM;
    }
    else
    {
        Cursor = WindowEventProducer::CURSOR_POINTER;
    }
    if(Cursor != getCursor())
    {
        setCursor(Cursor);
    }
}

Vec2f TextDomArea::getPreferredScrollableViewportSize(void)
{
	return Manager->getContentRequestedSize();
}

void TextDomArea::disconnect(void)
{
  /*  this->getParentWindow()->getDrawingSurface()->getEventProducer()->removeMouseListener(this);
    this->getParentWindow()->getDrawingSurface()->getEventProducer()->removeKeyListener(this);
    this->getParentWindow()->getDrawingSurface()->getEventProducer()->removeMouseMotionListener(this);*/
}

void TextDomArea::focusGained(const FocusEventUnrecPtr e)
{
	if( getParentWindow() != NULL &&
		getParentWindow()->getDrawingSurface() != NULL &&
		getParentWindow()->getDrawingSurface()->getEventProducer() != NULL)
    {
		getParentWindow()->getDrawingSurface()->getEventProducer()->addUpdateListener(&_CaretUpdateListener);
	}
	Inherited::focusGained(e);
}

void TextDomArea::focusLost(const FocusEventUnrecPtr e)
{
	if( getParentWindow() != NULL &&
		getParentWindow()->getDrawingSurface() != NULL &&
		getParentWindow()->getDrawingSurface()->getEventProducer() != NULL)
    {
        _CaretUpdateListener.disconnect();
	}
	Inherited::focusLost(e);
}


void TextDomArea::mouseClicked(const MouseEventUnrecPtr e)
{

	Manager->calculateCaretPosition(DrawingSurfaceToComponent(e->getLocation(), TextDomAreaRefPtr(this)),false);

	if(e->getButton() == e->BUTTON1)
	{
		if(e->getClickCount() == 2)
		{
			Manager->doubleClickHandler();
		}
	}

	Inherited::mouseClicked(e);

}

void TextDomArea::mouseReleased(const MouseEventUnrecPtr e)
{
	_IsMousePressed = false;
	Inherited::mouseReleased(e);
}

void TextDomArea::mousePressed(const MouseEventUnrecPtr e)
{
	_IsMousePressed = true;
	if(e->getButton() == e->BUTTON1)
	{
		//set caret position to proper place
		Manager->calculateCaretPosition(DrawingSurfaceToComponent(e->getLocation(), TextDomAreaRefPtr(this)),false);
	}

	Inherited::mousePressed(e);
}


bool TextDomArea::CaretUpdateListener::DrawCaret(void) const
{
	return _DrawCaret;
}

void TextDomArea::CaretUpdateListener::setDrawCaret(bool val)
{
	_DrawCaret = val;
}


void TextDomArea::CaretUpdateListener::update(const UpdateEventUnrecPtr e)
{
   _TextDomArea->_CurrentCaretBlinkElps += e->getElapsedTime();
   if(_TextDomArea->_CurrentCaretBlinkElps > LookAndFeelManager::the()->getLookAndFeel()->getTextCaretRate())
   {
       Int32 Div = _TextDomArea->_CurrentCaretBlinkElps/LookAndFeelManager::the()->getLookAndFeel()->getTextCaretRate();
	   _TextDomArea->_CurrentCaretBlinkElps -= static_cast<OSG::Time>(Div)*LookAndFeelManager::the()->getLookAndFeel()->getTextCaretRate();
	   _DrawCaret = !_DrawCaret;
   }
	
}

void TextDomArea::CaretUpdateListener::disconnect(void)
{
    _TextDomArea->getParentWindow()->getDrawingSurface()->getEventProducer()->removeUpdateListener(this);
}

void TextDomArea::createDefaultFont(void)
{
	_Font = UIFont::create();
    _Font->setFamily("SANS");
    _Font->setGap(3);
    _Font->setGlyphPixelSize(46);
    _Font->setSize(12);
    _Font->setTextureWidth(0);
    _Font->setStyle(TextFace::STYLE_PLAIN);
	
}

void TextDomArea::createDefaultLayer(void)
{
	tempBackground = ColorLayer::create();
    setBackgrounds(tempBackground);
    tempBackground->setColor(Color4f(1.0, 1.0, 1.0, 1.0));
}


void TextDomArea::updatePreferredSize(void)
{
	setPreferredSize(getRequestedSize());
	//produceDocumentModelChanged(NULL);
}

Int32 TextDomArea::getScrollableBlockIncrement(const Pnt2f& VisibleRectTopLeft, const Pnt2f& VisibleRectBottomRight, const UInt32& orientation, const Int32& direction)
{
	return 1;
}

Int32 TextDomArea::getScrollableUnitIncrement(const Pnt2f& VisibleRectTopLeft, const Pnt2f& VisibleRectBottomRight, const UInt32& orientation, const Int32& direction)
{
	if(getFont() != NULL)
    {
        UInt16 MajorAxis;
        if(orientation == ScrollBar::VERTICAL_ORIENTATION)
        {
            MajorAxis = 1;
        }
        else
        {
            MajorAxis = 0;
        }
        Pnt2f TopLeft, BottomRight;
		getFont()->getBounds("A", TopLeft, BottomRight);
		return BottomRight[MajorAxis] - TopLeft[MajorAxis] + (MajorAxis==1?getLineSpacing():0);
    }
    else
    {
        return Inherited::getScrollableUnitIncrement(VisibleRectTopLeft, VisibleRectBottomRight, orientation, direction);
    }
    
}

Vec2f TextDomArea::getContentRequestedSize(void) const
{
	if(Manager)
	{
		return Manager->getContentRequestedSize();
	}
	else
	{
		return getSize();
	}
}

void TextDomArea::handleDocumentModelChanged(void)
{
	setPosition(Pnt2f(0,0));
	SLOG<<"DocumentModel changed"<<std::endl;
	if(Manager == NULL)
	{
		Manager = FixedHeightLayoutManager::create();
		Manager->setTextDomArea(this);
		Manager->calculateLineHeight();
	}
	Manager->initializeRootElement();
	Manager->calculatePreferredSize();
	if(getDocumentModel())getDocumentModel()->addDocumentListener(&_DocumentModifiedListener);
	Manager->setHighlight(0,0,0,0);
	Manager->populateCache();
	updatePreferredSize();
	Manager->updateViews();
}


TextDomArea::CaretUpdateListener::CaretUpdateListener(TextDomAreaRefPtr TheTextDomArea):_DrawCaret(true)
{
	_TextDomArea=TheTextDomArea;
}
/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

TextDomArea::TextDomArea(void) :
	_DocumentModifiedListener(this),
	Manager(NULL),
	_CurrentCaretBlinkElps(0.0),
	_CaretUpdateListener(this),
	_Font(NULL),
    Inherited()
{
	createDefaultFont();
	createDefaultLayer();
	setupCursor();
	_TheUndoManager = UndoManager::create();
	_TheCommandManager = CommandManager::create(_TheUndoManager);
}



TextDomArea::TextDomArea(const TextDomArea &source) :
	_DocumentModifiedListener(this),
	_CurrentCaretBlinkElps(0.0),
    _CaretUpdateListener(this),
	Inherited(source)
{
	Manager = source.Manager;
	_Font = source._Font;
	setupCursor();
	_TheUndoManager = UndoManager::create();
	_TheCommandManager = CommandManager::create(_TheUndoManager);
}

TextDomArea::~TextDomArea(void)
{
}

/*----------------------------- class specific ----------------------------*/

void TextDomArea::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
	if(whichField & TextDomArea::ClipBoundsFieldMask)
	{
		if(Manager)Manager->updateViews();
	}
	else if(whichField & TextDomArea::FontFieldMask)
	{
		if(Manager)
		{
			Manager->calculateLineHeight();
			Manager->populateCache();
			Manager->updateViews();
			updatePreferredSize();
		}
	}
}

void TextDomArea::dump(      UInt32,
                         const BitVector ) const
{
    SLOG << "Dump TextDomArea NI" << std::endl;

}

OSG_END_NAMESPACE
