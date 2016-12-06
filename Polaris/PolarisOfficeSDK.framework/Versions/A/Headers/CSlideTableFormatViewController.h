//
//  CSlideTableFormatViewController.h
//  PolarisOffice
//
//  Created by 조기현 on 2014. 12. 9..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CTableFormatViewController.h"

@interface CSlideTableFormatViewController : CTableFormatViewController

@property (strong, nonatomic) IBOutletCollection(UISegmentedControl) NSArray *lineStyleSegControls;

@property (weak, nonatomic) IBOutlet UISegmentedControl *orderSegControl;
@property (strong, nonatomic) IBOutletCollection(UISegmentedControl) NSArray *alignSegControls;



@end
