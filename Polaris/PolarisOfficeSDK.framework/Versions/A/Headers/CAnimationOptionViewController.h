//
//  CAnimationOptionViewController.h
//  PolarisOffice
//
//  Created by succorer on 2015. 3. 12..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CAnimationOptionViewController : UIViewController

@property (weak, nonatomic) NSMutableDictionary *optionDict;
@property NSInteger slideShowAnimationType;
@property (strong, nonatomic) void (^didSelectBlock)(NSIndexPath *indexPath, BOOL isMain);

- (void)registWithSelectedDict:(NSMutableDictionary *)dict didSelect:(void (^)(NSIndexPath *indexPath, BOOL isMain))didSelect;
- (CGFloat)heightContents;

@end
