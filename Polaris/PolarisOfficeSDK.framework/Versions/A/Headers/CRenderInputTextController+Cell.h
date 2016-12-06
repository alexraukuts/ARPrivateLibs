//
//  CSheetInputTextController.h
//  PolarisOffice
//
//  Created by 조기현 on 2015. 1. 24..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CRenderInputTextController.h"


@interface CRenderInputTextController (Cell)

- (BOOL)showCellTextViewWithString:(NSString*)text;
- (void)hideCellTextView;
- (BOOL)isTextViewHidden;
- (void)setInputText:(NSString*)text;
- (void)insertText:(NSString*)text;
- (void)refreshPositionTextView;
- (void)setTextRange:(NSRange)range;
- (NSRange)getTextRange;

@end
