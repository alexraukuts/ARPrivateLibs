//
//  CThumbnailLoader.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 3. 14..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CThumbnailConfiguration.h"

@interface CThumbnailLoader : NSObject

- (id)initWithCaller:(id)caller;
- (void)notifyPoolSizeChanged;
- (void)linkThumbnailView:(UIImageView *)thumbnailView andWhich:(NSInteger)index;
- (void)processThumbnail;
- (BOOL)isHidePageWithIndex:(NSInteger)index;
- (NSInteger)getThumbnailItemPoolCount;

- (void)releaseThumbnailLoader;

@property (strong, nonatomic) CThumbnailConfiguration *configuration;
@property (strong, nonatomic) NSMutableDictionary *thumbnailItemPool;

@property (weak, nonatomic) UICollectionView *collectionView;

@end
