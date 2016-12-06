//
//  GLRenderer.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 1. 22..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "RenderViewDefine.h"

#import "CDefineCommon.h"
#import "GLShaderHelper.h"
#import "ShaderUserData.h"

typedef void (^onRequestWholeRendering)(void);
typedef void (^onRequestPresentRenderBufferBlock)(void);

@interface GLRenderer : NSObject
{
@protected
    __weak CAEAGLLayer *eaglLayer;
    __weak EAGLContext *eaglContext;
    
    BOOL    isSetup;
    BOOL    isDocViewMode;
    
    GLint    rendererWidth;
    GLint    rendererHeight;
    
    BOOL    ignoreObjectRendering;
    
    onRequestWholeRendering requestWholeRendering;
    onRequestPresentRenderBufferBlock requestPresentRenderBufferBlock;
}

- (void)setupGLStuffWithSize:(CGSize)size andLayer:(CAEAGLLayer *)layer andContext:(EAGLContext *)context;
- (void)releaseGLStuff;

- (void)changeRendererWithSize:(CGSize)size;

// the image will not be used with GLRendererES3
- (void)requestRender:(unsigned char *)imageForES2;

//for GLRendererES3. use hook method which returns nil if the concrete class is not GLRendererES3
- (void*)requestBufferWithWidth:(int)width andHeight:(int)height;

- (void)allowAccessRendererForWholeRendering:(onRequestWholeRendering)block;
- (void)allowAccessConxextForPresentRenderBuffer:(onRequestPresentRenderBufferBlock)block;

- (void)changeViewEditMode:(BOOL)isViewMode;
- (void)ignoreObjectRendering:(BOOL)ignore;

@end