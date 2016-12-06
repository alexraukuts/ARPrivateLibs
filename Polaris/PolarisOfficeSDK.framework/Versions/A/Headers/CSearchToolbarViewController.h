//
//  CSearchToolbarViewController.h
//  PolarisOffice
//
//  Created by succorer on 2015. 2. 3..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CSearchToolbarMediator.h"

@class CFloatingTextField;
@interface CSearchToolbarViewController : UIViewController

@property (assign) CSearchToolbarMediator *mediator;

@property (weak, nonatomic) IBOutlet CFloatingTextField *searchTextField;
@property (weak, nonatomic) IBOutlet CFloatingTextField *replaceTextField;
@property (weak, nonatomic) IBOutlet UIButton *prevButton;
@property (weak, nonatomic) IBOutlet UIButton *nextButton;
@property (weak, nonatomic) IBOutlet UIButton *replacebtn;
@property (weak, nonatomic) IBOutlet UIButton *replaceallbtn;

@end
