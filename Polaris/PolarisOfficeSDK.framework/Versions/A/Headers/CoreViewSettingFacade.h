//
//  CoreViewSettingFacade.h
//  PolarisOffice
//
//  Created by 강현석 on 2015. 3. 3..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief 보기 설정 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>

@interface CoreViewSettingFacade : NSObject

- (void)setFullWithView;
- (void)setNormalView;
- (void)setReflowText;
- (void)setSmartGuideMode:(bool)isOn;
- (void)setPdfReflowText;
- (void)setPdfNormalView;
- (void)setMemoSetting:(bool)isOn;
- (BOOL)isShowMemo;
- (void)setShowAnimationPath:(bool)isOn;
- (BOOL)isShowAnimationPath;
- (BOOL)hasAnimationPath;

@end
