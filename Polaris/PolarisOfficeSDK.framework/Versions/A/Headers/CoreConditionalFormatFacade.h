//
//  CoreConditionalFormatFacade.h
//  PolarisOffice
//
//  Created by dowith4 on 2015. 3. 20..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief Sheet 조건부 서식 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>

@class WRAPPER_SHEET_EDIT_C_F, NSArray_WRAPPER_SHEET_EDIT_C_F;
@interface CoreConditionalFormatFacade : NSObject

- (NSArray_WRAPPER_SHEET_EDIT_C_F*)getSheetEditConditionalFormatList;

- (void)replaceSheetEditCF:(NSArray_WRAPPER_SHEET_EDIT_C_F*)replaceList;

- (BOOL)hasConditionalFormat;

- (void)addConditionalFormatWithItem:(WRAPPER_SHEET_EDIT_C_F*)item;

- (void)clearConditionalFormatSelectedCell;
- (void)clearConditionalFormatWholeSheet;

- (void)modifyConditionalFormatRangeWithIndex:(int)index range:(NSString*)range;

- (void)startRangeInput;
- (void)stopRangeInput;
@end
