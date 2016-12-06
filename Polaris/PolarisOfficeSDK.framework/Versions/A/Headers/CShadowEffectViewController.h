//
//  CShadowEffectViewController.h
//  PolarisOffice
//
//  Created by 유선욱 on 2014. 12. 11..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import "CPropertyMenuControlContainerViewController.h"

@interface CShadowEffectViewController : CPropertyMenuControlContainerViewController

@property (strong, nonatomic) IBOutletCollection(UILabel) NSArray *shadowLabels;
@property (strong, nonatomic) IBOutletCollection(UISwitch) NSArray *shadowSwitchs;
@property (strong, nonatomic) IBOutletCollection(UILabel) NSArray *outShadowLabels;
@property (strong, nonatomic) IBOutletCollection(UILabel) NSArray *innerShadowLabels;
@property (strong, nonatomic) IBOutletCollection(UILabel) NSArray *perspectiveLabels;

@property (weak, nonatomic) IBOutlet UISegmentedControl *outTopShadowSegControl;
@property (weak, nonatomic) IBOutlet UISegmentedControl *outCenterShadowSegControl;
@property (weak, nonatomic) IBOutlet UISegmentedControl *outBottomShadowSegControl;

@property (weak, nonatomic) IBOutlet UISegmentedControl *innerTopShadowSegControl;
@property (weak, nonatomic) IBOutlet UISegmentedControl *innerCenterShadowSegControl;
@property (weak, nonatomic) IBOutlet UISegmentedControl *innerBottomShadowSegControl;

@property (strong, nonatomic) IBOutletCollection(UISegmentedControl) NSArray *perspectiveSegControls;

- (void)initSegControlsFromEngine;

@end
