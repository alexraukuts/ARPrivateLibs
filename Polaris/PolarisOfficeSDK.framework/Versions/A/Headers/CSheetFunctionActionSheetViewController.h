//
//  CSheetFunctionActionSheetViewController.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2015. 3. 16..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CSheetInsertFunctionMenuMediator;
@interface CSheetFunctionActionSheetViewController : UIViewController

@property (retain, nonatomic) CSheetInsertFunctionMenuMediator *mediator;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *containerViewTopSpaceConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *containerViewBottomSpaceConstraint;

- (void)setContentViewController:(UIViewController *)contentViewController;

@end
