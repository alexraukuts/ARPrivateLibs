//
//  CAnnotationListViewController.h
//  PolarisOffice
//
//  Created by 조기현 on 2015. 3. 9..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CPdfAnnotationProvider.h"

@interface CAnnotationListViewController : UIViewController<UITableViewDataSource, UITableViewDelegate>

@property (strong, nonatomic) CPdfAnnotationProvider *annotationProvider;

@end

@interface CAnnoteItem : NSObject

@property (nonatomic) PDF_ANNOT_ITEM item;

@end