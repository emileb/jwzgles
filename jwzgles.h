/* xscreensaver, Copyright (c) 2012 Jamie Zawinski <jwz@jwz.org>
 *
 * Permission to use, copy, modify, distribute, and sell this software and its
 * documentation for any purpose is hereby granted without fee, provided that
 * the above copyright notice appear in all copies and that both that
 * copyright notice and this permission notice appear in supporting
 * documentation.  No representations are made about the suitability of this
 * software for any purpose.  It is provided "as is" without express or 
 * implied warranty.
 */

/* A compatibility shim to allow OpenGL 1.3 source code to work in an
   OpenGLES environment, where almost every OpenGL 1.3 function has
   been "deprecated".  See jwzgles.c for details.
 */

#ifndef __JWZGLES_H__
#define __JWZGLES_H__

#ifndef HAVE_JWZGLES
# error: do not include this without HAVE_JWZGLES
#endif


#include "jwzglesI.h"


/* These are the OpenGL 1.3 functions that are not present in OpenGLES 1.
   As you can see from the length of this list, OpenGL and OpenGLES have
   almost nothing to do with each other.  To claim that GLES is a dialect
   of OpenGL is absurd -- English and Latin have more in common!
 */

#define glAccum				jwzgles_glAccum
#define glAntialiasing			jwzgles_glAntialiasing
#define glAreTexturesResident		jwzgles_glAreTexturesResident
#define glArrayElement			jwzgles_glArrayElement
#define glBegin				jwzgles_glBegin
#define glBitmap			jwzgles_glBitmap
#define glBlendColor			jwzgles_glBlendColor
#define glBlendEquation			jwzgles_glBlendEquation
#define glCallList			jwzgles_glCallList
#define glCallLists			jwzgles_glCallLists
#define glClearAccum			jwzgles_glClearAccum
#define glClearDepth			jwzgles_glClearDepth
#define glClearIndex			jwzgles_glClearIndex
#define glClipPlane			jwzgles_glClipPlane
#define glColor3b			jwzgles_glColor3b
#define glColor3bv			jwzgles_glColor3bv
#define glColor3d			jwzgles_glColor3f
#define glColor3dv			jwzgles_glColor3dv
#define glColor3f			jwzgles_glColor3f
#define glColor3fv			jwzgles_glColor3fv
#define glColor3i			jwzgles_glColor3i
#define glColor3iv			jwzgles_glColor3iv
#define glColor3s			jwzgles_glColor3s
#define glColor3sv			jwzgles_glColor3sv
#define glColor3ub			jwzgles_glColor3ub
#define glColor3ubv			jwzgles_glColor3ubv
#define glColor3ui			jwzgles_glColor3ui
#define glColor3uiv			jwzgles_glColor3uiv
#define glColor3us			jwzgles_glColor3us
#define glColor3usv			jwzgles_glColor3usv
#define glColor4b			jwzgles_glColor4b
#define glColor4bv			jwzgles_glColor4bv
#define glColor4d			jwzgles_glColor4d
#define glColor4dv			jwzgles_glColor4dv
#define glColor4fv			jwzgles_glColor4fv
#define glColor4i			jwzgles_glColor4i
#define glColor4iv			jwzgles_glColor4iv
#define glColor4s			jwzgles_glColor4s
#define glColor4sv			jwzgles_glColor4sv
#define glColor4ub			jwzgles_glColor4ub
#define glColor4ubv			jwzgles_glColor4ubv
#define glColor4ui			jwzgles_glColor4ui
#define glColor4uiv			jwzgles_glColor4uiv
#define glColor4us			jwzgles_glColor4us
#define glColor4usv			jwzgles_glColor4usv
#define glColorMaterial			jwzgles_glColorMaterial
#define glColorSubTable			jwzgles_glColorSubTable
#define glColorTable			jwzgles_glColorTable
#define glColorTableParameter		jwzgles_glColorTableParameter
#define glColorTableParameterfv		jwzgles_glColorTableParameterfv
#define glColorub			jwzgles_glColorub
#define glColorui			jwzgles_glColorui
#define glColorus			jwzgles_glColorus
#define glCompressedTexImage		jwzgles_glCompressedTexImage
#define glCompressedTexImage1D		jwzgles_glCompressedTexImage1D
#define glCompressedTexImage3D		jwzgles_glCompressedTexImage3D
#define glCompressedTexSubImage1D	jwzgles_glCompressedTexSubImage1D
#define glCompressedTexSubImage3D	jwzgles_glCompressedTexSubImage3D
#define glConvolutionFilter1D		jwzgles_glConvolutionFilter1D
#define glConvolutionFilter2D		jwzgles_glConvolutionFilter2D
#define glConvolutionParameter		jwzgles_glConvolutionParameter
#define glConvolutionParameterfv	jwzgles_glConvolutionParameterfv
#define glConvolutionParameteriv	jwzgles_glConvolutionParameteriv
#define glCopyColorSubTable		jwzgles_glCopyColorSubTable
#define glCopyColorTable		jwzgles_glCopyColorTable
#define glCopyConvolutionFilter1D	jwzgles_glCopyConvolutionFilter1D
#define glCopyConvolutionFilter2D	jwzgles_glCopyConvolutionFilter2D
#define glCopyPixels			jwzgles_glCopyPixels
#define glCopyTexImage1D		jwzgles_glCopyTexImage1D
#define glCopyTexImage3D		jwzgles_glCopyTexImage3D
#define glCopyTexSubImage1D		jwzgles_glCopyTexSubImage1D
#define glCopyTexSubImage3D		jwzgles_glCopyTexSubImage3D
#define glDeleteLists			jwzgles_glDeleteLists
#define glDepthRange			jwzgles_glDepthRange
#define glDepthRangef            jwzgles_glDepthRangef
#define glDrawBuffer			jwzgles_glDrawBuffer
#define glDrawPixels			jwzgles_glDrawPixels
#define glDrawRangeElements		jwzgles_glDrawRangeElements
#define glEdgeFlag			jwzgles_glEdgeFlag
#define glEdgeFlagPointer		jwzgles_glEdgeFlagPointer
#define glEdgeFlagv			jwzgles_glEdgeFlagv
#define glEnd				jwzgles_glEnd
#define glEndList			jwzgles_glEndList
#define glEvalCoord1d			jwzgles_glEvalCoord1d
#define glEvalCoord1dv			jwzgles_glEvalCoord1dv
#define glEvalCoord1f			jwzgles_glEvalCoord1f
#define glEvalCoord1fv			jwzgles_glEvalCoord1fv
#define glEvalCoord2d			jwzgles_glEvalCoord2d
#define glEvalCoord2dv			jwzgles_glEvalCoord2dv
#define glEvalCoord2f			jwzgles_glEvalCoord2f
#define glEvalCoord2fv			jwzgles_glEvalCoord2fv
#define glEvalMesh1			jwzgles_glEvalMesh1
#define glEvalMesh2			jwzgles_glEvalMesh2
#define glEvalPoint1			jwzgles_glEvalPoint1
#define glEvalPoint2			jwzgles_glEvalPoint2
#define glFeedbackBuffer		jwzgles_glFeedbackBuffer
#define glFogi				jwzgles_glFogi
#define glFogiv				jwzgles_glFogiv
#define glFrustum			jwzgles_glFrustum
#define glGenLists			jwzgles_glGenLists
#define glGet				jwzgles_glGet
#define glGetBooleanv			jwzgles_glGetBooleanv
#define glGetClipPlane			jwzgles_glGetClipPlane
#define glGetColorTable			jwzgles_glGetColorTable
#define glGetColorTableParameter	jwzgles_glGetColorTableParameter
#define glGetCompressedTexImage		jwzgles_glGetCompressedTexImage
#define glGetConvolutionFilter		jwzgles_glGetConvolutionFilter
#define glGetConvolutionParameter	jwzgles_glGetConvolutionParameter
#define glGetConvolutionParameteriv	jwzgles_glGetConvolutionParameteriv
#define glGetDoublev			jwzgles_glGetDoublev
#define glGetFloatv			jwzgles_glGetFloatv
#define glGetHistogram			jwzgles_glGetHistogram
#define glGetHistogramParameter		jwzgles_glGetHistogramParameter
#define glGetLightfv			jwzgles_glGetLightfv
#define glGetLightiv			jwzgles_glGetLightiv
#define glGetMapdv			jwzgles_glGetMapdv
#define glGetMapfv			jwzgles_glGetMapfv
#define glGetMapiv			jwzgles_glGetMapiv
#define glGetMaterialfv			jwzgles_glGetMaterialfv
#define glGetMaterialiv			jwzgles_glGetMaterialiv
#define glGetPixelMapfv			jwzgles_glGetPixelMapfv
#define glGetPixelMapuiv		jwzgles_glGetPixelMapuiv
#define glGetPixelMapusv		jwzgles_glGetPixelMapusv
#define glGetPointerv			jwzgles_glGetPointerv
#define glGetPolygonStipple		jwzgles_glGetPolygonStipple
#define glGetSeparableFilter		jwzgles_glGetSeparableFilter
#define glGetTexEnvfv			jwzgles_glGetTexEnvfv
#define glGetTexEnviv			jwzgles_glGetTexEnviv
#define glGetTexGendv			jwzgles_glGetTexGendv
#define glGetTexGenfv			jwzgles_glGetTexGenfv
#define glGetTexGeniv			jwzgles_glGetTexGeniv
#define glGetTexImage			jwzgles_glGetTexImage
#define glGetTexImage1D			jwzgles_glGetTexImage1D
#define glGetTexImage2D			jwzgles_glGetTexImage2D
#define glGetTexImage3D			jwzgles_glGetTexImage3D
#define glGetTexLevelParameterfv	jwzgles_glGetTexLevelParameterfv
//#define glGetTexLevelParameteriv	jwzgles_glGetTexLevelParameteriv
#define glGetTexParameterfv		jwzgles_glGetTexParameterfv
//#define glGetTexParameteriv		jwzgles_glGetTexParameteriv
#define glHistogram			jwzgles_glHistogram
#define glIndex				jwzgles_glIndex
#define glIndexMask			jwzgles_glIndexMask
#define glIndexPointer			jwzgles_glIndexPointer
#define glIndexd			jwzgles_glIndexd
#define glIndexdv			jwzgles_glIndexdv
#define glIndexf			jwzgles_glIndexf
#define glIndexfv			jwzgles_glIndexfv
/*#define glIndexi			jwzgles_glIndexi*/
#define glIndexiv			jwzgles_glIndexiv
#define glIndexs			jwzgles_glIndexs
#define glIndexsv			jwzgles_glIndexsv
#define glIndexub			jwzgles_glIndexub
#define glIndexubv			jwzgles_glIndexubv
#define glInitNames			jwzgles_glInitNames
#define glInterleavedArrays		jwzgles_glInterleavedArrays
#define glIsEnabled			jwzgles_glIsEnabled
#define glIsList			jwzgles_glIsList
#define glIsTexture			jwzgles_glIsTexture
#define glLightModeli			jwzgles_glLightModeli
#define glLightModeliv			jwzgles_glLightModeliv
#define glLighti			jwzgles_glLighti
#define glLightiv			jwzgles_glLightiv
#define glLightf			jwzgles_glLightf
#define glLightfv			jwzgles_glLightfv
#define glLineStipple			jwzgles_glLineStipple
#define glListBase			jwzgles_glListBase
#define glLoadMatrix			jwzgles_glLoadMatrix
#define glLoadMatrixd			jwzgles_glLoadMatrixd
#define glLoadName			jwzgles_glLoadName
#define glLoadTransposeMatrix		jwzgles_glLoadTransposeMatrix
#define glLoadTransposeMatrixd		jwzgles_glLoadTransposeMatrixd
#define glLoadTransposeMatrixf		jwzgles_glLoadTransposeMatrixf
#define glMap1d				jwzgles_glMap1d
#define glMap1f				jwzgles_glMap1f
#define glMap2d				jwzgles_glMap2d
#define glMap2f				jwzgles_glMap2f
#define glMapGrid1d			jwzgles_glMapGrid1d
#define glMapGrid1f			jwzgles_glMapGrid1f
#define glMapGrid2d			jwzgles_glMapGrid2d
#define glMapGrid2f			jwzgles_glMapGrid2f
#define glMateriali			jwzgles_glMateriali
#define glMaterialiv			jwzgles_glMaterialiv
#define glMultMatrixd			jwzgles_glMultMatrixd
#define glMultTransposeMatrix		jwzgles_glMultTransposeMatrix
#define glMultTransposeMatrixd		jwzgles_glMultTransposeMatrixd
#define glMultTransposeMatrixf		jwzgles_glMultTransposeMatrixf
#define glMultiTexCoord2f			jwzgles_glMultiTexCoord2fARB
#define  glMultiTexCoord2fARB       jwzgles_glMultiTexCoord2fARB
#define glNewList			jwzgles_glNewList
#define glNormal3b			jwzgles_glNormal3b
#define glNormal3bv			jwzgles_glNormal3bv
#define glNormal3d			jwzgles_glNormal3f
#define glNormal3dv			jwzgles_glNormal3dv
#define glNormal3fv			jwzgles_glNormal3fv
#define glNormal3i			jwzgles_glNormal3i
#define glNormal3iv			jwzgles_glNormal3iv
#define glNormal3s			jwzgles_glNormal3s
#define glNormal3sv			jwzgles_glNormal3sv
#define glOrtho				jwzgles_glOrtho
#define glPassThrough			jwzgles_glPassThrough
#define glPixelMapfv			jwzgles_glPixelMapfv
#define glPixelMapuiv			jwzgles_glPixelMapuiv
#define glPixelMapusv			jwzgles_glPixelMapusv
#define glPixelStoref			jwzgles_glPixelStoref
#define glPixelTransferf		jwzgles_glPixelTransferf
#define glPixelTransferi		jwzgles_glPixelTransferi
#define glPixelZoom			jwzgles_glPixelZoom
#define glPolygonMode			jwzgles_glPolygonMode
#define glPolygonStipple		jwzgles_glPolygonStipple
#define glPopAttrib			jwzgles_glPopAttrib
#define glPopClientAttrib		jwzgles_glPopClientAttrib
#define glPopName			jwzgles_glPopName
#define glPrioritizeTextures		jwzgles_glPrioritizeTextures
#define glPushAttrib			jwzgles_glPushAttrib
#define glPushClientAttrib		jwzgles_glPushClientAttrib
#define glPushName			jwzgles_glPushName
#define glRasterPos2d			jwzgles_glRasterPos2d
#define glRasterPos2dv			jwzgles_glRasterPos2dv
#define glRasterPos2f			jwzgles_glRasterPos2f
#define glRasterPos2fv			jwzgles_glRasterPos2fv
#define glRasterPos2i			jwzgles_glRasterPos2i
#define glRasterPos2iv			jwzgles_glRasterPos2iv
#define glRasterPos2s			jwzgles_glRasterPos2s
#define glRasterPos2sv			jwzgles_glRasterPos2sv
#define glRasterPos3d			jwzgles_glRasterPos3d
#define glRasterPos3dv			jwzgles_glRasterPos3dv
#define glRasterPos3f			jwzgles_glRasterPos3f
#define glRasterPos3fv			jwzgles_glRasterPos3fv
#define glRasterPos3i			jwzgles_glRasterPos3i
#define glRasterPos3iv			jwzgles_glRasterPos3iv
#define glRasterPos3s			jwzgles_glRasterPos3s
#define glRasterPos3sv			jwzgles_glRasterPos3sv
#define glRasterPos4d			jwzgles_glRasterPos4d
#define glRasterPos4dv			jwzgles_glRasterPos4dv
#define glRasterPos4f			jwzgles_glRasterPos4f
#define glRasterPos4fv			jwzgles_glRasterPos4fv
//#define glRasterPos4i			jwzgles_glRasterPos4i
#define glRasterPos4iv			jwzgles_glRasterPos4iv
#define glRasterPos4s			jwzgles_glRasterPos4s
#define glRasterPos4sv			jwzgles_glRasterPos4sv
#define glReadBuffer			jwzgles_glReadBuffer
#define glRectd				jwzgles_glRectf
#define glRectdv			jwzgles_glRectdv
#define glRectf				jwzgles_glRectf
#define glRectfv			jwzgles_glRectfv
#define glRecti				jwzgles_glRecti
#define glRectiv			jwzgles_glRectiv
#define glRects				jwzgles_glRects
#define glRectsv			jwzgles_glRectsv
#define glRenderMode			jwzgles_glRenderMode
#define glResetHistogram		jwzgles_glResetHistogram
#define glResetMinmax			jwzgles_glResetMinmax
#define glRotated			jwzgles_glRotated
#define glScaled			jwzgles_glScalef
#define glSelectBuffer			jwzgles_glSelectBuffer
#define glSeparableFilter2D		jwzgles_glSeparableFilter2D
#define glTexCoord1d			jwzgles_glTexCoord1d
#define glTexCoord1dv			jwzgles_glTexCoord1dv
#define glTexCoord1f			jwzgles_glTexCoord1f
#define glTexCoord1fv			jwzgles_glTexCoord1fv
#define glTexCoord1i			jwzgles_glTexCoord1i
#define glTexCoord1iv			jwzgles_glTexCoord1iv
#define glTexCoord1s			jwzgles_glTexCoord1s
#define glTexCoord1sv			jwzgles_glTexCoord1sv
#define glTexCoord2d			jwzgles_glTexCoord2f
#define glTexCoord2dv			jwzgles_glTexCoord2dv
#define glTexCoord2f			jwzgles_glTexCoord2f
#define glTexCoord2fv			jwzgles_glTexCoord2fv
#define glTexCoord2i			jwzgles_glTexCoord2i
#define glTexCoord2iv			jwzgles_glTexCoord2iv
#define glTexCoord2s			jwzgles_glTexCoord2s
#define glTexCoord2sv			jwzgles_glTexCoord2sv
#define glTexCoord3d			jwzgles_glTexCoord3d
#define glTexCoord3dv			jwzgles_glTexCoord3dv
#define glTexCoord3f			jwzgles_glTexCoord3f
#define glTexCoord3fv			jwzgles_glTexCoord3fv
#define glTexCoord3i			jwzgles_glTexCoord3i
#define glTexCoord3iv			jwzgles_glTexCoord3iv
#define glTexCoord3s			jwzgles_glTexCoord3s
#define glTexCoord3sv			jwzgles_glTexCoord3sv
#define glTexCoord4d			jwzgles_glTexCoord4d
#define glTexCoord4dv			jwzgles_glTexCoord4dv
#define glTexCoord4f			jwzgles_glTexCoord4f
#define glTexCoord4fv			jwzgles_glTexCoord4fv
#define glTexCoord4i			jwzgles_glTexCoord4i
#define glTexCoord4iv			jwzgles_glTexCoord4iv
#define glTexCoord4s			jwzgles_glTexCoord4s
#define glTexCoord4sv			jwzgles_glTexCoord4sv
#define glTexEnvi			jwzgles_glTexEnvi
#define glTexEnviv			jwzgles_glTexEnviv
#define glTexGend			jwzgles_glTexGend
#define glTexGendv			jwzgles_glTexGendv
#define glTexGenf			jwzgles_glTexGenf
#define glTexGenfv			jwzgles_glTexGenfv
#define glTexGeni			jwzgles_glTexGeni
#define glTexGeniv			jwzgles_glTexGeniv
#define glTexImage1D			jwzgles_glTexImage1D
#define glTexImage3D			jwzgles_glTexImage3D
#define glTexParameterfv		jwzgles_glTexParameterfv
#define glTexParameteri			jwzgles_glTexParameteri
#define glTexParameteriv		jwzgles_glTexParameteriv
#define glTexSubImage1D			jwzgles_glTexSubImage1D
#define glTexSubImage3D			jwzgles_glTexSubImage3D
#define glTranslated			jwzgles_glTranslatef
#define glVertex2d			jwzgles_glVertex2d
#define glVertex2dv			jwzgles_glVertex2dv
#define glVertex2f			jwzgles_glVertex2f
#define glVertex2fv			jwzgles_glVertex2fv
#define glVertex2i			jwzgles_glVertex2i
#define glVertex2iv			jwzgles_glVertex2iv
#define glVertex2s			jwzgles_glVertex2s
#define glVertex2sv			jwzgles_glVertex2sv
#define glVertex3d			jwzgles_glVertex3f
#define glVertex3dv			jwzgles_glVertex3dv
#define glVertex3f			jwzgles_glVertex3f
#define glVertex3fv			jwzgles_glVertex3fv
#define glVertex3i			jwzgles_glVertex3i
#define glVertex3iv			jwzgles_glVertex3iv
#define glVertex3s			jwzgles_glVertex3s
#define glVertex3sv			jwzgles_glVertex3sv
#define glVertex4d			jwzgles_glVertex4d
#define glVertex4dv			jwzgles_glVertex4dv
#define glVertex4f			jwzgles_glVertex4f
#define glVertex4fv			jwzgles_glVertex4fv
#define glVertex4i			jwzgles_glVertex4i
#define glVertex4iv			jwzgles_glVertex4iv
#define glVertex4s			jwzgles_glVertex4s
#define glVertex4sv			jwzgles_glVertex4sv

