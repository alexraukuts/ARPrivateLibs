//
//  CFileShareViewController.h
//  PolarisOffice
//
//  Created by 강현석 on 2014. 12. 9..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MFMailComposeViewController.h>

@class CSaveMediator;

@interface CFileShareViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, MFMailComposeViewControllerDelegate> {
    BOOL onTypeSelectMode;
    BOOL onSendMailMode;
    BOOL isModified;
}

@property (assign) UIViewController *delegate;
@property (strong, nonatomic) CSaveMediator *saveMediator;

@end
