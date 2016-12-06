//
//  CRenderTextInputController.h
//  PolarisOffice
//
//  Created by 조기현 on 2015. 1. 15..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CRenderInputTextView.h"
#import "CoreCellFacade.h"
#import "CoreTextFacade.h"
#import "CoreShapeFacade.h"
#import "CoreViewEditModeFacade.h"
#import "CoreSheetTabFacade.h"
#import "CDefineCommon.h"

@interface CRenderInputTextController : NSObject <UITextViewDelegate>
{
    CGPoint contentVerticalAlignOffset;
}

@property (strong, nonatomic) CRenderInputTextView *docInputTextView;
@property (strong, nonatomic) CoreCellFacade *cellFormatFacade;
@property (strong, nonatomic) CoreTextFacade *textFacade;
@property (strong, nonatomic) CoreShapeFacade *shapeFacade;
@property (strong, nonatomic) CoreSheetTabFacade *sheetTabFacade;

@property (strong, nonatomic) CoreViewEditModeFacade *viewEditModeFacade;

- (instancetype)initWithRenderView:(UIView *)renderView;
- (void)showInputKeypad;
- (void)hideInputKeypad;
- (void)setKeyTypingCB:(BOOL(^)(NSRange, NSString*))typingCB;
- (void)setStartEditingCB:(void(^)(void))startCB;
- (void)setEndEditingCB:(void(^)(void))endCB;
- (void)setReturnKeyCB:(void(^)(void))returnKeyCB;
- (void)setTextDidChangeCB:(void(^)(void))didChangeCB;
- (NSString*)getText;
- (void)clearTextEditing;
- (void)initTextViewStyle;
- (void)removeContentSizeObserver;

@end