#define gluOrtho2D(L,R,B,T)		glOrtho(L,R,B,T,-1,1)
#define gluPerspective			jwzgles_gluPerspective

#define glXChooseVisual			jwzgles_glXChooseVisual
#define glXCopyContext			jwzgles_glXCopyContext
/*#define glXCreateContext		jwzgles_glXCreateContext*/
#define glXCreateGLXPixmap		jwzgles_glXCreateGLXPixmap
#define glXDestroyContext		jwzgles_glXDestroyContext
#define glXDestroyGLXPixmap		jwzgles_glXDestroyGLXPixmap
#define glXFreeContextEXT		jwzgles_glXFreeContextEXT
#define glXGetClientString		jwzgles_glXGetClientString
#define glXGetConfig			jwzgles_glXGetConfig
#define glXGetContextIDEXT		jwzgles_glXGetContextIDEXT
#define glXGetCurrentContext		jwzgles_glXGetCurrentContext
#define glXGetCurrentDisplay		jwzgles_glXGetCurrentDisplay
#define glXGetCurrentDrawable		jwzgles_glXGetCurrentDrawable
#define glXImportContextEXT		jwzgles_glXImportContextEXT
#define glXIntro			jwzgles_glXIntro
#define glXIsDirect			jwzgles_glXIsDirect
/*#define glXMakeCurrent		jwzgles_glXMakeCurrent*/
#define glXQueryContextInfoEXT		jwzgles_glXQueryContextInfoEXT
#define glXQueryExtension		jwzgles_glXQueryExtension
#define glXQueryExtensionsString	jwzgles_glXQueryExtensionsString
#define glXQueryServerString		jwzgles_glXQueryServerString
#define glXQueryVersion			jwzgles_glXQueryVersion
/*#define glXSwapBuffers		jwzgles_glXSwapBuffers*/
#define glXUseXFont			jwzgles_glXUseXFont
#define glXWaitGL			jwzgles_glXWaitGL
#define glXWaitX			jwzgles_glXWaitX

