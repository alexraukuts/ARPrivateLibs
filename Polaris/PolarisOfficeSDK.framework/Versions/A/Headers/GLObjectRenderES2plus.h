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
#import "GLShaderHelper.h"
#import "ShaderUserData.h"

@interface GLObjectRenderES2plus : NSObject
{
    @private
    GLuint headerTexture;
    GLShaderHelper *shaderHelper;
    ShaderUserData *programData;
    GLuint objectBuffer;
	
	/**
	 *  shader와 연결
	 */
    struct objectShaderData
    {
        GLuint programHandle;
        GLuint positionSlot;
        GLuint clipPostionSlot;
        GLuint colorSlot;
        GLuint texCoordSlot;
        GLuint startPosition;
		GLuint drawMode; //** RENDER_DRAW_NORMAL / RENDER_DRAW_TEXTURE / RENDER_DRAW_DASHED */
    } objectProgramData;

    struct objectPosistion
    {
        CGPoint center;
        CGPoint rotateSmartGuide;
        CGPoint verticalCenterLeft;
        CGPoint verticalCenterRight;
        CGPoint verticalTopCenter;
        CGPoint verticalBottomCenter;
        CGPoint verticalTopLeft;
        CGPoint verticalTopRight;
        CGPoint verticalBottomRight;
        CGPoint verticalBottomLeft;
        CGPoint rotatePosistion;
        int angle;
    } objectPosition;
	
	bool isRententionRateControl;
    bool isShowTime;
}

- (id)initWithRenderBlock:(void(^)(void))block;
- (void)releaseGLTexture;
- (void)updateObjectRender:(CGSize)viewSize;

@end
