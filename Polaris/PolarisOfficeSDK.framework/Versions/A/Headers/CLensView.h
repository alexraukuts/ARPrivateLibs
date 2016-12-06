//
//  CLensView.h
//  PolarisOffice
//
//  Created by 조기현 on 2015. 3. 2..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CLensView : UIView

@property (strong, nonatomic) UIView* renderView;
@property (nonatomic, assign) int positionY;
@property (nonatomic, assign) int viewingPosOffsetY;

- (id)initWithView:(UIView*)view;
- (void)setPoint:(CGPoint)point;

@end