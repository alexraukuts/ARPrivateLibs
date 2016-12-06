//
//  CCheckBoxTableViewCell.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 11. 11..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CCheckBoxCellData;
@interface CCheckBoxTableViewCell : UITableViewCell

- (void)updateWithData:(CCheckBoxCellData *)data;

@end
