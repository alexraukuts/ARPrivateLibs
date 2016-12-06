//
//  CBorderCollectionViewCell.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2015. 1. 7..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CBorderCollectionViewCell : UICollectionViewCell

- (void) setBorderImage:(NSInteger) index;
- (void) setSelectButton;
- (void) setDeselectButton;
- (BOOL) isEqualButton:(UIButton *)button;

@end
