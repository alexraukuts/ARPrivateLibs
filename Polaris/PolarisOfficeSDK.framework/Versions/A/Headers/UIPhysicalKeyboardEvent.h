//
//  UIPhysicalKeyboardEvent.h
//  PolarisOffice
//
//  Created by succorer on 2015. 5. 8..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIInternalEvent : UIEvent @end
@interface UIPhysicalButtonsEvent : UIInternalEvent @end

@interface UIPhysicalKeyboardEvent : UIPhysicalButtonsEvent

@property (nonatomic, readonly) long _keyCode;
@property (nonatomic, assign) int _modifierFlags;
@property (nonatomic, strong) NSString *_unmodifiedInput;
@property (nonatomic, readonly) BOOL _isKeyDown;

@end

