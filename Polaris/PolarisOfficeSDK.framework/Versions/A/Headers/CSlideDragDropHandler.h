//
//  CSlideDragDropHandler.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 3. 9..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CSlidePageViewDefine.h"
#import "CSlideCollectionViewCell.h"

@interface CSlideDragDropHandler : NSObject
<UICollectionViewDelegate, UICollectionViewDataSource>
{
    UIView *_snapshot;
    NSIndexPath *_sourceIndexPath;
    NSIndexPath *_beforeIndexPath;
    int _pageDirection;
    
    onShowSlidePageMenu _showSlidePageMenuBlock;
    onHideSlidePageMenu _hideSlidePageMenuBlock;
}

- (id)initWithCollectionView:(UICollectionView *)collectionView;
- (void)thisIsDelegate;
- (void)linkThumbnailView:(UIImageView *)thumbnailVIew andWhich:(NSInteger)index;
- (BOOL)isHidePageWithIndex:(NSInteger)index;
- (void)handleDragging:(UILongPressGestureRecognizer *)recognizer;
- (CGSize)thumbnailViewSize;
- (void)handlePageViewStatusAtIndexPath:(NSIndexPath *)indexPath;

- (void)registerShowSlidePageMenuBlock:(onShowSlidePageMenu)block;
- (void)registerHideSlidePageMenuBlock:(onHideSlidePageMenu)block;
- (void)unregisterShowSlidePageMenuBlock;
- (void)unregisterHideSlidePageMenuBlock;

- (void)reloadPageViewItemAtIndex:(NSInteger)index;
- (void)reloadPageViewItems;
- (void)selectPageViewItemAtIndex:(NSInteger)index;

- (void)checkThumbnailRemaining;

- (void)disappearRelease;
- (void)hideSlideMenu;
- (void)movepage:(NSInteger)page;

@property (weak, nonatomic) UICollectionView *collectionView;
@property (assign, nonatomic) NSInteger selectedIndex;

@end
