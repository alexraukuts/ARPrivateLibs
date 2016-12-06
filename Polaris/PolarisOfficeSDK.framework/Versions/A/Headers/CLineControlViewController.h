//
//  CLineControlViewController.h
//  PolarisOffice
//
//  Created by 유선욱 on 2014. 12. 15..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPropertyMenuControlContainerViewController.h"

@protocol CLineControlViewControllerDelegate <NSObject>

- (void)changelineColorPicker:(NSInteger)selectedColorPicker;

@end

@class CoreShapeFacade;
@interface CLineControlViewController : CPropertyMenuControlContainerViewController

@property (strong, nonatomic) void(^onRemoveExistLine)(void);
@property (weak, nonatomic) IBOutlet UISegmentedControl *lineTypeSegControl1;
@property (weak, nonatomic) IBOutlet UISegmentedControl *lineTypeSegControl2;

@property (nonatomic) NSInteger selectedIndex;
@property (strong, nonatomic) CoreShapeFacade *coreShapeFacade;

@property (nonatomic) id<CLineControlViewControllerDelegate> delegate;

- (void)setEnableLineController:(BOOL)isEnable;
- (void)setViewEnableCB:(void(^)(BOOL))enableCB;
- (void)setLineTypeCurrentSelectedIndex;
- (void)setSelectedLineSegmentIndexFromEngein;

@end
