//
//  CMoreMenuCellStateMediator.h
//  PolarisOffice
//
//  Created by d_infraware on 2014. 12. 10..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import "CMoreMenuMediator.h"

@interface CMoreMenuCellStateMediator : CMenuMediator

- (BOOL)isExistSelectorWithSelectorName:(NSString *)selectorName;
- (BOOL)isEnableWithTargetSelectorName:(NSString *)selectorName;
- (BOOL)isOnWithTargetSelectorName:(NSString *)selectorName;

@end
