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

#include "OSGComponentContainer.h"
#include "OSGUIDrawUtils.h"

#include "OSGMouseEvent.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGComponentContainerBase.cpp file.
// To modify it, please change the .fcd file (OSGComponentContainer.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void ComponentContainer::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

Int32 ComponentContainer::getChildIndex(ComponentRefPtr Child)
{
    for(Int32 i(0) ; i<getMFChildren()->size() ; ++i)
    {
        if(getChildren(i) == Child)
        {
            return i;
        }
    }
    return -1;
}

Vec2f ComponentContainer::getContentRequestedSize(void) const
{
    if(getLayout() == NULL)
    {
        Pnt2f Minimum(0.0f,0.0f), Maximum(0.0f,0.0f);

        if(getMFChildren()->size() > 0)
        {
            Pnt2f ChildTopLeft, ChildBottomRight, ChildPosition;

            getChildren(0)->getBounds(ChildTopLeft, ChildBottomRight);
            ChildPosition = getChildren(0)->getPosition();
            //These bounds are in the Components coordinate space,
            //we need to convert them to this containers coordinate space
            ChildTopLeft += Vec2f(ChildPosition);
            ChildBottomRight += Vec2f(ChildPosition);

            Minimum[0] = osgMin(ChildTopLeft.x(), ChildBottomRight.x());
            Minimum[1] = osgMin(ChildTopLeft.y(), ChildBottomRight.y());
            Maximum[0] = osgMax(ChildTopLeft.x(), ChildBottomRight.x());
            Maximum[1] = osgMax(ChildTopLeft.y(), ChildBottomRight.y());

            for(UInt32 i(1) ; i<getMFChildren()->size() ; ++i)
            {
                getChildren(i)->getBounds(ChildTopLeft, ChildBottomRight);
                ChildPosition = getChildren(i)->getPosition();
                //These bounds are in the Components coordinate space,
                //we need to convert them to this containers coordinate space
                ChildTopLeft += Vec2f(ChildPosition);
                ChildBottomRight += Vec2f(ChildPosition);

                Minimum[0] = osgMin(osgMin(ChildTopLeft.x(), ChildBottomRight.x()), Minimum.x());
                Minimum[1] = osgMin(osgMin(ChildTopLeft.y(), ChildBottomRight.y()), Minimum.y());
                Maximum[0] = osgMax(osgMax(ChildTopLeft.x(), ChildBottomRight.x()), Maximum.x());
                Maximum[1] = osgMax(osgMax(ChildTopLeft.y(), ChildBottomRight.y()), Maximum.y());
            }
        }

        return Maximum - Minimum;
    }
    else
    {
        return getLayout()->requestedContentsLayoutSize(getMFChildren(), this);
    }
}

void ComponentContainer::detachFromEventProducer(void)
{
    Inherited::detachFromEventProducer();
    for(UInt32 i(0) ; i<getMFChildren()->size() ; ++i)
    {
        getChildren(i)->detachFromEventProducer();
    }
}

Vec2f ComponentContainer::getBorderingLength(void) const
{
    Pnt2f BoundsTopLeft, BoundsBottomRight;
    Pnt2f InsideInsetsTopLeft, InsideInsetsBottomRight;

    getBounds(BoundsTopLeft, BoundsBottomRight);
    getInsideBorderBounds(InsideInsetsTopLeft, InsideInsetsBottomRight);

    return (BoundsBottomRight - BoundsTopLeft) - (InsideInsetsBottomRight - InsideInsetsTopLeft);
}

void ComponentContainer::getInsideInsetsBounds(Pnt2f& TopLeft, Pnt2f& BottomRight) const
{
    getInsideBorderBounds(TopLeft, BottomRight);

    TopLeft[0] += getLeftInset();
    TopLeft[1] += getTopInset();
    BottomRight[0] -= getRightInset();
    BottomRight[1] -= getBottomInset();
}

void ComponentContainer::setAllInsets(Real32 Inset)
{
    setInset(Vec4f(Inset,Inset,Inset,Inset));
}

void ComponentContainer::setLeftInset ( const Real32 &value )
{
    setInset(Vec4f(value, getInset()[1],getInset()[2], getInset()[3]));
}

void ComponentContainer::setRightInset ( const Real32 &value )
{
    setInset(Vec4f(getInset()[0], value,getInset()[2], getInset()[3]));
}

void ComponentContainer::setTopInset ( const Real32 &value )
{
    setInset(Vec4f(getInset()[0], getInset()[1],value, getInset()[3]));
}

