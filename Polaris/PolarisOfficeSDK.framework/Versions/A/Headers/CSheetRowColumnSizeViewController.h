//
//  CSheetRowColumnSizeViewController.h
//  PolarisOffice
//
//  Created by d_infraware on 2015. 1. 8..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CSheetRowColumnSizeViewController : UIViewController<UITextFieldDelegate>

typedef enum {
    SheetRowColumnSizeType_None,
    SheetRowColumnSizeType_DefaultColumnWidth,
    SheetRowColumnSizeType_ColumnWidth,
    SheetRowColumnSizeType_RowHeight
} SheetRowColumnSizeType;

@property (nonatomic) SheetRowColumnSizeType sheetRowColumnSizeType;

@end
