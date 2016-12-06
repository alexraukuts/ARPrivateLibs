//
//  CAddMenuTableViewController.h
//  PolarisOffice
//
//  Created by ParkBeomsam on 2015. 1. 23..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMenuViewController.h"

@class CMenuMediator;
@interface CAddMenuTableViewController : CMenuViewController <UINavigationControllerDelegate>

@property (assign) CMenuMediator *mediator;
@property (strong, nonatomic) NSString *destinationClassName;

- (CGFloat)contentsHeight;

@end
