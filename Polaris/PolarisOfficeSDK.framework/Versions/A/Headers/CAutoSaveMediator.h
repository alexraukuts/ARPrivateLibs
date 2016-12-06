//
//  CAutoSaveMediator.h
//  PolarisOffice
//
//  Created by ParkBeomsam on 2015. 2. 4..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CToolbarMenuViewController.h"

@interface CAutoSaveMediator : NSObject

@property (strong, nonatomic) UIViewController *mainViewController;
@property (strong, nonatomic) CToolbarMenuViewController *toolbarViewController;

- (instancetype)initWithMinute:(NSInteger)minute sender:(UIViewController *)sender;
- (void)close;
- (void)saveDocument:(NSString *)filePath;

@end
