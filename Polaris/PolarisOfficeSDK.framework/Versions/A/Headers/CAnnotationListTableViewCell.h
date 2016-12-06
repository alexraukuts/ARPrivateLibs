//
//  CAnnotationListCollectionViewCell.h
//  PolarisOffice
//
//  Created by 조기현 on 2015. 3. 10..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CDefineCommon.h"

@interface CAnnotationListTableViewCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIButton *checkButton;

- (void)initContentsDataWithType:(AnnotationStyle)type subType:(BOOL)isSubType contents:(NSString*)contents date:(NSString*)date pageNum:(NSInteger)pageNum;
- (void)showCheckButton:(BOOL)isShow;
- (void)setCheckAnnotation:(BOOL)isSelected;

@end
