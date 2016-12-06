//
//  CorePageBackgroundFacade.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2015. 2. 4..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief Word 페이지 배경 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CorePageBackgroundFacade : NSObject

- (void) setPageWatermarkInfo:(NSMutableArray *) waterMarkInfo;

- (int) getPageBackgroundColor;
- (int) getPageBackgroundType;
- (void) setPageBackgroundGradationInfo:(NSMutableArray *)gradationInfo;

- (void) setPageBackgroundColor:(int) pageColor;
- (void) setPageBackgroundImage:(UIImage *) backgroundImage;

- (void) setPageBorderInfo:(NSMutableArray *)borderInfo;
- (void) setTextParaBorderInfo:(NSMutableArray *)borderInfo;

- (NSMutableArray *) getPageWatermarkInfo;
- (NSMutableArray *) getPageBackgroundGradationInfo;
- (NSMutableArray *) getPageBorderInfo;
- (NSMutableArray *) getTextParaBorderInfo;

- (void) setSlideBackgroundColor:(int) pageColor;

@end
