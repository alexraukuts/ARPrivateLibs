//
//  CSlideAddSlideCollectionViewCell.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 3. 19..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CSlideAddLayoutCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *contentImageView;
@property (weak, nonatomic) IBOutlet UIImageView *highlightedImageView;

- (void)updateImage:(UIImage *)image;
@end
