//
//  CPdfViewController.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 9. 25..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import "CEditorViewController.h"
#import "CPdfAnnotationProvider.h"

@interface CPdfViewController : CEditorViewController

@property (strong, nonatomic) CPdfAnnotationProvider *annotationProvider;

- (void)registIsReflowText:(void(^)(BOOL isReflowText))completion;
- (void)showStickyNotePopup;
- (void)notifyIsShowAnnotation;
- (void)onSinglePageLayout:(BOOL)isSinglePageLayout;

@end
