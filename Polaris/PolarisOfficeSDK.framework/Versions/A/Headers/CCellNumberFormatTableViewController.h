//
//  CCellNumberFormatTableViewController.h
//  PolarisOffice
//
//  Created by d_infraware on 2015. 1. 13..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoreCellFacade.h"

@interface CCellNumberFormatTableViewController : UITableViewController

typedef enum : NSInteger
{
    SheetCellNumberType_General,
    SheetCellNumberType_Number,
    SheetCellNumberType_Currency,
    SheetCellNumberType_Accounting,
    SheetCellNumberType_Date,
    SheetCellNumberType_Time,
    SheetCellNumberType_Percentage,
    SheetCellNumberType_Fraction,
    SheetCellNumberType_Exponential,
    SheetCellNumberType_Text,
} SheetCellNumberType;
@property (strong, nonatomic) CoreCellFacade *coreCellFacade;

@end
