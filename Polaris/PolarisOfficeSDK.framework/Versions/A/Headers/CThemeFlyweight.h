//
//  CThemeFlyweight.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 10. 23..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CFileData.h"

@interface CThemeFlyweight : NSObject

@property (retain, nonatomic) NSDictionary * dict;

+ (instancetype)mainThemeFlyweight;
- (UIColor *)themeListHighlightColor;
- (UIColor *)themeColor;
- (UIColor *)getThemeColorWithFileExtensionType:(FileExtensionType)fileExtensionType;
- (NSString *)themeBackgroundViewImageName;
//+ (instancetype)mainDefaultThemeFlyweight;

@end
