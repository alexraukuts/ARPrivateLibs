//
//  GLRendererES3.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 1. 22..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//
#import "GLRenderer.h"
#import "GLShaderHelper.h"
#import "ShaderUserData.h"

@interface GLRendererES3 : GLRenderer
{
@private
    GLShaderHelper *shaderHelper;
    ShaderUserData *programData;
    
    GLuint framebuffer;
    GLuint renderbuffer;
    GLuint vertexBuffer;
    GLuint indexBuffer;
    GLuint pixelBuffer;
    GLuint renderTexture;
    
    BOOL shouldTextureBeSynchronized;
}

@end
