//
//  CoreHyperlinkFacade.h
//  PolarisOffice
//
//  Created by JIHYUN on 2015. 1. 28..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief 하이퍼링크 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CEngineHelperEnum.h"

@interface CoreHyperlinkFacade : NSObject
-(NSString *)getHyperlinkUrl;
-(NSString *)getHyperlinkUrlAtPoint:(CGPoint)touchPoint;
-(NSString *)getHyperlinkUrlForSheet;
- (void)addHyperlinkUrl:(NSString *)showingTxt URL:(NSString *)url;
- (void)addHyperlinkUrlForSheet:(NSString *)showingTxt URL:(NSString *)url;
- (void)addHyperlinkBookMark:(NSString *)showingText BookMarkInfo:(NSString *)bookMarkInfo;
- (void)addHyperlinkBookMarkForSheet:(NSString *)showingText BookMarkInfo:(NSString *)bookMarkInfo nSheet:(NSUInteger)nSheet;
- (void)addHyperlinkBookMarkForSlide:(NSString *)showingText LinkType:(WordSlideLinkType)linkType PageNum:(int)pageNum;
- (void)removeHyperlink;
- (void)removeHyperlinkForSheet;
- (BOOL)isEnableHyperLink;
- (BOOL)isEnableHyperLinkText;
- (void)runHyperLinkInCellForSheet;
- (NSString *)getMarkString;
- (int)getTotalPageCount;
- (NSArray *)getSheetTabNameListExceptHideTab;
- (BOOL)isExistHyperlinkInfo;
- (BOOL)isExistHyperlinkInfoAtPoint:(CGPoint)touchPoint;
- (int)getHyperLinkType;
- (int)getHyperLinkTypeAtPoint:(CGPoint)touchPoint;
- (int)getHyperLinkTypeForSheet;
-(NSString *)getHyperlinkText;
-(NSString *)getHyperlinkTextForSheet;
-(NSString *)getHyperlinkCellRangeForSheet;
-(int)getHyperlinkPageNumber;
-(int)getHyperlinkPageNumberAtPoint:(CGPoint)touchPoint;
-(int)getHyperlinkSheetIndexForSheet;
- (BOOL)isHyperlinkWebUrl;

- (NSMutableArray *)getBookmarkList;
- (int)getBookmarkCount;
@end