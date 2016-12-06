//
//  CClipboardManager.h
//  PolarisOffice
//
//  Created by dowith4 on 2015. 2. 13..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CClipboardManager : NSObject

+(instancetype) sharedClipboardManager;

-(BOOL)hasClipString;
-(NSInteger)getClipDataType;
-(NSInteger)getClipContentType;
-(NSString*)getClipString;
-(NSArray*)getClipArray;
-(void)setClipString:(NSString*)string;
-(BOOL)shouldUsingEngineClipboard;       // YES일 경우 엔진을 이용한 paste를 해야함
-(NSInteger)getInternalMode;
-(void)initInternalMode;
-(void)setUseClipboardMode:(BOOL)mode;

@end
