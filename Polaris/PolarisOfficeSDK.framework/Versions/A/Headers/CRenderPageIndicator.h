//
//  CRenderPageIndicator.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 1. 19..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define WILL NOTHING_BE_DISPLAYED       0
#define WILL_ZOOMING_INFO_BE_DISPLAYED  1
#define WILL_COUNTING_INFO_BE_DISPLAYED 2

typedef enum 
{
    PAGE_INDICATOR_NONE = 0,
    PAGE_INDICATOR_COUNTING,
    PAGE_INDICATOR_ZOOMING,
} INDICATOR_INFO_TYPE;

@interface CRenderPageIndicator : UIViewController

- (void)showPageIndicator;
- (void)update;
- (void)hidePageIndicator;
- (void)shouldBeDisplayedWith:(INDICATOR_INFO_TYPE)INFO_TYPE;
- (void)onCloseDoc;

@end