#define gluBeginCurve			jwzgles_gluBeginCurve
#define gluBeginPolygon			jwzgles_gluBeginPolygon
#define gluBeginSurface			jwzgles_gluBeginSurface
#define gluBeginTrim			jwzgles_gluBeginTrim
#define gluBuild1DMipmaps		jwzgles_gluBuild1DMipmaps
#define gluBuild2DMipmaps		jwzgles_gluBuild2DMipmaps
#define gluCylinder			jwzgles_gluCylinder
#define gluDeleteNurbsRenderer		jwzgles_gluDeleteNurbsRenderer
#define gluDeleteQuadric		jwzgles_gluDeleteQuadric
#define gluDeleteTess			jwzgles_gluDeleteTess
#define gluDisk				jwzgles_gluDisk
#define gluEndCurve			jwzgles_gluEndCurve
#define gluEndPolygon			jwzgles_gluEndPolygon
#define gluEndSurface			jwzgles_gluEndSurface
#define gluEndTrim			jwzgles_gluEndTrim
#define gluErrorString			jwzgles_gluErrorString
#define gluGetNurbsProperty		jwzgles_gluGetNurbsProperty
#define gluGetString			jwzgles_gluGetString
#define gluGetTessProperty		jwzgles_gluGetTessProperty
#define gluLoadSamplingMatrices		jwzgles_gluLoadSamplingMatrices
#define gluLookAt			jwzgles_gluLookAt
#define gluNewNurbsRenderer		jwzgles_gluNewNurbsRenderer
#define gluNewQuadric			jwzgles_gluNewQuadric
#define gluNewTess			jwzgles_gluNewTess
#define gluNextContour			jwzgles_gluNextContour
#define gluNurbsCallback		jwzgles_gluNurbsCallback
#define gluNurbsCurve			jwzgles_gluNurbsCurve
#define gluNurbsProperty		jwzgles_gluNurbsProperty
#define gluNurbsSurface			jwzgles_gluNurbsSurface
#define gluPartialDisk			jwzgles_gluPartialDisk
#define gluPickMatrix			jwzgles_gluPickMatrix
#define gluProject			jwzgles_gluProject
#define gluPwlCurve			jwzgles_gluPwlCurve
#define gluQuadricCallback		jwzgles_gluQuadricCallback
#define gluQuadricDrawStyle		jwzgles_gluQuadricDrawStyle
#define gluQuadricNormals		jwzgles_gluQuadricNormals
#define gluQuadricOrientation		jwzgles_gluQuadricOrientation
#define gluQuadricTexture		jwzgles_gluQuadricTexture
#define gluScaleImage			jwzgles_gluScaleImage
#define gluSphere			jwzgles_gluSphere
#define gluTessBeginContour		jwzgles_gluTessBeginContour
#define gluTessBeginPolygon		jwzgles_gluTessBeginPolygon
#define gluTessCallback			jwzgles_gluTessCallback
#define gluTessEndPolygon		jwzgles_gluTessEndPolygon
#define gluTessEndContour		jwzgles_gluTessEndContour
#define gluTessNormal			jwzgles_gluTessNormal
#define gluTessProperty			jwzgles_gluTessProperty
#define gluTessVertex			jwzgles_gluTessVertex
#define gluUnProject			jwzgles_gluUnProject


