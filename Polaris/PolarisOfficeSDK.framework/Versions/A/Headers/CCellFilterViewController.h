//
//  CCellFilterViewController.h
//  PolarisOffice
//
//  Created by ParkBeomsam on 2015. 3. 19..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CDefineCommon.h"

@class CMenuMediator;

@interface CCellFilterViewController : UIViewController

@property (assign) CMenuMediator *mediator;
@property BOOL isPivotFilter;

- (void)dismissView;
//- (void)autoFilterMenuInfo:(AUTOFILTER_MENU_INFO *)menuInfo;
- (void)autoPivotFilterMenuInfo:(NSInteger)itemCount handleId:(int)handleId focusedIndex:(int)focusedIndex filterItems:(NSArray *)filterItems checkedInfo:(NSArray *)checkedInfos;
@end
