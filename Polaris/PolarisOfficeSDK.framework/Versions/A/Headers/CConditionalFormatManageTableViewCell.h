//
//  CConditionalFormatManageTableViewCell.h
//  PolarisOffice
//
//  Created by 고 명부 on 2015. 3. 19..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CEngineHelper.h"

@interface CConditionalFormatManageTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIView *cfView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *rangeLabel;
@property (weak, nonatomic) IBOutlet UILabel *orderLabel;
@property (weak, nonatomic) IBOutlet UIButton *checkButton;

- (void)updateCellWithIndexPathRow:(int)row conditionalFormatInfo:(WRAPPER_SHEET_EDIT_C_F*)info cell:(CConditionalFormatManageTableViewCell*)cell;
@end
