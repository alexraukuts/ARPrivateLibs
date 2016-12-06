//
//  CoreMovePageFacade.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2015. 2. 16..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief Slide 페이지 이동 관련 Core기능을 제공
 */

#import <Foundation/Foundation.h>

@interface CoreMovePageFacade : NSObject

- (void)movePageAtIndex:(int)nPageIndex;
- (void)moveCell:(NSString*)cell;
- (BOOL)isSlideDocument;
- (BOOL)isWordDocument;
- (BOOL)isSheetDocument;
- (BOOL)isPdfDocument;
- (int)getTotalPageNumber;
- (int)getCurrentPage;
- (int)getCurrentSlide;
- (int)getCurrentSheet;

@end
