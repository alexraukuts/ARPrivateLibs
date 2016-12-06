//
//  CAnimationCollectionViewCell.h
//  PolarisOffice
//
//  Created by succorer on 2015. 3. 11..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CAnimationCollectionViewCell : UICollectionViewCell

- (void)updateCellWithTitle:(NSString *)title imageName:(NSString *)imageName slideShowAnimationType:(SlideShowAnimationType)slideShowAnimationType;
- (void)updateBackgroundImage:(BOOL)hasOption;
@end
