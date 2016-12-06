//
//  CInkMenuViewController.h
//  PolarisOffice
//
//  Created by 조기현 on 2015. 2. 5..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CInkMenuDelegate.h"

#define BRUSH_SIZE_MIN 40
#define BRUSH_SIZE_MAX 400

@interface CInkMenuViewController : UIViewController<UICollectionViewDelegate, UICollectionViewDataSource>

@property (weak, nonatomic) id<CInkMenuDelegate> inkMenuDelegate;

- (CGFloat)contentHeight;

@end
