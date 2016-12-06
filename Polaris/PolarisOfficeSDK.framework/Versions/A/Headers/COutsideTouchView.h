//
//  COutsideTouchView.h
//  PolarisOffice
//
//  Created by d_infraware on 2015. 3. 17..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol COutsideTouchViewDelegate <NSObject>
@optional
- (BOOL)outsideTouchViewPointInside:(CGPoint)point withEvent:(UIEvent *)event;

@end

@interface COutsideTouchView : UIView

@property (nonatomic, weak) id<COutsideTouchViewDelegate> outsideTouchViewDelegate;

@end
