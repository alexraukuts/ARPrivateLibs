//
//  CKeyboardState.h
//  PolarisOffice
//
//  Created by d_infraware on 2015. 1. 12..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CKeyboardStateDelegate <NSObject>

@optional
- (void)keyboardWillShowNotification:(NSNotification *)notification;
- (void)keyboardDidShowNotification:(NSNotification *)notification;
- (void)keyboardWillHideNotification:(NSNotification *)notification;
- (void)keyboardDidHideNotification:(NSNotification *)notification;

@end

@interface CKeyboardState : NSObject

@property CGRect keypadFrame;
@property BOOL isVisible;

+ (instancetype)sharedInstance;

- (void)addObserverDelegate:(id<CKeyboardStateDelegate>)delegate;
- (void)removeObserverDelegate:(id<CKeyboardStateDelegate>)delegate;
- (void)removeAllObserverDelegate;

- (void)initialization;

@end
