//
//  CSheetFormulaBarViewController.h
//  PolarisOffice
//
//  Created by d_infraware on 2015. 2. 2..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CSheetInsertFunctionMenuMediator;
@class CSheetFunctionHelperMediator;
@interface CSheetFormulaBarViewController : UIViewController

@property (strong, nonatomic) CSheetInsertFunctionMenuMediator *sheetInsertFunctionMenuMediator;
@property (strong, nonatomic) CSheetFunctionHelperMediator *sheetFunctionHelperMediator;

- (void)updateFormulaBarEnable;
- (void)becomeFirstResponderFormulaBar;
- (void)setTextFormulaBar:(NSString *)text selectRange:(NSRange)range;
- (void)insertText:(NSString *)text;
- (NSString *)getFormularText;

@end
