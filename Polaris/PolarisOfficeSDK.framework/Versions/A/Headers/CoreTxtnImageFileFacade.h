//
//  CoreTxtnImageFileFacade.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2015. 2. 11..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief Txt, ImageViewer 관련 Core 기능을 제공
 */

#import "CoreFileFacade.h"

@interface CoreTxtnImageFileFacade : CoreFileFacade

- (void)initWithController:(UIViewController *) controller;
- (void)closeDocument;
- (void)setEqualToPageSize;
- (void)setEqualToPageWidth;

@end
