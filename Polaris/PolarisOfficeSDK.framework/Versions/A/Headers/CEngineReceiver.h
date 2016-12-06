//
//  CEngineReceiver.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 12. 1..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CEngineBlock.h"

@interface CEngineReceiver : NSObject

+ (CEngineReceiver *)sharedEngineReceiver;

- (void)registOnObjectPointsWithPriority:(int)priority sender:(id)sender success:(onObjectPointsSuccessBlock)success failure:(onObjectPointsFailureBlock)failure;
- (void)unregistOnObjectPointsWithSender:(id)sender;

- (void)registTerminateWithPriority:(int)priority sender:(id)sender success:(onTerminateSuccessBlock)success failure:(onTerminateFailureBlock)failure;
- (void)unregistTerminateWithSender:(id)sender;

- (void)registLoadFailWithPriority:(int)priority sender:(id)sender success:(onLoadFailSuccessBlock)success failure:(onLoadFailFailureBlock)failure;
- (void)unregistLoadFailWithSender:(id)sender;

- (void)registLoadCompleteWithPriority:(int)priority sender:(id)sender success:(onLoadCompleteSuccessBlock)success failure:(onLoadCompleteFailureBlock)failure;
- (void)unregistLoadCompleteWithSender:(id)sender;

- (void)registTotalLoadCompleteWithPriority:(int)priority sender:(id)sender success:(onTotalLoadCompleteSuccessBlock)success failure:(onTotalLoadCompleteFailureBlock)failure;
- (void)unregistTotalLoadCompleteWithSender:(id)sender;

- (void)registNewDocWithPriority:(int)priority sender:(id)sender success:(onNewDocSuccessBlock)success failure:(onNewDocFailureBlock)failure;
- (void)unregistNewDocWithSender:(id)sender;

- (void)registCloseDocWithPriority:(int)priority sender:(id)sender success:(onCloseDocSuccessBlock)success failure:(onCloseDocFailureBlock)failure;
- (void)unregistCloseDocWithSender:(id)sender;

- (void)registDrawBitmapWithPriority:(int)priority sender:(id)sender success:(onDrawBitmapSuccessBlock)success failure:(onDrawBitmapFailureBlock)failure;
- (void)unregistDrawBitmapWithSender:(id)sender;

- (void)registGetPageThumbnailWithPriority:(int)priority sender:(id)sender success:(onGetPageThumbnailSuccessBlock)success failure:(onGetPageThumbnailFailureBlock)failure;
- (void)unregistGetPageThumbnailWithSender:(id)sender;

- (void)registPageMoveWithPriority:(int)priority sender:(id)sender success:(onPageMoveSuccessBlock)success failure:(onPageMoveFailureBlock)failure;
- (void)unregistPageMoveWithSender:(id)sender;

- (void)registDrawGlviewWithPriority:(int)priority sender:(id)sender success:(onDrawGlviewSuccessBlock)success failure:(onDrawGlviewFailureBlock)failure;
- (void)unregistDrawGlviewWithSender:(id)sender;

- (void)registerBitmapProvider: (id)sender request:(onGetBitmapRequestBlock)request;
- (void)unregisterGetBitmapProvider:(id)sender;

- (void)registSetDataRangeWithPriority:(int)priority sender:(id)sender success:(onSetDataRangeSuccessBlock)success failure:(onSetDataRangeFailureBlock)failure;
- (void)unregistSetDataRangeWithSender:(id)sender;

- (void)registerGetFormulaFieldTextProvider: (id)sender request:(onGetFormulaFieldTextRequestBlock)request;
- (void)unregisterGetFormulaFieldTextProvider:(id)sender;

- (void)registerGetFormulaFieldSelectionProvider: (id)sender request:(onGetFormulaFieldSelectionRequestBlock)request;
- (void)unregisterGetFormulaFieldSelectionProvider:(id)sender;

