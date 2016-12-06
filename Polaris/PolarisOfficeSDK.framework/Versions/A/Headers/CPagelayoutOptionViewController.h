//
//  CPagelayoutOptionViewController.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2014. 12. 23..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CPagelayoutOptionViewController : UITableViewController

@property (nonatomic) int numOfSelectedColumns;
@property (strong, nonatomic) NSArray *optionValues;
@property (nonatomic) BOOL isEqualColumn;
@property UIViewController *parentContainerViewContoller;

- (NSArray *) getColumnOptionValues;

@end
