//
//  CTrackChangesSettingReviewerTableViewCell.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 3. 9..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CTrackChangesSettingReviewerTableViewCell : UITableViewCell

- (void)initWithTitle:(NSString*)title isOn:(BOOL)isOn;
- (void)setTitle:(NSString*)title;

- (UISwitch*)getSwitchControl;

@end
