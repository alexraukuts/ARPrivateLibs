//
//  GLExtraMovieRender.h
//  PolarisOffice
//
//  Created by 조기현 on 2015. 1. 28..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import "GLExtraRenderer.h"

@interface GLExtraMovieRender : GLExtraRenderer

@property NSInteger uniqueKey;

- (instancetype)initWithUniqueKey:(NSInteger)uniqueKey;

@end
