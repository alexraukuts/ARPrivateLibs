//
//  CCheckBoxCellData.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 11. 12..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CCheckBoxCellData : NSObject

@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSString * iconName;
@property BOOL isRight;

- (instancetype)initWithTitle:(NSString *)title iconName:(NSString *)iconName isRight:(BOOL)isRight;

@end
