//
//  CPopoverViewController.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 10. 27..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CPopoverData;
@class CMenuMediator;
@interface CPopoverViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIView *containerView;
@property (retain, nonatomic) CMenuMediator * mediator;
@property CGSize size;
@property (nonatomic, setter = setMinSize:) CGSize minSize;
@property CGSize maxSize;
@property (nonatomic) BOOL isOutsideEventContinue;
@property (nonatomic) BOOL isRotateDismissView;
@property (nonatomic) BOOL isEnableKeyboardNotification;
@property CGRect standardRect;

- (void)dismissViewCompletion:(void (^)(void))completion;
- (void)hideDragButton;
- (void)setPopupHeight:(NSInteger)height;
- (NSInteger)getPopupHeight;
- (void)clearDimView;

@end
