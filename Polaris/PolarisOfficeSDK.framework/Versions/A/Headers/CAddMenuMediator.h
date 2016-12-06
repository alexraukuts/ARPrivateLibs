//
//  CAddMenuMediator.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 10. 31..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CAddTableViewController.h"
#import "CChartCollectionViewController.h"
#import "CGalleryViewController.h"

@interface CAddMenuMediator : CMenuMediator<CAddTableViewControllerDelegate,CChartCollectionViewControllerDelegate,CGalleryViewControllerDelegate,UITextFieldDelegate>

@end
