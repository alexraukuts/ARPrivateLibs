//
//  CColorPickerCollectionViewCell.h
//  PolarisOffice
//
//  Created by 조기현 on 2014. 11. 29..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CColorPickerCollectionViewCell : UICollectionViewCell

- (void)initCellWithRed:(NSInteger)red green:(NSInteger)green blue:(NSInteger)blue;
- (void)initLastCell;
- (NSInteger)selectedColor;
- (UIColor *)color;

@end
