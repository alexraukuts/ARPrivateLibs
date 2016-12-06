//
//  CSlideViewController.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 9. 25..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import "CEditorViewController.h"

@interface CSlideViewController : CEditorViewController

- (void)updatePageViewStatusAtIndex:(NSInteger)pageIndex;
- (void)showSlideNote;
- (void)hideSlideNote;
- (void)hideSlideNoteKeypad;
- (BOOL)isShowSlideNote;
- (void)showSlidePanel;
- (void)hideSlidePanel;
- (BOOL)isEnableToggleSlidePanel;
- (BOOL)isShowSlidePanel;
- (void)updateNote;
- (void)updatePageThumb;

@end
