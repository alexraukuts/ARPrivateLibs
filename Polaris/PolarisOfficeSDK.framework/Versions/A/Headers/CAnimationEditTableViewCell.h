//
//  CAnimationEditTableViewCell.h
//  PolarisOffice
//
//  Created by 고 명부 on 2015. 3. 12..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CAnimationEditTableViewCellDelegate <NSObject>

- (void)sendCheckedItem:(BOOL)checked indexPath:(NSIndexPath *)indexPath;

@end

@interface CAnimationEditTableViewCell : UITableViewCell
@property (weak, nonatomic) id<CAnimationEditTableViewCellDelegate> receiver;
@property (weak, nonatomic) IBOutlet UIImageView *animtionImageView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *orderLabel;
@property (weak, nonatomic) IBOutlet UIButton *checkButton;
- (void)updateCellWithAnimationOrder:(int)nOrder imageName:(NSString *)imageName title:(NSString *)title;
- (void)hideCheckButton:(BOOL)isEditing;
@end
