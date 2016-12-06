//
//  CTxtOptionViewController.h
//  PolarisOffice
//
//  Created by succorer on 2015. 2. 6..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CMenuMediator;
@class CEditTxtViewController;

@interface CTxtOptionViewController : UIViewController

@property (assign) CMenuMediator *mediator;
@property (weak, nonatomic) CEditTxtViewController *editTxtViewController;

- (CGFloat)contentsHeight;

@end
