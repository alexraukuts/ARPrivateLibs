//
//  CModalViewController.h
//  PolarisOffice
//
//  Created by d_infraware on 2014. 12. 13..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CModalViewMediator.h"
#import "CKeyboardState.h"

@interface CModalNavigationController : UINavigationController

@end

@interface CModalViewController : UIViewController<CKeyboardStateDelegate>

@property (strong, nonatomic) CModalViewMediator* modalViewMediator;

@property (nonatomic, setter=setEnableOutsideTouch:) BOOL isEnableOutsideTouch;
//@property (nonatomic, setter=setEnableBlurEffect:) BOOL isEnableBlurEffect;

- (instancetype)initWithContentViewController:(UIViewController *)contentViewController;

@end
