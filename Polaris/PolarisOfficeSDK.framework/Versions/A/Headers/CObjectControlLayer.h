//
//  CObjectControlLayer.h
//  PolarisOffice
//
//  Created by 유선욱 on 2014. 12. 29..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "CObjectControlInterface.h"

enum ControlStatus
{
    Normal,
    Highlighted,
    Disable
};

@interface CObjectControlLayer : CALayer

@property (nonatomic, assign) enum Object_Control_Layer_Type objectControlType;
@property (nonatomic, assign) enum Object_Control_Layer_Position objectControlPosition;
@property (nonatomic, assign) enum ControlStatus controlStatus;

- (instancetype) initWithControl:(CGRect)frame controlType:(enum Object_Control_Layer_Type)controlType controlPosition:(enum Object_Control_Layer_Position)controlPosition;
- (void) updatePosition;
- (void) updatePosition:(CGRect)parentFrame;
//- (void) initCalculate:(CGPoint)touchPoint;
//- (void) calculatePoint:(void(^)(float width, float height, float angel))calculateReturnBlock touchPoint:(CGPoint)touchPoint;
@end
