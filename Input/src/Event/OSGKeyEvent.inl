#include <OpenSG/OSGConfig.h>

OSG_BEGIN_NAMESPACE

inline
KeyEvent::Key KeyEvent::getKey(void) const
{
   return _Key;
}

inline
UInt32 KeyEvent::getModifiers(void) const
{
   return _Modifiers;
}

inline
UChar8 KeyEvent::getKeyChar(void) const
{
   return getCharFromKey(_Key, _Modifiers);
}

inline
WindowPtr KeyEvent::getWindow(void) const
{
	return _Window;
}

inline
KeyEvent::KeyEvent(FieldContainerPtr Source, Time TimeStamp, Key TheKey, UInt32 Modifiers, WindowPtr TheWindow) :
   Event(Source, TimeStamp),
   _Key(TheKey),
   _Modifiers(Modifiers),
   _Window(TheWindow)
{
}

inline
UInt64 KeyEvent::ModifiedKey::getHashable(void) const
{
    return (static_cast<UInt64>(_Modifiers) << 32) | (static_cast<UInt64>(_Key));
}

OSG_END_NAMESPACE
