//
//  CSlideShowRenderViewController.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 2. 23..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CSlideShowRenderAgent.h"
#import "CSlideShowRenderView.h"

@interface CSlideShowRenderViewController : UIViewController

@property (strong, nonatomic) id<CSlideShowRenderAgentDelegate> agent;

- (void)setStartPage:(int)page;
- (void)setEndPage:(int)page;
- (void)setSlideShowMode:(SlideShowMode)mode;
- (void)setPointerWithImageName:(NSString *)imageName;

@end
