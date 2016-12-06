//
//  CRulerBackgroundLayer.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 2. 2..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface CRulerBackgroundLayer : CALayer

- (void)setUpdateDataWithPageLeftLogical:(int)pageLeftLogical
                        pageRightLogical:(int)pageRightLogical
                            pageRightPos:(int)pageRightPos
                             textLeftPos:(int)textLeftPos
                            textRightPos:(int)textRightPos;

@end
