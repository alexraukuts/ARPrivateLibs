//
//  CSheetTabView.h
//  PolarisOffice
//
//  Created by d_infraware on 2015. 2. 21..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CSheetTabView : UIView

- (void)addTarget:(id)target action:(SEL)action forControlEvents:(UIControlEvents)controlEvents;

- (void)setHiddenProtectedImage:(BOOL)hidden;
- (void)setSelected:(BOOL)selected;
- (BOOL)isSelected;
- (void)setHighlighted:(BOOL)highlighted;

- (void)setTextFieldDelegate:(id<UITextFieldDelegate>)textFieldDelegate;
- (void)setTitle:(NSString *)name;
- (NSString *)getTitle;
- (void)startTextFieldEditing;
- (void)endTextFieldEditing;
- (void)resignFirstResponderTextField;
- (void)updateTextFieldLayout;

@end
