//
//  CSecondDepthMenuViewController.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 3. 16..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CSlidePageViewDefine.h"

@interface CSecondDepthMenuViewController : UIViewController

- (void)notifyBasePosition:(CGPoint)position;
- (void)notifyBoundary:(CGRect)boundary;

- (void)registerSlideMenuSelectedBlock:(onSlideMenuSelected)block;
- (void)unregisterSlideMenuSelectedBlock;

@end
