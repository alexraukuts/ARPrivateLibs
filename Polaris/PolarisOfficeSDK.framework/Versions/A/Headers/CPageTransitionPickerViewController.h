//
//  CPageTransitionPickerViewController.h
//  PolarisOffice
//
//  Created by d_infraware on 2014. 12. 30..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPageTransitionTableViewController.h"

@interface CPageTransitionPickerViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>

@property (weak, nonatomic) CPageTransitionTableViewController *parentPageTransitionTableViewController;

- (void)initPickerViewData:(int)min sec:(int)second msec:(int)milliSecond;
@end