void ComponentContainer::setBottomInset ( const Real32 &value )
{
    setInset(Vec4f(getInset()[0], getInset()[1],getInset()[2], value));
}


void ComponentContainer::drawInternal(const GraphicsWeakPtr TheGraphics, Real32 Opacity) const
{
    //Render all of my Child Components
    for(UInt32 i(0) ; i<getMFChildren()->size() ; ++i)
    {
        getChildren(i)->draw(TheGraphics, Opacity*getOpacity());
    }
	
    //Make sure the clipping is reset
	//Because child components may have changed it when they were drawn
    setupClipping(TheGraphics);
}
void ComponentContainer::mouseClicked(const MouseEventUnrecPtr e)
{
    bool isContained;
    for(Int32 i(getMFChildren()->size()-1) ; i>=0 ; --i)
    {
        isContained = getChildren(i)->isContained(e->getLocation(), true);
        checkMouseEnterExit(e,e->getLocation(),getChildren(i),isContained,e->getViewport());
        if(isContained)
        {
            getChildren(i)->mouseClicked(e);
            break;
        }
    }
    Component::mouseClicked(e);
}

void ComponentContainer::mouseEntered(const MouseEventUnrecPtr e)
{
    bool isContained;
    for(Int32 i(0) ; i<getMFChildren()->size() ; ++i)
    {
        isContained = getChildren(i)->isContained(e->getLocation(), true);
        checkMouseEnterExit(e,e->getLocation(),getChildren(i),isContained,e->getViewport());
    }
    Component::mouseEntered(e);
}

void ComponentContainer::mouseExited(const MouseEventUnrecPtr e)
{
    bool isContained;
    for(Int32 i(0) ; i<getMFChildren()->size() ; ++i)
    {
        isContained = getChildren(i)->isContained(e->getLocation(), true);
        checkMouseEnterExit(e,e->getLocation(),getChildren(i),isContained,e->getViewport());
    }
    Component::mouseExited(e);
}

void ComponentContainer::mousePressed(const MouseEventUnrecPtr e)
{
    bool isContained(false);
    for(Int32 i(getMFChildren()->size()-1) ; i>=0 ; --i)
    {
        isContained = getChildren(i)->isContained(e->getLocation(), true);
        checkMouseEnterExit(e,e->getLocation(),getChildren(i),isContained,e->getViewport());
        if(isContained)
        {
            //Give myself temporary focus
            takeFocus(true);
            if(!getChildren(i)->getType().isDerivedFrom(ComponentContainer::getClassType()))
            {
                getChildren(i)->takeFocus();
            }
            getChildren(i)->mousePressed(e);
            break;
        }
    }
    if(isContained)
    {
        //Remove my temporary focus
        giveFocus(NULL, false);
    }
    else
    {
        //Give myself permenant focus
        takeFocus();
    }
    Component::mousePressed(e);
}

void ComponentContainer::mouseReleased(const MouseEventUnrecPtr e)
{
    bool isContained;
    for(Int32 i(getMFChildren()->size()-1) ; i>=0 ; --i)
    {
        isContained = getChildren(i)->isContained(e->getLocation(), true);
        checkMouseEnterExit(e,e->getLocation(),getChildren(i),isContained,e->getViewport());
        if(isContained)
        {
            getChildren(i)->mouseReleased(e);
            break;
        }
    }
    Component::mouseReleased(e);
}


void ComponentContainer::mouseMoved(const MouseEventUnrecPtr e)
{
    Component::mouseMoved(e);

    bool isContained;
    bool isContainedAbove(false);
    for(Int32 i(getMFChildren()->size()-1) ; i>=0 ; --i)
    {
        isContained = getChildren(i)->isContained(e->getLocation(), true);
        checkMouseEnterExit(e,e->getLocation(),getChildren(i),isContained && !isContainedAbove,e->getViewport());
        if(isContained && !isContainedAbove)
        {
            isContainedAbove = true;
            getChildren(i)->mouseMoved(e);
        }
    }
}

void ComponentContainer::mouseDragged(const MouseEventUnrecPtr e)
{
    bool isContained;
    bool isContainedAbove(false);
    for(Int32 i(getMFChildren()->size()-1) ; i>=0 ; --i)
    {
        isContained = getChildren(i)->isContained(e->getLocation(), true);
        checkMouseEnterExit(e,e->getLocation(),getChildren(i),isContained && !isContainedAbove,e->getViewport());
        if(isContained && !isContainedAbove)
        {
            isContainedAbove = true;
            getChildren(i)->mouseDragged(e);
        }
    }
    Component::mouseDragged(e);
}

