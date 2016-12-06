//
//  CConditinoalFormatParentTypeView.h
//  PolarisOffice
//
//  Created by dowith4 on 2015. 3. 22..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CoreConditionalFormatFacade;
@interface CConditionalFormatParentTypeView : UIView

-(void)setLabelText : (NSString*)text;
-(void)addConditionalFormatItemWithFacade:(CoreConditionalFormatFacade*) coreFacade;
@end
