//
//  CSheetCellEditingObserver.h
//  PolarisOffice
//
//  Created by d_infraware on 2015. 2. 11..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CEngineHelper.h"

@interface CSheetFormulaEditingMediator : NSObject

#define SHEET_FORMULA_TEXT_NOTIFICATION_NAME @"SHEET_FORMULA_TEXT_NOTIFICATION"
#define SHEET_FORMULA_RANGE_NOTIFICATION_NAME @"SHEET_FORMULA_RANGE_NOTIFICATION"
#define SHEET_FORMULA_EDITING_STATUS_NOTIFICATION_NAME @"SHEET_FORMULA_EDITING_STATUS_NOTIFICATION"

@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSRange selectedRange;
@property (nonatomic, setter=setIsFormulaBarHasCursor:) BOOL isFormulaBarHasCursor; // UI formulabar editing status
@property (nonatomic, setter=setIsCellHasCursor:) BOOL isCellHasCursor; // UI cell editing status
@property (nonatomic) BOOL isFormulaSelectionEnabled; // Engine formula editing status

+ (instancetype)sharedInstance;

- (void)sheetFocus;
- (void)startSheetInputMode;
- (void)confirmSheetInput:(SheetInputConfirmType)inputConfirmType;
- (void)setSheetAutoFormulaWithType:(SheetFormulaType)sheetFormulaType;

- (void)setText:(NSString *)text sender:(id)sender;
- (void)setSelectedRange:(NSRange)range sender:(id)sender;

- (void)endSheetEditing;
- (BOOL)isSheetEditing;
- (BOOL)isFormulaInputMode;
- (BOOL)isSelectedCellReferenceByEngine;
- (BOOL)isOtherSheetEditing;

- (void)addTextObserver:(id)observer selector:(SEL)aSelector;
- (void)addRangeObserver:(id)observer selector:(SEL)aSelector;
- (void)addEditingStatusObserver:(id)observer selector:(SEL)aSelector;
- (void)removeTextObserver:(id)observer;
- (void)removeRangeObserver:(id)observer;
- (void)removeEditingStatusObserver:(id)observer;
- (void)removeObservers:(id)observer;
- (void)removeAllObservers;

- (void)cancelSheetEditing;

- (void)initialization;

@end
