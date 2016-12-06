//
//  CAnimationCollectionViewController.h
//  PolarisOffice
//
//  Created by succorer on 2015. 3. 12..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CAnimationCollectionViewController : UICollectionViewController

@property (strong, nonatomic) void (^didSelectBlock)(NSIndexPath *indexPath);
- (void)registDidSelect:(void (^)(NSIndexPath *indexPath))didSelect;

@end
