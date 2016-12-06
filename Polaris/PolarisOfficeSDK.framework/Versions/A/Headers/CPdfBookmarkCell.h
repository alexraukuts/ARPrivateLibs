//
//  CPdfBookmarkCell.h
//  PolarisOffice
//
//  Created by succorer on 2015. 3. 16..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CSWTableViewCell.h"

@class CBookmarkData;

@interface CPdfBookmarkCell : CSWTableViewCell

- (void)updateCellWithBookmarkData:(CBookmarkData *)bookmarkData;

@end
