//
//  CSlideShowSliderViewController.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 2. 16..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CSlideShowSliderViewController : UIViewController

@property (nonatomic, assign) NSInteger currentPage;

- (void)initSliderWithStartPage:(int)startPage withLastPage:(int)lastPage;

@end