/* These functions are present in both OpenGL 1.1 and in OpenGLES 1,
   but are allowed within glNewList/glEndList, so we must wrap them
   to allow them to be recorded.
 */
#define glActiveTexture			jwzgles_glActiveTexture
#define glAlphaFunc			jwzgles_glAlphaFunc
#define glBindTexture			jwzgles_glBindTexture
#define glBlendFunc			jwzgles_glBlendFunc
#define glClear				jwzgles_glClear
#define glClearColor			jwzgles_glClearColor
#define glClearStencil			jwzgles_glClearStencil
#define glColor4f			jwzgles_glColor4f
#define glColorMask			jwzgles_glColorMask
#define glColorPointer			jwzgles_glColorPointer
#define glCompressedTexImage2D		jwzgles_glCompressedTexImage2D
#define glCompressedTexSubImage2D	jwzgles_glCompressedTexSubImage2D
#define glCopyTexImage2D		jwzgles_glCopyTexImage2D
#define glCopyTexSubImage2D		jwzgles_glCopyTexSubImage2D
#define glCullFace			jwzgles_glCullFace
#define glDeleteTextures		jwzgles_glDeleteTextures
#define glDepthFunc			jwzgles_glDepthFunc
#define glDepthMask			jwzgles_glDepthMask
#define glDisable			jwzgles_glDisable
#define glDrawArrays			jwzgles_glDrawArrays
#define glDrawElements			jwzgles_glDrawElements
#define glEnable			jwzgles_glEnable
#define glFinish			jwzgles_glFinish
#define glFlush				jwzgles_glFlush
#define glFogf				jwzgles_glFogf
#define glFogfv				jwzgles_glFogfv
#define glFrontFace			jwzgles_glFrontFace
#define glGenTextures			jwzgles_glGenTextures
#define glGetIntegerv			jwzgles_glGetIntegerv
#define glHint				jwzgles_glHint
#define glLightModelf			jwzgles_glLightModelf
#define glLightModelfv			jwzgles_glLightModelfv
#define glLightf			jwzgles_glLightf
#define glLightfv			jwzgles_glLightfv
#define glLineWidth			jwzgles_glLineWidth
#define glLoadIdentity			jwzgles_glLoadIdentity
#define glLoadMatrixf			jwzgles_glLoadMatrixf
#define glLogicOp			jwzgles_glLogicOp
#define glMaterialf			jwzgles_glMaterialf
#define glMateriali			jwzgles_glMateriali
#define glMaterialfv			jwzgles_glMaterialfv
#define glMaterialiv			jwzgles_glMaterialiv
#define glMatrixMode			jwzgles_glMatrixMode
#define glMultMatrixf			jwzgles_glMultMatrixf
#define glNormal3f			jwzgles_glNormal3f
#define glNormalPointer			jwzgles_glNormalPointer
#define glPixelStorei			jwzgles_glPixelStorei
#define glPointSize			jwzgles_glPointSize
#define glPolygonOffset			jwzgles_glPolygonOffset
#define glPopMatrix			jwzgles_glPopMatrix
#define glPushMatrix			jwzgles_glPushMatrix
#define glReadPixels			jwzgles_glReadPixels
#define glRotatef			jwzgles_glRotatef
#define glScalef			jwzgles_glScalef
#define glSampleCoverage		jwzgles_glSampleCoverage
#define glScissor			jwzgles_glScissor
#define glShadeModel			jwzgles_glShadeModel
#define glStencilFunc			jwzgles_glStencilFunc
#define glStencilMask			jwzgles_glStencilMask
#define glStencilOp			jwzgles_glStencilOp
#define glTexCoordPointer		jwzgles_glTexCoordPointer
#define glTexEnvf			jwzgles_glTexEnvf
#define glTexEnvfv			jwzgles_glTexEnvfv
#define glTexImage2D			jwzgles_glTexImage2D
#define glTexParameterf			jwzgles_glTexParameterf
#define glTexSubImage2D			jwzgles_glTexSubImage2D
#define glTranslatef			jwzgles_glTranslatef
#define glVertexPointer			jwzgles_glVertexPointer
#define glViewport			jwzgles_glViewport
#define glEnableClientState		jwzgles_glEnableClientState
#define glDisableClientState		jwzgles_glDisableClientState
#define glClipPlane			jwzgles_glClipPlane


#define glGetError          jwzgles_glGetError
#define glGetString          jwzgles_glGetString

#endif /* __JWZGLES_H__ */
