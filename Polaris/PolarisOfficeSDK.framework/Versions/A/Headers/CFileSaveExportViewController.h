//
//  CFilePopupViewController.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2014. 12. 5..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CFileData;
@class CFileSaveAsData;
@class CSaveMediator;
@interface CFileSaveExportViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *inputFileName;

- (void)initWithTitle:(NSString *)title saveMediator:(CSaveMediator *)saveMediator modalViewParentViewController:(UIViewController *)modalViewParentViewController closeDocument:(void (^)(void))closeDocument;

- (void)setEnableDoneButton;
- (void)didSelectFileSaveAsData:(CFileSaveAsData *)fileSaveAsData;
- (void)hideKeyboard;

@end
