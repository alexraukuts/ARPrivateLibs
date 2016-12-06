//
//  UIColor+Extension.h
//  PolarisOffice
//
//  Created by d_infraware on 2014. 12. 18..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Extension)

+ (UIColor *)colorWithHexString:(NSString *)hexValue;
- (NSInteger)colorToHex;
- (NSInteger)colorToHexContainsAlpha;
- (UIColor *)inverseColor;

@end
