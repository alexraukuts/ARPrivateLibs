//
//  CSheetTableTotalsRowMenuTableViewController.h
//  PolarisOffice
//
//  Created by ParkBeomsam on 2015. 4. 21..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CMenuMediator;

@interface CSheetTableTotalsRowMenuTableViewController : UITableViewController

@property (assign) CMenuMediator *mediator;
- (void)sheetTableTotalsRowMenuInfo:(NSInteger)index;

@end
