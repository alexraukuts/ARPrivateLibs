//
//  CColorPickerView.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 11. 25..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CColorHueData;
@protocol CColorPickerViewDelegate <NSObject>

- (void)colorPickerViewDidSelect:(UIColor *)color;

@end

@interface CColorPickerView : UIView

@property (weak) id<CColorPickerViewDelegate> delegate;

- (void)initialize:(CColorHueData *)hueData;
- (void)initColorWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness;
- (void)reloadWithHue:(float)hue saturation:(float)saturation brightness:(float)brightness;
- (void)reloadWithCompletion:(void (^)(CColorHueData *colorHueData))completion;

@end