void ComponentContainer::mouseWheelMoved(const MouseWheelEventUnrecPtr e)
{
    bool isContained;
    for(Int32 i(0) ; i<getMFChildren()->size() ; ++i)
    {
        isContained = getChildren(i)->isContained(e->getLocation(), true);
        checkMouseEnterExit(e,e->getLocation(),getChildren(i),isContained,e->getViewport());
        if(isContained)
        {
            getChildren(i)->mouseWheelMoved(e);
        }
    }
    Component::mouseWheelMoved(e);
}

void ComponentContainer::produceMouseExitOnComponent(const MouseEventUnrecPtr e, ComponentRefPtr Comp)
{
    Comp->mouseExited(e);
}

void ComponentContainer::produceMouseEnterOnComponent(const MouseEventUnrecPtr e, ComponentRefPtr Comp)
{
    Comp->mouseEntered(e);
}

void ComponentContainer::checkMouseEnterExit(const InputEventUnrecPtr e, const Pnt2f& MouseLocation, ComponentRefPtr Comp, bool isMouseContained, ViewportRefPtr TheViewport)
{
    //Check if mouse is inside of this component
    if(!isMouseContained)
    {
        if(Comp->getMouseContained())
        {
            //Mouse has exited the component
            const MouseEventUnrecPtr ExitedEvent = MouseEvent::create(e->getSource(), e->getTimeStamp(), MouseEvent::NO_BUTTON,0,MouseLocation,TheViewport);
            produceMouseExitOnComponent(ExitedEvent, Comp);
        }
        Comp->setMouseContained(false);
    }
    else
    {
        if(!Comp->getMouseContained())
        {
            //Mouse has exited the frame
            const MouseEventUnrecPtr EnteredEvent = MouseEvent::create(e->getSource(), e->getTimeStamp(), MouseEvent::NO_BUTTON,0,MouseLocation,TheViewport);
            produceMouseEnterOnComponent(EnteredEvent, Comp);
        }
        Comp->setMouseContained(true);
    }
}

void ComponentContainer::removeMousePresenceOnComponents(void)
{
    for(UInt32 i(0) ; i<getMFChildren()->size() ; ++i)
    {
        getChildren(i)->setMouseContained(false);
    }
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

void ComponentContainer::updateLayout(void)
{
    //Update Layout
    if(getLayout() != NULL)
    {
        getLayout()->updateLayout(getMFChildren(), this);
    }
}

/*----------------------- constructors & destructors ----------------------*/

ComponentContainer::ComponentContainer(void) :
    Inherited()
{
}

ComponentContainer::ComponentContainer(const ComponentContainer &source) :
    Inherited(source)
{
}

ComponentContainer::~ComponentContainer(void)
{
}

/*----------------------------- class specific ----------------------------*/

void ComponentContainer::changed(ConstFieldMaskArg whichField, 
                                 UInt32            origin,
                                 BitVector         details)
{
    if( (whichField & ChildrenFieldMask) ||
        (whichField & ParentWindowFieldMask))
    {
        //Set All of my children's parent to me
        for(UInt32 i(0) ; i<getMFChildren()->size() ; ++i)
        {
            getChildren(i)->setParentContainer(this);
            getChildren(i)->setParentWindow(getParentWindow());
        }
    }
    if( (whichField & LayoutFieldMask) &&
        getLayout() != NULL)
    {
        getLayout()->setParentContainer(this);
    }

    if( whichField & ClipBoundsFieldMask )
    {
        //Set All of my children's parent to me
        for(UInt32 i(0) ; i<getMFChildren()->size() ; ++i)
        {
            getChildren(i)->updateClipBounds();
        }
    }

    if( (whichField & LayoutFieldMask) ||
        (whichField & InsetFieldMask) ||
        (whichField & ChildrenFieldMask) ||
        (whichField & SizeFieldMask) ||
        (whichField & BorderFieldMask) ||
        (whichField & DisabledBorderFieldMask) ||
        (whichField & FocusedBorderFieldMask) ||
        (whichField & RolloverBorderFieldMask))
    {
        //Layout needs to be recalculated
        updateLayout();
    }

    if(whichField & EnabledFieldMask)
    {
        for(UInt32 i(0) ; i< getMFChildren()->size() ; ++i)
        {
            if(getChildren(i)->getEnabled() != getEnabled())
            {
                getChildren(i)->setEnabled(getEnabled());
            }
        }
    }
    Inherited::changed(whichField, origin, details);
}

void ComponentContainer::dump(      UInt32    ,
                         const BitVector ) const
{
    SLOG << "Dump ComponentContainer NI" << std::endl;
}

OSG_END_NAMESPACE
