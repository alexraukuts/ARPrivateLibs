//
//  CPageTransitionDelegate.h
//  PolarisOffice
//
//  Created by 고 명부 on 2015. 1. 8..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CPageTransitionDelegate <NSObject>

- (void)onUpdateImage:(UIImage*)image;
- (void)presentPageTransitionGL;

@end
