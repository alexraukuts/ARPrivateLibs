//
//  GLExtraRenderer.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 1. 27..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RenderViewDefine.h"
#import "GLShaderHelper.h"

@interface GLExtraRenderer : NSObject
{
    GLuint extraBuffer;
    
    struct objectShaderData
    {
        GLuint programHandle;
        GLuint positionSlot;
        GLuint clipPostionSlot;
        GLuint colorSlot;
        GLuint texCoordSlot;
        GLuint startPosition;
        GLuint drawMode;
    } extraProgramData;
}

-(void)requestRender:(CGSize)viewSize;
- (void)releaseGLBuffer;

@end
