//
//  CConditionalFormatMainViewController.h
//  PolarisOffice
//
//  Created by dowith4 on 2015. 3. 14..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum
{
    ConditionalFormatIndex_CellHighlight = 0,
    ConditionalFormatIndex_Parent_ChildRule,
    ConditionalFormatIndex_DateBars,
    ConditionalFormatIndex_Hue,
    ConditionalFormatIndex_Icon,
    ConditionalFormatIndex_Clear,
    
}ConditionalFormatIndex;

@interface CConditionalFormatMainViewController : UIViewController

@end
