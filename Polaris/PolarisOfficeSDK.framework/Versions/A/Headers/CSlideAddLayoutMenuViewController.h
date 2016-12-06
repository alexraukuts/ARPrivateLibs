//
//  CSlideAddSlideCollectionViewController.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 3. 19..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CMenuViewController.h"
#import "CMasterLayoutThumbnailLoader.h"

@interface CSlideAddLayoutMenuViewController : CMenuViewController<UICollectionViewDelegate, UICollectionViewDataSource>

@property (weak, nonatomic) CMasterLayoutThumbnailLoader *thumbnailLoader;

- (CGFloat)contentsHeight;

@end
