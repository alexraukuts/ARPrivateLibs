//
//  CGalleryMenuViewController.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 10. 28..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UImagePicker.h"

@interface CGalleryMenuViewController : UIViewController
{
    UImagePicker* _imagePicker;
}

- (CGFloat)contentsHeight;

@end
