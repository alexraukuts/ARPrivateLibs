//
//  CoreImageFacade.h
//  PolarisOffice
//
//  Created by infraseo on 2015. 1. 12..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief 이미지 속성 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "E.h"

@interface CoreImageFacade : NSObject

// set
- (void)setImageLineTransparency:(int)transparency;

- (void)setObjectOrderPosition:(ObjectPosition)position;
- (void)setObjectArrangeTextWrap:(ObjectTextWrapType)textWrap;
- (void)setObjectArrangeAlign:(int)align;

- (void)setImageEffectBrightness:(float)brightness;
- (void)setImageEffectContrast:(float)contrast;
- (void)setImageEffectRestorOriginal;

- (void)setImageStyle:(NSInteger)style;

// get
- (int)getImageEffectArrangeTextWrapType;
- (float)getImageEffectBrightness;
- (float)getImageEffectContrast;
- (int)getObjectLineTransparency;
- (ObjectLineColorType)getObjectLineColorType;

- (int)getImageStyle;
- (int)getObjectEffect3DFormatType;
- (int)getObjectEffect3DRotationType;

// Crop
- (void)startCroppingMode;
- (void)applyCropping;
- (void)cancelCropping;
- (BOOL)isCroppingMode;

@end
