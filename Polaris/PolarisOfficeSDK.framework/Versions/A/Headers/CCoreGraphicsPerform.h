//
//  CCoreGraphicsPerform.h
//  PolarisOffice
//
//  Created by 조기현 on 2014. 12. 24..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDefineCommon.h"

@interface CCoreGraphicsPerform : NSObject

CGPoint CGPointOffset (CGPoint point1, CGSize delta);
CGFloat CGPointDistance (CGPoint p1, CGPoint p2);
CGSize CGSizeMultiplyScalar (CGSize p, CGFloat scalar);

@end
