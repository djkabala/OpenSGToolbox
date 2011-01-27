/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *           Copyright (C) 2003 by the OpenSG Forum                          *
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

OSG_BEGIN_NAMESPACE

/*-------------------------------------------------------------------------*/
/*                            Constructors                                 */

template<class ValueT, Int32 iNamespace> inline
BridgeSField<ValueT, iNamespace>::BridgeSField(void) : 
     Inherited (),
    _externalGetMethod(),
    _externalSetMethod()
{
}

template <class ValueT, Int32 iNamespace> inline
BridgeSField<ValueT, iNamespace>::BridgeSField(const BridgeSField &obj) :
     Inherited (obj            ),
    _externalGetMethod(obj._externalGetMethod),
    _externalSetMethod(obj._externalSetMethod)
{
}

template <class ValueT, Int32 iNamespace> inline
BridgeSField<ValueT, iNamespace>::BridgeSField(ExternalAccessFunc  externalGetMethod,
                                               ExternalAssignFunc  externalSetMethod) :
     Inherited(     ),
    _externalGetMethod(externalGetMethod),
    _externalSetMethod(externalSetMethod)
{
}

template <class ValueT, Int32 iNamespace> inline
BridgeSField<ValueT, iNamespace>::BridgeSField(ExternalAccessFunc  externalGetMethod,
                                               ExternalAssignFunc  externalSetMethod,
                                               const_reference     value) :
     Inherited(     ),
    _externalGetMethod(externalGetMethod),
    _externalSetMethod(externalSetMethod)
{
    setValue(value);
}

/*-------------------------------------------------------------------------*/
/*                             Destructor                                  */

template<class ValueT, Int32 iNamespace> inline
BridgeSField<ValueT, iNamespace>::~BridgeSField(void)
{
}

/*-------------------------------------------------------------------------*/
/*                               Get                                       */

template <class ValueT, Int32 iNamespace> inline
typename BridgeSField<ValueT, iNamespace>::BridgedType 
    BridgeSField<ValueT, iNamespace>::getValue(void)

{
    return _externalGetMethod();
}

template <class ValueT, Int32 iNamespace> inline
typename BridgeSField<ValueT, iNamespace>::BridgedType
    BridgeSField<ValueT, iNamespace>::getValue(void) const
{
    return _externalGetMethod();
}

/*-------------------------------------------------------------------------*/
/*                                Set                                      */

template <class ValueT, Int32 iNamespace> inline
void BridgeSField<ValueT, iNamespace>::setValue(ArgumentType value)
{
    _externalSetMethod(value);
}

template <class ValueT, Int32 iNamespace> inline
void BridgeSField<ValueT, iNamespace>::setValue(const Self &obj)
{
    _externalSetMethod(obj.getValue());
}

template <class ValueT, Int32 iNamespace> inline
void BridgeSField<ValueT, iNamespace>::setValueFromCString(const Char8 *str)
{
    typedef typename boost::mpl::if_c<
      (SFieldTraits   ::Convertible &
       FieldTraitsBase::FromStringConvertible), 
      SFieldTraits, 
      StringConversionError<ValueT, iNamespace> >::type Converter;
    
    ValueT TheValue;
    Converter::getFromCString(TheValue, str);
    setValue(TheValue);
}

template <class ValueT, Int32 iNamespace> inline
void BridgeSField<ValueT, iNamespace>::pushValueToString  (std::string  &str) const
{
    typedef typename boost::mpl::if_c<
      (SFieldTraits   ::Convertible &
       FieldTraitsBase::ToStringConvertible), 
      SFieldTraits, 
      StringConversionError<ValueT, iNamespace> >::type Converter;
    
    Converter::putToString(getValue(), str);
}

template <class ValueT, Int32 iNamespace> inline
void BridgeSField<ValueT, iNamespace>::pushValueFromStream(std::istream &str)
{
    typedef typename boost::mpl::if_c<
      (SFieldTraits   ::Convertible &
       FieldTraitsBase::FromStreamConvertible), 
      SFieldTraits, 
      StreamConversionError<ValueT, iNamespace> >::type Converter;
    
    Converter::getFromStream(getValue(), str);
}

template <class ValueT, Int32 iNamespace> inline
void BridgeSField<ValueT, iNamespace>::pushValueToStream  (OutStream &str) const
{
    typedef typename boost::mpl::if_c<
      (SFieldTraits   ::Convertible &
       FieldTraitsBase::ToStreamConvertible), 
      SFieldTraits, 
      StreamConversionError<ValueT, iNamespace> >::type Converter;
    
    Converter::putToStream(getValue(), str);
}

template <class ValueT, Int32 iNamespace> inline
void BridgeSField<ValueT, iNamespace>::pushSizeToStream  (OutStream &str) const
{
    str << 1;
}

/*-------------------------------------------------------------------------*/
/*                         Binary Interface                                */

template <class ValueTypeT, Int32 iNameSpace> inline
UInt32 BridgeSField<ValueTypeT, iNameSpace>::getBinSize(void) const
{
    return SFieldTraits::getBinSize(getValue());
}

template <class ValueTypeT, Int32 iNameSpace> inline
void BridgeSField<ValueTypeT, iNameSpace>::copyToBin(BinaryDataHandler &pMem) const
{
    SFieldTraits::copyToBin( pMem, 
                            getValue());
}

template <class ValueTypeT, Int32 iNameSpace> inline
void BridgeSField<ValueTypeT, iNameSpace>::copyFromBin(BinaryDataHandler &pMem)
{
    BridgedType TheValue;
    SFieldTraits::copyFromBin( pMem, 
                              TheValue);
    setValue(TheValue);
}

/*-------------------------------------------------------------------------*/
/*                              MT Sync                                    */

#ifdef OSG_MT_CPTR_ASPECT
template <class ValueT, Int32 iNamespace> inline
void BridgeSField<ValueT, iNamespace>::syncWith(Self &source)
{
    setValue(source);
}
#endif

/*-------------------------------------------------------------------------*/
/*                              MT Sync                                    */

template <class ValueT, Int32 iNamespace> inline
bool BridgeSField<ValueT, iNamespace>::operator ==(const BridgeSField &source) const
{
    return getValue() == source.getValue();
}

/*-------------------------------------------------------------------------*/
/*                              MT Sync                                    */

template <class ValueT, Int32 iNamespace> inline
void BridgeSField<ValueT, iNamespace>::operator =(const BridgeSField &source)
{
    if(this != &source)
    {
        setValue(source.getValue());
    }
}

OSG_END_NAMESPACE
