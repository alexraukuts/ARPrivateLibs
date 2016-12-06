//
//  CActionSheetViewController.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 10. 29..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CMenuMediator;
@interface CActionSheetViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIView *containerView;
@property (retain, nonatomic) CMenuMediator *mediator;

@end
