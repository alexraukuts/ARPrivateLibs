//
//  CSlideShowPenSettingMenuViewController.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 2. 22..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import "CMenuViewController.h"
#import "CSlideShowMenuMediator.h"
#import "CorePenFacade.h"
#import "CInkMenuDelegate.h"

@interface CSlideShowPenSettingMenuViewController : CMenuViewController
<CInkMenuDelegate>
@property (assign) CSlideShowMenuMediator *mediator;
@property (strong, nonatomic) CorePenFacade *penFacade;

@property (assign) int penInkThickness;
@property (assign) int penHighlightThickness;
@property (assign) int penRulerThickness;
@property (assign) NSInteger penType;
@property (assign) long penHexColor;

- (void)setPenMode:(int)penMode;
- (NSInteger)getPopupHeight;
@end
