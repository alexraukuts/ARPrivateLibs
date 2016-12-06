//
//  CChangeData.h
//  PolarisOffice
//
//  Created by succorer on 2015. 3. 9..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CChangeData : NSObject

@property NSRange textRange;
@property (strong, nonatomic) NSString *inputText;
@property (strong, nonatomic) NSString *removeText;

+ (instancetype)changeDataWithRange:(NSRange)textRange inputText:(NSString *)inputText removeText:(NSString *)removeText;

@end
