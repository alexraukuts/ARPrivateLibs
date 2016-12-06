//
//  CoreBookmarkFacade.h
//  PolarisOffice
//
//  Created by JIHYUN on 2015. 1. 28..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief 북마크 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class CBookmarkData;

@interface CoreBookmarkFacade : NSObject

- (void)addBookmark:(NSString*)addBookmarkString;
- (void)moveSelectedBookmarkPosition:(NSString*)selectedBookmarkString;
- (void)deleteBookmark:(NSString*)deleteBookmarkString;
- (void)goToPDFBookmark:(long)item;
- (NSMutableArray*)getBookmarkList;
- (int)getBookmarkCount;
//- (NSString*)getPdfRootBookmark;
- (NSArray*)getPDFRootBookmarksInfo;
- (NSArray*)getPDFChildBookmarksInfo:(long)parentID;
- (BOOL)isEnableBookmark;
- (BOOL)isEnableAddBookmark;

- (void)moveBookmark:(CBookmarkData*)moveItem Into:(long)targetItem;
- (void)moveBookmark:(long)item targetBookmark:(long)toItem;
- (void)moveBookmarkToSub:(long)item targetBookmark:(long)toItem;
- (void)moveBookmarkToPrev:(long)item targetBookmark:(long)toItem;
- (void)deletePDFBookmark:(long)item;
- (void)renamePDFBookmark:(CBookmarkData *)renameItem;
@end