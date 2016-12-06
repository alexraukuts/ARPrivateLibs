//
//  CToolbarMenuViewController.h
//  PolarisOffice
//
//  Created by succorer on 2015. 1. 6..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CToolbarMenuViewController : UIViewController

@property (retain, nonatomic) NSString * menuActionType;

- (void)updateTitle:(NSString *)title;
- (void)updateOndrawBitmap:(int)event;
- (void)changeEditorMode;

- (BOOL)isUndoEnable;
- (BOOL)isRedoEnable;

- (IBAction)findButtonTouched:(id)sender;
- (IBAction)propertyButtonTouched:(id)sender;
- (IBAction)undoAction:(id)sender;
- (IBAction)redoAction:(id)sender;

@end
