//
//  CViewSettingMediator.h
//  PolarisOffice
//
//  Created by 강현석 on 2014. 12. 15..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CViewSettingMediator : NSObject

- (instancetype)initWithParentView:(UIViewController *)parentViewController;
- (void)showViewSettingPopup;

@end
