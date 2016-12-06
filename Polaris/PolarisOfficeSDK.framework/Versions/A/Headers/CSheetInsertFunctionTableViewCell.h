//
//  CSheetInsertFunctionTableViewCell.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2015. 3. 13..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CSheetInsertFunctionTableViewCell : UITableViewCell

- (void) setFunctionName:(NSString *) name;
- (void) setFunctionExplain:(NSString *) explain;
- (void) setNoneFunctionMessage;

@end
