//
//  CPointerMenuViewController.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 2. 22..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import "CMenuViewController.h"
#import "CMenuMediator.h"

typedef enum pointerType
{
    pointer_red = 0,
    pointer_yello,
    pointer_green,
    pointer_blue,
    pointer_purple
} pointerType;

@interface CPointerMenuViewController : CMenuViewController
@property (assign) CMenuMediator *mediator;

@property (nonatomic, assign) pointerType pointerColor;
@property (copy) void (^blockColorSelect)(pointerType);

@end
