//
//  CSlideBlankObjectMediator.h
//  PolarisOffice
//
//  Created by d_infraware on 2015. 2. 27..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CAddTableViewController.h"
#import "CChartCollectionViewController.h"
#import "CGalleryViewController.h"

@interface CSlideBlankObjectMediator : NSObject<CAddTableViewControllerDelegate,CChartCollectionViewControllerDelegate,CGalleryViewControllerDelegate>

- (instancetype)initWithParentViewController:(UIViewController *)parentViewController;
- (void)showModalViewWithBlankObjectType:(BlankObjectType)blankObjectType;

@end
