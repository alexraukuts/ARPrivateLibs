//
//  CImageWatermarkTableViewController.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2015. 1. 8..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CGalleryViewController.h"

@interface CImageWatermarkTableViewController : UITableViewController<CGalleryViewControllerDelegate>

@property (strong, nonatomic) NSMutableArray *watermarkInfo;

@end
