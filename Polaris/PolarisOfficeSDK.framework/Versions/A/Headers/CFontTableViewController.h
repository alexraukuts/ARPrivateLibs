//
//  CFontTableViewController.h
//  PolarisOffice
//
//  Created by 유선욱 on 2014. 12. 16..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CFontTableViewController : UITableViewController
@property (nonatomic, strong) void (^onFontFaceSelected)(NSString* fontFaceName);
@property (nonatomic, strong) NSString* currentFontFaceName;
@end
