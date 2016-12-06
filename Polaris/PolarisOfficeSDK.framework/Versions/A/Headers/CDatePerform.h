//
//  CDatePerform.h
//  PFileManager
//
//  Created by succorer on 2014. 12. 17..
//  Copyright (c) 2014년 succorer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CDatePerform : NSObject

+ (NSString *)dateToString:(NSDate *)date;
+ (NSString *)dateToString:(NSDate *)date withLanguage:(NSString*)lang;
@end
