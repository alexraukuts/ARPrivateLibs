//
//  CChartCollectionViewController.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 11. 3..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CChartCollectionViewControllerDelegate <NSObject>

- (void)didSelectChartWithInfo:(NSDictionary *)chartInfo;

@end

@interface CChartCollectionViewController : UICollectionViewController

@property (nonatomic) id<CChartCollectionViewControllerDelegate> chartCollectionViewControllerDelegate;

@end
