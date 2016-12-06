//
//  CAnimationData.h
//  PolarisOffice
//
//  Created by succorer on 2015. 3. 11..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDefineCommon.h"
#import "CEngineHelper.h"

@interface CAnimationData : NSObject

@property NSInteger selectedAnimaitonIndex;
@property NSInteger selectedChangeAnimationIndex;
@property (nonatomic) NSInteger selectedTimingIndex;
@property SlideAnimationTabType selectedTabType;
@property SlideAnimationTabType currentShowingTabType;

@property (strong, nonatomic) NSMutableDictionary *entranceOptionDict;
@property (strong, nonatomic) NSMutableDictionary *emphasisOptionDict;
@property (strong, nonatomic) NSMutableDictionary *exitOptionDict;

- (void)initDatas;
- (void)updateEntranceOption:(NSString *)key value:(NSNumber *)value;
- (void)updateEmphasisOption:(NSString *)key value:(NSNumber *)value;
- (void)updateExitOption:(NSString *)key value:(NSNumber *)value;
- (BOOL)hasSelectedAnimationIndex;
- (SlideAnimationOptionSet)getSlideAnimationOptionSet:(NSInteger)slideShowAnimationType;
- (SlideShowAnimationType)getSlideShowAnimationType:(PPT_ANIMATION_INFO)animationInfo;
- (SlideAnimationDirectionType)getSlideAnimationDirectionType:(PPT_ANIMATION_INFO)animationInfo;

+ (instancetype)sharedAnimationData;

@end
