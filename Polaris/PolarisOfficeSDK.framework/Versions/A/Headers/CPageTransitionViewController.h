
//  PolarisOffice
//
//  Created by 고 명부 on 2014. 12. 18..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EAGLView.h"
#import "CPageTransitionDelegate.h"
#import "CoreTransitionsFacade.h"
#import "CSlideViewController.h"

@interface CPageTransitionViewController : UIViewController  <CPageTransitionDelegate>

@property (weak, nonatomic) IBOutlet UIImageView *transitionPreView;
@property (strong, nonatomic) CSlideViewController* slideViewController;

- (void)setSelectedPageTransitionSegmentIndex:(NSInteger)index;
- (void)showGLView;
- (void)onUpdateImage:(UIImage*)image;
- (void)presentPageTransitionGL;

@end
