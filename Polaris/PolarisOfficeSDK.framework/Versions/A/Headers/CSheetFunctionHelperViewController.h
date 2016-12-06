//
//  CSheetFunctionHelperViewController.h
//  PolarisOffice
//
//  Created by d_infraware on 2015. 3. 25..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CSheetFunctionHelperMediator;
@interface CSheetFunctionHelperViewController : UIViewController

@property (nonatomic, weak) CSheetFunctionHelperMediator *sheetFunctionHelperMediator;
@property (nonatomic, weak) UIView *anchorView;
@property (nonatomic, readonly) BOOL isShowFunctionGuide;
@property (nonatomic, readonly) BOOL isShowFunctionAutocomplete;

- (void)runFunctionGuideWithFunctionName:(NSString *)functionName;
- (void)runFunctionAutocompleteWithSearchText:(NSString *)searchText;
- (void)dismissFunctionGuide;
- (void)dismissFunctionAutocomplete;
- (void)didSelectAtAutocompleteFunction:(NSString *)functionName;

@end
