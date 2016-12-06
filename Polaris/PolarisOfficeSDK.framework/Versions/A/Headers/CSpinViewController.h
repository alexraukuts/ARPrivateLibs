//
//  CSpinViewController.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 11. 10..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CSpinViewController;
@protocol CSpinViewControllerDelegate <NSObject>

- (void)spinViewController:(CSpinViewController *)spinViewController didSelectRowAtIndexPath:(NSIndexPath *)indexPath;

@end

@interface CSpinViewController : UIViewController

@property (retain, nonatomic) NSArray * datas;
@property (assign) id<CSpinViewControllerDelegate> delegate;

@end
