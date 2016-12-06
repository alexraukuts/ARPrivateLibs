//
//  CVideoFormatViewController.h
//  PolarisOffice
//
//  Created by 조기현 on 2014. 12. 12..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import "CPropertyMenuControlContainerViewController.h"
#import "CLineControlViewController.h"
#import "CShapeEffectViewController.h"

@interface CVideoFormatViewController : CPropertyMenuControlContainerViewController<CLineControlViewControllerDelegate, CShapeEffectViewControllerDelegate>

- (void) setEnableTransparentFunction:(BOOL) isEnable;

@end
