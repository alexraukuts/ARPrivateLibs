//
//  CColorPickerViewFlowLayout.h
//  PolarisOffice
//
//  Created by 조기현 on 2014. 12. 17..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CCustomCollectionViewFlowLayout : UICollectionViewFlowLayout <UICollectionViewDelegateFlowLayout>

- (id)initWithCalcuBlock:(void(^)(CGRect))calcuBlock horiSpacing:(NSInteger)horizontal vertSpacing:(NSInteger)vertical;

@end
