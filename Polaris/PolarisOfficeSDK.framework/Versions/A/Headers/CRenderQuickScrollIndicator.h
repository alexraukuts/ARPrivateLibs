//
//  CRenderQuickScrollIndicator.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 1. 19..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CRenderQuickScrollIndicator : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *quickButton;

- (void)relocationIndicator;
- (void)showQuickScrollIndicator;
- (void)hideQuickScrollIndicator;
@end