- (void)registSetFormulaFieldSelectionWithPriority:(int)priority sender:(id)sender success:(onSetFormulaFieldSelectionSuccessBlock)success failure:(onSetFormulaFieldSelectionFailureBlock)failure;
- (void)unregistSetFormulaFieldSelectionWithSender:(id)sender;

- (void)registSetFormulaFieldTextWithPriority:(int)priority sender:(id)sender success:(onSetFormulaFieldTextSuccessBlock)success failure:(onSetFormulaFieldTextFailureBlock)failure;
- (void)unregistSetFormulaFieldTextWithSender:(id)sender;

- (void)registSetFormulaSelectionEnabledWithPriority:(int)priority sender:(id)sender success:(onSetFormulaSelectionEnabledSuccessBlock)success failure:(onSetFormulaSelectionEnabledFailureBlock)failure;
- (void)unregistSetFormulaSelectionEnabledWithSender:(id)sender;

- (void)registGetCellStyleTextProvider: (id)sender request:(onGetCellStyleTextRequestBlock)request;
- (void)unregistGetCellStyleTextProvider:(id)sender;

- (void)registGetCellStyleTextLenProvider: (id)sender request:(onGetCellStyleTextLenRequestBlock)request;
- (void)unregistGetCellStyleTextLenProvider:(id)sender;

- (void)registCoreNotifyWithPriority:(int)priority sender:(id)sender success:(onCoreNotifySuccessBlock)success failure:(onCoreNotifyFailureBlock)failure;
- (void)unregistCoreNotifyWithSender:(id)sender;

- (void)registCoreNotify2WithPriority:(int)priority sender:(id)sender success:(onCoreNotify2SuccessBlock)success failure:(onCoreNotify2FailureBlock)failure;
- (void)unregistCoreNotify2WithSender:(id)sender;

- (void)registSheetChartWithPriority:(int)priority
                            sender:(id)sender
                           success:(onSheetChartSuccessBlock)success
                           failure:(onSheetChartFailureBlock)failure;
- (void)unregistSheetChartWithSender:(id)sender;

- (void)registPptInsertChartWithPriority:(int)priority
                                sender:(id)sender
                               success:(onPptInsertChartSuccessBlock)success
                               failure:(onPptInsertChartFailureBlock)failure;
- (void)unregistPptInsertChartWithSender:(id)sender;

- (void)registSaveDocWithPriority:(int)priority sender:(id)sender success:(onSaveDocSuccessBlock)success failure:(onSaveDocFailureBlock)failure;
- (void)unregistSaveDocWithSender:(id)sender;

- (void)registPrintedCountWithPriority:(int)priority sender:(id)sender success:(onPrintedCountSuccessBlock)success failure:(onPrintedCountFailureBlock)failure;
- (void)unregistPrintedCountWithSender:(id)sender;

- (void)registPrintModeWithPriority:(int)priority sender:(id)sender success:(onPrintModeSuccessBlock)success failure:(onPrintModeFailureBlock)failure;
- (void)unregistPrintModeWithSender:(id)sender;

- (void)registSearchModeWithPriority:(int)priority sender:(id)sender success:(onSearchModeSuccessBlock)success failure:(onSearchModeFailureBlock)failure;
- (void)unregistSearchModeWithSender:(id)sender;

- (void)registPrintCompletedWithPriority:(int)priority sender:(id)sender success:(onPrintCompletedSuccessBlock)success failure:(onPrintCompletedFailureBlock)failure;
- (void)unregistPrintCompletedWithSender:(id)sender;

- (void)registDrawPreviewBitmapWithPriority:(int)priority sender:(id)sender success:(onDrawPreviewBitmapSuccessBlock)success failure:(onDrawPreviewBitmapFailureBlock)failure;
- (void)unregistDrawPreviewBitmapWithSender:(id)sender;

- (void)registEditOrViewModeWithPriority:(int)priority sender:(id)sender success:(onEditOrViewModeSuccessBlock)success failure:(onEditOrViewModeFailureBlock)failure;
- (void)unregistEditOrViewModeWithSender:(id)sender;

