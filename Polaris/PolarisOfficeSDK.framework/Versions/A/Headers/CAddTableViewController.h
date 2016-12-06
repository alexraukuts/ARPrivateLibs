//
//  CAddTableViewController.h
//  PolarisOffice
//
//  Created by dowith4 on 2015. 1. 23..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CAddTableViewControllerDelegate <NSObject>

- (void)didTableDoneWithInfo:(NSDictionary *)tableInfo;

@end

@interface CAddTableViewController : UIViewController

@property (nonatomic) id<CAddTableViewControllerDelegate> addTableViewControllerDelegate;

- (void)onDoneButtonClicked;

@end
