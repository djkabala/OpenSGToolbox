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

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class UIRectangle
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGUIRECTANGLEBASE_H_
#define _OSGUIRECTANGLEBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGContribUserInterfaceDef.h"

//#include "OSGBaseTypes.h"

#include "OSGDrawable.h" // Parent

#include "OSGVecFields.h"               // Point type
#include "OSGSysFields.h"               // Width type
#include "OSGUIDrawingSurfaceFields.h"  // DrawingSurface type
#include "OSGColorMaskChunkFields.h"    // RectColorMask type
#include "OSGPolygonChunkFields.h"      // RectPolygon type
#include "OSGUIRectangleMouseTransformFunctorFields.h" // MouseTransformFunctor type

#include "OSGUIRectangleFields.h"

OSG_BEGIN_NAMESPACE

class UIRectangle;

//! \brief UIRectangle Base Class.

class OSG_CONTRIBUSERINTERFACE_DLLMAPPING UIRectangleBase : public Drawable
{
  public:

    typedef Drawable Inherited;
    typedef Drawable ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(UIRectangle);
    
    

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        PointFieldId = Inherited::NextFieldId,
        WidthFieldId = PointFieldId + 1,
        HeightFieldId = WidthFieldId + 1,
        DrawingSurfaceFieldId = HeightFieldId + 1,
        RectColorMaskFieldId = DrawingSurfaceFieldId + 1,
        RectPolygonFieldId = RectColorMaskFieldId + 1,
        MouseTransformFunctorFieldId = RectPolygonFieldId + 1,
        SortKeyFieldId = MouseTransformFunctorFieldId + 1,
        NextFieldId = SortKeyFieldId + 1
    };

    static const OSG::BitVector PointFieldMask =
        (TypeTraits<BitVector>::One << PointFieldId);
    static const OSG::BitVector WidthFieldMask =
        (TypeTraits<BitVector>::One << WidthFieldId);
    static const OSG::BitVector HeightFieldMask =
        (TypeTraits<BitVector>::One << HeightFieldId);
    static const OSG::BitVector DrawingSurfaceFieldMask =
        (TypeTraits<BitVector>::One << DrawingSurfaceFieldId);
    static const OSG::BitVector RectColorMaskFieldMask =
        (TypeTraits<BitVector>::One << RectColorMaskFieldId);
    static const OSG::BitVector RectPolygonFieldMask =
        (TypeTraits<BitVector>::One << RectPolygonFieldId);
    static const OSG::BitVector MouseTransformFunctorFieldMask =
        (TypeTraits<BitVector>::One << MouseTransformFunctorFieldId);
    static const OSG::BitVector SortKeyFieldMask =
        (TypeTraits<BitVector>::One << SortKeyFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFPnt3f           SFPointType;
    typedef SFReal32          SFWidthType;
    typedef SFReal32          SFHeightType;
    typedef SFUnrecUIDrawingSurfacePtr SFDrawingSurfaceType;
    typedef SFUnrecColorMaskChunkPtr SFRectColorMaskType;
    typedef SFUnrecPolygonChunkPtr SFRectPolygonType;
    typedef SFUnrecUIRectangleMouseTransformFunctorPtr SFMouseTransformFunctorType;
    typedef SFInt32           SFSortKeyType;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */


                  SFPnt3f             *editSFPoint          (void);
            const SFPnt3f             *getSFPoint           (void) const;

                  SFReal32            *editSFWidth          (void);
            const SFReal32            *getSFWidth           (void) const;

                  SFReal32            *editSFHeight         (void);
            const SFReal32            *getSFHeight          (void) const;
            const SFUnrecUIDrawingSurfacePtr *getSFDrawingSurface (void) const;
                  SFUnrecUIDrawingSurfacePtr *editSFDrawingSurface (void);

                  SFInt32             *editSFSortKey        (void);
            const SFInt32             *getSFSortKey         (void) const;


                  Pnt3f               &editPoint          (void);
            const Pnt3f               &getPoint           (void) const;

                  Real32              &editWidth          (void);
                  Real32               getWidth           (void) const;

                  Real32              &editHeight         (void);
                  Real32               getHeight          (void) const;

                  UIDrawingSurface * getDrawingSurface (void) const;

                  Int32               &editSortKey        (void);
                  Int32                getSortKey         (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setPoint          (const Pnt3f &value);
            void setWidth          (const Real32 value);
            void setHeight         (const Real32 value);
            void setDrawingSurface (UIDrawingSurface * const value);
            void setSortKey        (const Int32 value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  UIRectangleTransitPtr  create          (void);
    static  UIRectangle           *createEmpty     (void);

    static  UIRectangleTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  UIRectangle            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  UIRectangleTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFPnt3f           _sfPoint;
    SFReal32          _sfWidth;
    SFReal32          _sfHeight;
    SFUnrecUIDrawingSurfacePtr _sfDrawingSurface;
    SFUnrecColorMaskChunkPtr _sfRectColorMask;
    SFUnrecPolygonChunkPtr _sfRectPolygon;
    SFUnrecUIRectangleMouseTransformFunctorPtr _sfMouseTransformFunctor;
    SFInt32           _sfSortKey;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    UIRectangleBase(void);
    UIRectangleBase(const UIRectangleBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~UIRectangleBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const UIRectangle *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandlePoint           (void) const;
    EditFieldHandlePtr editHandlePoint          (void);
    GetFieldHandlePtr  getHandleWidth           (void) const;
    EditFieldHandlePtr editHandleWidth          (void);
    GetFieldHandlePtr  getHandleHeight          (void) const;
    EditFieldHandlePtr editHandleHeight         (void);
    GetFieldHandlePtr  getHandleDrawingSurface  (void) const;
    EditFieldHandlePtr editHandleDrawingSurface (void);
    GetFieldHandlePtr  getHandleRectColorMask   (void) const;
    EditFieldHandlePtr editHandleRectColorMask  (void);
    GetFieldHandlePtr  getHandleRectPolygon     (void) const;
    EditFieldHandlePtr editHandleRectPolygon    (void);
    GetFieldHandlePtr  getHandleMouseTransformFunctor (void) const;
    EditFieldHandlePtr editHandleMouseTransformFunctor(void);
    GetFieldHandlePtr  getHandleSortKey         (void) const;
    EditFieldHandlePtr editHandleSortKey        (void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const SFUnrecColorMaskChunkPtr *getSFRectColorMask   (void) const;
                  SFUnrecColorMaskChunkPtr *editSFRectColorMask  (void);
            const SFUnrecPolygonChunkPtr *getSFRectPolygon     (void) const;
                  SFUnrecPolygonChunkPtr *editSFRectPolygon    (void);
            const SFUnrecUIRectangleMouseTransformFunctorPtr *getSFMouseTransformFunctor (void) const;
                  SFUnrecUIRectangleMouseTransformFunctorPtr *editSFMouseTransformFunctor(void);


                  ColorMaskChunk * getRectColorMask  (void) const;

                  PolygonChunk * getRectPolygon    (void) const;

                  UIRectangleMouseTransformFunctor * getMouseTransformFunctor(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setRectColorMask  (ColorMaskChunk * const value);
            void setRectPolygon    (PolygonChunk * const value);
            void setMouseTransformFunctor(UIRectangleMouseTransformFunctor * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      UIRectangleBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const UIRectangleBase &source);
};

typedef UIRectangleBase *UIRectangleBaseP;

OSG_END_NAMESPACE

#endif /* _OSGUIRECTANGLEBASE_H_ */
