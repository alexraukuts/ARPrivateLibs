//
//  ShapeCalcUtil.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 2. 25..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ShapeCalcUtil : NSObject

+(double)lengthTwoWithPoint1:(CGPoint)point1 andPoint2:(CGPoint)point2;
+(double)shortLengthWithPoint:(CGPoint)point andPoint1:(CGPoint)point1 andPoint2:(CGPoint)point2;
+(double)radianForVerticalWithBase:(CGPoint)base andPoint:(CGPoint)point;
+(CGPoint)rotatePointWithPoint:(CGPoint)point andCenter:(CGPoint)center andRadian:(double)radian;
+(CGPoint)rotatePointWithPoint:(CGPoint)point andBase1:(CGPoint)base1 andBase2:(CGPoint)base2;
+(BOOL)isLineCross:(CGPoint)from1 :(CGPoint)to1 :(CGPoint)from2 :(CGPoint)to2;
+(double)shortLengthCircle:(CGPoint)point :(CGPoint)center :(int)w :(int)h;
@end
