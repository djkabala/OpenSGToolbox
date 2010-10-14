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

#ifndef _OSGTEXTEDITOR_H_
#define _OSGTEXTEDITOR_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGTextEditorBase.h"
#include "OSGAdvancedTextDomArea.h"

#include "OSGScrollPanel.h"
#include "OSGLabel.h"
#include "OSGTextDomArea.h"
#include "OSGFixedHeightLayoutManager.h"
#include "OSGPanel.h"
#include "OSGColorLayer.h"
#include "OSGLineBorder.h"
#include "OSGList.h"
#include "OSGListSelectionModel.h"
#include "OSGDefaultListSelectionModel.h"
#include "OSGDefaultListModel.h"
#include "OSGSpringLayout.h"
#include "OSGSpringLayoutConstraints.h"
#include "OSGSplitPanel.h"
#include "OSGBorderLayout.h"
#include "OSGTabPanel.h"
#include "OSGInternalWindow.h"
#include "OSGSearchWindow.h"
#include <boost/filesystem/operations.hpp>
#include <boost/filesystem/convenience.hpp>
#include <boost/algorithm/string.hpp>


OSG_BEGIN_NAMESPACE

/*! \brief TextEditor class. See \ref
           PageContribTextDomTextEditor for a description.
*/

class OSG_CONTRIBTEXTDOM_DLLMAPPING TextEditor : public TextEditorBase
{
  protected:

	  enum searchWindowButtons{SEARCH,REPLACE,REPLACE_ALL,BOOKMARK_ALL};

		SplitPanelRefPtr _DomAreaAndClipboard;
		SplitPanelRefPtr _InsideDomArea;

	    // Clipboard related
		ListRefPtr _TheClipboardList;
		DefaultListModelRefPtr _TheClipboardListModel;
		ListSelectionModelPtr _TheClipboardListSelectionModel;
		ScrollPanelRefPtr _TheClipboardScrollPanel;
		LabelRefPtr _TheClipboardLabel;
		PanelRefPtr _TheClipboardPanel;
		SpringLayoutRefPtr _TheClipboardPanelLayout;
		ButtonRefPtr _TheClipboardButton;

		virtual void mouseClicked(MouseEventUnrecPtr e);

		void clipboardInitialization(void);
		void createDomArea(void);
		AdvancedTextDomAreaRefPtr makeADuplicate(AdvancedTextDomAreaRefPtr TheAdvancedTextDomArea);

		void updateLayout(bool isClipboardVisible);	// to update the layout of the editor(to show/hide the copy clipboard)
		void updateDomLayout(bool isSplit);	// to update the layout of the Document Area (to show/hide the second view)

		void searchWindowButtonClicked(const SearchWindowEventUnrecPtr e,UInt32 button);

		// Dom related
		TabPanelRefPtr    _LeftTabPanel;
		LabelRefPtr       _LeftTabPanelLabel;
		ScrollPanelRefPtr _LeftTabPanelContent;
		TextAreaRefPtr    _LeftTabPanelTextArea;
		TabPanelRefPtr    _RightTabPanel;
		LabelRefPtr       _RightTabPanelLabel;
		ScrollPanelRefPtr _RightTabPanelContent;
		TextAreaRefPtr    _RightTabPanelTextArea;
		void createLeftTabPanel(void);
		void createRightTabPanel(void);
		void createDefaultTabs(void);

		void actionPerformed(const ActionEventUnrecPtr e);
		void closeButtonActionPerformed(const OSG::ActionEventUnrecPtr e);

		SearchWindowRefPtr TheSearchDialog;
		class TheSearchWindowListener: public SearchWindowListener 
		{
		public:

			TheSearchWindowListener(TextEditorRefPtr _TheTextEditor);
			~TheSearchWindowListener();
			
			virtual void dialogClosing(const SearchWindowEventUnrecPtr e);
			virtual void dialogClosed(const SearchWindowEventUnrecPtr e);
			virtual void searchButtonClicked(const SearchWindowEventUnrecPtr e);
			virtual void replaceButtonClicked(const SearchWindowEventUnrecPtr e);
			virtual void replaceAllButtonClicked(const SearchWindowEventUnrecPtr e);
			virtual void bookmarkAllButtonClicked(const SearchWindowEventUnrecPtr e);
   
		protected:

			TextEditorRefPtr _TheTextEditor;
		};

		TheSearchWindowListener _TheSearchWindowListener;
		bool _IsDialogClosed;
		void dialogClosed(const SearchWindowEventUnrecPtr e);
		void dialogClosing(const SearchWindowEventUnrecPtr e);
		void searchButtonClicked(const SearchWindowEventUnrecPtr e);
		void replaceButtonClicked(const SearchWindowEventUnrecPtr e);
		void replaceAllButtonClicked(const SearchWindowEventUnrecPtr e);
		void bookmarkAllButtonClicked(const SearchWindowEventUnrecPtr e);

		class ClipboardButtonListener : public ActionListener
		{
		  public :
			ClipboardButtonListener(TextEditorRefPtr TheTextEditor);
			virtual void actionPerformed(const ActionEventUnrecPtr e);
			~ClipboardButtonListener(void);
		  protected :
			TextEditorRefPtr _TextEditor;
		};
		ClipboardButtonListener _ClipboardButtonListener;

		class CloseButtonListener:public ActionListener
		{
		  public:
			CloseButtonListener(TextEditorRefPtr TheTextEditor);
			~CloseButtonListener(void);

			virtual void actionPerformed(const ActionEventUnrecPtr e);
		  protected :
			TextEditorRefPtr _TextEditor;
		};

		CloseButtonListener _CloseButtonListener;

		void saveFile(BoostPath file);

		virtual void keyTyped(const KeyEventUnrecPtr e);

		/*void mouseClicked(const MouseEventUnrecPtr e);

		class TheMouseListener : public MouseListener
		{
		public :
			TheMouseListener(TextEditorRefPtr TheTextEditor);
			
			virtual void mouseClicked(const MouseEventUnrecPtr e);
	        virtual void mouseEntered(const MouseEventUnrecPtr e);
			virtual void mouseExited(const MouseEventUnrecPtr e);
			virtual void mousePressed(const MouseEventUnrecPtr e);
			virtual void mouseReleased(const MouseEventUnrecPtr e);

		protected :
			TextEditorRefPtr _TextEditor;
		};

		TheMouseListener _MouseListener;
		*/

    /*==========================  PUBLIC  =================================*/

  public:

	void loadNewFile(BoostPath file);

    typedef TextEditorBase Inherited;
    typedef TextEditor     Self;

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         details    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0,
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

  	

    // Variables should all be in TextEditorBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    TextEditor(void);
    TextEditor(const TextEditor &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TextEditor(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const TextEditor *source = NULL);


    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class TextEditorBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TextEditor &source);
};

typedef TextEditor *TextEditorP;

OSG_END_NAMESPACE

#include "OSGTextEditorBase.inl"
#include "OSGTextEditor.inl"

#endif /* _OSGTEXTEDITOR_H_ */
