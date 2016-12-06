//
//  RenderViewProvider.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 1. 13..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CBaseRenderView.h"
#import "CFileData.h"

typedef Class ClassKindOfCBaseRenderView;

@interface RenderViewClassProvider : NSObject

+(ClassKindOfCBaseRenderView)requestRenderViewClassWithDocumentType: (FileExtensionType) doucmentType;
+(ClassKindOfCBaseRenderView)requestRenderViewClassByCurrentDocumentType;

@end
