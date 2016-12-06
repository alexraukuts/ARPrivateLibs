//
//  CColorPickerViewController.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 11. 25..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CColorHueData;

@protocol CColorPickerViewControllerDelegate <NSObject>

- (void)colorPickerViewController:(id)sender selectedColor:(UIColor *)selectedColor;
- (void)colorPickerViewController:(id)sender selectPrevColor:(UIColor *)prevColor;

@end

@interface CColorPickerViewController : UIViewController <UITextFieldDelegate>

- (void)initWithDelegate:(id<CColorPickerViewControllerDelegate>)delegate prevColor:(UIColor *)prevColor;
- (void)colorHueViewDidSelect:(CColorHueData *)colorHueData;
- (void)setTextfieldAlertType:(BOOL)type parentViewController:(UIViewController*)parent;
- (void)changeValueForTextFieldEndEditing;

@end
