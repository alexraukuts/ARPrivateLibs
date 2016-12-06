//
//  CMoreMenuViewController.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 10. 24..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMenuViewController.h"

@class CMenuMediator;
@interface CMoreMenuViewController : CMenuViewController

@property (retain, nonatomic) CMenuMediator *mediator;
@property (strong, nonatomic) NSArray *moreMenuCells;
@property (weak, nonatomic) IBOutlet UITableView *tableView;

- (CGFloat)contentsHeight;

@end
