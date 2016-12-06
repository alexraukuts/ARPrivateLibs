//
//  CoreAnnotationFacade.h
//  PolarisOffice
//
//  Created by 조기현 on 2015. 3. 11..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief PDF 주석 관련 Core 기능을 제공
 */

#import "CEngineHelper.h"

@interface CoreAnnotationFacade : NSObject

- (void)setAnnotationContents:(void*)annotItemId contents:(NSString*)text color:(int)color opacity:(float)opacity fillColor:(int)fillcolor;
- (void)requestPDFAnnotationCount;
- (PDF_ANNOT_ITEM)getAnnotationItemAtIndex:(NSInteger)index;
- (void)removeAnnotationAtItemIndex:(NSInteger)index;
- (void)removeAnnotation:(PDF_ANNOT_ITEM) item;
- (void)gotoAnnotatioWithItemIndex:(NSInteger)index;
- (void)showAnnotation;
- (void)hideAnnotation;
- (BOOL)isShowAnntation;
- (void)setAnnotationFillColor:(int)color;
- (void)removeAllPDFAnnotation;
- (NSArray*)getPDFWidgetListString:(void*)annotItem count:(int)count;
- (void)setPDFWidgetListIdx:(void*)annotItem index:(int)index;

@end
