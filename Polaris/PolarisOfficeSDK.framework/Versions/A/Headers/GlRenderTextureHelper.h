//
//  CRenderTextureHelper.h
//  PolarisOffice
//
//  Created by 조기현 on 2015. 1. 15..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>
#import "RenderViewDefine.h"
#import <UIKit/UIKit.h>

#define EMPTY_TEXTURE -1
#define CANVAS_TEXTURE_COUNT 5	/** 텍스쳐의 개수를 최대 5개로 제한, 추후 이미지 종류가 많지는 경우 텍스쳐 개수를 늘리거나 텍스쳐 크기를 조정해야 함 */

typedef struct _tagTextureInfo
{
    GLuint  textureID;
    CGRect  imageRect;
    GLfloat UVVertex[8];
}RENDER_TEXTURE_INFO;

@interface GlRenderTextureHelper : NSObject
{
    GLuint canvasTexture[CANVAS_TEXTURE_COUNT];
}

- (RENDER_TEXTURE_INFO)getImageUV:(NSString*)imageName;
- (NSMutableArray*)getNumberUVs:(NSInteger)number;
- (void)releaseGLTexture;

@end
