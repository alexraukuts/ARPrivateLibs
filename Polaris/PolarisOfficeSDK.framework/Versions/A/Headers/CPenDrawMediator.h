//
//  PenDrawMediator.h
//  PolarisOffice
//
//  Created by 조기현 on 2015. 2. 5..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import "CMenuMediator.h"

@interface CPenDrawMediator : CMenuMediator

-(void)setPopupHeight:(NSInteger)height;
-(NSInteger)getPopupHeight;
- (void)setDismissViewCB:(void(^)(BOOL))dismissCB;
- (void)setChangeAnnotationMode:(BOOL)isChange;

@end
