//
//  CFunctionKeypadViewController.h
//  PolarisOffice
//
//  Created by 강현석 on 2015. 3. 17..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CTextView.h"

@interface CFunctionKeypadViewController : UIViewController

@property (nonatomic, weak) CTextView *targetTextView;

- (void)setSize:(CGSize)size;

@end
