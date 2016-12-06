//
//  CColorHueView.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 11. 25..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CColorHueData;
@protocol CColorHueViewDelegate <NSObject>

- (void)colorHueViewDidSelect:(CColorHueData *)colorHueData;

@end

@interface CColorHueView : UIView

@property (weak) id<CColorHueViewDelegate> delegate;

- (void)reloadWithCompletion:(void (^)(CColorHueData *colorHueData))completion;
- (void)reloadWithRed:(int)red green:(int)green blue:(int)blue;
- (void)updatePickerImageView;

@end
