//
//  GLShaderHelper.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 1. 20..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RenderViewDefine.h"
#import "ShaderUserData.h"

@interface GLShaderHelper : NSObject
{

}

- (GLuint)compileShaderWithName:(NSString*)shaderName andType:(GLenum)shaderType;
- (ShaderUserData *)linkProgramWithVertexShaderName: (NSString *)vertextShaderName andFragmentShaderName: (NSString *)fragmentShaderName;
- (GLuint)linkProgramHandleWithVertexShaderName: (NSString *)vertextShaderName andFragmentShaderName: (NSString *)fragmentShaderName;

@end
