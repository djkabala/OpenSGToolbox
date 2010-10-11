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

#ifndef _OSGTEXTDOMAREA_H_
#define _OSGTEXTDOMAREA_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGDocumentModelChangedListener.h"
#include "OSGTextDomAreaBase.h"
#include "OSGDocument.h"
#include "OSGTextDomView.h"
#include "OSGFixedHeightLayoutManager.h"
#include "OSGTextDomLayoutManagerFields.h"
#include "OSGKeyAdapter.h"
#include "OSGMouseAdapter.h"
#include "OSGMouseMotionAdapter.h"
#include "OSGKeyEvent.h"
#include "OSGUpdateListener.h"
#include "OSGColorLayer.h"
#include "OSGUndoManager.h"
#include "OSGCommandManager.h"
 

OSG_BEGIN_NAMESPACE

/*! \brief TextDomArea class. See \ref
           PageContribTextDomTextDomArea for a description.
*/

class OSG_CONTRIBTEXTDOM_DLLMAPPING TextDomArea : public TextDomAreaBase
{
  protected:

	  enum {LEFT,RIGHT,UP,DOWN,HOME,END,HOMEOFNEXTLINE,PAGEUP,PAGEDOWN};


	  FixedHeightLayoutManagerRefPtr Manager;
	  UIFontRefPtr _Font;
	  ColorLayerRefPtr tempBackground;
	  void createDefaultLayer(void);
	  void produceDocumentModelChanged(const DocumentModelChangedEventP e);
	  bool _IsMousePressed;
	  void drawHighlightBG(const GraphicsWeakPtr Graphics, Real32 Opacity) const;
	  void drawLineHighlight(const GraphicsWeakPtr Graphics, Real32 Opacity) const;
	  void drawBookmarkHighlight(const GraphicsWeakPtr Graphics, Real32 Opacity) const;
	  void drawBraceHighlight(const GraphicsWeakPtr Graphics, Real32 Opacity) const;
	  void drawTheCaret(const GraphicsWeakPtr Graphics, Real32 Opacity) const;
	  void drawHighlightBGInternal(const GraphicsWeakPtr Graphics, Real32 Opacity,UInt32 lesserLine,UInt32 lesserIndex,UInt32 greaterLine,UInt32 greaterIndex) const;
	  std::string getHighlightedStringInternal(UInt32 lesserLine,UInt32 lesserIndex,UInt32 greaterLine,UInt32 greaterIndex);
	  void insertCharacterUsingCommandManager(char theCharacter,UInt32 line,UInt32 index);
	  void deleteSelectedUsingCommandManager(void);
	  void deleteCharacterUsingCommandManager(void);
	  void setTextUsingCommandManager(PlainDocumentLeafElementRefPtr theElement,std::string theString);
	  void insertStringUsingCommandManager(UInt32 caretPosition,std::string theString);
	  void stringToUpper(std::string& strToConvert);

	  CommandManagerPtr	_TheCommandManager;
	  UndoManagerPtr	_TheUndoManager;

  public:

    typedef TextDomAreaBase Inherited;
    typedef TextDomArea     Self;


    EventConnection addDocumentModelChangedListener(DocumentModelChangedListenerPtr Listener);
	bool isDocumentModelChangedListenerAttached(DocumentModelChangedListenerPtr Listener) const;
    void removeDocumentModelChangedListener(DocumentModelChangedListenerPtr Listener);
	
	TextDomAreaRefPtr getDuplicatedTextDomArea(void);

	std::string getHighlightedString(void);
	FixedHeightLayoutManagerRefPtr getTheManager(void);
	void setupCursor(void);

	void  createDefaultFont(void);
	void changedUpdate(const DocumentEventUnrecPtr e);

	//Gives notification that there was an insert into the document.
	void insertUpdate(const DocumentEventUnrecPtr e);

	//Gives notification that a portion of the document has been removed.
	void removeUpdate(const DocumentEventUnrecPtr e);

