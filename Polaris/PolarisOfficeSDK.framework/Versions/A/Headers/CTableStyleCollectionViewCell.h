//
//  CTableStyleCollectionViewCell.h
//  PolarisOffice
//
//  Created by 고 명부 on 2015. 4. 1..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CTableStyleCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
- (void) updateImage:(NSString *)imageName;
-(void) initHighlightedView;
@end
