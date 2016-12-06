//
//  CInlinePopupFactory.h
//  PolarisOffice
//
//  Created by dowith4 on 2015. 2. 2..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QBPopupMenuItem.h"
#import "CEngineHelper.h"
#import "CEngineDefine.h"
#import "CoreInlinePopupFacade.h"
#import "CStoryboardPerform.h"
#import "CModalViewController.h"
#import "CDevicePerform.h"
#import "CClipboardManager.h"

#import "CResizePopupViewController.h"
#import "CRotatePopupViewController.h"
#import "CSearchPopupViewController.h"
#import "CInsertTableCellPopupViewController.h"
#import "CSplitTableCellPopupViewController.h"
#import "CGalleryViewController.h"
#import "CEditHyperlinkPopupViewController.h"
#import "CMemoPopupViewController.h"
#import "CTrackReviewPopupViewController.h"
#import "CPdfViewController.h"

@interface CInlinePopupFactory : NSObject <CGalleryViewControllerDelegate>

- (NSArray*) makeInlinePopupItemsWithObjectType:(ObjectType)type;
- (instancetype) initWithViewController:(UIViewController*)viewController;
- (CGRect)calculateActionSheetPosition;

- (BOOL)canFormatPaste;
- (BOOL)canInsertMemo;
- (BOOL)canEqualWidthCell;
- (BOOL)canEqualHeightCell;
- (BOOL)canMergeCell;
- (BOOL)canDeleteRowCell;
- (BOOL)canDeleteColumnCell;
- (BOOL)canSelectRowCell;
- (BOOL)canSelectColumnCell;
- (BOOL)canSelectAllCell;
- (BOOL)isHeaderFooterEditMode;
- (BOOL)isCaretNormalMode;
- (BOOL)isSelectAll;
-(BOOL) checkAlbumPermission;

@property (weak, nonatomic) UIViewController* viewController;
@property (strong, nonatomic) CoreInlinePopupFacade *inlinePopupFacade;
@property ObjectType objectType;
@property CGPoint point;
@property (strong, nonatomic) UIDocumentInteractionController *documentInteractionController;
@property (strong, nonatomic) CClipboardManager* clipboardManager;

@end
