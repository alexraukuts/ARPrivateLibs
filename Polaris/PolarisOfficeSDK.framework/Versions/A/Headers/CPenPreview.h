//
//  CPenPreview.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 2. 6..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPenPreviewLayer.h"

@interface CPenPreview : UIImageView

- (void)setPenColor:(UIColor *)color lineWidth:(GLfloat)lineWidth;
- (void)setPenColor:(UIColor *)color;
- (void)setLineWidth:(GLfloat)lineWidth;
- (UIColor *)getPenColor;
- (GLfloat)getLineWidth;

- (void)setPreviewWave:(BOOL)isWave;

@end
