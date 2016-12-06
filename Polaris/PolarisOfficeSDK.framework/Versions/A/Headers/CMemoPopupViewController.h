//
//  CMemoPopupViewController.h
//  PolarisOffice
//
//  Created by 강현석 on 2015. 2. 12..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CoreInlinePopupFacade;

@interface CMemoPopupViewController : UIViewController <UITextViewDelegate>

- (void)initInlinePopupFacade:(CoreInlinePopupFacade *)facade;
- (void)initMemoEditInsert:(NSString*)memoFunctionName;
- (void)saveMemoContents;
@end
