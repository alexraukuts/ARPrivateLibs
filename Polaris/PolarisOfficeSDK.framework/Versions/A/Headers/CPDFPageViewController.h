//
//  CSlidePageViewController.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 11. 17..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CPDFPageViewController : UIViewController
<UICollectionViewDelegate, UICollectionViewDataSource>

-(void)reloadWholePageItemsForOutputAnnotation;
-(void)reloadAllItems;

@end
