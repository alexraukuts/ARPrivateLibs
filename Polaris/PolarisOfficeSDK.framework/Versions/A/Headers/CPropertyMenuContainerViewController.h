//
//  CPropertyMenuContainerViewController.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 10. 28..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMenuViewController.h"

@interface CPropertyMenuContainerViewController : CMenuViewController

@property (weak, nonatomic) NSString * nextSegueIdentifier;
@property (strong, nonatomic) NSArray * segmentedList;
@property (weak, nonatomic) IBOutlet UIScrollView *mainScrollView;

- (void)changeMenu:(NSString *)identifier completion:(void (^)(void))completion;
- (NSArray *)getSegmentedList;
- (NSString *)getIndexIdentifier:(int)selectedIndex;
- (int)getCurrentSegmentedIndex;

@end
