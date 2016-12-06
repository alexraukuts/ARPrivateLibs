//
//  CPdfAnnotationProvider.h
//  PolarisOffice
//
//  Created by 조기현 on 2015. 3. 10..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import "CDefineCommon.h"

@interface CPdfAnnotationProvider : NSObject

- (void)unregistEngineCB;

- (PDF_ANNOT_ITEM)getAnnotationItemAtIndex:(PagePosition)index;
- (PDF_SELECT_ANNOTS_RESULT)getMultiselectedAnnotationsResult;

@end
