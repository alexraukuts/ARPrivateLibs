//
//  ShapeRecognizerUnit.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 2. 25..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

#define SHAPE_RECOGNIZER_UNITTYPE_INIT 0
#define SHAPE_RECOGNIZER_UNITTYPE_LINE 1
#define SHAPE_RECOGNIZER_UNITTYPE_CURVE 2

@interface ShapeRecognizerUnit : NSObject
{

}

@property (assign, nonatomic) int type;
@property (strong, nonatomic) NSMutableArray *pointArray;
@property (assign, nonatomic) CGPoint unitLineStart;
@property (assign, nonatomic) CGPoint unitLineEnd;
@property (assign, nonatomic) CGRect unitRect;

-(void)addPoint:(CGPoint)point;
-(void)detectType;

@end
