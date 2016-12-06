//
//  CEditTxtViewController.h
//  PolarisOffice
//
//  Created by infraseo on 2015. 2. 4..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CTxtChangeMediator.h"
#import "CTextView.h"

@interface CEditTxtViewController : UIViewController <UITextViewDelegate>

@property (weak, nonatomic) IBOutlet CTextView *textView;
@property (strong, nonatomic) NSString *compareText;
@property (strong, nonatomic) CTxtChangeMediator *txtChangeMediator;

- (void)setTxtOption:(int)fontSize setEncodingInfo:(int)encoding;
- (void)textPaste:(NSRange)range :(NSString*)pasteStr;
- (void)textRemove:(NSRange)range :(NSString*)removeStr;
- (BOOL)canEditing;
- (void)setDraggingCB:(void(^)(void))startCB endCB:(void(^)(void))endCB;
- (void)setPinchCB:(void(^)(void))startCB endCB:(void(^)(void))endCB;
- (BOOL)isModified;
- (void)saved;
- (void)completedClose;

@end
