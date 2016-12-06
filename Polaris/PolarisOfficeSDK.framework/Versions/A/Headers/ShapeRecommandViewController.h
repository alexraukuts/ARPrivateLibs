//
//  ShapeRecommandViewController.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 3. 3..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ShapeRecognizerDefine.h"

@interface ShapeRecommandViewController : UIViewController

- (void)registerRecommandTypeSelectedBlock:(onRecommandTypeSelected)block;
- (void)notifyShapeRect:(CGRect)rect;
- (void)addType:(int)type;
@end
