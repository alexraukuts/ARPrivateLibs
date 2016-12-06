//
//  CFilePerform.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 9. 16..
//  Copyright (c) 2014년 infraware. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CFilePerform : NSObject

+ (BOOL)isInitViewMode;
+ (BOOL)isProtectDocument;
+ (BOOL)isReadOnlyForWritePasswordDocument;

@end
