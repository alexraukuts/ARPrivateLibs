//
//  CAddHyperlinkViewController.h
//  PolarisOffice
//
//  Created by dowith4 on 2015. 1. 27..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CoreHyperlinkFacade;
@interface CAddHyperlinkViewController : UITableViewController

-(void) onDoneButtonClicked;
-(void) onDoneButtonClickedByPopup;

@property (weak, nonatomic) CoreHyperlinkFacade* coreHyperlinkFacade;

@end
