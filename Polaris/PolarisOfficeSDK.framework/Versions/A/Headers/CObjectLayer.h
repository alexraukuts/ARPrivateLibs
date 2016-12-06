//
//  CObjectLayer.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 1. 12..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface CObjectLayer : CAShapeLayer

- (void)updateWithFrame:(CGRect)frame isRotate:(BOOL)rotate angel:(float)angel isInvert:(BOOL)invert;

@end
