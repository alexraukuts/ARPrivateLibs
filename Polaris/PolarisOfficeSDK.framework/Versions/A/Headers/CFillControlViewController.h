//
//  CFillControlViewController.h
//  PolarisOffice
//
//  Created by 유선욱 on 2014. 12. 15..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPropertyMenuControlContainerViewController.h"
#import "CFillColorViewController.h"
#import "CFillGradationViewController.h"

@protocol CFillControlViewControllerDelegate <NSObject>

- (void)changeShapeFillViewHeight:(NSInteger)selectedValue;
- (void)changeColorPicker:(NSInteger)selectedColorPicker;

@end

@interface CFillControlViewController : CPropertyMenuControlContainerViewController
<CFillColorViewControllerDelegate, CFillGradationViewControllerDelegate>

@property (nonatomic) id<CFillControlViewControllerDelegate> delegate;

- (void) setEnableGradationTexture:(BOOL) isEnable;
- (void)setViewEnableCB:(void(^)(BOOL))enableCB;

@end
