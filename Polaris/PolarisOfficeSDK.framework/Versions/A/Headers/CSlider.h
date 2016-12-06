//
//  CSlider.h
//  PolarisOffice
//
//  Created by succorer on 2015. 1. 20..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CSliderBase.h"

@interface CSlider : CSliderBase

@property BOOL isExcuteRoundMaximumFloatValue;
@property float intervalValue;
@property (nonatomic, strong) UIButton *increaseButton;
@property (nonatomic, strong) UIButton *decreaseButton;
@property (nonatomic, strong) void (^valueChangedHandler)(id sender);

- (id)initWithCoder:(NSCoder *)aDecoder;
- (id)initWithFrame:(CGRect)frame;

@end
