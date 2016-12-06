//
//  CChartStyleCollectionViewCell.h
//  PolarisOffice
//
//  Created by 강현석 on 2015. 2. 27..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CChartStyleCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic) IBOutlet UIImageView *chartStyleImageView;

- (void) initSelectImage;

@end
