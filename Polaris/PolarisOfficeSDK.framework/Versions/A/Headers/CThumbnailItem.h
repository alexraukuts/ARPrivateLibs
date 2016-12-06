//
//  CThumbnailItem.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 3. 14..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CThumbnailItem : NSObject

@property (weak, nonatomic) UIImageView *thumbnailView;

@property (strong, nonatomic) UIImage *thumbnail;
@property (weak, nonatomic) UIImage *weakRefThumbanil;

@property (assign, nonatomic) NSInteger pageIndex;
@property (assign, nonatomic) BOOL isImagePrepared;
@property (assign, nonatomic) NSInteger width;
@property (assign, nonatomic) NSInteger height;
@property (assign, nonatomic) BOOL isHide;
@property (assign, nonatomic) BOOL needUpdate;

@end
