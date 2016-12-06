//
//  CFileSaveExportTableViewController.h
//  PolarisOffice
//
//  Created by 강현석 on 2014. 12. 30..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CDrive.h"

@interface CFileSaveExportTableViewController : UITableViewController

@property (weak, nonatomic) CDrive *drive;
@property (strong, nonatomic) NSString *uniqueKey;

- (void)initBrowser:(OfficeDriveType)driveType uniqueKey:(NSString *)uniqueKey;
- (BOOL)isExistFileName:(NSString *)fileName;

@end
