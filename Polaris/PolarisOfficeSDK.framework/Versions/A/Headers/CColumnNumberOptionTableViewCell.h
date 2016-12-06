//
//  CColumnNumberOptionTableViewCell.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2015. 1. 31..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CColumnNumberOptionTableViewCell : UITableViewCell

@property (strong, nonatomic) void(^onCellValueChanged)(BOOL isChangeWidthValue, NSUInteger cellIndex);
@property (strong, nonatomic) void(^showToastWithMin)(float min, float max);

- (void) initMaxSliderValuesWithWidth:(float) width spacing:(float)spacing;
- (void) setLabelsTitle:(NSString *) labelTitle;
- (void) setColumnWidthValue:(float) columnWidth;
- (void) setColumnSpacingValue:(float) columnSpacing;
- (float) getColumnWidthValue;
- (float) getColumnSpacingValue;
- (void) setEnableColumnNumberArea:(BOOL) isEnable;
- (void) setIndex:(NSUInteger) index;
- (float) getPrevColumnWidthValue;
- (float) getPrevColumnSpacingValue;
- (void) setEnableWidthControllers;
- (void) setDisableSpacingControllers;

@end