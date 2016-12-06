//
//  CRenderViewController.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 9. 24..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CRenderBlock.h"
#import "CRenderAgent.h"
#import "CBaseRenderView.h"

@class CBaseRenderView;
@class CFileData;
@interface CRenderViewController : UIViewController

@property (weak, nonatomic, readonly) id<CRenderAgentExternalDelegate> agent;

@end
