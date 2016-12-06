
//  Created by 고 명부 on 2014. 12. 18..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPageTransitionViewController.h"
#import "CoreTransitionsFacade.h"

@interface CPageTransitionTableViewController : UITableViewController <UICollectionViewDataSource, UICollectionViewDelegate>

@property (weak, nonatomic) CPageTransitionViewController *parentPageTransitionViewController;

@property (strong, nonatomic) CoreTransitionsFacade *coreTransitionFacade;
@property (nonatomic) NSInteger selectedSegementIndex;

- (void)reloadColloectionViews;
- (void)setAfterTimeButtonData:(int)min sec:(int)sec msec:(int)milliSecond;

@end
