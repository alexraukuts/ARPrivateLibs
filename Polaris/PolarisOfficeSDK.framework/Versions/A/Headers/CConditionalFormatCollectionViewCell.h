//
//  CConditionalFormatCollectionViewCell.h
//  PolarisOffice
//
//  Created by dowith4 on 2015. 3. 16..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CConditionalFormatMainViewController.h"

@interface CConditionalFormatCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UILabel *label;

- (void) initCellWithIndexPath:(NSIndexPath*)indexPath;
@end
