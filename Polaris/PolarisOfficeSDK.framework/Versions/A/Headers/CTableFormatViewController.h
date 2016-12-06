//
//  CTableFormatViewController.h
//  PolarisOffice
//
//  Created by 조기현 on 2014. 12. 9..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPropertyMenuControlContainerViewController.h"
#import "CColorPickerMainViewController.h"
#import "CColorPickerViewController.h"
#import "CoreTableFacade.h"

#define WORD_TABLE_LINE_STYLE_SEGMENT_COUNT 5

@class CColorPickerMainViewController;
@class AKPickerView;
@interface CTableFormatViewController : CPropertyMenuControlContainerViewController

@property (strong, nonatomic) IBOutletCollection(UILabel) NSArray *fillLabels;
@property (strong, nonatomic) IBOutletCollection(UIView) NSArray *fillColorContainerViews;

@property (strong, nonatomic) IBOutletCollection(UILabel) NSArray *widthLabels;

@property (strong, nonatomic) IBOutletCollection(UIView) NSArray *borderColorContainerViews;

@property (strong, nonatomic) IBOutletCollection(UILabel) NSArray *borderLabels;
@property (strong, nonatomic) IBOutletCollection(UISegmentedControl) NSArray *borderFirstSegControls;
@property (strong, nonatomic) IBOutletCollection(UISegmentedControl) NSArray *borderSecondSegControls;
@property (strong, nonatomic) IBOutletCollection(UILabel) NSArray *outLineLabels;
@property (strong, nonatomic) IBOutletCollection(UILabel) NSArray *alignLabels;
@property (strong, nonatomic) IBOutletCollection(UILabel) NSArray *fitLabels;
@property (strong, nonatomic) IBOutletCollection(UILabel) NSArray *orderLabels;

@property (strong, nonatomic) CoreTableFacade *coreTableFacade;
@property (weak, nonatomic) CColorPickerMainViewController *tableBorderColorPickerMainViewController;
@property (weak, nonatomic) CColorPickerViewController *tableBorderColorPickerViewController;

@property (nonatomic) NSInteger selectedLineColorRGBA;
@property (nonatomic) NSInteger selectedLineStyleIndex;

@property (strong, nonatomic) IBOutletCollection(UISegmentedControl) NSArray *lineStyleSegControls;
@property (strong, nonatomic) IBOutletCollection(UISegmentedControl) NSArray *alignSegControl;

@property (weak, nonatomic) IBOutlet AKPickerView *borderPickerView;
@property (strong, nonatomic) NSArray *borderDatas;
@property (nonatomic) float   borderWidth;

- (void)initWidthControlsFromEngine;
- (void)initTableBorderStyleFromEngine;

@end
