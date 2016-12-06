//
//  CRenderAgentClientDelegate.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 2. 10..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

@protocol CRenderAgentClientDelegate <NSObject>

-(void)notifyShowInlineMenu:(NSMutableDictionary *)notificationBlockDic andTouchPoint:(CGPoint)touchPoint isDoubleTap:(BOOL)isDoubleTap;
-(void)notifyHideInlineMenu:(NSMutableDictionary *)notificationBlockDic;

-(void)notifyMinZoom:(NSMutableDictionary *)notificationBlockDic;

-(void)notifyShowKeyboard:(NSMutableDictionary *)notificationBlockDic;
-(void)notifyHideKeyboard:(NSMutableDictionary *)notificationBlockDic;

-(void)notifyShowTextView:(NSMutableDictionary *)notificationBlockDic;
-(void)notifyHideTextView:(NSMutableDictionary *)notificationBlockDic;

-(void)notifyChangeDocumentArea:(NSMutableDictionary *)notificationBlockDic;

-(void)notifyBlankObjectType:(NSMutableDictionary *)notificationBlockDic andBlankObjectType:(BlankObjectType)type;

-(void)notifyShowStickyNote:(NSMutableDictionary *)notificationBlockDic;

-(void)notifyFreeFormShapeEnable:(NSMutableDictionary *)notificationBlockDic enable:(BOOL)enable;

-(void)notifyCellEditEnable:(NSMutableDictionary *)notificationBlockDic enable:(BOOL)enable;

-(void)notifyShowSheetTextBoxView:(NSMutableDictionary *)notificationBlockDic;
@end
