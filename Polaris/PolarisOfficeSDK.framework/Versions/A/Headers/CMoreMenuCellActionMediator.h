//
//  CMoreMenuCellActionMediator.h
//  PolarisOffice
//
//  Created by d_infraware on 2014. 12. 10..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import "CMoreMenuMediator.h"

@interface CMoreMenuCellActionMediator : CMenuMediator

- (BOOL)isExistSelectorWithSelectorName:(NSString *)selectorName;
- (void)actionWithSelectorName:(NSString *)selectorName infoDictionary:(NSDictionary *)infoDictonary;
@end
