//
//  CEngineStructArray.h
//  PolarisOffice
//
//  Created by JIHYUN on 2015. 3. 14..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class WRAPPER_SHEET_EDIT_C_F;
@interface NSArray_WRAPPER_SHEET_EDIT_C_F : NSMutableArray
- (void)addObject:(WRAPPER_SHEET_EDIT_C_F*)anObject;
- (void)insertObject:(WRAPPER_SHEET_EDIT_C_F*)anObject atIndex:(NSUInteger)index;
@end

@interface NSNumberArray : NSMutableArray
- (void)addObject:(NSNumber*)anObject;
- (void)insertObject:(NSNumber*)anObject atIndex:(NSUInteger)index;
@end