//
//  CRenderTextInputField.h
//  PolarisOffice
//
//  Created by 조기현 on 2015. 1. 21..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CRenderInputTextView : UITextView<UITextInput>

@property BOOL hasEmojiString;

@end
////////////////////////////////////////////////////////////////////////////////////
#pragma mark - IndexedRange interface

@interface IndexedRange : UITextRange
{
    NSRange _range;
}

@property (nonatomic) NSRange range;
+ (IndexedRange *)rangeWithNSRange:(NSRange)range;

@end
