//
//  CWatermarkGradationButton.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2015. 2. 3..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CWatermarkGradationButton : UIButton

@property (strong, nonatomic) UIColor *startColor;
@property (strong, nonatomic) UIColor *endColor;
@property (nonatomic) int gradationType;

- (void)initWithStartColor:(UIColor *)startColor endColor:(UIColor *)endColor gradationType:(NSInteger) type;
- (void)setSelectButton;
- (void)setDeselectButton;

@end
