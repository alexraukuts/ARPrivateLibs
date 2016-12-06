//
//  CAnimationCollectionContainerViewController.h
//  PolarisOffice
//
//  Created by succorer on 2015. 3. 11..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CAnimationCollectionViewController;
@interface CAnimationCollectionContainerViewController : UIViewController

- (void)changeMenu:(NSString *)identifier completion:(void (^)(CAnimationCollectionViewController *sender))completion;

@end
