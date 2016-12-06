//
//  CConditionalFormatViewTypeOneNumber.h
//  PolarisOffice
//
//  Created by dowith4 on 2015. 3. 18..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CConditionalFormatParentTypeView.h"

typedef enum
{
	ConditionalFormatOneNumberType_GreaterThan,
	ConditionalFormatOneNumberType_LessThan,
	ConditionalFormatOneNumberType_equal,
	
}ConditionalFormatOneNumberType;
@interface CConditionalFormatViewTypeOneNumber : CConditionalFormatParentTypeView
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UISegmentedControl *segment;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (nonatomic) ConditionalFormatOneNumberType type;
@end
