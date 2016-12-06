//
//  CorePageLayoutFacade.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2015. 1. 28..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief Slide,PDF thumbnail page layout 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "E.h"
#import "EV.h"

typedef enum PageLayoutIndex {
    PageLayoutIndex_MarginType,
    PageLayoutIndex_MarginTop,
    PageLayoutIndex_MarginBottom,
    PageLayoutIndex_MarginLeft,
    PageLayoutIndex_MarginRight,
    PageLayoutIndex_Size,
    PageLayoutIndex_Orientation,
    PageLayoutIndex_ColumnNumber,
    PageLayoutIndex_PageApply,
    PageLayoutIndex_PageMask,
    PageLayoutIndex_BorderLine,
    PageLayoutIndex_EqualWidth,
    PageLayoutIndex_PageWidth,
    PageLayoutIndex_ColumnWidth,
    PageLayoutIndex_ColumnSpacing,
    
} PageLayoutIndex;

@interface CorePageLayoutFacade : NSObject

- (void) setPageBreakType:(int) breakType;
- (void) setPageLayoutInfo:(NSMutableArray *) pageLayoutInfo;
- (NSMutableArray *)getPageLayoutInfo;
- (int)getNumOfCurrentColumns;

- (SECTION_INFO)getSectionInfoAtPageIndex:(int)pageIndex;
- (int) getSectionDocumentInfo;

- (void)showNoMarginView;
- (void)setPrintMode;
- (void)setWebMode;

@end
