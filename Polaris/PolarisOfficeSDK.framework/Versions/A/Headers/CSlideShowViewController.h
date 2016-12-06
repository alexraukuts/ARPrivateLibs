//
//  CSlideShowViewController.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 2. 14..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CSlideShowSliderViewController.h"
#import "CSlideShowPointerDelegate.h"

@interface CSlideShowViewController : UIViewController
<CSlideShowPointerDelegate, UIAlertViewDelegate>

@property (nonatomic, assign) int startPage;
@property (nonatomic, assign) int rangeStartPage;
@property (nonatomic, assign) int rangeEndPage;

@property (nonatomic, assign) BOOL isShowNow;

- (void)showSlideWatermark;
- (void)setSlideShowModeReset;

@end
