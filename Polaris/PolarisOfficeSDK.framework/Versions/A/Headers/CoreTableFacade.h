//
//  CoreTableFacade.h
//  PolarisOffice
//
//  Created by JIHYUN on 2015. 1. 13..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief 표 속성 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "E.h"

@interface CoreTableFacade : NSObject

- (void)setTableFillColorWithStandardColor:(long)color;
- (void)setTableFillColorWithThemeColor:(int)themeColor;
- (void)setTableBorderProperty:(int)borderMask borderColor:(int)color borderWidth:(float)width borderStyle:(NSInteger)style;
- (void)setTableBorderOn:(int)borderType;
- (void)setTableBorderOff:(int)borderType;
- (int)getTableFillColor;
- (BOOL)isTableFillColorUseThemeColor;
- (long)getTableBorderWidthFromLeft;
- (long)getTableBorderWidthFromTop;
- (long)getTableBorderWidthFromRight;
- (long)getTableBorderWidthFromBottom;
- (long)getTableBorderWidthFromVertical;
- (long)getTableBorderWidthFromHorizontal;
- (long)getTableBorderWidthFromDownDiagonal;
- (long)getTableBorderWidthFromUpDiagonal;

- (int)getTableBorderColorFromLeft;
- (int)getTableBorderColorFromTop;
- (int)getTableBorderColorFromRight;
- (int)getTableBorderColorFromBottom;
- (int)getTableBorderColorFromVertical;
- (int)getTableBorderColorFromHorizontal;
- (int)getTableBorderColorFromDownDiagonal;
- (int)getTableBorderColorFromUpDiagonal;

- (BOOL)isTableBorderColorUseThemeColor;

- (int)getTableBorderStyle;
- (long)getTableBorderColor;
- (float)getTableBorderWidth;
- (BOOL)isTableLeftBorderON;
- (BOOL)isTableTopBorderON;
- (BOOL)isTableRightBorderON;
- (BOOL)isTableBottomBorderON;
- (BOOL)isTableVerticalBorderON;
- (BOOL)isTableHorizontalBorderON;
- (BOOL)isTableDownDiagonalBorderON;
- (BOOL)isTableUpDiagonalBorderON;
- (BOOL)isTableAllBorderOn;
- (BOOL)isExistTableBorder;
- (BOOL)isTableOutsideBorderOn;
- (BOOL)isTableInsideBorderOn;
- (BOOL)isEnableSheetTable;

- (void)setTableStyleOptionHeaderRowON;
- (void)setTableStyleOptionHeaderRowOFF;
- (void)setTableStyleOptionFirstColumnON;
- (void)setTableStyleOptionFirstColumnOFF;
- (void)setTableStyleOptionTotalRowON;
- (void)setTableStyleOptionTotalRowOFF;
- (void)setTableStyleOptionLastColumnON;
- (void)setTableStyleOptionLastColumnOFF;
- (void)setTableStyleOptionBandedRowsON;
- (void)setTableStyleOptionBandedRowsOFF;
- (void)setTableStyleOptionBandedColumnsON;
- (void)setTableStyleOptionBandedColumnsOFF;

- (BOOL)isTableStyleOptionHeaderRowON;
- (BOOL)isTableStyleOptionFirstColumnON;
- (BOOL)isTableStyleOptionTotalRowON;
- (BOOL)isTableStyleOptionLastColumnON;
- (BOOL)isTableStyleOptionBandedRowsON;
- (BOOL)isTableStyleOptionBandedColumnsON;

- (void)setTableStyle:(NSInteger)style;
- (NSInteger)getTableStyleIndex;
- (void)clearTableStyle;
- (BOOL)isSheetTable;
- (BOOL)isEnableBorderHorizontal;
- (BOOL)isEnableBorderVertical;
// Align
- (void)setTableAlign:(NSInteger)nAlign;
- (void)setObjectArrangeAlign:(ObjectAlignType)align;
- (void)setObjectArrangePosition:(ObjectPosition)position;

- (UIImage*)getPreviewThumbnail:(int)thumbnailType index:(int)index;

@end