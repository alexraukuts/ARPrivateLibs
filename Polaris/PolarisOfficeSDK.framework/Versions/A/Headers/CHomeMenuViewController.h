//
//  CHomeMenuViewController.h
//  PolarisOffice
//
//  Created by succorer on 2015. 1. 7..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMenuViewController.h"

@class CMenuMediator;
@interface CHomeMenuViewController : CMenuViewController

@property (assign) CMenuMediator *mediator;
@property (strong, nonatomic) CoreFileFacade *coreFileFacade;

- (CGFloat)contentsHeight;

@end
