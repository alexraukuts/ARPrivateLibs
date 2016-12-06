//
//  CPopoverData.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 10. 27..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CPopoverData : NSObject

@property (assign) UIViewController * menuViewController;
@property (assign) UIView * parentView;
@property (assign) UIView * item;
@property CGSize size;
@property CGSize limitSize;

- (instancetype)initWithMenuViewController:(UIViewController *)menuViewController parentView:(UIView *)parentView item:(UIView *)item size:(CGSize)size;
- (CGRect)arrowFrame;
- (CGRect)popoverFrame;

@end
