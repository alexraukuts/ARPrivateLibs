//
//  CCustomWatermarkViewController.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2015. 1. 8..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPageBackgroundHeader.h"

@interface CCustomWatermarkViewController : UIViewController

- (void) initWatermarkInfo:(NSMutableArray *) currentWatermarkInfo onSeletedWatermarkType:(void (^)(WatermarkType WatermarkType, NSMutableArray *customWatermarkInfo))onSeletedWatermarkTypeChanged;
@property (strong, nonatomic) void(^onSeletedWatermarkType)(WatermarkType watermarkType, NSMutableArray *customWatermarkInfo);

@end
