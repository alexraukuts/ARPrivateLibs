//
//  CMasterLayoutThumbnailLoader.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 4. 9..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CMasterLayoutThumbnailLoader : NSObject

typedef void (^notifyUpdateThumbnailBlock)(int masterIndex, int indexNum);

- (instancetype)initWithThumbnailSize:(CGSize)size;

- (void)setNotifyUpdateThumbnailBlock:(notifyUpdateThumbnailBlock)block;

- (UIImage *)getThumbnailWithMasterLayout:(int)masterIndex withPageNum:(int)pageNum;

- (NSUInteger)getMasterLayoutCount;
- (NSUInteger)getLayoutCountWithMasterLayoutIndex:(int)masterLayoutIndex;

@end
