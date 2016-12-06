//
//  CParagraphTabViewController.h
//  PolarisOffice
//
//  Created by 조기현 on 2014. 12. 8..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import "CPropertyMenuControlContainerViewController.h"
#import "CSegmentedControl.h"

@class CTextField;
@interface CParagraphTabViewController : CPropertyMenuControlContainerViewController

@property (strong, nonatomic) IBOutletCollection(UISegmentedControl) NSArray *alignSegControls;
@property (strong, nonatomic) IBOutletCollection(CSegmentedControl) NSArray *alignVerticalSegControls;

// bullet
@property (weak, nonatomic) IBOutlet UISegmentedControl *wordShapeBulletSegControl;
@property (weak, nonatomic) IBOutlet UISegmentedControl *wordNumberBulletSegControl;
@property (weak, nonatomic) IBOutlet UISegmentedControl *wordTextBulletSegControl;
@property (weak, nonatomic) IBOutlet UISegmentedControl *wordDepthBulletSegControl;
@property (weak, nonatomic) IBOutlet UISegmentedControl *slideShapeBulletSegControl;
@property (weak, nonatomic) IBOutlet UISegmentedControl *slideTextBulletSegControl;

// indent
@property (strong, nonatomic) IBOutletCollection(UISegmentedControl) NSArray *indentSegControls;
@property (strong, nonatomic) IBOutletCollection(UISlider) NSArray *leftIndentSliders;
@property (strong, nonatomic) IBOutletCollection(UISlider) NSArray *rightIndentSliders;
@property (strong, nonatomic) IBOutletCollection(UISlider) NSArray *firstLineIndentSliders;
@property (strong, nonatomic) IBOutletCollection(UITextField) NSArray *leftIndentTextFields;
@property (strong, nonatomic) IBOutletCollection(UITextField) NSArray *rightIndentTextFields;
@property (strong, nonatomic) IBOutletCollection(UITextField) NSArray *firstLineIndentTextFields;

// distance
@property (strong, nonatomic) IBOutletCollection(UISegmentedControl) NSArray *staticDistanceSegControls;
@property (strong, nonatomic) IBOutletCollection(UISegmentedControl) NSArray *dynamicDistanceSegControls;
@property (strong, nonatomic) IBOutletCollection(UISlider) NSArray *valueDistanceSliders;
@property (strong, nonatomic) IBOutletCollection(UISlider) NSArray *frontDistanceSliders;
@property (strong, nonatomic) IBOutletCollection(UISlider) NSArray *backDistanceSliders;

@property (weak, nonatomic) IBOutlet UISegmentedControl *lineSpacingValueSegment;
@property (weak, nonatomic) IBOutlet UISegmentedControl *lineSpacingTypeSegment;
@property (weak, nonatomic) IBOutlet UISlider *lineSpacingValueSlideBar;
@property (weak, nonatomic) IBOutlet UITextField *lineSpacingValueTextField;

@property (strong, nonatomic) IBOutletCollection(UITextField) NSArray *valueDistanceTextFields;
@property (strong, nonatomic) IBOutletCollection(UITextField) NSArray *frontDistanceTextFields;
@property (strong, nonatomic) IBOutletCollection(UITextField) NSArray *backDistanceTextFields;

// textDirection
@property (strong, nonatomic) IBOutletCollection(UISegmentedControl) NSArray *textDirectionSegControls;
@property (strong, nonatomic) IBOutletCollection(UISegmentedControl) NSArray *subDirectionSegControls;

- (void)initAlignControlsFromEngine;
- (void)initBulletControlsFromEngine;
- (void)initIndentControlsFromEngine;
- (void)initDistanceControlsFromEngine;
- (void)initTextDirectionControlsFromEngine;

- (void)updateHorizontalAlign;
- (void)updateVerticalAlign;
- (void)updateLeftIndentSlideBar;
- (void)updateRightIndentSlideBar;
- (void)updateFirstLineIndentSlideBar;

- (void)updateLineSpacingBrforeAfterParagraphSpaing;
- (void)updateTextDirection;

- (void)textFieldBeginEditing:(CTextField *)textField;

@end
