//
//  CSearchOptionTableViewController.h
//  PolarisOffice
//
//  Created by succorer on 2015. 2. 5..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CMenuMediator;
@interface CSearchOptionTableViewController : UITableViewController

@property (weak, nonatomic) CMenuMediator *mediator;

- (CGFloat)contentsHeight;

@end