	virtual void mouseReleased(const MouseEventUnrecPtr e);
    void mouseDragged(const MouseEventUnrecPtr e);
	void mouseDraggedAfterArming(const MouseEventUnrecPtr e);
	void keyTyped(const KeyEventUnrecPtr e);
	virtual void mouseClicked(const MouseEventUnrecPtr e);
	virtual void mousePressed(const MouseEventUnrecPtr e);

	virtual void focusGained(const FocusEventUnrecPtr e);
	virtual void focusLost(const FocusEventUnrecPtr e);

	void loadFile(BoostPath pathOfFile);
	void saveFile(BoostPath pathOfFile);
	virtual void drawInternal(const GraphicsWeakPtr Graphics, Real32 Opacity = 1.0f) const;

	void updatePreferredSize(void);
	virtual Vec2f getContentRequestedSize(void) const;

	virtual Vec2f getPreferredScrollableViewportSize(void);
    virtual Int32 getScrollableUnitIncrement(const Pnt2f& VisibleRectTopLeft, const Pnt2f& VisibleRectBottomRight, const UInt32& orientation, const Int32& direction);
  	virtual Int32 getScrollableBlockIncrement(const Pnt2f& VisibleRectTopLeft, const Pnt2f& VisibleRectBottomRight, const UInt32& orientation, const Int32& direction);

	void handleDocumentModelChanged();
	void handlePastingAString(std::string theClipboard);

	UInt32 getTopmostVisibleLineNumber(void);
	UInt32 getLinesToBeDisplayed(void);
	Real32 getHeightOfLine(void);
	void tabHandler(bool isShiftPressed);
	bool searchForStringInDocument(std::string stringToBeLookedFor,bool isCaseChecked,bool isWholeWordChecked,bool toBeBookMarked,bool searchUp,bool wrapAround);
	void bookmarkAll(std::string stringToBeLookedFor,bool isCaseChecked,bool isWholeWordChecked);
	void disconnect(void);

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

	class DocumentModifiedListener : public DocumentListener
	{
	public:
		DocumentModifiedListener(TextDomAreaRefPtr TheTextDomArea);
		    //Gives notification that an attribute or set of attributes changed.
	    virtual void changedUpdate(const DocumentEventUnrecPtr e);

		//Gives notification that there was an insert into the document.
		virtual void insertUpdate(const DocumentEventUnrecPtr e);

		//Gives notification that a portion of the document has been removed.
		virtual void removeUpdate(const DocumentEventUnrecPtr e);

	private:
		bool _DrawCaret;
		TextDomAreaRefPtr _TextDomArea;
	};

	DocumentModifiedListener _DocumentModifiedListener;


	mutable Time _CurrentCaretBlinkElps;

	class CaretUpdateListener : public UpdateListener
	{
	public:
		CaretUpdateListener(TextDomAreaRefPtr TheTextDomArea);
        virtual void update(const UpdateEventUnrecPtr e);

		bool DrawCaret(void) const;
		void setDrawCaret(bool);

        void disconnect(void);
	private:
		TextDomAreaRefPtr _TextDomArea;
		bool _DrawCaret;
	};

	friend class CaretUpdateListener;

	CaretUpdateListener _CaretUpdateListener;


    // Variables should all be in TextDomAreaBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    TextDomArea(void);
    TextDomArea(const TextDomArea &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~TextDomArea(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    typedef std::set<DocumentModelChangedListenerPtr> DocumentModelChangedListenerSet;
    typedef DocumentModelChangedListenerSet::iterator DocumentModelChangedListenerSetItor;
    typedef DocumentModelChangedListenerSet::const_iterator DocumentModelChangedListenerSetConstItor;

	DocumentModelChangedListenerSet       _DocumentModelChangedListeners;


    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class TextDomAreaBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const TextDomArea &source);
};

typedef TextDomArea *TextDomAreaP;

OSG_END_NAMESPACE

#include "OSGTextDomAreaBase.inl"
#include "OSGTextDomArea.inl"

#endif /* _OSGTEXTDOMAREA_H_ */
