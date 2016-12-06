//
//  CSlideShowPointerViewController.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 2. 22..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CSlideShowPointerDelegate.h"
#import "CPointerMenuViewController.h"

@interface CSlideShowPointerViewController : UIViewController

@property (nonatomic, weak) id<CSlideShowPointerDelegate> pointerDelegate;
@property (nonatomic, assign) pointerType pointerColor;
@property (weak, nonatomic) CPointerMenuViewController *pointerMenuViewController;

- (void)dismissSettingView;

@end
