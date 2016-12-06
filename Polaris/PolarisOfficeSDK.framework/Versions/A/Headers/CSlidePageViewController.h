//
//  CSlidePageViewController.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 11. 17..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CSlidePageViewController : UIViewController

- (void)updatePageViewStatusAtIndex:(NSInteger)pageIndex;
- (void)notifyShowKeyboardState;
- (void)notifyHideKeyboardState;
- (void)notifyShowDrawToolbarState;
- (void)notifyHideDrawToolbarState;

- (void)updateThumbItem;

@end
