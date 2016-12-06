//
//  CLineFormatViewController.h
//  PolarisOffice
//
//  Created by 유선욱 on 2014. 12. 8..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import "CPropertyMenuControlContainerViewController.h"
#import "CoreShapeFacade.h"
#import "CLineControlViewController.h"
#import "CShapeEffectViewController.h"

@interface CLineFormatViewController : CPropertyMenuControlContainerViewController<CLineControlViewControllerDelegate, CShapeEffectViewControllerDelegate>

@property (strong, nonatomic) CoreShapeFacade *coreShapeFacade;
@property (strong, nonatomic) IBOutletCollection(UISegmentedControl) NSArray *alignSegmentedControls;

- (void)initArrangeLabels;
- (void)initControllersFromEngine;
- (void)setEnableArrowFunction:(BOOL)isEnable;

@end
