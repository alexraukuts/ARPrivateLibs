//
//  CFillColorViewController.h
//  PolarisOffice
//
//  Created by 유선욱 on 2014. 12. 15..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPropertyMenuControlContainerViewController.h"

@protocol CFillColorViewControllerDelegate <NSObject>

- (void)changeFillColorPicker:(NSInteger)selectedColorPicker;

@end

@interface CFillColorViewController : CPropertyMenuControlContainerViewController

@property (nonatomic) id<CFillColorViewControllerDelegate> delegate;

- (void)setViewEnableCB:(void(^)(BOOL))enableCB;

@end
