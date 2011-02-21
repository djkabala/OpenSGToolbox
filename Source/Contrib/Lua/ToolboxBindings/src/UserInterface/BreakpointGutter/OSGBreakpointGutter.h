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

#ifndef _OSGBREAKPOINTGUTTER_H_
#define _OSGBREAKPOINTGUTTER_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGBreakpointGutterBase.h"

#include "OSGMenuItemFields.h"
#include "OSGActionEventDetailsFields.h"
#include "OSGChangeEventDetailsFields.h"

OSG_BEGIN_NAMESPACE

/*! \brief BreakpointGutter class. See \ref
           PageContribLuaToolboxBreakpointGutter for a description.
*/

class OSG_CONTRIBLUATOOLBOX_DLLMAPPING BreakpointGutter : public BreakpointGutterBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef BreakpointGutterBase Inherited;
    typedef BreakpointGutter     Self;

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

    virtual void updateLayout(void);

    virtual void mouseClicked(MouseEventDetails* const e);

    /*!
     * \brief Get the Line number at the give position.
     *
     * Position is expected to be in Component-space
     *
     * \param[in] Position The position in Component-space
     */
    Int32 getLineForPosition(const Pnt2f& Position) const;

    BreakpointPtr getBreakpoint(UInt32 LineNum) const;

    void addBreakpoint(BreakpointPtr TheBreakpoint, UInt32 LineNum);
    void removeBreakpoint(BreakpointPtr TheBreakpoint);
    void removeBreakpoint(UInt32 LineNum);

    void setBreakpointEnabled(BreakpointPtr TheBreakpoint, bool Enabled);
    void setBreakpointEnabled(UInt32 LineNum, bool Enabled);

    void editBreakpoint(BreakpointPtr TheBreakpoint);
    void editBreakpoint(UInt32 LineNum);
    /*=========================  PROTECTED  ===============================*/

  protected:
    typedef std::pair<ButtonRecPtr, UInt32> ButtonLinePair;
    typedef std::map<BreakpointPtr, ButtonLinePair> BreakpointButtonMap;

    // Variables should all be in BreakpointGutterBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    BreakpointGutter(void);
    BreakpointGutter(const BreakpointGutter &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~BreakpointGutter(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const BreakpointGutter *source = NULL);
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */

    void updatePopupMenu(UInt32 LineNum);

    MenuItemRecPtr _AddRemoveBreakpointMenuItem;
    MenuItemRecPtr _EnableDisableBreakpointMenuItem;
    MenuItemRecPtr _EditBreakpointMenuItem;

	void handleAddRemoveBreakpointAction    (ActionEventDetails* const details);
	void handleEnableDisableBreakpointAction(ActionEventDetails* const details);
	void handleEditBreakpointAction         (ActionEventDetails* const details);

    boost::signals2::connection _AddRemoveBreakpointActionConnection;
    boost::signals2::connection _EnableDisableBreakpointActionConnection;
    boost::signals2::connection _EditBreakpointActionConnection;

	void handleBreakpointCreated  (ChangeDetails* const details);
	void handleBreakpointDestroyed(ChangeDetails* const details);
	void handleBreakpointEnabled  (ChangeDetails* const details);
	void handleBreakpointDisabled (ChangeDetails* const details);

    boost::signals2::connection _BreakpointCreatedConnection,
                                _BreakpointDestroyedConnection,
                                _BreakpointEnabledConnection,
                                _BreakpointDisabledConnection;

    BreakpointButtonMap _BreakpointButtonMap;

    ButtonTransitPtr createBreakpointButton(BreakpointPtr TheBreakpoint) const;
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class BreakpointGutterBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const BreakpointGutter &source);
};

typedef BreakpointGutter *BreakpointGutterP;

OSG_END_NAMESPACE

#include "OSGBreakpointGutterBase.inl"
#include "OSGBreakpointGutter.inl"

#endif /* _OSGBREAKPOINTGUTTER_H_ */
