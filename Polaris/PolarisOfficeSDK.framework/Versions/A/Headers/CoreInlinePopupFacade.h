//
//  CoreInlinePopupFacade.h
//  PolarisOffice
//
//  Created by hys on 2015. 2. 5..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//
/**
 * @brief Inline Popup 내 Core 기능을 제공
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "E.h"
#import "CEngineHelper.h"

@interface CoreInlinePopupFacade : NSObject

- (void)selectAll;
- (void)copyObject;
- (void)cutObject;
- (void)pasteObject:(int)dataType stringData:(NSString*)stringData;
- (void)pasteValue:(NSString*)stringData;
- (void)pasteFormula:(NSString*)stringData;
- (void)copyFormat;
- (void)pasteFormat:(NSString*)stringData;
- (void)clearFormat;
- (void)startCroppingMode;
- (void)insertTableCell:(int)insertTableCellType;
- (void)deleteTableAll;
- (void)deleteTableRow;
- (void)deleteTableColumn;
- (void)selectTableRow;
- (void)selectTableColumn;
- (void)selectTableAllCell;
- (void)equalTableColumn;
- (void)equalTableRow;
- (void)mergeTableCell;
- (void)tableCellSplit:(int)row column:(int)column;
- (void)startMultiSelectMode;
- (void)endMultiSelectMode;
- (void)setObjectGroup;
- (void)setObjectUngroup;
- (BOOL)isGroupEnable;
- (void)deleteObject;
- (void)duplicate;
- (void)viewSheetCellSelectionArea;
- (void)autoFitSheetRow;
- (void)autoFitSheetColumn;
- (void)mergeSplitSheetCells;
- (void)insertSheetColumns;
- (void)insertSheetRows;
- (void)deleteSheetColumns;
- (void)deleteSheetRow;
- (void)insertSheetCell:(NSInteger)mode;
- (void)deleteSheetCell:(NSInteger)mode;
- (void)unhideSheetColumn;
- (void)hideSheetColumn;
- (void)unhideSheetRow;
- (void)hideSheetRow;
- (void)sheetClear:(int)sheetClearType;
- (void)setTableSelection:(int)selectionType;
- (void)insertSheetTableRowColumn:(int)insertType;
- (void)deleteSheetTableRow;
- (void)deleteSheetTableColumn;
- (void)setSheetCellRowSize:(int)rowSize;
- (void)setSheetCellColumnSize:(int)columnSize;
- (void)setSheetCellColumnDefaultSize:(int)columnDefaultSize;

- (void)setTableResize:(int)width height:(int)height;
- (void)setShapeResize:(int)width height:(int)height isNoChangeAspect:(bool)isNoChangeAspect;
- (void)setObjectRotation:(int)rotation preset:(int)preset;
- (void)replaceImage:(UIImage*)image;
- (void)setSheetTableSelection:(NSInteger)selectionType;

//memo
- (void)showMemo;
- (void)hideMemo;
- (void)insertMemo:(NSString*)memoData;
- (void)editMemo:(NSString*)memoData;
- (void)deleteMemo;
- (void)deleteAllMemo;
- (void)deleteCurrentSlideMemo;
- (void)goToActiveMemo;
- (void)goToNextMemo;
- (void)goToPrevMemo;
- (void)goToFirstMemo;
- (void)goToLastMemo;
- (int)getActiveMemoId;
- (void)setActiveMemoId:(int)activeMemoId;
- (NSString*)getActiveMemoAuthor;
- (NSString*)getActiveMemoDate;
- (NSString*)getActiveMemoContents;
- (int)getActiveMemoPageNumber;
- (int)getMemoId;
- (BOOL)isMemoEditable;
- (int)getPrevMemoId;
- (int)getPrevMemoPageNumber;
- (int)getNextMemoId;
- (int)getNextMemoPageNumber;
- (int)getFirstMemoId;
- (int)getFirstMemoPageNumber;
- (int)getLastMemoId;
- (int)getLastMemoPageNumber;
- (BOOL)isExistMemoForSheet;

//pdf
- (void)addStickyNote:(int)xPosition yPosition:(int)yPosition;
- (void)addBookmark:(NSString *)title;

- (BOOL)isObjectRotation;
- (bool)isRotationKeepRatio;
- (bool)isSheetSingleCell;
- (bool)isSheetTableActiveCell;
- (bool)isSheetMergeCell;
- (bool)isSheetCanMergeCell; // 여러 셀 판단
- (bool)isSheetHiddenColumns;
- (bool)isSheetHiddenRows;
- (BOOL)isExistSheetTableInSelectedRange;
- (bool)isGroup;
- (BOOL)isHyperlink;
- (BOOL)isSheetDocument;
- (bool)isViewMode;
- (BOOL)isSheetEmptyCell;
- (ObjectMultiType)getObjectMultiType;

- (int)getWordPptTableCellStatusInfo;
- (int)getObjectWidthSize;
- (int)getObjectHeightSize;
- (int)getObjectRotationAngle;
- (int)getWordSlideOpInfo;
- (int)getWordSlideOpInfoEx;
- (NSString *)getMarkString;
- (NSString *)getSelectedImagePath;
- (NSString *)getHyperlinkUrl;
- (NSString *)getHyperlinkUrlForSheet;
- (int) getHyperlinkPageNumber;

- (float)getSheetCellRowHeight;
- (float)getSheetCellColumnWidth;
- (float)getSheetCellColumnDefaultWidth;

- (int)getObjectArrangeTextwrap;
- (int)getCaretMode;

- (int)getHyperLinkTypeForSheet;
- (int)getHyperLinkType;
- (void)moveSelectedBookmarkPosition:(NSString*)selectedBookmarkString;
- (void)runHyperLinkInCellForSheet;

- (void)resizeSheetTable;
- (void)startTableRangeInput:(bool)isIncludeSheet;
- (void)stopTableRangeInput;

//trackChanges
- (bool)isTrackChangesData;

- (void)duplicateSheetTab;
- (void)deleteSheetTab;
- (BOOL)isProtectedSheetTab;
- (void)protectSheetTab;
- (void)unprotectSheetTab;
- (NSInteger)getSheetTabCount;

- (BOOL)hasObjectAnimation;

//sheet insert cell
- (BOOL)isSheetTableHeaderOn;
- (BOOL)isSheetTableTotalOn;
- (BOOL)isSheetSelectedTableHeader;
- (BOOL)isSheetSelectedTableFooter;
- (BOOL)isSheetSelectedAboveOfTableFooter;
- (BOOL)isSheetSelectedRightOfTable;
- (BOOL)isSheetSelectedLeftAndAboveOfTable;

- (NSString *)getChartDataRange;
- (void)doAdjustChartDataRangeModeOn:(BOOL)isOn;
- (void)doneAdjustChartDataRange;

// slide page move
- (void)moveFirstSlide;
- (void)moveLastSlide;
- (void)moveNextSlide;
- (void)movePreviousSlide;
- (void)movePageAtIndex:(NSUInteger)page;
@end
