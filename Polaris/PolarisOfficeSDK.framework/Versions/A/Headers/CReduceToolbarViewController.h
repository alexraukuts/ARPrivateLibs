//
//  CReduceToolbarViewController.h
//  PolarisOffice
//
//  Created by succorer on 2015. 2. 12..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CEditorViewController;
@interface CReduceToolbarViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *reduceButton;
@property (assign) CEditorViewController *editorViewController;

@end
