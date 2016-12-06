//
//  CTxtViewController.h
//  PolarisOffice
//
//  Created by infraseo on 2015. 2. 2..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import "CEditorViewController.h"

@class CEditTxtViewController;
@interface CTxtViewController : CEditorViewController <UITextViewDelegate>

@property (weak, nonatomic) CEditTxtViewController *editTxtViewController;

- (void)save:(NSString *)path;
- (void) closeFile;
- (NSRange)selectedRangeInTextView;
- (void)hideKeyboard;
- (void)onLoadComplete;
- (void)sendThumbnailImage;

@end
