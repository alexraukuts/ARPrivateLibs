//
//  CSlideNoteViewController.h
//  PolarisOffice
//
//  Created by 조기현 on 2015. 3. 17..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CSlideNoteViewController : UIViewController <UITextViewDelegate>

- (BOOL)isTextViewFirstResponder;
- (void)endEditing;
- (void)updateContents;
- (void)inputContents;

@end
