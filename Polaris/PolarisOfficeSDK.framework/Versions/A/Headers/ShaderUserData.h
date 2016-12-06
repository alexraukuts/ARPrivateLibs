//
//  ShaderUserData.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 1. 20..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RenderViewDefine.h"

@interface ShaderUserData : NSObject

@property (assign, nonatomic) GLuint programHandle;
@property (assign, nonatomic) GLuint positionSlot;
@property (assign, nonatomic) GLuint colorSlot;
@property (assign, nonatomic) GLuint texCoordSlot;
@property (assign, nonatomic) GLuint textureUniform;
@property (assign, nonatomic) GLuint useTexture;

-(void)releaseSharedUserData;
@end
