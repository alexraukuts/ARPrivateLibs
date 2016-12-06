//
//  CColumnOptionTableViewCell.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2015. 1. 31..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CColumnOptionTableViewCell : UITableViewCell

- (void) setLabelTitle:(NSString *) labelTitle;
- (void) setSwitchValue:(BOOL) isOn;
- (BOOL) isOnSwitch;

@property (strong, nonatomic) void(^onEnableColumnNumber)(BOOL isEnableColumnNumber);

@end
