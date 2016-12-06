//
//  CSlideAddLayoutMenuMediator.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 3. 19..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import "CMenuMediator.h"

@interface CSlideAddLayoutMenuMediator : CMenuMediator

@property (strong, nonatomic) void (^dismissViewBlock)(BOOL isCancel);
@property (nonatomic, assign) BOOL isAddLayout;

@end
