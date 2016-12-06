//
//  CImageFormatViewController.h
//  PolarisOffice
//
//  Created by 조기현 on 2014. 12. 9..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPropertyMenuControlContainerViewController.h"
#import "CLineControlViewController.h"
#import "CShapeEffectViewController.h"

@interface CImageFormatViewController : CPropertyMenuControlContainerViewController<CLineControlViewControllerDelegate, CShapeEffectViewControllerDelegate>

- (void) setEnableTransparentFunction:(BOOL) isEnable;
- (void) setEnableFunctions:(BOOL) isEnable;

@end
