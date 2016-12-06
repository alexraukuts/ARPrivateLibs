//
//  CAnimationOptionData.h
//  PolarisOffice
//
//  Created by succorer on 2015. 3. 12..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CEngineHelper.h"

@interface CAnimationOptionData : NSObject

@property (strong, nonatomic) NSString *imageName;
@property NSInteger type;

+ (instancetype)animationOptionDataWithImageName:(NSString *)imageName type:(NSInteger)type;
+ (NSArray *)sharedMainAnimationOptionDatas:(NSInteger)slideShowAnimationType;
+ (NSArray *)sharedSubAnimationOptionDatas:(NSInteger)slideShowAnimationType;
+ (NSArray *)getOptionIndexArray:(PPT_ANIMATION_INFO)animationInfo;
+ (NSInteger)getAnimationFirstEngineValue:(NSInteger)slideShowAnimationType mainIndex:(int)mainIndex;
+ (NSInteger)getAnimationSecondEngineValue:(NSInteger)slideShowAnimationType subIndex:(int)subIndex;
@end
