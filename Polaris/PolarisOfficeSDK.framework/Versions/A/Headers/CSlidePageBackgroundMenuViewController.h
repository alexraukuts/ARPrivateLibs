//
//  CSlidePageBackgroundMenuViewController.h
//  PolarisOffice
//
//  Created by 조기현 on 2015. 3. 18..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMenuViewController.h"
#import "CPenDrawMediator.h"

@interface CSlidePageBackgroundMenuViewController : CMenuViewController<UICollectionViewDelegate, UICollectionViewDataSource>

@property (assign) CPenDrawMediator *mediator;

@end
