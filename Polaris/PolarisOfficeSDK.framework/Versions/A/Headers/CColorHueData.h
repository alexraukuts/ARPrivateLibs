//
//  CColorHueData.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 11. 25..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CColorHueData : NSObject

@property float hue;
@property float saturation;
@property float brightness;

+ (CColorHueData *)colorHueDataWithRed:(float)red green:(float)green blue:(float)blue;
+ (CColorHueData *)colorHueDataWithHue:(float)hue staturation:(float)saturation brightness:(float)brightness;

@end
