//
//  CToolbarOverlayView.h
//  PolarisOffice
//
//  Created by d_infraware on 2015. 3. 12..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CToolbarOverlayViewDelegate <NSObject>
@optional
- (BOOL)pointInsideToolbarOverlayView:(CGPoint)point withEvent:(UIEvent *)event;

@end

@interface CToolbarOverlayView : UIView

@property (nonatomic, weak) id<CToolbarOverlayViewDelegate> toolbarOverlayViewDelegate;

@end
