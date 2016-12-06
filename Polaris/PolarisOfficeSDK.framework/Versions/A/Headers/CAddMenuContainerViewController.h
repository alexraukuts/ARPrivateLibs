//
//  CAddMenuContainerViewController.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 10. 28..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMenuViewController.h"

@interface CAddMenuContainerViewController : CMenuViewController

- (void)changeMenu:(NSString *)identifier completion:(void (^)(void))completion;

@end
