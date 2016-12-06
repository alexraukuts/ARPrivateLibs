//
//  ShapeRecognizer.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 2. 24..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ShapeRecognizerDefine.h"

@interface ShapeRecognizer : NSObject
{
    int array_x3[4];
    int array_y3[4];
    int array_x4[5];
    int array_y4[5];
    int array_x5[6];
    int array_y5[6];
    int array_x6[7];
    int array_y6[7];
    int array_x8[9];
    int array_y8[9];
}

- (void)drawingStart: (CGPoint)beginPoint;
- (void)onDrawing: (CGPoint)drawingPoint;
- (void)drawingEnd: (CGPoint)endPoint;

- (BOOL)isShapeInserted;
- (void)resetInsertShapeState;

- (void)typeSelected:(int)type;
- (void)registerShowRecommandPopupBlock:(onShowShapeRecommandation)block;
- (void)registerClearDrawingBlock:(onClearDrawing)block;
@end
