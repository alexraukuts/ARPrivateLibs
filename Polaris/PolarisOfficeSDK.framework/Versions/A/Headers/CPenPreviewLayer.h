//
//  CPenPreviewLayer.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 2. 7..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>

enum penPreviewMode
{
    lineWave = 0,
    lineStraight
};

@interface CPenPreviewLayer : CALayer

@property (nonatomic, assign) GLfloat lineWidth;
@property (nonatomic, strong) UIColor *lineColor;
@property (nonatomic, assign) enum penPreviewMode previewMode;

@end
