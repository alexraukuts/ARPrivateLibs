//
//  CAlertView.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 11. 7..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CAlertView : UIAlertView

@property AlertType alertType;

- (instancetype)initWithTitle:(NSString *)title message:(NSString *)message delegate:(id /*<UIAlertViewDelegate>*/)delegate alertType:(AlertType)alertType cancelButtonTitle:(NSString *)cancelButtonTitle otherButtonTitles:(NSString *)otherButtonTitles, ... NS_REQUIRES_NIL_TERMINATION NS_EXTENSION_UNAVAILABLE_IOS("Use UIAlertController instead.");

+ (instancetype)showReplaceAllWithSender:(id)sender count:(NSInteger)count;
+ (instancetype)showInputPasswordAlertViewWithSender:(id)sender;
+ (instancetype)showWrongPasswordAlertViewWithSender:(id)sender;
+ (instancetype)showInputWritePasswordAlertViewWithSender:(id)sender;
+ (instancetype)showWrongWritePasswordAlertViewWithSender:(id)sender;
+ (instancetype)showReadOnlyAlertViewWithSender:(id)sender;
+ (instancetype)showNewFolderAlertView:(id)delegate;
+ (instancetype)showUnSupportFileWithSender:(id)sender;
+ (instancetype)showCTextFieldAlertView:(id)sender title:(NSString *)title inputType:(UIKeyboardType)inputType inputAccessoryView:(UIView *)inputAccessoryView;
+ (instancetype)showUnSupportMovieFileWithSender:(id)sender;
+ (instancetype)showRenameBookmarkAlertView:(id)delegate bookmarkName:(NSString *)bookmarkName;
+ (instancetype)showProtectDocumentWithSender:(id)sender;
+ (instancetype)showLargeFileAlretViewWithSender:(id)sender;
+ (instancetype)showCurruptedFileAlertViewWithSender:(id)sender;
+ (instancetype)showEditProtectDocumentWithSender:(id)sender;
+ (instancetype)showCanNotCreateFolderWithSender:(id)sender;
+ (instancetype)showInvalidTextAlertView:(id)delegate message:(NSString *)msg;
+ (instancetype)showUnSupportPasswordFileWithSender:(id)sender;
+ (instancetype)showEditMergedCellErrorWithSender:(id)sender;
+ (instancetype)showNotEnoughMemoryWithSender:(id)sender;
+ (instancetype)showErrorOccuredWithSender:(id)sender;

@end
