//
//  CoreShapeFacade.h
//  PolarisOffice
//
//  Created by infraseo on 2015. 1. 2..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief 도형 속성 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "E.h"
#import "CEngineHelperEnum.h"

@interface CoreShapeFacade : NSObject

// 서식 패널 시작 (Shape / ) +++++++++++++++++++++++++++++++++++++++++++++++++++++++++
// Set
- (void)setShapeFillColorWithStandardColor:(long)color;
- (void)setShapeFillColorWithThemeColor:(long)color;
- (void)setShapeGradation:(NSArray *)gradationInfo;
- (void)setShapeGradationDirection:(int)direction;
- (void)setShapeGradationWitheStandardColor:(long)color;
- (void)setShapeGradationWitheThemeColor:(long)color;
- (void)setShapeTexture:(UIImage *)textureImage;

- (void)setObjectLineColorType:(ObjectLineColorType)lineColorType;
- (void)setObjectLineThickness:(float)thickness;
- (void)setObjectLineColorWithStandardColor:(long)color;
- (void)setObjectLineColorWithThemeColor:(long)color;
- (void)setObjectLineDash:(ObjectLineStyleDash)dashType;
- (void)setObjectLineDash:(ObjectLineStyleDash)dashType compound:(ObjectLineStyleCompound)compoundType;

- (void)setObjectTransparency:(int)transparency;
- (void)setObjectLineTransparency:(int)transparency;

- (void)setObjectEffectType:(NSInteger)effectType;
- (void)setObjectEffectType2003:(NSInteger)effectType;
- (void)setObjectEffectShadowOn;
- (void)setObjectEffectShadowOff;
- (void)setObjectEffectShadowType:(ObjectShadowStyle)shadowType;
- (void)setObjectEffectReflectionTransparency:(int)transparency;
- (void)setObjectEffectReflectionSize:(int)size;
- (void)setObjectEffectNeonStandardColor:(long)color;
- (void)setObjectEffectNeonThemeColor:(long)color;
- (void)setObjectEffectNeonSize:(int)size;
- (void)setObjectEffect3DSolidOn;
- (void)setObjectEffect3DSolidOff;
- (void)setObjectEffect3DSolidType:(NSInteger)solidType;
- (void)setObjectEffect3DSolidDepth:(int)solidDepth;
- (void)setObjectEffect3DRotationOn;
- (void)setObjectEffect3DRotationOff;
- (void)setObjectEffect3DRotationType:(int)rotationType;

- (void)setObjectOrderPosition:(ObjectPosition)position;
- (void)setObjectArrangeTextWrap:(ObjectTextWrapType)textWrap;
- (void)setObjectArrangeAlign:(int)align;
- (void)setMultiObjectArrangeAlign:(int)align;

- (void)setLineStartArrow:(NSInteger) lineType;
- (void)setLineEndArrow:(NSInteger) lineType;
- (void)setLineStyle:(long)lineColor lineThickness:(int)lineThickness lineDashType:(int)lineDashType;

- (void)replaceShape:(int)shapeType;


// Get
- (int)getShapeFillType;
- (long)getShapeFillSolidColor;
- (int)getShapeFillGradationDirection;
- (long)getShapeFillGradationColor;
- (NSArray *)getGradationSupportOfSelectedColor:(long)seletecdColor;
- (NSArray *)getGradationInfo;
- (int)getShapeFillTextureType;
- (int)getShapeTexture;

- (float)getObjectLineThickness;
- (ObjectLineColorType)getObjectLineColorType;
- (long)getObjectLineColor;
- (int)getObjectLineDashType;
- (int)getObjectLineCompoundType;
- (int)getObjectTransparency;
- (int)getObjectLineTransparency;

- (BOOL)isObjectEffectShadowOn;
- (int)getObjectEffectShadowType;
- (int)getObjectEffectReflectionTransparency;
- (int)getObjectEffectReflectionSize;
- (int)getObjectEffectNeonType;
- (long)getObjectEffectNeonColor;
- (int)getObjectEffectNeonSize;
- (BOOL)isObjectEffect3DFormatOn;
- (int)getObjectEffect3DFormatType;
- (int)getObjectEffect3DFormatDepth;
- (BOOL)isObjectEffect3DRotationOn;
- (int)getObjectEffect3DRotationType;

- (ObjectType)getObjectType;
- (ObjectMultiType)getObjectMultiType;
- (int)getMultiObjectCount;

// 순서와 맞춤은 get 정보 없음. 단일 동작 실행
- (int)getObjectArrangeTextwrap;

- (int)getLineStartArrow;
- (int)getLineEndArrow;
- (NSMutableArray *)getLineStyle;

// 서식 패널 끝 (Shape / ) -----------------------------------------------------------

// // Sheet TextBox
- (void)startTextboxEditModeForSheet;
- (void)endTextboxEditModeForSheet;
- (void)redraw;
- (NSString*) getSheetTextboxString;
- (void) setSheetTextboxString:(NSString*)string;

// DocType
- (bool)isWordDocument;
- (bool)isSlideDocument;
- (bool)isSheetDocuemnt;

- (UIImage*)getPreviewThumbnail:(int)thumbnailType index:(int)index;

@end
