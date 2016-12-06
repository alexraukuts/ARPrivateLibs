//
//  CLogPerform.h
//  PolarisOffice
//
//  Created by succorer on 2014. 12. 9..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDefineCommon.h"

@interface CLogPerform : NSObject

FOUNDATION_EXPORT void CLog(const char *function, NSString *format, ...);
FOUNDATION_EXPORT void CLogl(LogType type, const char *function, const int line, NSString *format, ...);

@end
