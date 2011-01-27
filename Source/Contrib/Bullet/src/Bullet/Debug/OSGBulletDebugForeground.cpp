/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
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

#include <cstdlib>
#include <cstdio>

#include "OSGConfig.h"

#include "OSGBulletDebugForeground.h"

#include "OSGGL.h"
#include "OSGDrawEnv.h"
#include "OSGBulletCollisionWorld.h"

OSG_BEGIN_NAMESPACE

// Documentation for this class is emitted in the
// OSGBulletDebugForegroundBase.cpp file.
// To modify it, please change the .fcd file (OSGBulletDebugForeground.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

void BulletDebugForeground::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
    }
}


/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/
void BulletDebugForeground::draw(DrawEnv * pEnv)
{
    if(getActive() == false ||
       getWorld()  == NULL)
    {
        return;
    }

    //Set the draw env for the drawer
    _Drawer.setDrawEnv(pEnv);

    glPushAttrib(GL_POLYGON_BIT |
                 GL_DEPTH_BUFFER_BIT | 
                 GL_LIGHTING_BIT);

    glPolygonMode(GL_FRONT, GL_FILL);

    glEnable(GL_DEPTH_TEST);

    glDisable(GL_COLOR_MATERIAL);

    glDisable(GL_TEXTURE_2D);

    glEnable(GL_BLEND);

    glLineWidth(getLineWidth());

    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    glMultMatrixf(pEnv->getCameraFullProjection().getValues());

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();
    glMultMatrixf(pEnv->getCameraViewing().getValues());

    //Draw everything
    glDepthMask(0);

    //Draw the geometry that is in front
    glDepthFunc(GL_LESS);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    getWorld()->getWorld()->debugDrawWorld();

    //Draw the geometry that is in back
    if(getDrawOccluded())
    {
        glDepthFunc(GL_GEQUAL);
        glBlendFunc(GL_CONSTANT_ALPHA, GL_ONE_MINUS_CONSTANT_ALPHA);
        glBlendColor(1.0f, 1.0f, 1.0f, getOccludedAlpha());
        getWorld()->getWorld()->debugDrawWorld();
    }

    glMatrixMode(GL_PROJECTION);
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPopMatrix();

    glDisable(GL_BLEND);
        
    glPopAttrib();
}

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/

/*----------------------- constructors & destructors ----------------------*/

BulletDebugForeground::BulletDebugForeground(void) :
    Inherited(),
    _Drawer(this)
{
}

BulletDebugForeground::BulletDebugForeground(const BulletDebugForeground &source) :
    Inherited(source),
    _Drawer(this)
{
}

BulletDebugForeground::~BulletDebugForeground(void)
{
}

/*----------------------------- class specific ----------------------------*/

void BulletDebugForeground::changed(ConstFieldMaskArg whichField, 
                                    UInt32            origin,
                                    BitVector         details)
{
    Inherited::changed(whichField, origin, details);

    if(whichField & ModeFieldMask)
    {
        _Drawer.setDebugMode(getMode());
    }
    if((whichField & WorldFieldMask) &&
        getWorld() != NULL)
    {
        getWorld()->getWorld()->setDebugDrawer(&_Drawer);
    }
}

void BulletDebugForeground::dump(      UInt32    ,
                                       const BitVector ) const
{
    SLOG << "Dump BulletDebugForeground NI" << std::endl;
}

BulletDebugForeground::GLDebugDrawer::GLDebugDrawer(BulletDebugForeground* parent) : 
    _debugMode(0),
    _parent(parent)
{

}

void BulletDebugForeground::GLDebugDrawer::drawLine(const btVector3& from,const btVector3& to,const btVector3& fromColor, const btVector3& toColor)
{
    glBegin(GL_LINES);
        glColor3f(fromColor.getX(), fromColor.getY(), fromColor.getZ());
        glVertex3d(from.getX(), from.getY(), from.getZ());
        glColor3f(toColor.getX(), toColor.getY(), toColor.getZ());
        glVertex3d(to.getX(), to.getY(), to.getZ());
    glEnd();
}

void BulletDebugForeground::GLDebugDrawer::drawLine(const btVector3& from,const btVector3& to,const btVector3& color)
{
    glBegin(GL_LINES);
        glColor3f(color.getX(), color.getY(), color.getZ());
        glVertex3d(from.getX(), from.getY(), from.getZ());
        glVertex3d(to.getX(), to.getY(), to.getZ());
    glEnd();
}

