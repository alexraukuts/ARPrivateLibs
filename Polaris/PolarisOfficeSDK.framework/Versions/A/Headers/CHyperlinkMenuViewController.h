//
//  CHyperlinkMenuViewController.h
//  PolarisOffice
//
//  Created by dowith4 on 2015. 1. 27..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CHyperlinkMenuViewController : UIViewController

- (CGFloat)contentsHeight;
- (void) onDoneButtonClickedByPopup;

@property (strong, nonatomic) NSString* showingText;


@end