- (void)registEditCopyCutWithPriority:(int)priority sender:(id)sender success:(onEditCopyCutSuccessBlock)success failure:(onEditCopyCutFailureBlock)failure;
- (void)unregistEditCopyCutWithSender:(id)sender;

- (void)registSheetSetHyperLinkResultWithPriority:(int)priority sender:(id)sender success:(onSheetSetHyperLinkResultSuccessBlock)success failure:(onSheetSetHyperLinkResultFailureBlock)failure;
- (void)unregistSheetSetHyperLinkResultWithSender:(id)sender;

- (void)registSlideAnimationStartWithPriority:(int)priority sender:(id)sender success:(onSlideAnimationStartSuccessBlock)success failure:(onSlideAnimationStartFailureBlock)failure;
- (void)unregistSlideAnimationStartWithSender:(id)sender;

- (void)registSlideAnimationEndWithPriority:(int)priority sender:(id)sender success:(onSlideAnimationEndSuccessBlock)success failure:(onSlideAnimationEndFailureBlock)failure;
- (void)unregistSlideAnimationEndWithSender:(id)sender;

- (void)registSheetInputFieldWithPriority:(int)priority sender:(id)sender success:(onSheetInputFieldSuccessBlock)success failure:(onSheetInputFieldFailureBlock)failure;
- (void)unregistSheetInputFieldWithSender:(id)sender;

- (void)registChangeScreenWithPriority:(int)priority sender:(id)sender success:(onChangeScreenSuccessBlock)success failure:(onChangeScreenFailureBlock)failure;
- (void)unregistChangeScreenWithSender:(id)sender;

- (void)registSheetGoToCellWithPriority:(int)priority sender:(id)sender success:(onSheetGoToCellSuccessBlock)success failure:(onSheetGoToCellFailureBlock)failure;
- (void)unregistSheetGoToCellWithSender:(id)sender;

- (void)registSheetNextCommentSearchFinishWithPriority:(int)priority sender:(id)sender success:(onSheetNextCommentSearchFinishSuccessBlock)success failure:(onSheetNextCommentSearchFinishFailureBlock)failure;
- (void)unregistSheetNextCommentSearchFinishWithSender:(id)sender;

- (void)registSheetPrevCommentSearchFinishWithPriority:(int)priority sender:(id)sender success:(onSheetPrevCommentSearchFinishSuccessBlock)success failure:(onSheetPrevCommentSearchFinishFailureBlock)failure;
- (void)unregistSheetPrevCommentSearchFinishWithSender:(id)sender;

- (void)registSheetMemoNavigateWithPriority:(int)priority sender:(id)sender success:(onSheetMemoNavigateSuccessBlock)success failure:(onSheetMemoNavigateFailureBlock)failure;
- (void)unregistSheetMemoNavigateWithSender:(id)sender;

- (void)registTrackReviewModeInfoWithPriority:(int)priority sender:(id)sender success:(onTrackReviewModeInfoSuccessBlock)success failure:(onTrackReviewModeInfoFailureBlock)failure;
- (void)unregistTrackReviewModeInfoWithSender:(id)sender;

- (void)registSetAnnotationWithPriority:(int)priority sender:(id)sender success:(onSetAnnotationSuccessBlock)success failure:(onSetAnnotationFailureBlock)failure;
- (void)unregistSetAnnotationWithSender:(id)sender;

- (void)registPDFAnnotationCountWithPriority:(int)priority sender:(id)sender success:(onPDFAnnotationCountSuccessBlock)success failure:(onPDFAnnotationCountFailureBlock)failure;
- (void)unregistPDFAnnotationCountWithSender:(id)sender;

- (void)registPDFSingleTapWithPriority:(int)priority sender:(id)sender success:(onPDFSingleTapSuccessBlock)success failure:(onPDFSingleTapFailureBlock)failure;
- (void)unregistPDFSingleTapWithSender:(id)sender;

