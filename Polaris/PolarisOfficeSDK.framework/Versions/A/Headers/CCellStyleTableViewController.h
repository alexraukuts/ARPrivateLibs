//
//  CCellStyleTableViewController.h
//  PolarisOffice
//
//  Created by d_infraware on 2015. 1. 19..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCellStyleTableViewController : UITableViewController

@property (nonatomic, strong) CCellStyleViewController *parentCellStyleViewController;
@property (nonatomic) SheetCellStyleTableType sheetCellStyleTableType;

- (void)selectWithIndexPath:(NSIndexPath *)indexPath;
- (void)deselectWithIndexPath:(NSIndexPath *)indexPath;

@end
