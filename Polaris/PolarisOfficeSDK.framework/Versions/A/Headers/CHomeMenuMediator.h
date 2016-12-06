//
//  CHomeMenuMediator.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2014. 12. 3..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CSaveMediator;
@interface CHomeMenuMediator : CMenuMediator

@property (strong, nonatomic) CSaveMediator *saveMediator;

@end
