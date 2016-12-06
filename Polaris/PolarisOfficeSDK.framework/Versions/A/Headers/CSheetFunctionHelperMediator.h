//
//  CSheetFunctionHelperMediator.h
//  PolarisOffice
//
//  Created by d_infraware on 2015. 3. 26..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class CSheetViewController;
@interface CSheetFunctionHelperMediator : NSObject

@property (nonatomic) BOOL isShowFunctionHelper;

- (void)setAnchorView:(UIView *)anchorView parentSheetViewController:(CSheetViewController *)parentSheetViewController;
- (void)removeViewFunctionHelper;

- (void)insertAutocompleteFunction:(NSString *)functionName;

@end
