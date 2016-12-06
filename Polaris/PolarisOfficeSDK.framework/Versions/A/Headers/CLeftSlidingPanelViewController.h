//
//  CLeftSlidingPanelViewController.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2014. 12. 3..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CMenuMediator;
@interface CLeftSlidingPanelViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIView *menuContainerView;
@property (retain, nonatomic) CMenuMediator *mediator;
@property CGSize size;

- (void)dismissViewCompletion:(void (^)(void))completion;

@end
