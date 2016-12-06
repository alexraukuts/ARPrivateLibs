//
//  CoreViewEditModeFacade.h
//  PolarisOffice
//
//  Created by 고 명부 on 2015. 2. 11..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief 보기/편집 모드 전환 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>

@interface CoreViewEditModeFacade : NSObject
-(bool)isViewMode;
-(bool)isEditMode;
-(void)SwitchViewMode;
-(void)SwitchEditMode;
@end
