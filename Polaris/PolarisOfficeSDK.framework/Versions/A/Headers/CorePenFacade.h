//
//  CorePenFacade.h
//  PolarisOffice
//
//  Created by JIHYUN on 2015. 2. 6..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief 툴바>그리기 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CDefineCommon.h"

@interface CorePenFacade : NSObject

- (void) setPenDrawingWithMode:(int) a_eMode SetPenDraw:(bool) a_bPenDraw;
- (void) setPenDrawingWithColor:(NSInteger) a_nColor ThemeColorIndex:(int) nThemeColor Transparency:(int) a_nTransparency;
- (void) setPenDrawingWithSize:(float) a_nSize;
- (void) setPenDrawingWithTransparency:(int) a_nTransparency;
- (void) setPenDrawingClearAll;
- (void) setPenDrawingWithXPostions:(int[]) a_pX YPos:(int[]) a_pY Time:(int[]) a_pTime Pressure:(int[]) a_pPressure Count:(int) nCnt;
- (void) startPenDrawingTableMode;
- (void) endPenDrawingTableMode;
- (void) setPenDrawingTableClear;
- (void) showDrawPen:(BOOL) isShow;
- (BOOL) isPenDrawShow;
- (int) getPenDrawingType;
- (void)startPenSelectionMode;
- (void)endPenSelectionMode;
- (BOOL)isPenSelectionMode;
- (BOOL)isPenDrawFrameShow;

- (void)deletePenDataAfterSlideShow;
- (BOOL)isExistPenDataAfterSlideShowAtPage:(int)page;
- (BOOL)isExistPenDataAfterSlideShow;

- (void)setPenDrawingClearAllForPdf;
- (int)isExistPenDataAfterPdfPresentation:(int)page;
- (void)pdfApplySlideShowAnnot;
@end