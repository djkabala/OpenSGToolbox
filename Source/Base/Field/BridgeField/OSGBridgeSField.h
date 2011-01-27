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

#ifndef _OSGBRIDGESFIELD_H_
#define _OSGBRIDGESFIELD_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGField.h"
#include "OSGFieldTraits.h"
#include "OSGFieldType.h"
#include "OSGFieldHandle.h"
#include "OSGFieldDescFactory.h"

#include <boost/shared_ptr.hpp>

OSG_BEGIN_NAMESPACE

template<class ValueT, Int32 iNamespace = 0>
class BridgeSField : public Field
{
    /*==========================  PUBLIC  =================================*/

  public:

    typedef          FieldTraits      <ValueT, iNamespace>  SFieldTraits;
    typedef          BridgeSField           <ValueT, iNamespace>    Self;

    typedef          ValueT                                  BridgedType;
    typedef          BridgedType&                              reference;
    typedef          const BridgedType&                  const_reference;

    typedef          boost::function<BridgedType ()>  ExternalAccessFunc;
    typedef          boost::function<void (const_reference)> ExternalAssignFunc;

    typedef typename SFieldTraits::ArgumentType             ArgumentType;

    typedef          FieldDescription<
                         SFieldTraits,
                         FieldType::SingleField  >           Description;

    //typedef          EditBridgeSFieldHandle <Self >           EditHandle;
    typedef          EditSFieldHandle <Self >           EditHandle;
    typedef          boost::shared_ptr<EditHandle>         EditHandlePtr;


    //typedef          GetBridgeSFieldHandle  <Self >            GetHandle;
    typedef          GetSFieldHandle  <Self >            GetHandle;
    typedef          boost::shared_ptr<GetHandle>           GetHandlePtr;

    /*---------------------------------------------------------------------*/

    static const Int32            Namespace     = iNamespace;

    static const bool             isSField       = true;
    static const bool             isMField       = false;

    static const bool             isPointerField = false;

    static const FieldType::Class Class          = FieldType::ValueField;

    /*---------------------------------------------------------------------*/
    /*! \name                   Class Get                                  */
    /*! \{                                                                 */

    static const FieldType &getClassType(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

             BridgeSField(const BridgeSField       &obj);
    explicit BridgeSField(ExternalAccessFunc  externalGetMethod,
                          ExternalAssignFunc  externalSetMethod);
    explicit BridgeSField(ExternalAccessFunc  externalGetMethod,
                          ExternalAssignFunc  externalSetMethod,
                          const_reference     value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructor                                 */
    /*! \{                                                                 */

    ~BridgeSField(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Get                                     */
    /*! \{                                                                 */

    BridgedType getValue(void);
    BridgedType getValue(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Set                                     */
    /*! \{                                                                 */

    void setValue           (      ArgumentType  value);
    void setValue           (const Self         &obj  );

    void setValueFromCString(const Char8        *str  );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Push                                    */
    /*! \{                                                                 */

    void pushValueToString  (std::string  &str) const;
    void pushValueFromStream(std::istream &str);
    void pushValueToStream  (OutStream    &str) const;
    void pushSizeToStream   (OutStream    &str) const;
    
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Interface                           */
    /*! \{                                                                 */

    UInt32 getBinSize (void                   ) const;
    
    void   copyToBin  (BinaryDataHandler &pMem) const;
    void   copyFromBin(BinaryDataHandler &pMem);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      MT Sync                                 */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    void syncWith(Self &source);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Compare                                 */
    /*! \{                                                                 */

    bool operator ==(const BridgeSField &source) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Assign                                  */
    /*! \{                                                                 */

    void operator =(const BridgeSField &source);

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

             BridgeSField(void                     );

    /*! \}                                                                 */


    /*---------------------------------------------------------------------*/
    /*! \name                  Type information                            */
    /*! \{                                                                 */

    typedef Field Inherited;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Member                                  */
    /*! \{                                                                 */

    static FieldType          _fieldType;
     
           ExternalAccessFunc _externalGetMethod;
           ExternalAssignFunc _externalSetMethod;

#if defined(OSG_TMPL_STATIC_MEMBER_NEEDS_HELPER_FCT)
    const FieldType &fieldTypeExportHelper(void);
#endif

    static FieldDescriptionBase *
        createFieldDescription   (const Char8                *szFieldname,
                                        UInt32                uiFieldFlags,
                                        FieldEditMethod       fEditMethod,
                                        FieldGetMethod        fGetMethod  );

    static FieldDescriptionBase *
        createIdxFieldDescription(const Char8                *szFieldname,
                                        UInt32                uiFieldFlags,
                                        FieldIndexEditMethod  fEditMethod,
                                        FieldIndexGetMethod   fGetMethod  );

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
};

OSG_END_NAMESPACE

#include "OSGBridgeSField.inl"

#endif /* _OSGBRIDGESFIELD_H_ */
