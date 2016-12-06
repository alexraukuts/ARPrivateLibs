//
//  CShortCutData.h
//  PolarisOffice
//
//  Created by succorer on 2015. 5. 11..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CShortCutData : NSObject

@property (strong, nonatomic) NSMutableDictionary *completionDict;
@property (strong, nonatomic) NSMutableDictionary *keyCommandsDict;

+ (instancetype)sharedShortCutDataDict;

@end
