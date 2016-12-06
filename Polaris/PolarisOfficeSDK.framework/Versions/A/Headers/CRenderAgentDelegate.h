//
//  CRenderAgentDelegate.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 1. 16..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 *  CRenderAgnet.m 에도 설명하였지만. Internal은 RenderView에서, External은 EditorViewContoller에서 사용하는 Delegate
 */
@protocol CRenderAgentInternalDelegate <NSObject>

-(void)notifyShowInlineMenuWithTouchPoint:(CGPoint)touchPoint isDoubleTap:(BOOL)isDoubleTap;
-(void)notifyHideInlineMenu;

/*------------------------------------------------------------------------------*/
-(void)notifyMinZoom;

/*------------------------------------------------------------------------------*/

-(void)registerPenModeObserverWithKey: (NSString *)uniqueKey andShowCallback:(onChangePenModeBlock)penModeCB;
-(void)unregisterPenModeObserverWithKey: (NSString *)uniqueKey;

/*------------------------------------------------------------------------------*/

-(void)registerKeyboardObserverWithKey:(NSString *)uniqueKey andShowCallback:(onShowKeyboardBlock) showCB andHideCallback:(onHideKeyboardBlock)hideCB;
-(void)unregisterKeyboardObserverWithKey:(NSString *)uniqueKey;

/*------------------------------------------------------------------------------*/

-(void)registerTextViewObserverWithKey:(NSString *)uniqueKey andShowCallback:(onShowTextViewBlock)showCB andHideCallback: (onHideTextViewBlock)hideCB;
-(void)unregisterTextViewObserverWithKey:(NSString *)uniqueKey;

/*------------------------------------------------------------------------------*/

-(void)registerChangeDocumentAreaObserverWithKey:(NSString *)uniqueKey andChangeCallback:(onChangeDocumentAreaBlock)changeDocumentAreaCB;
-(void)unregisterChangeDocumentAreaObserverWithKey:(NSString *)uniqueKey;

/*------------------------------------------------------------------------------*/

-(void)notifyBlankObjectType:(BlankObjectType)type;

/*------------------------------------------------------------------------------*/

-(void)notifyShowStickyNote;

/*------------------------------------------------------------------------------*/

-(void)registerIgnoreChangeScreenObserverWithKey:(NSString *)uniqueKey andChangeCallback:(onIgnoreChangeScreenBlock)changeDocumentAreaCB;
-(void)unregisterIgnoreChangeScreenObserverWithKey:(NSString *)uniqueKey;

/*------------------------------------------------------------------------------*/

-(BOOL)isDocInsideEditTextView;

/*------------------------------------------------------------------------------*/

-(void)registerFreeFormShapeEnableObserverWithKey:(NSString *)uniqueKey andChangeCallback:(onFreeFormShapeEnableBlock)enableCB;
-(void)unregisterFreeFormShapeEnableObserverWithKey:(NSString *)uniqueKey;

/*------------------------------------------------------------------------------*/

-(void)registerCellEditEnableObserverWithKey:(NSString *)uniqueKey andChangeCallback:(onCellEditEnableBlock)enableCB;
-(void)unregisterCellEditEnableObserverWithKey:(NSString *)uniqueKey;

/*------------------------------------------------------------------------------*/

-(void)registerSheetTextBoxViewObserverWithKey:(NSString *)uniqueKey showCallback:(onShowSheetTextBoxViewBlock)showCB andHideCallback: (onHideSheetTextBoxViewBlock)hideCB;
-(void)unregisterSheetTextBoxViewObserverWithKey:(NSString *)uniqueKey;

/*------------------------------------------------------------------------------*/

-(void)registerSlideStopVideoObserverWithKey:(NSString *)uniqueKey andChangeCallback:(onSlideStopVideoBlock)stopVideoCB;
-(void)unregisterSlideStopVideoObserverWithKey:(NSString *)uniqueKey;

/*------------------------------------------------------------------------------*/
@end





@protocol CRenderAgentExternalDelegate <NSObject>

-(void)registerInlineMenuObserverWithKey: (NSString *)uniqueKey andShowCallback:(onShowInlineMenuBlock)showCB andHideCallback: (onHideInlineMenuBlock)hideCB;
-(void)unregisterInlineMenuObserverWithKey: (NSString *)uniqueKey;

/*------------------------------------------------------------------------------*/

-(void)registerMinZoomObserverWithKey: (NSString *)uniqueKey andMinZoomback:(onMinZoomBlock)showCB;
-(void)unregisterMinZoomObserverWithKey: (NSString *)uniqueKey;

/*------------------------------------------------------------------------------*/

-(void)notifyChangePenMode:(int)penMode;

/*------------------------------------------------------------------------------*/

-(void)notifyShowKeyboard;
-(void)notifyHideKeyboard;

/*------------------------------------------------------------------------------*/

-(void)notifyShowSheetCellTextView;
-(void)notifyHideSheetCellTextView;

/*------------------------------------------------------------------------------*/

-(void)notifyChangeDocumentArea;

/*------------------------------------------------------------------------------*/

-(void)registerBlankObjectObserverWithKey: (NSString *)uniqueKey andCallback:(onBlankObjectBlock)blankObjectTypeCB;
-(void)unregisterBlankObjectObserverWithKey: (NSString *)uniqueKey;

/*------------------------------------------------------------------------------*/

-(void)registerStickyNoteObserverWithKey: (NSString *)uniqueKey andCallback:(onShowStickyNoteBlock)blankObjectTypeCB;
-(void)unregisterStickyNoteObserverWithKey: (NSString *)uniqueKey;

/*------------------------------------------------------------------------------*/

-(BOOL)ignoreChangeScreen;

/*------------------------------------------------------------------------------*/

-(void)registerIsDocInsideEditTextViewObserverWithKey: (NSString *)uniqueKey andCallback:(onIsDocInsideEditTextViewBlock)isTextViewCB;
-(void)unregisterIsDocInsideEditTextViewObserverWithKey: (NSString *)uniqueKey;

/*------------------------------------------------------------------------------*/

-(void)notifyFreeFormShapeEnable:(BOOL)enable;

/*------------------------------------------------------------------------------*/

-(void)notifyCellEditEnable:(BOOL)enable;

/*------------------------------------------------------------------------------*/

-(void)notifyShowSheetTextBoxView;
-(void)notifyHideSheetTextBoxView;

/*------------------------------------------------------------------------------*/

-(void)notifySlideStopVideo;

/*------------------------------------------------------------------------------*/

-(void)notifyMinZoom;

/*------------------------------------------------------------------------------*/
@end

