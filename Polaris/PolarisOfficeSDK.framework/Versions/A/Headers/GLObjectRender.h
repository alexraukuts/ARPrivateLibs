//
//  GLObjectRender.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 1. 12..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "RenderViewDefine.h"

@interface GLObjectRender : NSObject
{
    @private
    GLuint headerTexture;
}
- (id)initWithRenderBlock:(void(^)(void))block;
- (void)releaseGLTexture;
- (void)updateObjectRender:(CGSize)viewSize;

@end
