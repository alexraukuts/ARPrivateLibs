//
//  CAddBookmarkInHyperlinkViewController.h
//  PolarisOffice
//
//  Created by dowith4 on 2015. 2. 12..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CoreHyperlinkFacade;
@interface CAddBookmarkInHyperlinkViewController : UITableViewController

@property (weak, nonatomic) CoreHyperlinkFacade* coreHyperlinkFacade;

-(void) onDoneButtonClicked;
-(void) onDoneButtonClickedByPopup;
-(BOOL) canDoneButtonEnable;


@end
