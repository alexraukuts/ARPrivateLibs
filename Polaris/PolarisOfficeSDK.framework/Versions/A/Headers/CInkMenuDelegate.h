//
//  CInkMenuDelegate.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 2. 24..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import "CorePenFacade.h"

typedef enum  {
	Mode_Ink, Mode_Highlight, Mode_Ruler
}InkMenuPenMode;

@protocol CInkMenuDelegate <NSObject>

@property (assign) int penInkThickness;
@property (assign) int penHighlightThickness;
@property (assign) int penRulerThickness;

@property (assign) NSInteger penType;
@property (assign) long penHexColor;

- (void)setPenMode:(int)penMode;
- (CorePenFacade *)getPenFacde;
- (void)setPopupHeight:(NSInteger)height;
- (NSInteger)getPopupHeight;

- (BOOL)isSlideShow;

@end
