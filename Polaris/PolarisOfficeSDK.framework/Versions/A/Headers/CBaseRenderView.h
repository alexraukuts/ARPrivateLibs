//
//  CBaseRenderView.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 1. 13..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import "GLRenderView.h"
#import "CRenderAgent.h"
#import "CRenderInputTextController.h"
#import "CRenderQuickScrollIndicator.h"
#import "CRenderPageIndicator.h"
#import "CoreViewEditModeFacade.h"
#import "ShapeRecognizingView.h"
#import "CRenderObjectInfoIndicator.h"
#ifdef SUPPORT_THUMBNAIL_UI
#import "CWordThumbnailCollectionViewController.h"
#endif

typedef enum {
    RenderPenMode_Normal,
    RenderPenMode_Pen,
    RenderPenMode_Sticky,
    RenderPenMode_Shape,
    RenderPenMode_Table,
    RenderPenMode_Penning
}RenderPenModeType;

@interface CBaseRenderView : GLRenderView
<UIGestureRecognizerDelegate>
{
    UIPanGestureRecognizer *panGestureRecognizer;
    UIPinchGestureRecognizer *pinchGestureRecognizer;
    UITapGestureRecognizer *singleTabGestureRecognizer;
    UITapGestureRecognizer *doubleTabGestureRecognizer;
    UILongPressGestureRecognizer *longPressGestureRecognizer;
	
	BOOL cancelTouchEvent; /** 화면 회전 중 터치 이벤트를 막기 위한 flag */
    CGPoint firstTouchPoint;
	CGPoint lastTouchPoint;
	
    CRenderInputTextController *inputTextController;
    
    __weak id<CRenderAgentInternalDelegate> renderAgent;
    
    BOOL isTouchMoved;
    BOOL wasCaretDisplayed;
    BOOL ignoreChangeScreen;
    BOOL isTextEditing;
	BOOL isFreeFormShape;
	BOOL isPreventCellEdit;
	BOOL isPreventInlinePopup;
#ifdef SUPPORT_THUMBNAIL_UI
    BOOL isMinZoomAtBeganGesture;
#endif
    
    ShapeRecognizingView *shapeRecognizingView;
    
    RenderPenModeType penModeType;
	
	NSInteger _flickingLatencyCounter;
	double _flickingTimeStamp;
}

@property (strong, nonatomic) CRenderPageIndicator * pageIndicator;
@property (strong, nonatomic) CRenderObjectInfoIndicator * objectInfoIndicator;
@property (strong, nonatomic) CRenderQuickScrollIndicator *quickScrollIndicator;

- (void)setAgent:(id<CRenderAgentInternalDelegate>) agent;
- (void)initTypingCB;
- (void)checkCaretState;
- (BOOL)ignoreChangeScreen;
- (BOOL)wasCaretDisplayed;
- (BOOL)isTextEditing;
- (void)changeKeypadHeight:(NSInteger)height;
- (void)changeDocumentArea;

#pragma mark - touch event handling
- (void)rotationCancelTouch;

-(BOOL)doGestureRecognizerShouldBegin:(UIGestureRecognizer *)gestureRecognizer;

-(void)doTouchDownBeganTaskWithPoint: (CGPoint)point;
-(void)doTouchUpBeganTaskWithPoint: (CGPoint)point;
-(void)doTouchUpEndTaskWithPoint: (CGPoint)point;
-(void)doTouchMoveTaskWithPoint: (CGPoint)point;
-(void)doFlickingTaskWithVelocityX: (float)velocityX andVelocityY: (float)velocityY;
-(void)doPanningTaskWithState:(UIPanGestureRecognizer*)gesture;
-(void)doPinchTaskWithState:(UIPinchGestureRecognizer*)gesture;
-(void)doSingleTabTaskWithPoint: (CGPoint)point;
-(void)doDoubleTabTaskWithPoint: (CGPoint)point;
-(void)doLongPressbTaskWithPoint:(UILongPressGestureRecognizer*)gesture;
-(int)minZoomRatio;

@end
