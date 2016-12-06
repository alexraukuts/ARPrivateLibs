//
//  CEditorViewController.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 9. 24..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CDefineCommon.h"
#import "CToolbarOverlayView.h"

@class CFileData, CInlinePopup;
@class CSearchToolbarMediator;
@class CoreViewEditModeFacade;
@interface CEditorViewController : UIViewController<EngineDelegate,CToolbarOverlayViewDelegate>

@property (weak, nonatomic) IBOutlet UIView *toolContainerView;
@property (weak, nonatomic) IBOutlet UIView *drawToolContainerView;
@property (weak, nonatomic) IBOutlet UIView *searchToolContainerView;
@property (weak, nonatomic) IBOutlet UIView *renderContainerView;
@property (weak, nonatomic) IBOutlet UIView *reduceContainerView;
@property (weak, nonatomic) IBOutlet CToolbarOverlayView *toolbarOverlayView;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *toolbarHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *drawToolbarHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *searchToolbarHeightConstraint;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *reduceToolbarHeightConstraint;

@property (strong, nonatomic) CInlinePopup* inlinePopup;
@property (strong, nonatomic) CSearchToolbarMediator *searchToolbarMediator;
@property (strong, nonatomic) CoreViewEditModeFacade *coreViewEditModeFacade;

@property (assign) id renderViewController;
@property BOOL isStatusBarHidden;

@property (nonatomic, retain) NSString * savePath;

@property int pptTemplateType;
@property (strong, nonatomic) UIImageView *watermarkImageView;

- (void)onEditViewModeChange:(BOOL)isViewMode;
- (void)updateToolbarHeightWithOrientation:(UIInterfaceOrientation)orientation;
- (void)hideDrawToolbar:(void(^)(BOOL selectedDrawButton))completion;
- (void)showDrawToolbar:(void(^)(BOOL selectedDrawButton))completion;
- (void)showReduceToolbar;
- (void)showReduceToolbarWithCompletion:(void (^)(BOOL finished))completion;
- (void)hideReduceToolbarWithCompletion:(void (^)(BOOL finished))completion;
- (void)showTableResizeToolbarWithCompletion:(void (^)(BOOL finished))completion;
- (void)hideTableResizeToolbarWithCompletion:(void (^)(BOOL finished))completion;
- (void)showConditionalFormatRangeToolbarWithCompletion:(void (^)(BOOL finished))completion itemIndex:(int)index;
- (void)hideConditionalFormatRangeToolbarWithCompletion:(void (^)(BOOL finished))completion;
- (void)showAdjustChartDataRangeToolbarWithCompletion:(void (^)(BOOL finished))completion;
- (void)hideAdjustChartDataRangeToolbarWithCompletion:(void (^)(BOOL finished))completion;
- (void)showWatermark;
- (void)hideWatermark;

- (void)registInlinePopup;
- (void)unregistInlinePopup;

- (void)registMinZoomCB;
- (void)unregistMinZoomCB;

- (void)updateRulerToolbar:(BOOL)isHidden;
- (void)updateAutoRestore:(NSInteger)minute;

- (BOOL)isDrawToolbarDisplayed;
- (BOOL)isSearchToolbarDisplayed;

- (BOOL)isShowTableResizeToolbar;
- (BOOL)isShowConditionalFormatRangeToolbar;
- (BOOL)isShowChartDataRangeToolbar;

- (BOOL)isModified;
- (void)saveBackDocumentPathEx:(NSString*)filePath;
- (void)saveBackDidCancelEx;

//CEngineReceiver에 CEditorViewController가 등록 되면 상속하는 하위 클래스들을 등록이 되지 않고 있음
//하위 클래스로 OnNewDoc callback이 전달되었음을 알리기 위해 아래 hook method를 오버라이딩 하도록 함
- (void)propagateNewDoc;
- (void)propagateLoadComplete;
- (void)changeScreenSize:(CGFloat)height;
- (void)willShowPropertyMenu;
- (void)willHidePropertyMenu;
- (BOOL)isInsideEditTextView;
- (void)startInsertFreeformShapes;
- (void)endInsertFreeformShapes;

- (void)spellingCheck:(LPSPELLCHECK_INFO)spellCheckInfo;
- (void)initSpellCheckScreenMode;

@end
