//
//  CoreVideoFacade.h
//  PolarisOffice
//
//  Created by hys on 2015. 1. 23..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief 비디오 속성 및 동작 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "E.h"

@interface CoreVideoFacade : NSObject

- (void)setObjectOrderPosition:(NSInteger)position;
- (void)setObjectArrangeAlign:(int)align;
- (void)setVideoLineTransparency:(int)transparency;
- (int)getVideoLineTransparency;
- (long)getObjectLineColor;
- (ObjectLineColorType)getObjectLineColorType;
- (void) insertOnlineVideo:(NSString *)url;

@end
