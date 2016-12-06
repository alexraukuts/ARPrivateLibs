//
//  CRulerBaseControlLayer.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 2. 3..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CRulerBaseControlLayer : CALayer

@property (nonatomic, assign) BOOL pressed;

- (void)initContentWithNormalImageName:(NSString *)normalImageNamed pressImageName:(NSString *)pressImageNamed;

@end
