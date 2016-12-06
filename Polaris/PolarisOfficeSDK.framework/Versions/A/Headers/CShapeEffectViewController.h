//
//  CShapeEffectViewController.h
//  PolarisOffice
//
//  Created by 유선욱 on 2014. 12. 11..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import "CPropertyMenuControlContainerViewController.h"

@protocol CShapeEffectViewControllerDelegate <NSObject>

- (void)changeShapeEffectViewHeight:(NSInteger)selectedEffect;

@end

@interface CShapeEffectViewController : CPropertyMenuControlContainerViewController

typedef enum {
    PropertyEffectType_Shape,
    PropertyEffectType_Line,
    PropertyEffectType_Image,
    PropertyEffectType_Video,

    PropertyEffectType_Max,
} PropertyEffectType;

@property (nonatomic) PropertyEffectType propertyEffectType;
@property (nonatomic) id<CShapeEffectViewControllerDelegate> delegate;

@end
