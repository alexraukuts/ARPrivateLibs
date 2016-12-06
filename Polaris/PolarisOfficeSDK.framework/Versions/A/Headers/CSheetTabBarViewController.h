//
//  CSheetTabBarViewController.h
//  PolarisOffice
//
//  Created by d_infraware on 2015. 2. 2..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CKeyboardState.h"

@interface CSheetTabBarViewController : UIViewController<UITextFieldDelegate,CKeyboardStateDelegate>

@property (nonatomic, readonly) BOOL isSheetTabRename;
@property (nonatomic, readonly) BOOL isSheetTabDrag;

@end
