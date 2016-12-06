//
//  CSearchToolbarMediator.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 10. 31..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CMenuMediator.h"

@interface CSearchToolbarMediator : CMenuMediator

- (void)showSearchToolbar:(UIInterfaceOrientation)orientation;
- (void)hideSearchToolbar;
- (void)showSearchOption:(UIButton *)sender;
- (void)onFindeReplaceEvent:(int) a_searchType replaceAllCount:(int)a_replaceAllCount;
- (void)hideKeypad;

@end
