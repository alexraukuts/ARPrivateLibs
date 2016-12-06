//
//  CSheetSortTableViewController.h
//  PolarisOffice
//
//  Created by d_infraware on 2015. 1. 6..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CSheetSortTableViewController : UITableViewController

- (void)setSelectedPickerItem:(NSString *)itemTitle pickerIdentifier:(NSString *)identifier;
- (void)doneSort;
@end
