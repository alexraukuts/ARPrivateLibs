//
//  CPageBackgroundViewController.h
//  PolarisOffice
//
//  Created by 강현석 on 2014. 12. 24..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CWaterMarkTableViewController.h"
#import "CPageColorTableViewController.h"
#import "CBorderTableViewController.h"
#import "CPageBorderTableViewController.h"

@interface CPageBackgroundViewController : UIViewController

- (CWaterMarkTableViewController *) getWaterMarkTableViewController;
- (CPageColorTableViewController *) getPageColorTableViewController;
- (CBorderTableViewController *) getParaBorderTableViewController;
- (CPageBorderTableViewController *) getPageBorderTableViewController;

- (void)enableDoneBtn;
- (void)setCurrentWatermarkTableViewController:(CWaterMarkTableViewController*)watermarkTableViewContoller;
@end
