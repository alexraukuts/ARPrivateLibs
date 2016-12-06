//
//  CPagelayoutViewController.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2014. 12. 20..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CorePageLayoutFacade.h"

@interface CPageLayoutTableViewController : UITableViewController

- (void) setPageLayoutInfo;

@property (strong, nonatomic) CorePageLayoutFacade *corePageLayoutFacade;

@end
