//
//  CModalViewMediator.h
//  PolarisOffice
//
//  Created by d_infraware on 2014. 12. 18..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CModalViewMediator : NSObject

@property (nonatomic, setter=setEnableOutsideTouch:) BOOL isEnableOutsideTouch;
//@property (nonatomic, setter=setEnableBlurEffect:) BOOL isEnableBlurEffect;
@property (nonatomic, readonly) BOOL isAddedSubModalView;

- (instancetype)initWithContentViewController:(UIViewController *)contentViewController;
- (void)addSubModalViewWithParentViewController:(UIViewController *)parentViewController;
- (void)addSubModalViewWithParentView:(UIView *)parentView;
- (void)removeAddedModalView;
- (void)presentModalViewControllerWithParnetViewController:(UIViewController *)parentViewController;

@end
