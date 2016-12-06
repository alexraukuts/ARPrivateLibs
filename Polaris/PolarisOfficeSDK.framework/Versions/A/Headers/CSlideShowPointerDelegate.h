//
//  CSlideShowPointerDelegate.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 2. 22..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

@protocol CSlideShowPointerDelegate <NSObject>

- (void)setPointerWithType:(int)type andImageName:(NSString *)pointerImageName;

@end