- (void)registPDFSelectAnnotsWithPriority:(int)priority sender:(id)sender success:(onPDFSelectAnnotsSuccessBlock)success failure:(onPDFSelectAnnotsFailureBlock)failure;
- (void)unregistPDFSelectAnnotsWithSender:(id)sender;

- (void)registPDFUndoRedoWithPriority:(int)priority sender:(id)sender success:(onPDFUndoRedoSuccessBlock)success failure:(onPDFUndoRedoFailureBlock)failure;
- (void)unregistPDFUndoRedoWithSender:(id)sender;

- (void)registerPptGetSlidesBitmapProvider: (id)sender request:(onPptGetSlidesBitmapRequestBlock)request;
- (void)unregisterPptGetSlidesBitmapProvider:(id)sender;

- (void)registPptDrawSlidesBitmapWithPriority:(int)priority sender:(id)sender success:(onPptDrawSlidesBitmapSuccessBlock)success failure:(onPptDrawSlidesBitmapFailureBlock)failure;
- (void)unregistPptDrawSlidesBitmapWithSender:(id)sender;

- (void)registSheetResizeTableWithPriority:(int)priority sender:(id)sender success:(onSheetResizeTableSuccessBlock)success failure:(onSheetResizeTableFailureBlock)failure;
- (void)unregistSheetResizeTableWithSender:(id)sender;

- (void)registSetRangeInputFieldTextWithPriority:(int)priority sender:(id)sender success:(onSetRangeInputFieldTextSuccessBlock)success failure:(onSetRangeInputFieldTextFailureBlock)failure;
- (void)unregistSetRangeInputFieldTextWithSender:(id)sender;

- (void)registChangeAutoFilterStatusWithPriority:(int)priority sender:(id)sender success:(onChangeAutoFilterStatusSuccessBlock)success failure:(onChangeAutoFilterStatusFailureBlock)failure;
- (void)unregistChangeAutoFilterStatusWithSender:(id)sender;

- (void)registSetAutoFilterRectWithPriority:(int)priority sender:(id)sender success:(onSetAutoFilterRectSuccessBlock)success failure:(onSetAutoFilterRectFailureBlock)failure;
- (void)unregistSetAutoFilterRectWithSender:(id)sender;

- (void)registSetAutoFilterMenuInfoWithPriority:(int)priority sender:(id)sender success:(onSetAutoFilterMenuInfoSuccessBlock)success failure:(onSetAutoFilterMenuInfoFailureBlock)failure;
- (void)unregistSetAutoFilterMenuInfoWithSender:(id)sender;

- (void)registClearAniFrameStartWithPriority:(int)priority sender:(id)sender success:(onClearAniFrameStartSuccessBlock)success failure:(onClearAniFrameStartFailureBlock)failure;
- (void)unregistClearAniFrameStartWithSender:(id)sender;

- (void)registClearAniFrameEndWithPriority:(int)priority sender:(id)sender success:(onClearAniFrameEndSuccessBlock)success failure:(onClearAniFrameEndFailureBlock)failure;
- (void)unregistClearAniFrameEndWithSender:(id)sender;

- (void)registInsertFreeformShapesWithPriority:(int)priority sender:(id)sender success:(onInsertFreeformShapesSuccessBlock)success failure:(onInsertFreeformShapesFailureBlock)failure;
- (void)unregistInsertFreeformShapesWithSender:(id)sender;

- (void)registSheetFunctionWithPriority:(int)priority sender:(id)sender success:(onSheetFunctionSuccessBlock)success failure:(onSheetFunctionFailureBlock)failure;
- (void)unregistSheetFunctionWithSender:(id)sender;

- (void)registSheetDataValidationErrorWithPriority:(int)priority sender:(id)sender success:(onSheetDataValidationErrorSuccessBlock)success failure:(onSheetDataValidationErrorFailureBlock)failure;
- (void)unregistSheetDataValidationErrorWithSender:(id)sender;

- (void)registSheetDataValidationMenuWithPriority:(int)priority sender:(id)sender success:(onSheetDataValidationMenuSuccessBlock)success failure:(onSheetDataValidationMenuFailureBlock)failure;
- (void)unregistSheetDataValidationMenuWithSender:(id)sender;

