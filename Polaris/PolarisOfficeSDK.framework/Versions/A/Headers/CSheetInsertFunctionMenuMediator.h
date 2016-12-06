//
//  CSheetInsertFunctionMenuMediator.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2015. 3. 14..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import "CMenuMediator.h"

@interface CSheetInsertFunctionMenuMediator : CMenuMediator

@property (nonatomic, readonly) BOOL isShow;

- (void)showPopoverMenu;
- (void)showActionSheetMenu:(CGFloat)formulaBarHeight;

@end
