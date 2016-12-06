//
//  CoreCellFacade.h
//  PolarisOffice
//
//  Created by JIHYUN on 2015. 1. 13..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief Sheet Cell 속성 및 동작 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "E.h"
#import "CEngineWrapperClass.h"

@interface CoreCellFacade : NSObject

- (void) setCellGeneralFormat;
- (void)setCellNumberFormatDecimalPlaces:(int)decimalPlaces isSeperate:(bool)seperate negative:(int)negative;
- (void)setCellCurrencyFormatDecimalPlaces:(int)decimalPlaces currency:(int)currency negative:(int)negative;
- (void)setCellAccountFormatDecimalPlaces:(int)decimalPlaces accounting:(int)accounting;
- (void)setCellDateFormatIndex:(NSInteger)index countryIndex:(NSInteger)countryIndex;
- (void)setCellTimeFormatIndex:(NSInteger)index countryIndex:(NSInteger)countryIndex;
- (void)setCellPercentFormatDecimalPlaces:(int)decimalPlaces;
- (void)setCellFractionFormatIndex:(NSInteger)index;
- (void)setCellScientificFormatDecimalPlaces:(int)decimalPlaces;
- (void)setCellTextFormat;

- (SheetFormat)getCellFormat;
- (LocaleType) getCurrentLocaleType;

- (int)getCellNumberFormatDecimalPlaces;
- (BOOL)isCellNumberFormatUse1000Separated;
- (int)getCellNumberFormatNegativeIndex;
- (int)getCellCurrencyFormatDecimalPlaces;
- (int)getCellCurrencyFormatSymbolIndex;
- (int)getCellCurrencyFormatNegativeIndex;
- (int)getCellAccountingFormatDecimalPlaces;
- (int)getCellAccountingFormatSymbolIndex;
- (int)getCellDateFormatIndex;
- (int)getCellTimeFormatIndex;
- (int)getCellPercentFormatDecimalPlaces;
- (int)getCellFractionFormatIndex;
- (int)getCellScientificFormatDecimalPlaces;
- (int)getCellTimeFormatLanguageIndex;
- (int)getCellDateFormatLanguageIndex;
- (int)getCellDateFormatCodeCount:(int)a_nLocale;
- (NSArray*)getCellDateFormatCodeList:(int)a_nLocale;
- (int)getCellTimeFormatCodeCount:(int)a_nLocale;
- (NSArray*)getCellTimeFormatCodeList:(int)a_nLocale;


// Cell Property
- (void)setCellColorForSheet:(NSInteger)color;
- (int)getCellColorForSheet;
- (void)setCellBorderOffForSheet:(int)borderMask;
- (void)setCellBorderForSheet:(int)borderMask borderColor:(int)color borderStyle:(int)style;
- (int) getCellBorderColorForSheet;
- (int) getCellBorderStyleForSheet;
- (int) getCellBorderLeftColorForSheet;
- (int) getCellBorderLeftStyleForSheet;
- (BOOL)isCellAllBorderOnForSheet;
- (BOOL)isCellOutSideBorderOnForSheet;
- (BOOL)isCellInsideBorderOnForSheet;
- (BOOL)isCellLeftBorderONForSheet;
- (BOOL)isCellTopBorderONForSheet;
- (BOOL)isCellRightBorderONForSheet;
- (BOOL)isCellBottomBorderONForSheet;
- (BOOL)isCellVerticalBorderONForSheet;
- (BOOL)isCellHorizontalBorderONForSheet;
- (BOOL)isCellDownDiagonalBorderONForSheet;
- (BOOL)isCellUpDiagonalBorderONForSheet;
- (BOOL)isExistCellBorder;
- (void)setCellStyleForSheet:(NSInteger)uiCellStyle;
- (int)getCellStyleForSheet;
- (BOOL)isEnableBorderHorizontal;
- (BOOL)isEnableBorderVertical;
- (BOOL)isSheetCellFormulaError;
- (CGRect)getSheetCellFormulaErrorRange;

// Sort
- (WRAPPER_PORANGE*)getSortCellRange;
- (WRAPPER_SORTING_INFO*)getSortingInfo;
- (void)setSort:(BOOL)isColumnSort primaryKey:(int)primaryKey secondaryKey:(int)secondaryKey finalKey:(int)finalKey;

// Filter
- (void)setSheetFilter;
- (BOOL)isSheetFilterRunning;
- (void)setAutoFilterButtonConpigurationWithNormal:(NSString *)normal pressed:(NSString *)pressed;
- (BOOL)isExistFilterState;
- (void)setAutoFilterCommand:(int) handleId IndexOfIndexCell:(int) indexOfIndexCell FixedItem:(int) fixedItem CommandStrings:(NSArray*) commandStrings;
- (void)setSheetDataValidationDropDownInput:(NSString *) a_strInputData;
- (CGRect)getSelectedCellRect;

// Data Validation
- (void)setSheetDataValidationAnswerError:(DataValidationErrorStyleEventType)a_nErrorStlyeEventType;
- (UIImage*)getPreviewThumbnail:(int)thumbnailType index:(int)index;
@end