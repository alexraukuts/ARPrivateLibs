//
//  CSlideShowRenderAgentDelegate.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 2. 24..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

@protocol CSlideShowRenderAgentDelegate <NSObject>

@required

-(void)registerSlideShowFinishObserverWithKey: (NSString *)uniqueKey andFinishCallback:(onFinishSlideShowBlock)finishCB;
-(void)unregisterSlideShowFinishObserverWithKey: (NSString *)uniqueKey;

-(void)registerChangeDocumentAreaObserverWithKey:(NSString *)uniqueKey andChangeCallback:(onChangeDocumentAreaBlock)changeDocumentAreaCB;
-(void)unregisterChangeDocumentAreaObserverWithKey:(NSString *)uniqueKey;

-(void)registerSlideShowFinishViewShowObserverWithKey: (NSString *)uniqueKey andFinishCallback:(onSlideShowFinishViewShowBlock)finishCB;
-(void)unregisterSlideShowFinishViewShowObserverWithKey: (NSString *)uniqueKey;

-(void)registerSlideShowStopEffectObserverWithKey: (NSString *)uniqueKey andFinishCallback:(onFinishSlideShowBlock)finishCB;
-(void)unregisterSlideShowStopEffectObserverWithKey: (NSString *)uniqueKey;

-(void)notifySlideShowFinish;
-(void)notifySlideShowFinishViewShow;
-(void)notifySlideShowStopEffect;

@end
