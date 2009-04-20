#include <OpenSG/OSGConfig.h>
#include <assert.h>

OSG_BEGIN_NAMESPACE


inline
const EventType &MouseEvent::getClassType(void)
{
    return _Type;
}

inline
MouseEvent::MouseButton MouseEvent::getButton(void) const
{
   return _Button; 
}

inline
UInt16 MouseEvent::getClickCount(void) const
{
   return _ClickCount; 
}


inline
Pnt2f MouseEvent::getLocationOnScreen(void) const
{
   assert(false && "MouseEvent::getLocationOnScreen(void) Not Implemented");
   return _Location; 
}

inline
Pnt2f MouseEvent::getLocation(void) const
{
   return _Location; 
}


inline
Real32 MouseEvent::getX(void) const
{
   return _Location.x(); 
}

inline
Real32 MouseEvent::getXOnScreen(void) const
{
   assert(false && "MouseEvent::getXOnScreen(void) Not Implemented");
   return _Location.x();
}

inline
Real32 MouseEvent::getY(void) const
{
   return _Location.y();
}

inline
Real32 MouseEvent::getYOnScreen(void) const
{
   assert(false && "MouseEvent::getYOnScreen(void) Not Implemented");
   return _Location.y();
}

inline
ViewportPtr MouseEvent::getViewport(void) const
{
	return _Viewport;
}

inline
MouseEvent::MouseEvent(FieldContainerPtr Source, Time TimeStamp, WindowEventProducerPtr Producer, MouseButton Button, UInt16 ClickCount, Pnt2f Location, ViewportPtr TheViewport) 
: InputEvent(Source, TimeStamp,Producer), _Button(Button), _ClickCount(ClickCount), _Location(Location),
   _Viewport(TheViewport)
{}

    
OSG_END_NAMESPACE