//
//  CSlideCollectionViewCell.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 3. 12..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CSlideCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIButton *pageItemButton;
@property (weak, nonatomic) IBOutlet UILabel *pageIndex;
@property (weak, nonatomic) IBOutlet UIImageView *hasEffectChangeScreen;
@property (weak, nonatomic) IBOutlet UIImageView *isHide;
@property (weak, nonatomic) IBOutlet UIImageView *thumbnailView;


@end
