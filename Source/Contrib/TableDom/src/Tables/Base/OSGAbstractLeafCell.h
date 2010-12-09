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

#ifndef _OSGABSTRACTLEAFCELL_H_
#define _OSGABSTRACTLEAFCELL_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGAbstractLeafCellBase.h"
#include <boost/any.hpp>
OSG_BEGIN_NAMESPACE

/*! \brief AbstractLeafCell class. See \ref
           PageContribTableDomAbstractLeafCell for a description.
*/

class OSG_CONTRIBTABLEDOM_DLLMAPPING AbstractLeafCell : public AbstractLeafCellBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

	  boost::any value;

  public:

    typedef AbstractLeafCellBase Inherited;
    typedef AbstractLeafCell     Self;

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


	virtual void print(void) const;
	void setValue(const boost::any theValue);
	boost::any getValue(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
	

  protected:

    // Variables should all be in AbstractLeafCellBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    AbstractLeafCell(void);
    AbstractLeafCell(const AbstractLeafCell &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~AbstractLeafCell(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class AbstractLeafCellBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const AbstractLeafCell &source);
};

typedef AbstractLeafCell *AbstractLeafCellP;

OSG_END_NAMESPACE

#include "OSGAbstractLeafCellBase.inl"
#include "OSGAbstractLeafCell.inl"

#endif /* _OSGABSTRACTLEAFCELL_H_ */