- (void)registSheetPivotTableInDocumentWithPriority:(int)priority sender:(id)sender success:(onSheetPivotTableInDocumentSuccessBlock)success failure:(onSheetPivotTableInDocumentFailureBlock)failure;
- (void)unregistSheetPivotTableInDocumentWithSender:(id)sender;

- (void)registOLEFormatInfoWithPriority:(int)priority sender:(id)sender success:(onOLEFormatInfoSuccessBlock)success failure:(onOLEFormatInfoFailureBlock)failure;
- (void)unregistOLEFormatInfoWithSender:(id)sender;

- (void)registSheetEditBlockWithPriority:(int)priority sender:(id)sender success:(onSheetEditBlockSuccessBlock)success failure:(onSheetEditBlockFailureBlock)failure;
- (void)unregistSheetEditBlockWithSender:(id)sender;

- (void)registSheetDynamicLoadingWithPriority:(int)priority sender:(id)sender success:(onSheetDynamicLoadingSuccessBlock)success failure:(onSheetDynamicLoadingFailureBlock)failure;
- (void)unregistSheetDynamicLoadingWithSender:(id)sender;

- (void)registSheetCircularReferenceWarningWithPriority:(int)priority sender:(id)sender success:(onSheetCircularReferenceWarningSuccessBlock)success failure:(onSheetCircularReferenceWarningFailureBlock)failure;
- (void)unregistSheetCircularReferenceWarningWithSender:(id)sender;

- (void)registSheetFilterCommandResultWithPriority:(int)priority sender:(id)sender success:(onSheetFilterCommandResultSuccessBlock)success failure:(onSheetFilterCommandResultFailureBlock)failure;
- (void)unregistSheetFilterCommandResultWithSender:(id)sender;

- (void)registSheetCellMoveCommandResultWithPriority:(int)priority sender:(id)sender success:(onSheetCellMoveCommandResultSuccessBlock)success failure:(onSheetCellMoveCommandResultFailureBlock)failure;
- (void)unregistSheetCellMoveCommandResultWithSender:(id)sender;

- (void)registSheetStatusBarFuncDataWithPriority:(int)priority sender:(id)sender success:(onSheetStatusBarFuncDataSuccessBlock)success failure:(onSheetStatusBarFuncDataFailureBlock)failure;
- (void)unregistSheetStatusBarFuncDataWithSender:(id)sender;

- (void)registSheetHyperlinkTooltipWithPriority:(int)priority sender:(id)sender success:(onSheetHyperlinkTooltipSuccessBlock)success failure:(onSheetHyperlinkTooltipFailureBlock)failure;
- (void)unregistSheetHyperlinkTooltipWithSender:(id)sender;

- (void)registSheetInsertDeleteCellResultWithPriority:(int)priority sender:(id)sender success:(onSheetInsertDeleteCellResultSuccessBlock)success failure:(onSheetInsertDeleteCellResultFailureBlock)failure;
- (void)unregistSheetInsertDeleteCellResultWithSender:(id)sender;

- (void)registSheetTableTotalsRowMenuWithPriority:(int)priority sender:(id)sender success:(onSheetTableTotalsRowMenuSuccessBlock)success failure:(onSheetTableTotalsRowMenuFailureBlock)failure;
- (void)unregistSheetTableTotalsRowMenuWithSender:(id)sender;

- (void)registSheetPivotFilterMenuWithPriority:(int)priority sender:(id)sender success:(onSheetPivotFilterMenuSuccessBlock)success failure:(onSheetPivotFilterMenuFailureBlock)failure;
- (void)unregistSheetPivotFilterMenuWithSender:(id)sender;

- (void)registSheetProtectionSheetCannotEditWithPriority:(int)priority sender:(id)sender success:(onSheetProtectionSheetCannotEditSuccessBlock)success failure:(onSheetProtectionSheetCannotEditFailureBlock)failure;
- (void)unregistSheetProtectionSheetCannotEditWithSender:(id)sender;

