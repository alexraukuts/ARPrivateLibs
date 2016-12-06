//
//  CConditionalFormatViewTypeOneString.h
//  PolarisOffice
//
//  Created by dowith4 on 2015. 3. 19..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CConditionalFormatParentTypeView.h"

typedef enum
{
	ConditionalFormatViewOneStringType_containText,
	ConditionalFormatViewOneStringType_Top10,
	ConditionalFormatViewOneStringType_Top10Percent,
	ConditionalFormatViewOneStringType_Bottom10,
	ConditionalFormatViewOneStringType_Bottom10Percent,
	
}ConditionalFormatViewOneStringType;
@interface CConditionalFormatViewTypeOneString : CConditionalFormatParentTypeView

@property (weak, nonatomic) IBOutlet UILabel *label;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (nonatomic) ConditionalFormatViewOneStringType type;
@end
