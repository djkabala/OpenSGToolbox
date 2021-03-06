/*---------------------------------------------------------------------------*\
 *                       OpenSG ToolBox Animation                            *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *                          Authors: David Kabala                            *
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

#ifndef _OSGGEOTEXCOORDDIFFERENCESET_H_
#define _OSGGEOTEXCOORDDIFFERENCESET_H_
#ifdef __sgi
#pragma once
#endif
#include <OpenSG/OSGConfig.h>
#include "OSGAnimationDef.h"

#include "OSGGeoTexCoordDifferenceSetBase.h"

OSG_BEGIN_NAMESPACE

class OSG_ANIMATIONLIB_DLLMAPPING GeoTexCoordDifferenceSet : public GeoTexCoordDifferenceSetBase
{
  private:

    typedef GeoTexCoordDifferenceSetBase Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(BitVector  whichField, 
                         UInt32     origin    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0, 
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    
    static  GeoTexCoordDifferenceSetPtr      create          (const GeoTexCoordsPtr BaseTexCoords, const GeoTexCoordsPtr ToTexCoords); 
    
    /*=========================  PROTECTED  ===============================*/
  protected:

    // Variables should all be in GeoTexCoordDifferenceSetBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    GeoTexCoordDifferenceSet(void);
    GeoTexCoordDifferenceSet(const GeoTexCoordDifferenceSet &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~GeoTexCoordDifferenceSet(void); 

    /*! \}                                                                 */
    
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;
    friend class GeoTexCoordDifferenceSetBase;

    static void initMethod(void);

    // prohibit default functions (move to 'public' if you need one)

    void operator =(const GeoTexCoordDifferenceSet &source);
};

typedef GeoTexCoordDifferenceSet *GeoTexCoordDifferenceSetP;

OSG_END_NAMESPACE

#include "OSGGeoTexCoordDifferenceSetBase.inl"
#include "OSGGeoTexCoordDifferenceSet.inl"

#define OSGGEOTEXCOORDDIFFERENCESET_HEADER_CVSID "@(#)$Id: FCTemplate_h.h,v 1.23 2005/03/05 11:27:26 dirk Exp $"

#endif /* _OSGGEOTEXCOORDDIFFERENCESET_H_ */


