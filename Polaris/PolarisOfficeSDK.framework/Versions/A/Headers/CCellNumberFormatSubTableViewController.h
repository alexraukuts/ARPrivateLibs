//
//  CCellNumberTypeTableViewController.h
//  PolarisOffice
//
//  Created by d_infraware on 2015. 1. 13..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoreCellFacade.h"

@interface CCellNumberFormatSubTableViewController : UITableViewController<UITextFieldDelegate>

@property (nonatomic) SheetCellNumberType sheetCellNumberType;
@property (strong, nonatomic) CoreCellFacade *coreCellFacade;

@end
