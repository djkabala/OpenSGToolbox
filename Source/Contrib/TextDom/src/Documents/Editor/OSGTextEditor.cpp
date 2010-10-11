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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

//#define OSG_COMPILECONTRIBTEXTDOMLIB

#include <OSGConfig.h>

#include "OSGTextEditor.h"

#include "OSGAdvancedTextDomArea.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGTextEditorBase.cpp file.
// To modify it, please change the .fcd file (OSGTextEditor.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void TextEditor::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/



void TextEditor::keyTyped(const KeyEventUnrecPtr e)
{
		if(getParentWindow()->getDrawingSurface()->getEventProducer()->getKeyModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
		{
			if(e->getKey() == KeyEvent::KEY_F)
			{
				if(!TheSearchDialog)
				{
					std::vector<std::string> inputValues;
					inputValues.push_back("Main");
					inputValues.push_back("main");
					TheSearchDialog = SearchWindow::createDialog("Search Window",inputValues);
					//TheSearchDialog->setIconable(false);
					//TheSearchDialog->setAllwaysOnTop(true);
					TheSearchDialog->addSearchWindowListener(&_TheSearchWindowListener);
					TheSearchDialog->setPosition(getParentWindow()->getPosition());
					getParentWindow()->getDrawingSurface()->openWindow(TheSearchDialog);
				}
				else
				{
					if(_IsDialogClosed)
					{
						getParentWindow()->getDrawingSurface()->openWindow(TheSearchDialog);
						_IsDialogClosed = false;
					}
					else
					{
						//getParentWindow()->setFocused(false);
						//TheSearchDialog->setFocused(true);
						//TheSearchDialog->takeFocus();
						//getParentWindow()->giveFocus(TheSearchDialog);
					}
				}
			}
			else if(e->getKey() == KeyEvent::KEY_C)
			{
				std::string theClipboard = getParentWindow()->getDrawingSurface()->getEventProducer()->getClipboard();
				_TheClipboardListModel->pushBack(boost::any(theClipboard));
			}
		}
}

void TextEditor::mouseClicked(const MouseEventUnrecPtr e)
{

	std::cout<<"mouse clicked"<<std::endl;

	if(getParentWindow()->getFocusedComponent()->getType().isDerivedFrom(TextDomArea::getClassType()))
	{
		setFocusedDomArea(dynamic_cast<TextDomArea*>(this->getParentWindow()->getFocusedComponent()));
		std::cout<<"Selected a Dom Area"<<std::endl;
	}

	if(e->getButton() == e->BUTTON1)
	{
		if(e->getClickCount() == 2)
		{
			std::cout<<"double clicked"<<std::endl;
			if(_TheClipboardList->isContained(e->getLocation(), true))
			{
				std::cout<<"on the clipboard list";
				std::string stringToBeInserted = boost::any_cast<std::string>(_TheClipboardList->getSelectedItem());
				std::cout<<"string to be inserted = "<<stringToBeInserted;
				//this->addMouseListener();
			}
			std::cout<<"\n";
		}
		if(_TheClipboardList->isContained(e->getLocation(), true))
		{
			std::cout<<"clicked on clipboard\n";
		}
	}
	Inherited::mouseClicked(e);
}
/*
TextEditor::TheMouseListener::TheMouseListener(TextEditorRefPtr TheTextEditor)
{
	_TextEditor = TheTextEditor;
}

void TextEditor::TheMouseListener::mouseClicked(const MouseEventUnrecPtr e)
{
	if(e->getClickCount() == 2)
	{
		std::cout<<"double cliked from listener"<<std::endl;
	}
	_TextEditor->mouseClicked(e);
	//Inherited::mouseClicked(e);
}

void TextEditor::TheMouseListener::mouseEntered(const MouseEventUnrecPtr e)
{
}
void TextEditor::TheMouseListener::mouseExited(const MouseEventUnrecPtr e)
{
}
void TextEditor::TheMouseListener::mousePressed(const MouseEventUnrecPtr e)
{
}
void TextEditor::TheMouseListener::mouseReleased(const MouseEventUnrecPtr e)
{
}

*/
TextEditor::TheSearchWindowListener::TheSearchWindowListener(TextEditorRefPtr TheTextEditor)
{
	_TheTextEditor = TheTextEditor;
}

TextEditor::TheSearchWindowListener::~TheSearchWindowListener()
{
}

void TextEditor::TheSearchWindowListener::dialogClosed(const SearchWindowEventUnrecPtr e)
{
	_TheTextEditor->dialogClosed(e);
}
void TextEditor::TheSearchWindowListener::dialogClosing(const SearchWindowEventUnrecPtr e)
{
	_TheTextEditor->dialogClosing(e);
}
void TextEditor::TheSearchWindowListener::searchButtonClicked(const SearchWindowEventUnrecPtr e)
{
	_TheTextEditor->searchButtonClicked(e);
}

void TextEditor::TheSearchWindowListener::replaceButtonClicked(const SearchWindowEventUnrecPtr e)
{
	_TheTextEditor->replaceButtonClicked(e);
}

void TextEditor::TheSearchWindowListener::replaceAllButtonClicked(const SearchWindowEventUnrecPtr e)
{
	_TheTextEditor->replaceAllButtonClicked(e);
}

void TextEditor::TheSearchWindowListener::bookmarkAllButtonClicked(const SearchWindowEventUnrecPtr e)
{
	_TheTextEditor->bookmarkAllButtonClicked(e);
}

void TextEditor::dialogClosed(const SearchWindowEventUnrecPtr e)
{
	_IsDialogClosed = true;
	std::cout<<"dialog closed\n";
}

void TextEditor::dialogClosing(const SearchWindowEventUnrecPtr e)
{
	std::cout<<"dialog closing\n";
}

void TextEditor::searchButtonClicked(const SearchWindowEventUnrecPtr e)
{
	SearchWindowRefPtr theSearchWindow = dynamic_cast<SearchWindow*>(e->getSource());

	if(theSearchWindow)
	{
		//std::cout<<"\nstext:"<<theSearchWindow->getSearchText()<<" rtext:"<<theSearchWindow->getReplaceText();
		//std::cout<<" isCaseChecked:"<<theSearchWindow->isCaseChecked()<<" isWholeWordChecked:"<<theSearchWindow->isWholeWordChecked();
		//std::cout<<" isUseRegExChecked:"<<theSearchWindow->isUseRegExChecked()<<std::endl;
	
		TextDomAreaRefPtr theFocussedDomArea = getFocusedDomArea();
		if(theFocussedDomArea)
		{
			std::string searchString = theSearchWindow->getSearchText();
			if(!theSearchWindow->isUseRegExChecked())
			{
				theFocussedDomArea->searchForStringInDocument(searchString,theSearchWindow->isCaseChecked(),theSearchWindow->isWholeWordChecked());
			}
			else
			{
				//std::string DIS = theFocussedDomArea->getDIS();
			}
		}
	}
	std::cout<<"search button clicked\n";
}

void TextEditor::replaceButtonClicked(const SearchWindowEventUnrecPtr e)
{
	SearchWindowRefPtr theSearchWindow = dynamic_cast<SearchWindow*>(e->getSource());

	if(theSearchWindow)
	{
		TextDomAreaRefPtr theFocussedDomArea = getFocusedDomArea();
		if(theFocussedDomArea)
		{
			theFocussedDomArea->handlePastingAString(theSearchWindow->getReplaceText());
		}
	}
}

void TextEditor::replaceAllButtonClicked(const SearchWindowEventUnrecPtr e)
{
	std::cout<<"replace all button clicked\n";
}

void TextEditor::bookmarkAllButtonClicked(const SearchWindowEventUnrecPtr e)
{
	std::cout<<"bookmark all button clicked\n";
}

void TextEditor::saveFile(BoostPath file)
{
    //ScrollPanelRefPtr _ToBeSavedScrollPanel = dynamic_cast<ScrollPanel*>(_LeftTabPanel->getTabContents(_LeftTabPanel->getSelectedIndex()));
    //AdvancedTextDomAreaRefPtr _ToBeSavedTextDomArea = dynamic_cast<AdvancedTextDomArea*>(_ToBeSavedScrollPanel->getViewComponent());
    //_ToBeSavedTextDomArea->saveFile(file);
}

void TextEditor::closeButtonActionPerformed(const OSG::ActionEventUnrecPtr e)
{
		ButtonRefPtr _TempCloseButton = dynamic_cast<Button*>(e->getSource());
		PanelRefPtr _TempPanel = dynamic_cast<Panel*>(_TempCloseButton->getParentContainer());
		TabPanelRefPtr _TempTabPanel = dynamic_cast<TabPanel*>(_TempPanel->getParentContainer());
		UInt32 _ChildIndex = (_TempTabPanel->getChildIndex(_TempPanel))/2;

		_LeftTabPanel->removeTab(_ChildIndex);

		_RightTabPanel->removeTab(_ChildIndex);
	
}

void TextEditor::actionPerformed(const OSG::ActionEventUnrecPtr e)
{
	if(e->getSource() == _TheClipboardButton)
	{
		TextDomAreaRefPtr tempDomArea = getFocusedDomArea();
		if(tempDomArea == NULL) return;
		std::string stringToBeInserted = boost::any_cast<std::string>(_TheClipboardList->getSelectedItem());
		std::cout<<"string to be inserted = "<<stringToBeInserted;
		tempDomArea->handlePastingAString(stringToBeInserted);
	}
}

void TextEditor::CloseButtonListener::actionPerformed(const OSG::ActionEventUnrecPtr e)
{
    _TextEditor->closeButtonActionPerformed(e);
}

TextEditor::CloseButtonListener::CloseButtonListener(TextEditorRefPtr TheTextEditor)
{
	_TextEditor = TheTextEditor;
}

TextEditor::CloseButtonListener::~CloseButtonListener()
{
}

void TextEditor::ClipboardButtonListener::actionPerformed(const OSG::ActionEventUnrecPtr e)
{
    _TextEditor->actionPerformed(e);
}

TextEditor::ClipboardButtonListener::ClipboardButtonListener(TextEditorRefPtr TheTextEditor)
{
	_TextEditor = TheTextEditor;
}

TextEditor::ClipboardButtonListener::~ClipboardButtonListener()
{
}

void TextEditor::createRightTabPanel()
{
    _RightTabPanel= OSG::TabPanel::create();
    _RightTabPanel->setPreferredSize(Vec2f(600,400));
    _RightTabPanel->addTab(_RightTabPanelLabel, _RightTabPanelContent);
    _RightTabPanel->setTabAlignment(0.5f);
    _RightTabPanel->setTabPlacement(TabPanel::PLACEMENT_NORTH);
    _RightTabPanel->setSelectedIndex(0);
}

void TextEditor::createLeftTabPanel()
{
    _LeftTabPanel= OSG::TabPanel::create();
    _LeftTabPanel->setPreferredSize(Vec2f(600,400));
    _LeftTabPanel->addTab(_LeftTabPanelLabel, _LeftTabPanelContent);
    _LeftTabPanel->setTabAlignment(0.5f);
    _LeftTabPanel->setTabPlacement(TabPanel::PLACEMENT_NORTH);
    _LeftTabPanel->setSelectedIndex(0);
}

void TextEditor::createDefaultTabs()
{
    _LeftTabPanelLabel = OSG::Label::create();

    // set the fields of the labels
    _LeftTabPanelLabel->setPreferredSize(Vec2f(120,20));
    _LeftTabPanelLabel->setText("Welcome!");
    _LeftTabPanelLabel->setBorders(NULL);
    _LeftTabPanelLabel->setBackgrounds(NULL);

    // Create a _StackTraceTextArea
    _LeftTabPanelTextArea = OSG::TextArea::create();
    _LeftTabPanelTextArea->setText("Hey Programmer!\n\n\n The following shortcuts also exists \n Ctrl+X\t-\t to execute Lua code \n Ctrl+1\t-\t To Focus on Lua Console TextArea \n Ctrl+T\t-\t for splitting the Content Panel \n\n You can now save/open files using the Debugging Interface\n Please DO NOT open files greater than 5KB.It is not efficiently coded and hence would take years to load.\n\n\n\t\tThank you!\n\n");
    _LeftTabPanelTextArea->setEditable(false);

    _LeftTabPanelContent = ScrollPanel::create();
    _LeftTabPanelContent->setPreferredSize(Vec2f(200,1200));
    _LeftTabPanelContent->setHorizontalResizePolicy(ScrollPanel::RESIZE_TO_VIEW);
    // Add the _LeftTabPanelTextArea to the ScrollPanel so it is displayed
    _LeftTabPanelContent->setViewComponent(_LeftTabPanelTextArea);


    _RightTabPanelLabel = OSG::Label::create();

    // set the fields of the labels
    _RightTabPanelLabel->setText("Screen2");
    _RightTabPanelLabel->setBorders(NULL);
    _RightTabPanelLabel->setBackgrounds(NULL);

    // Create a _StackTraceTextArea
    _RightTabPanelTextArea = OSG::TextArea::create();
    _RightTabPanelTextArea->setText("This is the Second screen.\n\n Opening files now will open them in both screens.\n\n Pressing the \"Save file\" would only save the currently selected file in the left screen.\n\n\t\tThank you!\n\n");
    _RightTabPanelTextArea->setEditable(false);

    _RightTabPanelContent = ScrollPanel::create();
    _RightTabPanelContent->setPreferredSize(Vec2f(200,400));
    _RightTabPanelContent->setHorizontalResizePolicy(ScrollPanel::RESIZE_TO_VIEW);
    // Add the _RightTabPanelTextArea to the ScrollPanel so it is displayed
    _RightTabPanelContent->setViewComponent(_RightTabPanelTextArea);

}

void TextEditor::updateDomLayout(bool isSplit)
{
    if(isSplit)
    {
        _InsideDomArea->setDividerPosition(.50); 
        _InsideDomArea->setMaxDividerPosition(.75);
        _InsideDomArea->setMinDividerPosition(.25);
    }
    else
    {
        _InsideDomArea->setDividerPosition(1); 
        _InsideDomArea->setMaxDividerPosition(1);
        _InsideDomArea->setMinDividerPosition(1);
    }
}

void TextEditor::updateLayout(bool isClipboardVisible)
{
	if(isClipboardVisible)
	{
		_DomAreaAndClipboard->setDividerSize(5);
		_DomAreaAndClipboard->setDividerPosition(0.75);
		_DomAreaAndClipboard->setMaxDividerPosition(.9);
		_DomAreaAndClipboard->setMinDividerPosition(0.5);
	}
	else
	{
		_DomAreaAndClipboard->setDividerSize(0);
		_DomAreaAndClipboard->setDividerPosition(1); 
        _DomAreaAndClipboard->setMaxDividerPosition(1);
        _DomAreaAndClipboard->setMinDividerPosition(1);
	}
}

AdvancedTextDomAreaRefPtr TextEditor::makeADuplicate(AdvancedTextDomAreaRefPtr TheAdvancedTextDomArea)
{
	return TheAdvancedTextDomArea->makeADuplicate();
}

void TextEditor::loadNewFile(BoostPath file)
{
	if(boost::filesystem::exists(file))
	{
		PanelRefPtr _NewLeftTabLabelPanel = Panel::createEmpty();

		ButtonRefPtr _NewLeftTabLabelCloseButtonRefPtr =
			dynamic_pointer_cast<Button>(dynamic_cast<InternalWindow*>(InternalWindow::getClassType().getPrototype())->getTitlebar()->getCloseButton()->shallowCopy());

		//ButtonRefPtr _NewLeftTabLabelCloseButtonRefPtr = Button::create();

		/*_NewLeftTabLabelCloseButtonRefPtr->setPreferredSize(Vec2f(100,20));
		_NewLeftTabLabelCloseButtonRefPtr->setText("X");*/

		_NewLeftTabLabelCloseButtonRefPtr->addActionListener(&_CloseButtonListener);

		LabelRefPtr _NewLeftTabLabelLabel=Label::create();
		_NewLeftTabLabelLabel->setText(file.leaf());
		_NewLeftTabLabelLabel->setBorders(NULL);
		_NewLeftTabLabelLabel->setBackgrounds(NULL);

		SpringLayoutRefPtr _NewLeftTabLabelPanelSpringLayout = OSG::SpringLayout::create();

		_NewLeftTabLabelPanelSpringLayout->putConstraint(SpringLayoutConstraints::NORTH_EDGE, _NewLeftTabLabelCloseButtonRefPtr, 2, SpringLayoutConstraints::NORTH_EDGE, _NewLeftTabLabelPanel);  
		_NewLeftTabLabelPanelSpringLayout->putConstraint(SpringLayoutConstraints::EAST_EDGE, _NewLeftTabLabelCloseButtonRefPtr, -2, SpringLayoutConstraints::EAST_EDGE, _NewLeftTabLabelPanel);
		_NewLeftTabLabelPanelSpringLayout->putConstraint(SpringLayoutConstraints::WEST_EDGE, _NewLeftTabLabelCloseButtonRefPtr, -20, SpringLayoutConstraints::EAST_EDGE, _NewLeftTabLabelPanel);
		_NewLeftTabLabelPanelSpringLayout->putConstraint(SpringLayoutConstraints::SOUTH_EDGE, _NewLeftTabLabelCloseButtonRefPtr, -2, SpringLayoutConstraints::SOUTH_EDGE, _NewLeftTabLabelPanel);

		_NewLeftTabLabelPanelSpringLayout->putConstraint(SpringLayoutConstraints::NORTH_EDGE, _NewLeftTabLabelLabel, 2, SpringLayoutConstraints::NORTH_EDGE, _NewLeftTabLabelPanel);  
		_NewLeftTabLabelPanelSpringLayout->putConstraint(SpringLayoutConstraints::EAST_EDGE, _NewLeftTabLabelLabel, -5, SpringLayoutConstraints::WEST_EDGE, _NewLeftTabLabelCloseButtonRefPtr);
		_NewLeftTabLabelPanelSpringLayout->putConstraint(SpringLayoutConstraints::WEST_EDGE, _NewLeftTabLabelLabel, 2, SpringLayoutConstraints::WEST_EDGE, _NewLeftTabLabelPanel);
		_NewLeftTabLabelPanelSpringLayout->putConstraint(SpringLayoutConstraints::SOUTH_EDGE, _NewLeftTabLabelLabel, -2, SpringLayoutConstraints::SOUTH_EDGE, _NewLeftTabLabelPanel);


		_NewLeftTabLabelPanel->setPreferredSize(Vec2f(120,20));
		_NewLeftTabLabelPanel->pushToChildren(_NewLeftTabLabelLabel);
		_NewLeftTabLabelPanel->pushToChildren(_NewLeftTabLabelCloseButtonRefPtr);
		_NewLeftTabLabelPanel->setLayout(/*LayoutRefPtr(FlowLayout::create())*/_NewLeftTabLabelPanelSpringLayout);


			// Create a TextDomArea component
		UIFontRefPtr _Font = UIFont::create();
		_Font->setFamily("SANS");
		_Font->setGap(3);
		_Font->setGlyphPixelSize(46);
		_Font->setSize(15);
		_Font->setTextureWidth(0);
		_Font->setStyle(TextFace::STYLE_PLAIN);

		AdvancedTextDomAreaRefPtr ExampleTextDomArea = AdvancedTextDomArea::create();
		ExampleTextDomArea->setPreferredSize(Vec2f(400,400));
		ExampleTextDomArea->loadFile(file);
		
		/*ExampleTextDomArea->setWrapStyleWord(false);
		ExampleTextDomArea->setFont(_Font);*/

		ScrollPanelRefPtr _NewLeftTabContent = ScrollPanel::create();
		_NewLeftTabContent->setPreferredSize(Vec2f(200,400));
		_NewLeftTabContent->setHorizontalResizePolicy(ScrollPanel::RESIZE_TO_VIEW);
		_NewLeftTabContent->setViewComponent(ExampleTextDomArea); 

		PanelRefPtr _NewRightTabLabelPanel = Panel::createEmpty();

		ButtonRefPtr _RightTabLabelCloseButtonRefPtr = dynamic_pointer_cast<Button>(dynamic_cast<InternalWindow*>(InternalWindow::getClassType().getPrototype())->getTitlebar()->getCloseButton()->shallowCopy());

		//_RightTabLabelCloseButtonRefPtr->setPreferredSize(Vec2f(20,10));
		// _RightTabLabelCloseButtonRefPtr->setText("X");

		_RightTabLabelCloseButtonRefPtr->addActionListener(&_CloseButtonListener);

		LabelRefPtr _NewRightTabLabel=Label::create();
		_NewRightTabLabel->setText(file.leaf());
		_NewRightTabLabel->setBorders(NULL);
		_NewRightTabLabel->setBackgrounds(NULL);

		SpringLayoutRefPtr _NewRightTabLabelPanelSpringLayout = OSG::SpringLayout::create();

		_NewRightTabLabelPanelSpringLayout->putConstraint(SpringLayoutConstraints::NORTH_EDGE, _RightTabLabelCloseButtonRefPtr, 2, SpringLayoutConstraints::NORTH_EDGE, _NewRightTabLabelPanel);  
		_NewRightTabLabelPanelSpringLayout->putConstraint(SpringLayoutConstraints::EAST_EDGE, _RightTabLabelCloseButtonRefPtr, -2, SpringLayoutConstraints::EAST_EDGE, _NewRightTabLabelPanel);
		_NewRightTabLabelPanelSpringLayout->putConstraint(SpringLayoutConstraints::WEST_EDGE, _RightTabLabelCloseButtonRefPtr, -20, SpringLayoutConstraints::EAST_EDGE, _NewRightTabLabelPanel);
		_NewRightTabLabelPanelSpringLayout->putConstraint(SpringLayoutConstraints::SOUTH_EDGE, _RightTabLabelCloseButtonRefPtr, -2, SpringLayoutConstraints::SOUTH_EDGE, _NewRightTabLabelPanel);

		_NewRightTabLabelPanelSpringLayout->putConstraint(SpringLayoutConstraints::NORTH_EDGE, _NewRightTabLabel, 2, SpringLayoutConstraints::NORTH_EDGE, _NewRightTabLabelPanel);  
		_NewRightTabLabelPanelSpringLayout->putConstraint(SpringLayoutConstraints::EAST_EDGE, _NewRightTabLabel, -5, SpringLayoutConstraints::WEST_EDGE, _RightTabLabelCloseButtonRefPtr);
		_NewRightTabLabelPanelSpringLayout->putConstraint(SpringLayoutConstraints::WEST_EDGE, _NewRightTabLabel, 2, SpringLayoutConstraints::WEST_EDGE, _NewRightTabLabelPanel);
		_NewRightTabLabelPanelSpringLayout->putConstraint(SpringLayoutConstraints::SOUTH_EDGE, _NewRightTabLabel, -2, SpringLayoutConstraints::SOUTH_EDGE, _NewRightTabLabelPanel);


		_NewRightTabLabelPanel->setPreferredSize(Vec2f(120,20));
		_NewRightTabLabelPanel->pushToChildren(_RightTabLabelCloseButtonRefPtr);
		_NewRightTabLabelPanel->pushToChildren(_NewRightTabLabel);
		_NewRightTabLabelPanel->setLayout(/*LayoutRefPtr(FlowLayout::create())*/_NewRightTabLabelPanelSpringLayout);


		AdvancedTextDomAreaRefPtr ExampleTextDomArea2 =  makeADuplicate(ExampleTextDomArea);///*dynamic_pointer_cast<AdvancedTextDomArea>(deepClone(ExampleTextDomArea));*/AdvancedTextDomArea::create();
		//ExampleTextDomArea2->setPreferredSize(Vec2f(400, 400));
		//ExampleTextDomArea2->loadFile(file);
		

		ScrollPanelRefPtr _NewRightTabContent = ScrollPanel::create();
		_NewRightTabContent->setPreferredSize(Vec2f(200,400));
		_NewRightTabContent->setHorizontalResizePolicy(ScrollPanel::RESIZE_TO_VIEW);
		_NewRightTabContent->setViewComponent(ExampleTextDomArea2);


		_LeftTabPanel->addTab(_NewLeftTabLabelPanel, _NewLeftTabContent);
		_LeftTabPanel->setSelectedIndex((_LeftTabPanel->getMFTabs()->size())-1);
		_RightTabPanel->addTab(_NewRightTabLabelPanel, _NewRightTabContent);
		_RightTabPanel->setSelectedIndex((_RightTabPanel->getMFTabs()->size())-1);
	
	}
}

void TextEditor::createDomArea(void)
{

	createDefaultTabs();
	createRightTabPanel();
	createLeftTabPanel();

	BorderLayoutConstraintsRefPtr ExampleSplitPanelConstraints2 = OSG::BorderLayoutConstraints::create();
    ExampleSplitPanelConstraints2->setRegion(BorderLayoutConstraints::BORDER_CENTER);
	
	_InsideDomArea = SplitPanel::create();

	_InsideDomArea->setConstraints(ExampleSplitPanelConstraints2);
	_InsideDomArea->setExpandable(true);
	_InsideDomArea->setDividerSize(2);
	_InsideDomArea->setOrientation(SplitPanel::HORIZONTAL_ORIENTATION);
	_InsideDomArea->setMinComponent(_LeftTabPanel);
	_InsideDomArea->setMaxComponent(_RightTabPanel);
	
	updateDomLayout(getIsSplit());

}

void TextEditor::clipboardInitialization()
{
	BorderLayoutRefPtr MainInternalWindowLayout = OSG::BorderLayout::create();

	BorderLayoutConstraintsRefPtr ClipboardLabelConstraints = OSG::BorderLayoutConstraints::create();
    BorderLayoutConstraintsRefPtr ClipboardPanelConstraints = OSG::BorderLayoutConstraints::create();
	BorderLayoutConstraintsRefPtr ClipboardButtonConstraints = OSG::BorderLayoutConstraints::create();

	ClipboardLabelConstraints->setRegion(BorderLayoutConstraints::BORDER_NORTH);
    ClipboardPanelConstraints->setRegion(BorderLayoutConstraints::BORDER_CENTER);
	ClipboardButtonConstraints->setRegion(BorderLayoutConstraints::BORDER_SOUTH);

	_TheClipboardPanel = Panel::create();
	
	// the Clipboard label
	_TheClipboardLabel = Label::create();
    _TheClipboardLabel->setText("Copy Clipboard");
    _TheClipboardLabel->setTextColor(Color4f(0.3, 0.3, 0.3, 1.0));
    _TheClipboardLabel->setAlignment(Vec2f(0.5,0.5));
    _TheClipboardLabel->setPreferredSize(Vec2f(200, 20));
    _TheClipboardLabel->setTextSelectable(false);
	_TheClipboardLabel->setConstraints(ClipboardLabelConstraints);

	_TheClipboardButton = Button::create();
	_TheClipboardButton->setText("Insert Into Document");
	_TheClipboardButton->setMinSize(_TheClipboardButton->getPreferredSize());
    _TheClipboardButton->setPreferredSize(_TheClipboardButton->getRequestedSize());
	_TheClipboardButton->addActionListener(&_ClipboardButtonListener);
	_TheClipboardButton->setConstraints(ClipboardButtonConstraints);

	// the Clipboard list
	_TheClipboardListSelectionModel=ListSelectionModelPtr(new DefaultListSelectionModel());
	_TheClipboardListSelectionModel->setSelectionMode(DefaultListSelectionModel::SINGLE_SELECTION);

	_TheClipboardListModel = DefaultListModel::create();
	//_TheClipboardListModel->pushBack(boost::any(std::string("Red")));

	_TheClipboardList = List::create();
	_TheClipboardList->setPreferredSize(Vec2f(200, 400));
	_TheClipboardList->setOrientation(List::VERTICAL_ORIENTATION);
	_TheClipboardList->setModel(_TheClipboardListModel);

	_TheClipboardList->setSelectionModel(_TheClipboardListSelectionModel);

	_TheClipboardScrollPanel = ScrollPanel::create();
	_TheClipboardScrollPanel->setPreferredSize(Vec2f(200,400));
	_TheClipboardScrollPanel->setHorizontalResizePolicy(ScrollPanel::RESIZE_TO_VIEW);
	_TheClipboardScrollPanel->setViewComponent(_TheClipboardList);
	_TheClipboardScrollPanel->setConstraints(ClipboardPanelConstraints);

	    
    

	/*SpringLayoutRefPtr _TheClipboardPanelLayout = SpringLayout::create();
	
	_TheClipboardPanelLayout->putConstraint(SpringLayoutConstraints::NORTH_EDGE, _TheClipboardLabel, 10, SpringLayoutConstraints::NORTH_EDGE, _TheClipboardPanel);
	_TheClipboardPanelLayout->putConstraint(SpringLayoutConstraints::EAST_EDGE, _TheClipboardLabel, 0, SpringLayoutConstraints::EAST_EDGE, _TheClipboardPanel);
	_TheClipboardPanelLayout->putConstraint(SpringLayoutConstraints::WEST_EDGE, _TheClipboardLabel, 0, SpringLayoutConstraints::WEST_EDGE, _TheClipboardPanel);
	_TheClipboardPanelLayout->putConstraint(SpringLayoutConstraints::SOUTH_EDGE, _TheClipboardLabel, 30, SpringLayoutConstraints::NORTH_EDGE, _TheClipboardPanel);

	_TheClipboardPanelLayout->putConstraint(SpringLayoutConstraints::NORTH_EDGE, _TheClipboardScrollPanel, 40, SpringLayoutConstraints::NORTH_EDGE, _TheClipboardPanel);
	_TheClipboardPanelLayout->putConstraint(SpringLayoutConstraints::EAST_EDGE, _TheClipboardScrollPanel, 0, SpringLayoutConstraints::EAST_EDGE, _TheClipboardPanel);
	_TheClipboardPanelLayout->putConstraint(SpringLayoutConstraints::WEST_EDGE, _TheClipboardScrollPanel, 0, SpringLayoutConstraints::WEST_EDGE, _TheClipboardPanel);
	_TheClipboardPanelLayout->putConstraint(SpringLayoutConstraints::SOUTH_EDGE, _TheClipboardScrollPanel, 20, SpringLayoutConstraints::SOUTH_EDGE, _TheClipboardPanel);*/

	_TheClipboardPanel->pushToChildren(_TheClipboardLabel);
	_TheClipboardPanel->pushToChildren(_TheClipboardScrollPanel);
	_TheClipboardPanel->pushToChildren(_TheClipboardButton);
	_TheClipboardPanel->setLayout(/*LayoutRefPtr(FlowLayout::create())*/MainInternalWindowLayout/*_TheClipboardPanelLayout*/);
	_TheClipboardPanel->setPreferredSize(Vec2f(200, 400));
}

void TextEditor::onCreate(const TextEditor *source)
{

	if(source == NULL)
	{
		return;
	}

	createDomArea();
	clipboardInitialization();

	_DomAreaAndClipboard = SplitPanel::create();

	BorderLayoutRefPtr MainInternalWindowLayout = OSG::BorderLayout::create();

    BorderLayoutConstraintsRefPtr ExampleSplitPanelConstraints = OSG::BorderLayoutConstraints::create();
    ExampleSplitPanelConstraints->setRegion(BorderLayoutConstraints::BORDER_CENTER);
	
	_DomAreaAndClipboard->setConstraints(ExampleSplitPanelConstraints);
	_DomAreaAndClipboard->setExpandable(true);
	_DomAreaAndClipboard->setOrientation(SplitPanel::HORIZONTAL_ORIENTATION);
	_DomAreaAndClipboard->setMaxComponent(_TheClipboardPanel);
	_DomAreaAndClipboard->setMinComponent(_InsideDomArea);


	updateLayout(getClipboardVisible());

	pushToChildren(_DomAreaAndClipboard);
	setLayout(MainInternalWindowLayout);

/*	if(getParentWindow() != NULL && getParentWindow()->getDrawingSurface()!=NULL&& getParentWindow()->getDrawingSurface()->getEventProducer() != NULL)
    {
		getParentWindow()->getDrawingSurface()->getEventProducer()->addMouseListener(&_MouseListener);
	}*/

}

TextEditor::TextEditor(void) :
	_CloseButtonListener(this),
	//_MouseListener(this),
	_ClipboardButtonListener(this),
	_TheSearchWindowListener(this),
    Inherited()
{
}

TextEditor::TextEditor(const TextEditor &source) :
	_CloseButtonListener(this),
	_ClipboardButtonListener(this),
	//_MouseListener(this),
	_TheSearchWindowListener(this),
    Inherited(source)
{
}

TextEditor::~TextEditor(void)
{
}

/*----------------------------- class specific ----------------------------*/

void TextEditor::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
	if(whichField & TextEditor::ClipboardVisibleFieldMask)
	{
		updateLayout(getClipboardVisible());
	}
	else if(whichField & TextEditor::IsSplitFieldMask)
	{
		updateDomLayout(getIsSplit());
	}
	

    Inherited::changed(whichField, origin, details);
}

void TextEditor::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump TextEditor NI" << std::endl;
}

OSG_END_NAMESPACE
