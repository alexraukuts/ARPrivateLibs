//
//  CPageColorTableViewController.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2015. 1. 5..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPageBackgroundHeader.h"
#import "CGalleryViewController.h"

@interface CPageColorTableViewController :
        UITableViewController<CGalleryViewControllerDelegate>

- (int) getLastClickButton;
- (int) getSelectedSolidColor;
- (UIImage *) getBackgroundImage;
- (NSMutableArray *)getSelectedGradationInfo;

@end
