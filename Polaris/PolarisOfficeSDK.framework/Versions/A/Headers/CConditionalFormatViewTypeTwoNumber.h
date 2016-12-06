//
//  CConditionalFormatViewTypeTwoNumber.h
//  PolarisOffice
//
//  Created by dowith4 on 2015. 3. 18..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CConditionalFormatParentTypeView.h"

@interface CConditionalFormatViewTypeTwoNumber : CConditionalFormatParentTypeView
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UISegmentedControl *segment_one;
@property (weak, nonatomic) IBOutlet UITextField *textField_one;
@property (weak, nonatomic) IBOutlet UISegmentedControl *segment_two;
@property (weak, nonatomic) IBOutlet UITextField *textField_two;

@end
