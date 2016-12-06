//
//  CSizePopupViewController.h
//  PolarisOffice
//
//  Created by 강현석 on 2015. 2. 6..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CoreInlinePopupFacade;

@interface CResizePopupViewController : UIViewController<UITextFieldDelegate>

- (void)initInlinePopupFacade:(CoreInlinePopupFacade*)facade;

@end
