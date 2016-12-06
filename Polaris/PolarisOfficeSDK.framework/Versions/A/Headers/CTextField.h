//
//  CTextField.h
//  PolarisOffice
//
//  Created by dowith4 on 2015. 1. 22..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CTextField : UITextField

@property NSInteger restrictNumber;
@property (strong, nonatomic) NSString *restrictString;
@property (strong, nonatomic) UIViewController *parentViewController;

- (void)showAlertController:(id)sender;
- (void)setTextfieldAlertType:(BOOL)type;


@end
