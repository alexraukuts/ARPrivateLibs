//
//  CPenDrawMenuViewController.h
//  PolarisOffice
//
//  Created by 조기현 on 2015. 2. 5..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import "CMenuViewController.h"
#import "CPenDrawMediator.h"
#import "CorePenFacade.h"
#import "CInkMenuDelegate.h"

@interface CPenDrawMenuViewController : CMenuViewController
<CInkMenuDelegate>
@property (assign) CPenDrawMediator *mediator;
@property (strong, nonatomic) CorePenFacade *penFacade;

@property (assign) int penInkThickness;
@property (assign) int penHighlightThickness;
@property (assign) int penRulerThickness;
@property (assign) NSInteger penType;
@property (assign) long penHexColor;

- (void)setMenuViewController:(NSString*)name;
- (void)setPenMode:(int)penMode;
- (void)setPenDrawingClearAll;
- (void)startTableDraw;
- (void)eraseTableDraw;
- (BOOL)isShowPopup;

@end
