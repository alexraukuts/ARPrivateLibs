//
//  CFillTextureCollectionViewCell.h
//  PolarisOffice
//
//  Created by 유선욱 on 2014. 12. 16..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CFillTextureCollectionViewCell : UICollectionViewCell
- (void) updateTextureImage:(NSInteger) index;
- (NSString *)getTextureImageFilePath:(NSInteger) index;
- (NSString *)getNormalImageNamed:(NSInteger) index;
@end
