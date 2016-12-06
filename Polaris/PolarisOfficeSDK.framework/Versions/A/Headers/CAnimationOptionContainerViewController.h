//
//  CAnimationOptionContainerViewController.h
//  PolarisOffice
//
//  Created by succorer on 2015. 3. 11..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CAnimationOptionViewController;
@interface CAnimationOptionContainerViewController : UIViewController

@property (nonatomic, strong) void (^completionBlock)(CAnimationOptionViewController *sender);

- (void)changeMenu:(NSString *)identifier type:(NSInteger)type optionDict:(NSMutableDictionary *)optionDict completion:(void (^)(CAnimationOptionViewController *sender))completion;

@end
