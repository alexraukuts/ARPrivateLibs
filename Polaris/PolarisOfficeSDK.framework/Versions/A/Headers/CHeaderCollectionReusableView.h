//
//  HeaderCollectionReusableView.h
//  SymbolSample
//
//  Created by 유선욱 on 2014. 11. 12..
//  Copyright (c) 2014년 조기현. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CHeaderCollectionReusableView : UICollectionReusableView
@property (weak, nonatomic) IBOutlet UIImageView *backgroundImageView;
@property (weak, nonatomic) IBOutlet UILabel *subTitleLabel;

@end
