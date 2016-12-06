//
//  CoreTransitionsFacade.h
//  PolarisOffice
//
//  Created by 고 명부 on 2015. 2. 2..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief Slide 화면전환 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>
#import "CEngineHelperEnum.h"

@interface CoreTransitionsFacade : NSObject

- (void)setTransitionEffect:(int)transitionEffectType transitionOptionType:(int)transitionEffectOptionType Duration:(int)duration isTouchScreecn:(bool)isTouchScreecn isAfter:(bool)isAfter afterTime:(int)afterTime;
- (void)setTransitionEffectAllPage;
- (void)setTransitionEffectType:(int)transitionEffectType transitionOptionType:(int)transitionEffectOptionType;
- (void)setTransitionEffectOptionType:(int)transitionEffectOptionType;
- (void)setTransitionEffectTouchScreen:(bool)isTouch;
- (void)setTransitionEffectAfterTimeOn:(int)afterTime;
- (void)setTransitionEffectAfterTimeOff;
- (int)getTransitionEffectType;
- (int)getTransitionEffectOptionType;
- (int)getTransitionDuration;
- (bool)isTouchTheScreen;
- (bool)isAfter;
- (int)getAfterTime;

@end
