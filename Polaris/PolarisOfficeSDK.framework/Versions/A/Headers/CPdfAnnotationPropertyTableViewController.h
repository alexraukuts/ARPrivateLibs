//
//  CPdfAnnotationPropertyTableViewController.h
//  PolarisOffice
//
//  Created by hys on 2015. 4. 2..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPropertyMenuControlContainerViewController.h"
#import "CPdfAnnotationProvider.h"

@class CMenuMediator;
@interface CPdfAnnotationPropertyTableViewController : UITableViewController

@property (strong, nonatomic) CPdfAnnotationProvider *annotationProvider;
@property (assign) CMenuMediator *mediator;
@property (assign, readwrite) BOOL isUseOnlyColor;
@property float thickness;

@end
