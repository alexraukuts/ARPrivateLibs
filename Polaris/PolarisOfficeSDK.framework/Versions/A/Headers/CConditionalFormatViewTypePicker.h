//
//  CConditionalFormatViewTypePicker.h
//  PolarisOffice
//
//  Created by dowith4 on 2015. 3. 19..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CConditionalFormatParentTypeView.h"

typedef enum
{
	ConditionalFormatPickerViewType_Date,
	ConditionalFormatPickerViewType_Duplicate,
	
}ConditionalFormatPickerViewType;

@class AKPickerView;
@interface CConditionalFormatViewTypePicker : CConditionalFormatParentTypeView
@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet AKPickerView *pickerView;


-(void)setArrayType:(ConditionalFormatPickerViewType)type;

@end
