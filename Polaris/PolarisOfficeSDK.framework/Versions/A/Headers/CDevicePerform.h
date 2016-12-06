//
//  CDevicePerform.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 9. 16..
//  Copyright (c) 2014년 infraware. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CDevicePerform : NSObject

+ (BOOL)isPortrait;
+ (BOOL)isPortrait:(UIInterfaceOrientation)toInterfaceOrientation;
+ (BOOL)isPad;
+ (BOOL)isSimulator;
+ (BOOL)is64bit;
+ (CGRect)convertToHalfRectWithScale:(CGFloat)scale rect:(CGRect)rect;
+ (CGPoint)convertToMultiPointWithScale:(CGFloat)scale point:(CGPoint)point;

@end
