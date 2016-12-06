//
//  CExportRangeViewController.h
//  PolarisOffice
//
//  Created by ParkBeomsam on 2015. 2. 15..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CSaveMediator;
@class CFileData;
@interface CExportRangeViewController : UIViewController

@property (strong, nonatomic) CSaveMediator *saveMediator;
@property (strong, nonatomic) NSString *exportPath;

@end
