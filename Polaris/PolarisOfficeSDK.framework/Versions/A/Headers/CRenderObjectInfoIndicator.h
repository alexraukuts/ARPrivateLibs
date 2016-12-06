//
//  CRenderObjectInfoIndicator.h
//  PolarisOffice
//
//  Created by 조기현 on 2015. 3. 20..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CRenderObjectInfoIndicator : UIViewController

@property (weak, nonatomic) UIView *parentView;

- (void)update;
- (void)hide;

@end
