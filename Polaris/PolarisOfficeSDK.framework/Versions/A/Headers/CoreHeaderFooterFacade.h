//
//  CoreHeaderFooterFacade.h
//  PolarisOffice
//
//  Created by JIHYUN on 2015. 1. 28..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief 머리글/바닥글 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "E.h"
#import "EV.h"

@interface CoreHeaderFooterFacade : NSObject

- (void)addHeader:(int)templateType;
- (void)addFooter:(int)templateType;
- (void)addEmptyHeader;
- (void)addEmptyThreeColumnHeader;
- (void)addEmptyFooter;
- (void)addEmptyThreeColumnFooter;

- (void)addHeaderPageNumber:(int)templateType;
- (void)addFooterPageNumber:(int)templateType;
- (HEADER_FOOTER_OPTION)getHeaderFooterOption;

- (BOOL)isEnableLinkedPrevious;
- (BOOL)isHeaderFooterEditMode;
- (BOOL)isHeaderEditMode;

- (void)exitHeaderFooterEditMode;

- (void)setDiffFirstPage:(BOOL)isOn;
- (void)setDiffOddEvenPage:(BOOL)isOn;
- (void)setLinkedToPreviousHeader:(BOOL)isOn;
- (void)setLinkedToPreviousFooter:(BOOL)isOn;

- (int)getTopUndoDataInfo;
- (int)getTopRedoDataInfo;

@end