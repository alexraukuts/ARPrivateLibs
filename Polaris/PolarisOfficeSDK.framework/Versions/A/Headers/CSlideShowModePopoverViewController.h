//
//  CSlideShowModePopoverViewController.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 2. 17..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CDefineCommon.h"

@interface CSlideShowModePopoverViewController : UIViewController

@property (nonatomic, assign) SlideShowMode slideShowMode;

- (void)setDissmissValueChangeBlock:(void(^)(int mode))block;
- (void)setDissmissSlideShowFinishBlock:(void(^)())block;
@end
