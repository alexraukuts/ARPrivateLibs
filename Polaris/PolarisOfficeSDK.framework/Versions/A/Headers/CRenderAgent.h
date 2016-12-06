//
//  CRenderFunction.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 1. 14..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CRenderBlock.h"
#import "CRenderAgentDelegate.h"
#import "CRenderAgentClientDelegate.h"

@interface CRenderAgent : NSObject
<CRenderAgentInternalDelegate, CRenderAgentExternalDelegate>
{
    NSMutableDictionary *inlineMenuNotificationBlockDic;
    NSMutableDictionary *minZoomNotificationBlockDic;
    NSMutableDictionary *penModeNotificationBlockDic;
    NSMutableDictionary *keyboardNotificationBlockDic;
    NSMutableDictionary *sheetTextViewNotificationBlockDic;
    NSMutableDictionary *changeDocumentAreaNotificationBlockDic;
    NSMutableDictionary *blankObjectNotificationBlockDic;
    NSMutableDictionary *stickyNoteNotificationBlockDic;
	NSMutableDictionary *ignoreChangeScreenBlockDic;
	NSMutableDictionary *isDocInsideEditTextViewBlockDic;
	NSMutableDictionary *freeFormShapeEnableBlockDic;
	NSMutableDictionary *cellEditEnableBlockDic;
	NSMutableDictionary *sheetTextBoxViewBlockDic;
	NSMutableDictionary *slideStopVideoBlockDic;
}

@end
