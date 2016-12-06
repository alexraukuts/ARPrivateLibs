//
//  CKeypadManager.h
//  PolarisOffice
//
//  Created by 강현석 on 2015. 3. 19..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CTextView.h"

@interface CKeypadManager : NSObject

@property (nonatomic, weak) CTextView *formulaTextView;
@property (nonatomic, weak)	CTextView *cellTextView;
@property (nonatomic, weak, setter=setKeyboardButton:) UIButton *keyboardButton;

+ (instancetype)sharedKeypadManager;

- (void)registerTargetFormulaTextView;
- (void)registerTargetCellTextView;
- (void)unregisterTargetTextView;

- (void)initialization;

- (IBAction)toggleKeyboardButton:(id)sender;

@end
