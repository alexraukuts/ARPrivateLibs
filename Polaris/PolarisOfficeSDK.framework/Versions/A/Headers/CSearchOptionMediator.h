//
//  CSearchOptionMediator.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 10. 31..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CMenuMediator.h"

@class CSearchToolbarMediator;
@interface CSearchOptionMediator : CMenuMediator

@property (weak, nonatomic) CSearchToolbarMediator *searchToolbarMediator;

@end
