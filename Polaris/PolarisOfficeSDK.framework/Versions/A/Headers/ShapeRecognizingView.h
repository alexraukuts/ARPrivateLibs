//
//  ShapeRecognizingView.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 2. 24..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ShapeRecognizingView : UIView
{
    void *cacheBitmap;
    CGContextRef cacheContext;
    
    CGPoint point0;
    CGPoint point1;
    CGPoint point2;
    CGPoint point3;
}
@end
