//
//  CSheetSortPickerViewController.h
//  PolarisOffice
//
//  Created by d_infraware on 2015. 1. 6..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CSheetSortPickerViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>

@property (weak, nonatomic) CSheetSortTableViewController *parentSortTableViewController;
@property (strong, nonatomic) NSString *pickerIdentifier;
@property (strong, nonatomic) NSArray *pickerArray;

- (void)selectItem:(NSString *)itemTitle;
- (void)reloadAllComponents;
@end
