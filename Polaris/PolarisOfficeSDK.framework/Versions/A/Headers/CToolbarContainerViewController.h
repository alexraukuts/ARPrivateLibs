//
//  CToolbarContainerViewController.h
//  PolarisOffice
//
//  Created by succorer on 2015. 1. 6..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CToolbarContainerViewController : UIViewController

@property (nonatomic, readonly) NSString *currentToolbarMode;

- (void)changeMenu:(NSString *)toolbarMode completion:(void (^)(void))completion;

@end
