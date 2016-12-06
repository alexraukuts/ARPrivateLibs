//
//  CInlinePopup.h
//  PolarisOffice
//
//  Created by dowith4 on 2015. 2. 2..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum
{
    InlinePopupShowByUIViewType_SheetTab,
    InlinePopupShowByUIViewType_SlideThumbnail,
    
}InlinePopupShowByUIViewType;

@class CEditorViewController;
@interface CInlinePopup : NSObject

@property (strong, nonatomic) void(^onInlinePopupShowLinstener)(BOOL isShow);

-(instancetype)initWithViewController:(CEditorViewController*)viewController;

- (void) show:(UIView*)view heightOffset:(int)offsetY widthOffset:(int)offsetX touchPonint:(CGPoint)point isDoubleTab:(BOOL)isDoubleTab;
- (void) showByUIView:(InlinePopupShowByUIViewType)type targetRect:(CGRect)targetRect targetView:(UIView*)view heightOffset:(int)offsetY widthOffset:(int)offsetX;
- (void) hide;
- (BOOL) isShowing;

@end
