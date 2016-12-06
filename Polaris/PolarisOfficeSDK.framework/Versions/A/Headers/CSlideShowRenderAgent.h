//
//  CSlideShowRenderAgent.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 2. 24..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CRenderBlock.h"
#import "CSlideShowRenderAgentDelegate.h"

@interface CSlideShowRenderAgent : NSObject
<CSlideShowRenderAgentDelegate>
{
    NSMutableDictionary *slideShowFinishNotificationBlockDic;
	NSMutableDictionary *slideShowStopEffectNotificationBlockDic;
	NSMutableDictionary *changeDocumentAreaNotificationBlockDic;
	NSMutableDictionary *slideShowFinishViewShowNotificationBlockDic;
}
@end
