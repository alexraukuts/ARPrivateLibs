//
//  CMarginCustomSettingViewController.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2014. 12. 23..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CMarginCustomSettingViewController : UIViewController

@property (strong, nonatomic) void(^customMarginValue)(NSArray *marginValues);
@property (strong, nonatomic) NSMutableArray *marginCustomValues;

@end
