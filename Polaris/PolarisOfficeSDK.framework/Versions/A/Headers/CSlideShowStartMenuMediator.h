//
//  CSlideShowStartMenumediator.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 3. 3..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import "CMenuMediator.h"

@interface CSlideShowStartMenuMediator : CMenuMediator

- (void)slideShow:(int)page;

@property (strong, nonatomic) void (^dismissViewBlock)();

@end
