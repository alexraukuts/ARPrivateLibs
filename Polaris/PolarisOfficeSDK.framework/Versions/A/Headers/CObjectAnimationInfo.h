//
//  ObjectAnimationInfo.h
//  PolarisOffice
//
//  Created by 고 명부 on 2015. 3. 12..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CEngineHelper.h"

@interface CObjectAnimationInfo :NSObject

@property (nonatomic) PPT_ANIMATION_INFO animationInfo;
+(id)initWithAnimationInfo:(PPT_ANIMATION_INFO)animationInfo;
-(int) getAnimationPresetID;
-(SlideAnimationFrameType) getAnimationFrameType;
-(AnimationPresetClassType) getAnimationPresetClass;
-(int)getAnimationOrder;
-(void)setChecked:(BOOL)isChecked;
-(BOOL)isChecked;
@end
