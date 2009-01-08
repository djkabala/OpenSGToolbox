/*---------------------------------------------------------------------------*\
 *                     OpenSG ToolBox UserInterface                          *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                         www.vrac.iastate.edu                              *
 *                                                                           *
 *   Authors: David Kabala, Alden Peterson, Lee Zaniewski, Jonathan Flory    *
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
 **     class LayeredImageMiniMap
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGLAYEREDIMAGEMINIMAPBASE_H_
#define _OSGLAYEREDIMAGEMINIMAPBASE_H_
#ifdef __sgi
#pragma once
#endif


#include <OpenSG/OSGConfig.h>
#include "OSGGameDef.h"

#include <OpenSG/OSGBaseTypes.h>
#include <OpenSG/OSGRefPtr.h>
#include <OpenSG/OSGCoredNodePtr.h>

#include "OSGMiniMap.h" // Parent

#include "MiniMap/OSGMiniMapOverlay.h" // Overlay type
#include <OpenSG/OSGTextureChunkFields.h> // LayerTextures type
#include <OpenSG/OSGReal32Fields.h> // LayerDistances type
#include <OpenSG/OSGBoolFields.h> // StationaryIndicator type
#include <OpenSG/OSGRotatedComponentFields.h> // RotatedMap type
#include <OpenSG/OSGComponentFields.h> // MapImageComponent type

#include "OSGLayeredImageMiniMapFields.h"

OSG_BEGIN_NAMESPACE

class LayeredImageMiniMap;
class BinaryDataHandler;

//! \brief LayeredImageMiniMap Base Class.

class OSG_GAMELIB_DLLMAPPING LayeredImageMiniMapBase : public MiniMap
{
  private:

    typedef MiniMap    Inherited;

    /*==========================  PUBLIC  =================================*/
  public:

    typedef LayeredImageMiniMapPtr  Ptr;

    enum
    {
        OverlayFieldId             = Inherited::NextFieldId,
        LayerTexturesFieldId       = OverlayFieldId             + 1,
        LayerDistancesFieldId      = LayerTexturesFieldId       + 1,
        StationaryIndicatorFieldId = LayerDistancesFieldId      + 1,
        RotatedMapFieldId          = StationaryIndicatorFieldId + 1,
        MapImageComponentFieldId   = RotatedMapFieldId          + 1,
        NextFieldId                = MapImageComponentFieldId   + 1
    };

    static const OSG::BitVector OverlayFieldMask;
    static const OSG::BitVector LayerTexturesFieldMask;
    static const OSG::BitVector LayerDistancesFieldMask;
    static const OSG::BitVector StationaryIndicatorFieldMask;
    static const OSG::BitVector RotatedMapFieldMask;
    static const OSG::BitVector MapImageComponentFieldMask;


    static const OSG::BitVector MTInfluenceMask;

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static        FieldContainerType &getClassType    (void); 
    static        UInt32              getClassTypeId  (void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType  (void); 
    virtual const FieldContainerType &getType  (void) const; 

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           MFMiniMapOverlayPtr *getMFOverlay        (void);
           SFBool              *getSFStationaryIndicator(void);
           SFRotatedComponentPtr *getSFRotatedMap     (void);
           SFComponentPtr      *getSFMapImageComponent(void);

           bool                &getStationaryIndicator(void);
     const bool                &getStationaryIndicator(void) const;
           RotatedComponentPtr &getRotatedMap     (void);
     const RotatedComponentPtr &getRotatedMap     (void) const;
           ComponentPtr        &getMapImageComponent(void);
     const ComponentPtr        &getMapImageComponent(void) const;
           MiniMapOverlayPtr   &getOverlay        (const UInt32 index);
           MFMiniMapOverlayPtr &getOverlay        (void);
     const MFMiniMapOverlayPtr &getOverlay        (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

     void setStationaryIndicator( const bool &value );
     void setRotatedMap     ( const RotatedComponentPtr &value );
     void setMapImageComponent( const ComponentPtr &value );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (const BitVector         &whichField);
    virtual void   copyToBin  (      BinaryDataHandler &pMem,
                               const BitVector         &whichField);
    virtual void   copyFromBin(      BinaryDataHandler &pMem,
                               const BitVector         &whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  LayeredImageMiniMapPtr      create          (void); 
    static  LayeredImageMiniMapPtr      createEmpty     (void); 

    /*! \}                                                                 */

    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerPtr     shallowCopy     (void) const; 

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    MFMiniMapOverlayPtr   _mfOverlay;
    MFTextureChunkPtr   _mfLayerTextures;
    MFReal32            _mfLayerDistances;
    SFBool              _sfStationaryIndicator;
    SFRotatedComponentPtr   _sfRotatedMap;
    SFComponentPtr      _sfMapImageComponent;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    LayeredImageMiniMapBase(void);
    LayeredImageMiniMapBase(const LayeredImageMiniMapBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~LayeredImageMiniMapBase(void); 

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

           MFTextureChunkPtr   *getMFLayerTextures  (void);
           MFReal32            *getMFLayerDistances (void);

           TextureChunkPtr     &getLayerTextures  (UInt32 index);
           MFTextureChunkPtr   &getLayerTextures  (void);
     const MFTextureChunkPtr   &getLayerTextures  (void) const;
           Real32              &getLayerDistances (UInt32 index);
           MFReal32            &getLayerDistances (void);
     const MFReal32            &getLayerDistances (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#if !defined(OSG_FIXED_MFIELDSYNC)
    void executeSyncImpl(      LayeredImageMiniMapBase *pOther,
                         const BitVector         &whichField);

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField);
#else
    void executeSyncImpl(      LayeredImageMiniMapBase *pOther,
                         const BitVector         &whichField,
                         const SyncInfo          &sInfo     );

    virtual void   executeSync(      FieldContainer    &other,
                               const BitVector         &whichField,
                               const SyncInfo          &sInfo);

    virtual void execBeginEdit     (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

            void execBeginEditImpl (const BitVector &whichField,
                                          UInt32     uiAspect,
                                          UInt32     uiContainerSize);

    virtual void onDestroyAspect(UInt32 uiId, UInt32 uiAspect);
#endif

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/
  private:

    friend class FieldContainer;

    static FieldDescription   *_desc[];
    static FieldContainerType  _type;


    // prohibit default functions (move to 'public' if you need one)
    void operator =(const LayeredImageMiniMapBase &source);
};

//---------------------------------------------------------------------------
//   Exported Types
//---------------------------------------------------------------------------


typedef LayeredImageMiniMapBase *LayeredImageMiniMapBaseP;

typedef osgIF<LayeredImageMiniMapBase::isNodeCore,
              CoredNodePtr<LayeredImageMiniMap>,
              FieldContainer::attempt_to_create_CoredNodePtr_on_non_NodeCore_FC
              >::_IRet LayeredImageMiniMapNodePtr;

typedef RefPtr<LayeredImageMiniMapPtr> LayeredImageMiniMapRefPtr;

OSG_END_NAMESPACE

#define OSGLAYEREDIMAGEMINIMAPBASE_HEADER_CVSID "@(#)$Id: FCBaseTemplate_h.h,v 1.40 2005/07/20 00:10:14 vossg Exp $"

#endif /* _OSGLAYEREDIMAGEMINIMAPBASE_H_ */
