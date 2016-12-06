//
//  UIViewController+Modal.h
//  PolarisOffice
//
//  Created by d_infraware on 2014. 12. 18..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (Modal)

- (CGSize)preferredContentSizeForParentContainer;
- (id)parentViewControllerWithTargetClass:(Class)targetClass senderViewController:(UIViewController *)senderViewController;

@end
