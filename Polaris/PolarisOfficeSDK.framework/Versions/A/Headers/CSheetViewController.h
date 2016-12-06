//
//  CSheetViewController.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 9. 25..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import "CEditorViewController.h"
#import "CSheetFormulaBarViewController.h"
#import "CSheetTabBarViewController.h"

@interface CSheetViewController : CEditorViewController

@property (weak, nonatomic) IBOutlet UIButton *keyboardButton;
@property (weak, nonatomic) IBOutlet UIView *formulaBarContainerView;
@property (weak, nonatomic) IBOutlet UIView *tabBarContainerView;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *formulaBarContainerViewHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *tabBarContainerViewBottomSpaceConstraint;

@property (weak, nonatomic) CSheetFormulaBarViewController *sheetFormulaBarViewController;
@property (weak, nonatomic) CSheetTabBarViewController *sheetTabBarViewController;

- (void)setTabBarContainerViewHeightConstant:(CGFloat)height;

@end
