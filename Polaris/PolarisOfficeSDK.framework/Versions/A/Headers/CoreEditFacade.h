//
//  CoreEditFacade.h
//  PolarisOffice
//
//  Created by JIHYUN on 2015. 1. 8..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief 문서 공통 Core 기능 제공
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "E.h"

@interface CoreEditFacade : NSObject

- (void)selectAll;
- (void)copyObject;
- (void)cutObject;
- (void)pasteObject:(int)dataType stringData:(NSString*)stringData;
- (void)copyFormat;
- (void)pasteFormat:(NSString*)stringData;
- (void)clearFormat;
- (void)redo;
- (void)undo;
- (BOOL)isEnableRedo;
- (BOOL)isEnableUndo;
- (void)resetUndoRedoData;

- (void)pasteValue:(NSString*)stringData;
- (void)pasteFormula:(NSString*)stringData;

@end