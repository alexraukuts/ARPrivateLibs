#pragma once

#ifndef PolarisOffice_RenderViewDefine_h
#define PolarisOffice_RenderViewDefine_h

#import <OpenGLES/ES1/gl.h>
#import <OpenGLES/ES1/glext.h>

#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

#import <OpenGLES/ES3/gl.h>
#import <OpenGLES/ES3/glext.h>

#define RENDER_USE_TEXTURE  true
#define RENDER_USE_COLOR    false

#define RENDER_DRAW_NORMAL 0
#define RENDER_DRAW_TEXTURE 1
#define RENDER_DRAW_DASHED 2

typedef struct {
    float Position[3];
    float Color[4];
    float TexCoord[2];
    float useTexture;
} Vertex;

#endif
