//
//  CFillGradationViewController.h
//  PolarisOffice
//
//  Created by 유선욱 on 2014. 12. 15..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPropertyMenuControlContainerViewController.h"

@protocol CFillGradationViewControllerDelegate <NSObject>

- (void)changeGradationColorPicker:(NSInteger)selectedColorPicker;

@end

@interface CFillGradationViewController : CPropertyMenuControlContainerViewController

@property (nonatomic) id<CFillGradationViewControllerDelegate> delegate;

- (void)setViewEnableCB:(void(^)(BOOL))enableCB;

@end
