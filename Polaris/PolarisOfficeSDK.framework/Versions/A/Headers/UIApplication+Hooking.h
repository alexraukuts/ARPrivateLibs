//
//  NSString+Format.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 9. 25..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UIApplication (Hooking)

+ (void)startHooking;
+ (void)endHooking;

+ (void)onKeyEvent:(UIKeyCommand*)cmd;

+ (void)registControlWithBKey:(void(^)(void))completion;
+ (void)registControlWithFKey:(void(^)(void))completion;

+ (void)registCommandWithAKey:(void(^)(void))completion;
+ (void)registCommandWithBKey:(void(^)(void))completion;
+ (void)registCommandWithCKey:(void(^)(void))completion;
+ (void)registCommandWithFKey:(void(^)(void))completion;
+ (void)registCommandWithIKey:(void(^)(void))completion;
+ (void)registCommandWithKKey:(void(^)(void))completion;
+ (void)registCommandWithPKey:(void(^)(void))completion;
+ (void)registCommandWithSKey:(void(^)(void))completion;
+ (void)registCommandWithTKey:(void(^)(void))completion;
+ (void)registCommandWithUKey:(void(^)(void))completion;
+ (void)registCommandWithVKey:(void(^)(void))completion;
+ (void)registCommandWithXKey:(void(^)(void))completion;
+ (void)registCommandWithZKey:(void(^)(void))completion;
+ (void)registCommandWithEnterKey:(void(^)(void))completion;
+ (void)registCommandWithRightKey:(void(^)(void))completion;
+ (void)registCommandWithLeftKey:(void(^)(void))completion;
+ (void)registCommandWithDownKey:(void(^)(void))completion;
+ (void)registCommandWithUpKey:(void(^)(void))completion;
+ (void)registCommandWithShiftWithRightKey:(void(^)(void))completion;
+ (void)registCommandWithShiftWithLeftKey:(void(^)(void))completion;
+ (void)registCommandWithShiftWithDownKey:(void(^)(void))completion;
+ (void)registCommandWithShiftWithUpKey:(void(^)(void))completion;
+ (void)registCommandWithShiftWithZKey:(void(^)(void))completion;
+ (void)registCommandWithShiftWithSKey:(void(^)(void))completion;

+ (void)registAltWithEnterKey:(void(^)(void))completion;
+ (void)registAltWithDeleteKey:(void(^)(void))completion;

+ (void)registEscKey:(void(^)(void))completion;
+ (void)registDeleteKey:(void(^)(void))completion;
+ (void)registDelKey:(void(^)(void))completion;
+ (void)registRightKey:(void(^)(void))completion;
+ (void)registLeftKey:(void(^)(void))completion;
+ (void)registDownKey:(void(^)(void))completion;
+ (void)registUpKey:(void(^)(void))completion;
+ (void)registTabKey:(void(^)(void))completion;
+ (void)registShiftWithTabKey:(void(^)(void))completion;
+ (void)registF2Key:(void(^)(void))completion;
+ (void)registF5Key:(void(^)(void))completion;
+ (void)registShiftWithF5Key:(void(^)(void))completion;

+ (void)releaseKeys;

@end
