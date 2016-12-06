
//  Created by 고 명부 on 2014. 12. 16..
//  Copyright (c) 2014년 고 명부. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CPageTransitionCollectionViewCell : UICollectionViewCell

- (void)setTransitionImage:(NSString *)imageName isOption:(BOOL)isOption;
- (void)setTransitionTitle:(NSString *)title;

- (void)setOptionImage:(NSString *)optionImageName;

- (void)initHighlightedView;

@end
