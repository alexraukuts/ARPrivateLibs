//
//  CMovieViewController.h
//  PolarisOffice
//
//  Created by succorer on 2015. 3. 18..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CMovieViewController : UIViewController

@property (strong, nonatomic) MPMoviePlayerController *moviePlayerController;

- (void)initWithPath:(NSString *)path view:(UIView *)view;
- (void)closeMovie;

- (void)didSelect;
- (BOOL)isPlay;
- (BOOL)isPause;
- (void)movePoint:(BOOL)isMoving;

@end
