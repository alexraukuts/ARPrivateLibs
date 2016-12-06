//
//  CoreSheetTabFacade.h
//  PolarisOffice
//
//  Created by JIHYUN on 2015. 2. 22..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief Sheet tab 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CDefineCommon.h"

@interface CoreSheetTabFacade : NSObject

- (NSArray *)getSheetTabNameListExceptHideTab;
- (NSInteger)getCurrentSheetIndex;
- (NSInteger)getSheetTabCount;
- (BOOL)isSheetFreezePanes;
- (BOOL)isProtectedCurrentSheet;
- (BOOL)isProtectedCurrentCell;
- (BOOL)isProtectedSheetAtIndex:(NSInteger)index;
- (void)selectSheetTabAtIndex:(NSInteger)index;
- (void)insertSheetTabAtIndex:(NSInteger)index;
- (void)copySheetTabAtIndex:(NSInteger)index;
- (void)moveSheetTabAtIndex:(NSInteger)index moveTo:(NSInteger)moveIndex;
- (void)deleteSheetTabAtIndex:(NSInteger)index;
- (void)renameSheetTabAtIndex:(NSInteger)index sheetNameAfterRename:(NSString*)sheetName;
- (void)protectSheetTab;
- (void)unprotectSheetTab;
- (WORKBOOK_PROTECTION)getWorkbookProtection;

@end

#define MAX_LENGTH_SHEET_NAME 31