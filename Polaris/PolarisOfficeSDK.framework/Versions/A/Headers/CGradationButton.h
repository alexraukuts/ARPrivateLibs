//
//  CGradationButton.h
//  PolarisOffice
//
//  Created by succorer on 2015. 1. 14..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CDefineCommon.h"

@interface CGradationButton : UIButton

@property (strong, nonatomic) UIColor *startColor;
@property (strong, nonatomic) UIColor *endColor;
@property ShapeGradientDirection gradationDirType;

- (void)initWithStartColor:(UIColor *)startColor endColor:(UIColor *)endColor gradationDirType:(NSInteger)gradationDirType;
- (void)setSelectButton;
- (void)setDeselectButton;

@end
