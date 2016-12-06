//
//  CoreFootnotesFacade.h
//  PolarisOffice
//
//  Created by JIHYUN on 2015. 1. 28..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief Word 각주/미주 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CoreFootnotesFacade : NSObject

- (void)insertFootnote;
- (void)insertEndnote;
- (BOOL)isEnableFootnotes;

@end