void BulletDebugForeground::GLDebugDrawer::drawSphere (const btVector3& p,
                                                       btScalar radius, 
                                                       const btVector3& color)
{
    glColor4f (color.getX(), color.getY(), color.getZ(), btScalar(1.0f));
    glPushMatrix ();
    glTranslatef (p.getX(), p.getY(), p.getZ());

    UInt32 lats = 5;
    UInt32 longs = 5;

    for(UInt32 i(0); i <= lats; ++i)
    {
        btScalar lat0 = SIMD_PI * (-btScalar(0.5) + (btScalar) (i - 1) / lats);
        btScalar z0  = radius*sin(lat0);
        btScalar zr0 =  radius*cos(lat0);

        btScalar lat1 = SIMD_PI * (-btScalar(0.5) + (btScalar) i / lats);
        btScalar z1 = radius*sin(lat1);
        btScalar zr1 = radius*cos(lat1);

        glBegin(GL_QUAD_STRIP);
            for(UInt32 j(0); j <= longs; ++j)
            {
                btScalar lng = 2 * SIMD_PI * (btScalar) (j - 1) / longs;
                btScalar x = cos(lng);
                btScalar y = sin(lng);

                glNormal3f(x * zr0, y * zr0, z0);
                glVertex3f(x * zr0, y * zr0, z0);
                glNormal3f(x * zr1, y * zr1, z1);
                glVertex3f(x * zr1, y * zr1, z1);
            }
        glEnd();
    }

    glPopMatrix();
}

void BulletDebugForeground::GLDebugDrawer::drawTransform(const btTransform& transform,
                           btScalar orthoLen)
{
    Inherited::drawTransform(transform, orthoLen);
}

void BulletDebugForeground::GLDebugDrawer::drawBox (const btVector3& boxMin,
                                                    const btVector3& boxMax,
                                                    const btVector3& color)
{
    /*!
     * \todo implement 
     */
    Inherited::drawBox(boxMin, boxMax,color);
}

void BulletDebugForeground::GLDebugDrawer::drawBox (const btVector3& boxMin,
                                                     const btVector3& boxMax,
                                                     const btTransform& trans,
                                                     const btVector3& color)
{
    /*!
     * \todo implement 
     */
    Inherited::drawBox(boxMin, boxMax,trans,color);
}

void BulletDebugForeground::GLDebugDrawer::drawTriangle(const btVector3& a,
                                                        const btVector3& b,
                                                        const btVector3& c,
                                                        const btVector3& color,
                                                        btScalar alpha)
{
    //	if (m_debugMode > 0)
    //{
        const btVector3	n=btCross(b-a,c-a).normalized();
        glBegin(GL_TRIANGLES);		
            glColor4f(color.getX(), color.getY(), color.getZ(),alpha);
            glNormal3d(n.getX(),n.getY(),n.getZ());
            glVertex3d(a.getX(),a.getY(),a.getZ());
            glVertex3d(b.getX(),b.getY(),b.getZ());
            glVertex3d(c.getX(),c.getY(),c.getZ());
        glEnd();
    //}
}

void BulletDebugForeground::GLDebugDrawer::setDebugMode(int debugMode)
{
    _debugMode = debugMode;
}

int BulletDebugForeground::GLDebugDrawer::getDebugMode(void) const
{
    return _debugMode;
}

void BulletDebugForeground::GLDebugDrawer::draw3dText(const btVector3& location,const char* textString)
{
    //glRasterPos3f(location.x(),  location.y(),  location.z());
    /*!
     * \todo implement 
     */
    SLOG << "draw3dText NYI" << std::endl;
    //BMF_DrawString(BMF_GetFont(BMF_kHelvetica10),textString);
}

void BulletDebugForeground::GLDebugDrawer::reportErrorWarning(const char* warningString)
{
    /*!
     * \todo implement 
     */
    SLOG << "reportErrorWarning NYI" << std::endl;
    SLOG << warningString << std::endl;
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();

    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glLoadIdentity();
    glOrtho(0, 1, 0, 1, 0, 1);

    float vpWidth = 1.0, vpHeight = 1.0;

    // for absolute pixel position
    vpWidth  = 1.0/_Env->getPixelWidth();
    vpHeight = 1.0/_Env->getPixelHeight();
    //printf("%s\n",warningString);
    //
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPopMatrix();
}

void BulletDebugForeground::GLDebugDrawer::drawContactPoint(const btVector3& pointOnB,const btVector3& normalOnB,btScalar distance,int lifeTime,const btVector3& color)
{
    btVector3 to=pointOnB+normalOnB*distance;
    const btVector3&from = pointOnB;
    glColor4f(color.getX(), color.getY(), color.getZ(),1.f);
    //glColor4f(0,0,0,1.f);

    glBegin(GL_LINES);
        glVertex3d(from.getX(), from.getY(), from.getZ());
        glVertex3d(to.getX(), to.getY(), to.getZ());
    glEnd();


    //glRasterPos3f(from.x(),  from.y(),  from.z());
    //char buf[12];
    //sprintf(buf," %d",lifeTime);
    //BMF_DrawString(BMF_GetFont(BMF_kHelvetica10),buf);
}

OSG_END_NAMESPACE
