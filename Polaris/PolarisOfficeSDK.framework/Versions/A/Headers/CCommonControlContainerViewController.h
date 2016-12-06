//
//  CShapeEffectContainerViewController.h
//  PolarisOffice
//
//  Created by 유선욱 on 2014. 12. 11..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPropertyMenuControlContainerViewController.h"

@interface CCommonControlContainerViewController : CPropertyMenuControlContainerViewController
@property (weak, nonatomic) NSString * nextSegueIdentifier;

- (void)changeMenu:(NSString *)identifier completion:(void (^)(void))completion;
- (UIViewController *) getCurrentMenuViewController;
@end