- (void)registShowKeypadWithPriority:(int)priority sender:(id)sender success:(onShowKeypadSuccessBlock)success failure:(onShowKeypadFailureBlock)failure;
- (void)unregistShowKeypadWithSender:(id)sender;

- (void)registerGetResStringIDProvider: (id)sender request:(onGetResStringIDRequestBlock)request;
- (void)unregisterGetResStringIDProvider:(id)sender;

- (void)registerGetSheetCommentAuthorNameProvider: (id)sender request:(onGetSheetCommentAuthorNameRequestBlock)request;
- (void)unregisterGetSheetCommentAuthorNameProvider:(id)sender;

- (void)registerPptGetMasterLayoutBitmapProvider: (id)sender request:(onPptGetMasterLayoutBitmapRequestBlock)request;
- (void)unregisterPptGetMasterLayoutBitmapProvider:(id)sender;

- (void)registPptDrawMasterLayoutBitmapWithPriority:(int)priority sender:(id)sender success:(onPptDrawMasterLayoutBitmapSuccessBlock)success failure:(onPptDrawMasterLayoutBitmapFailureBlock)failure;
- (void)unregistPptDrawMasterLayoutBitmapWithSender:(id)sender;

- (void)registPDFHyperLinkWithPriority:(int)priority sender:(id)sender success:(onPDFHyperLinkSuccessBlock)success failure:(onPDFHyperLinkFailureBlock)failure;
- (void)unregistPDFHyperLinkWithSender:(id)sender;

- (void)registerGetPDFOutputWithAnnotationProvider: (id)sender request:(onGetPDFOutputWithAnnotationRequestBlock)request;
- (void)unregisterGetPDFOutputWithAnnotationProvider:(id)sender;

- (void)registSheetTableTotalsRowWithPriority:(int)priority sender:(id)sender success:(onSheetTableTotalsRowSuccessBlock)success failure:(onSheetTableTotalsRowFailureBlock)failure;
- (void)unregistSheetTableTotalsRowWithSender:(id)sender;

- (void)registSheetProtectionWithPriority:(int)priority sender:(id)sender success:(onSheetProtectionSuccessBlock)success failure:(onSheetProtectionFailureBlock)failure;
- (void)unregistSheetProtectionWithSender:(id)sender;

- (void)registPDFModifiedAnnotationWithPriority:(int)priority sender:(id)sender success:(onPDFModifiedAnnotationSuccessBlock)success failure:(onPDFModifiedAnnotationFailureBlock)failure;
- (void)unregistPDFModifiedAnnotationWithSender:(id)sender;

- (void)registPDFSelectWidgetWithPriority:(int)priority sender:(id)sender success:(onPDFSelectWidgetSuccessBlock)success failure:(onPDFSelectWidgetFailureBlock)failure;
- (void)unregistPDFSelectWidgetWithSender:(id)sender;

- (void)registSpellCheckWithPriority:(int)priority sender:(id)sender success:(onSpellCheckSuccessBlock)success failure:(onSpellCheckFailureBlock)failure;
- (void)unregistSpellCheckWithSender:(id)sender;
- (void)registUndoRedoWithPriority:(int)priority sender:(id)sender success:(onUndoRedoSuccessBlock)success failure:(onUndoRedoFailureBlock)failure;
- (void)unregistUndoRedoWithSender:(id)sender;

- (void)registVirtualKeypadWithPriority:(int)priority sender:(id)sender success:(onVirtualKeypadSuccessBlock)success failure:(onVirtualKeypadFailureBlock)failure;
- (void)unregistVirtualKeypadWithSender:(id)sender;

- (void)registSlideShowMemoryLackWithPriority:(int)priority sender:(id)sender success:(onSlideShowMemoryLackSuccessBlock)success failure:(onSlideShowMemoryLackFailureBlock)failure;
- (void)unregistSlideShowMemoryLackWithSender:(id)sender;
@end
