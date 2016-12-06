//
//  UISegmentedControl+Multiline.h
//  PolarisOffice
//
//  Created by d_infraware on 2015. 4. 3..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UISegmentedControl (Multiline)

- (void)setMultilineTitle:(NSString *)title forSegmentAtIndex:(NSUInteger)segment;
- (void)insertSegmentWithMultilineTitle:(NSString *)title atIndex:(NSUInteger)segment animated:(BOOL)animated;
- (void)insertSegmentWithMultilineAttributedTitle:(NSAttributedString *)attributedTitle atIndex:(NSUInteger)segment animated:(BOOL)animated;

@end
