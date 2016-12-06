//
//  CPageLayoutOptionContainerViewController.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2015. 1. 30..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CPageLayoutOptionContainerViewController : UIViewController

@property (nonatomic) int numOfSelectedColumns;
@property (strong, nonatomic) NSArray *optionValues;
@property (nonatomic) BOOL isEqualColumn;
@property (strong, nonatomic) void(^columnOptionValues)(NSArray *optionValues);

@end
