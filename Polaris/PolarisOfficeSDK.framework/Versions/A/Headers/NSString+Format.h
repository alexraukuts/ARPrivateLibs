//
//  NSString+Format.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 9. 25..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Format)

+ (instancetype)stringWithInt:(int)value;
+ (instancetype)stringWithInteger:(NSInteger)value;
+ (instancetype)stringWithFloat:(float)value;
- (BOOL)isNumber;
- (BOOL)isSupportMovieExtension;
- (NSString*)remEmoji;
- (BOOL)hasEmojiByEngine;
@end
