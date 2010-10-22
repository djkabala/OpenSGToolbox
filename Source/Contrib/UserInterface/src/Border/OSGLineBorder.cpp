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

#include <cstdlib>
#include <cstdio>

#include <OSGConfig.h>

#include "OSGLineBorder.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGLineBorderBase.cpp file.
// To modify it, please change the .fcd file (OSGLineBorder.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void LineBorder::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

void LineBorder::draw(Graphics* const g, const Real32 x, const Real32 y , const Real32 Width, const Real32 Height, const Real32 Opacity, bool Clipping) const
{
    //Top
    g->drawRect(Pnt2f(x,y), Pnt2f(x+Width, y+getWidth()), getColor(), Opacity);
    //Left
    g->drawRect(Pnt2f(x,y+getWidth()), Pnt2f(x+getWidth(), y+Height-getWidth()), getColor(), Opacity);
    //Right
    g->drawRect(Pnt2f(x+Width-getWidth(), y+getWidth()), Pnt2f(x+Width, y+Height-getWidth()), getColor(), Opacity);
    //Bottom
    g->drawRect(Pnt2f(x, y+Height-getWidth()), Pnt2f(x+Width, y+Height), getColor(), Opacity);

}

void LineBorder::getInsets(Real32& Left, Real32& Right,Real32& Top,Real32& Bottom) const
{
    Left = Right = Top = Bottom = getWidth();
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

LineBorder::LineBorder(void) :
    Inherited()
{
}

LineBorder::LineBorder(const LineBorder &source) :
    Inherited(source)
{
}

LineBorder::~LineBorder(void)
{
}

/*----------------------------- class specific ----------------------------*/

void LineBorder::changed(ConstFieldMaskArg whichField, 
                            UInt32            origin,
                            BitVector         details)
{
    Inherited::changed(whichField, origin, details);
}

void LineBorder::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump LineBorder NI" << std::endl;
}

OSG_END_NAMESPACE
