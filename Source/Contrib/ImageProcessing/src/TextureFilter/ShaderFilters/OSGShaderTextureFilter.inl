/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

OSG_BEGIN_NAMESPACE

template<class ValueT> inline
bool ShaderTextureFilter::addUniformVariable(const Char8  *name, 
                                             const ValueT &value)
{
    return getInternalParameters()->addUniformVariable<ValueT>(name, value);
}

template<class ValueT> inline
bool ShaderTextureFilter::updateUniformVariable(const Char8 *name,
                                                const ValueT &value)
{
    return getInternalParameters()->updateUniformVariable<ValueT>(name, value);
}

template<class ValueT> inline
bool ShaderTextureFilter::getUniformVariable(const Char8 *name, ValueT &value)
{
    return getInternalParameters()->getUniformVariable<ValueT>(name, value);
}

inline
bool ShaderTextureFilter::subUniformVariable(const Char8 *name)
{
    return getInternalParameters()->subUniformVariable(name);
}

inline
void ShaderTextureFilter::clearUniformVariables(void)
{
    getInternalParameters()->clearUniformVariables();
}

OSG_END_NAMESPACE
