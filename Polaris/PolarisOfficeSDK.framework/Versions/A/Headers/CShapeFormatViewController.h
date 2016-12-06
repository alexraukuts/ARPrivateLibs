//
//  CShapeFormatViewController.h
//  PolarisOffice
//
//  Created by 유선욱 on 2014. 12. 11..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import "CPropertyMenuControlContainerViewController.h"
#import "CFillControlViewController.h"
#import "CLineControlViewController.h"
#import "CShapeEffectViewController.h"

@interface CShapeFormatViewController : CPropertyMenuControlContainerViewController<CFillControlViewControllerDelegate, CLineControlViewControllerDelegate, CShapeEffectViewControllerDelegate>

- (void)initControllers;
- (void) setEnableFunctions:(BOOL) isEnable;

@end
