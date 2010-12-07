/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact:  David Kabala*
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

#ifndef _OSGVARIABLEHEIGHTLAYOUTMANAGER_H_
#define _OSGVARIABLEHEIGHTLAYOUTMANAGER_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGVariableHeightLayoutManagerBase.h"

OSG_BEGIN_NAMESPACE

/*! \brief VariableHeightLayoutManager class. See \ref
           PageContribTableDomVariableHeightLayoutManager for a description.
*/

class OSG_CONTRIBTABLEDOM_DLLMAPPING VariableHeightLayoutManager : public VariableHeightLayoutManagerBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef VariableHeightLayoutManagerBase Inherited;
    typedef VariableHeightLayoutManager     Self;

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

    // Variables should all be in VariableHeightLayoutManagerBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    VariableHeightLayoutManager(void);
    VariableHeightLayoutManager(const VariableHeightLayoutManager &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~VariableHeightLayoutManager(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class VariableHeightLayoutManagerBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const VariableHeightLayoutManager &source);
};

typedef VariableHeightLayoutManager *VariableHeightLayoutManagerP;

OSG_END_NAMESPACE

#include "OSGVariableHeightLayoutManagerBase.inl"
#include "OSGVariableHeightLayoutManager.inl"

#endif /* _OSGVARIABLEHEIGHTLAYOUTMANAGER_H_ */
