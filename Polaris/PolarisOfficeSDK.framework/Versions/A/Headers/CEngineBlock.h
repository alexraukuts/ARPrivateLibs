//
//  CEngineBlock.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 12. 1..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "E.h"
#import "EV.h"

@interface CEngineBlock : NSObject

@property (strong, nonatomic) NSString *key;

@end

typedef void (^onObjectPointsSuccessBlock)(void);
typedef void (^onObjectPointsFailureBlock)(void);

@interface CEngineObjectPointsBlock : CEngineBlock

@property (strong, nonatomic) onObjectPointsSuccessBlock successBlock;
@property (strong, nonatomic) onObjectPointsFailureBlock failureBlock;

@end

typedef void (^onTerminateSuccessBlock)(int errorCode);
typedef void (^onTerminateFailureBlock)(void);

@interface CEngineTerminateBlock : CEngineBlock

@property (strong, nonatomic) onTerminateSuccessBlock successBlock;
@property (strong, nonatomic) onTerminateFailureBlock failureBlock;

@end

typedef void (^onLoadFailSuccessBlock)(OpenResult_Type errorCode);
typedef void (^onLoadFailFailureBlock)(void);

@interface CEngineLoadFailBlock : CEngineBlock

@property (strong, nonatomic) onLoadFailSuccessBlock successBlock;
@property (strong, nonatomic) onLoadFailFailureBlock failureBlock;

@end

typedef void (^onLoadCompleteSuccessBlock)(int bookmarkExsit);
typedef void (^onLoadCompleteFailureBlock)(void);

@interface CEngineLoadCompleteBlock : CEngineBlock

@property (strong, nonatomic) onLoadCompleteSuccessBlock successBlock;
@property (strong, nonatomic) onLoadCompleteFailureBlock failureBlock;

@end

typedef void (^onTotalLoadCompleteSuccessBlock)(void);
typedef void (^onTotalLoadCompleteFailureBlock)(void);

@interface CEngineTotalLoadCompleteBlock : CEngineBlock

@property (strong, nonatomic) onTotalLoadCompleteSuccessBlock successBlock;
@property (strong, nonatomic) onTotalLoadCompleteFailureBlock failureBlock;

@end

typedef void (^onNewDocSuccessBlock)(int a_success);
typedef void (^onNewDocFailureBlock)(void);

@interface CEngineNewDocBlock : CEngineBlock

@property (strong, nonatomic) onNewDocSuccessBlock successBlock;
@property (strong, nonatomic) onNewDocFailureBlock failureBlock;

@end

typedef void (^onCloseDocSuccessBlock)(void);
typedef void (^onCloseDocFailureBlock)(void);

@interface CEngineCloseDocBlock : CEngineBlock

@property (strong, nonatomic) onCloseDocSuccessBlock successBlock;
@property (strong, nonatomic) onCloseDocFailureBlock failureBlock;

@end

typedef void (^onDrawBitmapSuccessBlock)(unsigned char *image, int rectFlag, int rects[], int event);
typedef void (^onDrawBitmapFailureBlock)(void);

@interface CEngineDrawBitmapBlock : CEngineBlock

@property (strong, nonatomic) onDrawBitmapSuccessBlock successBlock;
@property (strong, nonatomic) onDrawBitmapFailureBlock failureBlock;

@end

typedef void (^onGetPageThumbnailSuccessBlock)(UIImage *image, NSString *filePath, int pageNum);
typedef void (^onGetPageThumbnailFailureBlock)(void);

@interface CEngineGetPageThumbnailBlock : CEngineBlock

@property (strong, nonatomic) onGetPageThumbnailSuccessBlock successBlock;
@property (strong, nonatomic) onGetPageThumbnailFailureBlock failureBlock;

@end

typedef void (^onPageMoveSuccessBlock)(int page, int totalPage, int errorCode);
typedef void (^onPageMoveFailureBlock)(void);

@interface CEnginePageMoveBlock : CEngineBlock

@property (strong, nonatomic) onPageMoveSuccessBlock successBlock;
@property (strong, nonatomic) onPageMoveFailureBlock failureBlock;

@end

typedef void (^onDrawGlviewSuccessBlock)(void);
typedef void (^onDrawGlviewFailureBlock)(void);

@interface CEngineDrawGlviewBlock : CEngineBlock

@property (strong, nonatomic) onDrawGlviewSuccessBlock successBlock;
@property (strong, nonatomic) onDrawGlviewFailureBlock failureBlock;

@end

typedef void* (^onGetBitmapRequestBlock)(int width, int height);

@interface CEngineGetBitmapBlock : CEngineBlock

@property (strong, nonatomic) onGetBitmapRequestBlock requestBlock;

@end

typedef void (^onSetDataRangeSuccessBlock)(const char *range, const char *data);
typedef void (^onSetDataRangeFailureBlock)(void);

@interface CEngineSetDataRangeBlock : CEngineBlock

@property (strong, nonatomic) onSetDataRangeSuccessBlock successBlock;
@property (strong, nonatomic) onSetDataRangeFailureBlock failureBlock;

@end

typedef NSString* (^onGetFormulaFieldTextRequestBlock)(void);

@interface CEngineGetFormulaFieldTextBlock : CEngineBlock

@property (strong, nonatomic) onGetFormulaFieldTextRequestBlock requestBlock;

@end

typedef NSString* (^onGetCellStyleTextRequestBlock)(int nBuiltinId);

@interface CEngineGetCellStyleTextBlock : CEngineBlock

@property (strong, nonatomic) onGetCellStyleTextRequestBlock requestBlock;

@end

typedef int (^onGetCellStyleTextLenRequestBlock)(int nBuiltinId);

@interface CEngineGetCellStyleTextLenBlock : CEngineBlock

@property (strong, nonatomic) onGetCellStyleTextLenRequestBlock requestBlock;

@end

typedef int* (^onGetFormulaFieldSelectionRequestBlock)(void);

@interface CEngineGetFormulaFieldSelectionBlock : CEngineBlock

@property (strong, nonatomic) onGetFormulaFieldSelectionRequestBlock requestBlock;

@end

typedef void (^onSetFormulaFieldSelectionSuccessBlock)(int startPosition, int endPosition);
typedef void (^onSetFormulaFieldSelectionFailureBlock)(int startPosition, int endPosition);

@interface CEngineSetFormulaFieldSelectionBlock : CEngineBlock

@property (strong, nonatomic) onSetFormulaFieldSelectionSuccessBlock successBlock;
@property (strong, nonatomic) onSetFormulaFieldSelectionFailureBlock failureBlock;

@end

typedef void (^onSetFormulaFieldTextSuccessBlock)(NSString* formulaFieldText);
typedef void (^onSetFormulaFieldTextFailureBlock)(NSString* formulaFieldText);

@interface CEngineSetFormulaFieldTextBlock : CEngineBlock

@property (strong, nonatomic) onSetFormulaFieldTextSuccessBlock successBlock;
@property (strong, nonatomic) onSetFormulaFieldTextFailureBlock failureBlock;

@end

typedef void (^onSetFormulaSelectionEnabledSuccessBlock)(int enabled);
typedef void (^onSetFormulaSelectionEnabledFailureBlock)(int enabled);

@interface CEngineSetFormulaSelectionEnabledBlock : CEngineBlock

@property (strong, nonatomic) onSetFormulaSelectionEnabledSuccessBlock successBlock;
@property (strong, nonatomic) onSetFormulaSelectionEnabledFailureBlock failureBlock;

@end

typedef void (^onCoreNotifySuccessBlock)(int a_notifyCode);
typedef void (^onCoreNotifyFailureBlock)(int a_notifyCode);

@interface CEngineCoreNotifyBlock : CEngineBlock

@property (strong, nonatomic) onCoreNotifySuccessBlock successBlock;
@property (strong, nonatomic) onCoreNotifyFailureBlock failureBlock;

@end

typedef void (^onCoreNotify2SuccessBlock)(int a_notifyCode, void* pData);
typedef void (^onCoreNotify2FailureBlock)(int a_notifyCode, void* pData);

@interface CEngineCoreNotify2Block : CEngineBlock

@property (strong, nonatomic) onCoreNotify2SuccessBlock successBlock;
@property (strong, nonatomic) onCoreNotify2FailureBlock failureBlock;

@end

typedef void (^onSheetChartSuccessBlock)(int a_nType, int status);
typedef void (^onSheetChartFailureBlock)(int a_nType, int status);

@interface CEngineSheetChartBlock : CEngineBlock

@property (strong, nonatomic) onSheetChartSuccessBlock successBlock;
@property (strong, nonatomic) onSheetChartFailureBlock failureBlock;

@end

typedef void (^onPptInsertChartSuccessBlock)(int a_pptChartStatus);
typedef void (^onPptInsertChartFailureBlock)(int a_pptChartStatus);

@interface CEnginePptInsertChartBlock : CEngineBlock

@property (strong, nonatomic) onPptInsertChartSuccessBlock successBlock;
@property (strong, nonatomic) onPptInsertChartFailureBlock failureBlock;

@end

typedef void (^onSaveDocSuccessBlock)(SaveResultType result, NSData* pData);
typedef void (^onSaveDocFailureBlock)();

@interface CEngineSaveDocBlock : CEngineBlock

@property (strong, nonatomic) onSaveDocSuccessBlock successBlock;
@property (strong, nonatomic) onSaveDocFailureBlock failureBlock;

@end

typedef void (^onPrintedCountSuccessBlock)(int totalCount);
typedef void (^onPrintedCountFailureBlock)(int totalCount);

@interface CEnginePrintedCountBlock : CEngineBlock

@property (strong, nonatomic) onPrintedCountSuccessBlock successBlock;
@property (strong, nonatomic) onPrintedCountFailureBlock failureBlock;

@end

typedef void (^onPrintModeSuccessBlock)(NSString* printFile, NSData* pData, int pageCount);
typedef void (^onPrintModeFailureBlock)(NSString* printFile);

@interface CEnginePrintModeBlock : CEngineBlock

@property (strong, nonatomic) onPrintModeSuccessBlock successBlock;
@property (strong, nonatomic) onPrintModeFailureBlock failureBlock;

@end

typedef void (^onSearchModeSuccessBlock)(int a_searchType, int a_currentPage, int atotalPage, int a_replaceAllCount);
typedef void (^onSearchModeFailureBlock)(void);

@interface CEngineSearchModeBlock : CEngineBlock

@property (strong, nonatomic) onSearchModeSuccessBlock successBlock;
@property (strong, nonatomic) onSearchModeFailureBlock failureBlock;

@end

typedef void (^onPrintCompletedSuccessBlock)(UIImage* thumbnail);
typedef void (^onPrintCompletedFailureBlock)(UIImage* thumbnail);

@interface CEnginePrintCompletedBlock : CEngineBlock

@property (strong, nonatomic) onPrintCompletedSuccessBlock successBlock;
@property (strong, nonatomic) onPrintCompletedFailureBlock failureBlock;

@end

typedef void (^onDrawPreviewBitmapSuccessBlock)(UIImage* image);
typedef void (^onDrawPreviewBitmapFailureBlock)(UIImage* thumbnail);

@interface CEngineDrawPreviewBitmapBlock : CEngineBlock

@property (strong, nonatomic) onDrawPreviewBitmapSuccessBlock successBlock;
@property (strong, nonatomic) onDrawPreviewBitmapFailureBlock failureBlock;

@end

typedef void (^onEditOrViewModeSuccessBlock)(BOOL isViewMode);
typedef void (^onEditOrViewModeFailureBlock)(void);

@interface CEngineEditOrViewModeBlock : CEngineBlock

@property (strong, nonatomic) onEditOrViewModeSuccessBlock successBlock;
@property (strong, nonatomic) onEditOrViewModeFailureBlock failureBlock;

@end

typedef void (^onEditCopyCutSuccessBlock)(int a_caller, int a_type, int a_result, NSString* a_strText, NSString* a_strData, int a_mode, NSString* a_strimagePath, NSString* a_strHtml);
typedef void (^onEditCopyCutFailureBlock)(void);

@interface CEngineEditCopyCutBlock : CEngineBlock

@property (strong, nonatomic) onEditCopyCutSuccessBlock successBlock;
@property (strong, nonatomic) onEditCopyCutFailureBlock failureBlock;

@end

typedef void (^onSheetSetHyperLinkResultSuccessBlock)(int nResult);
typedef void (^onSheetSetHyperLinkResultFailureBlock)(void);

@interface CEngineSheetSetHyperLinkResultBlock : CEngineBlock

@property (strong, nonatomic) onSheetSetHyperLinkResultSuccessBlock successBlock;
@property (strong, nonatomic) onSheetSetHyperLinkResultFailureBlock failureBlock;

@end

typedef void (^onSlideAnimationStartSuccessBlock)(void);
typedef void (^onSlideAnimationStartFailureBlock)(void);

@interface CEngineSlideAnimationStartBlock : CEngineBlock

@property (strong, nonatomic) onSlideAnimationStartSuccessBlock successBlock;
@property (strong, nonatomic) onSlideAnimationStartFailureBlock failureBlock;

@end

typedef void (^onSlideAnimationEndSuccessBlock)(BOOL isAutoContinue);
typedef void (^onSlideAnimationEndFailureBlock)(void);

@interface CEngineSlideAnimationEndBlock : CEngineBlock

@property (strong, nonatomic) onSlideAnimationEndSuccessBlock successBlock;
@property (strong, nonatomic) onSlideAnimationEndFailureBlock failureBlock;

@end

typedef void (^onSheetInputFieldSuccessBlock)(int sheetEditorResult, int sheetInputFieldResult);
typedef void (^onSheetInputFieldFailureBlock)(int sheetEditorResult, int sheetInputFieldResult);

@interface CEngineSheetInputFieldBlock : CEngineBlock

@property (strong, nonatomic) onSheetInputFieldSuccessBlock successBlock;
@property (strong, nonatomic) onSheetInputFieldFailureBlock failureBlock;

@end

typedef void (^onChangeScreenSuccessBlock)();
typedef void (^onChangeScreenFailureBlock)();

@interface CEngineChangeScreenBlock : CEngineBlock

@property (strong, nonatomic) onChangeScreenSuccessBlock successBlock;
@property (strong, nonatomic) onChangeScreenFailureBlock failureBlock;

@end

typedef void (^onSheetGoToCellSuccessBlock)(int result);
typedef void (^onSheetGoToCellFailureBlock)(int result);

@interface CEngineSheetGoToCellBlock : CEngineBlock

@property (strong, nonatomic) onSheetGoToCellSuccessBlock successBlock;
@property (strong, nonatomic) onSheetGoToCellFailureBlock failureBlock;

@end

typedef void (^onSheetNextCommentSearchFinishSuccessBlock)();
typedef void (^onSheetNextCommentSearchFinishFailureBlock)();

@interface CEngineSheetNextCommentSearchFinishBlock : CEngineBlock

@property (strong, nonatomic) onSheetNextCommentSearchFinishSuccessBlock successBlock;
@property (strong, nonatomic) onSheetNextCommentSearchFinishFailureBlock failureBlock;

@end

typedef void (^onSheetPrevCommentSearchFinishSuccessBlock)();
typedef void (^onSheetPrevCommentSearchFinishFailureBlock)();

@interface CEngineSheetPrevCommentSearchFinishBlock : CEngineBlock

@property (strong, nonatomic) onSheetPrevCommentSearchFinishSuccessBlock successBlock;
@property (strong, nonatomic) onSheetPrevCommentSearchFinishFailureBlock failureBlock;

@end

typedef void (^onSheetMemoNavigateSuccessBlock)(int status);
typedef void (^onSheetMemoNavigateFailureBlock)(int status);

@interface CEngineSheetMemoNavigateBlock : CEngineBlock

@property (strong, nonatomic) onSheetMemoNavigateSuccessBlock successBlock;
@property (strong, nonatomic) onSheetMemoNavigateFailureBlock failureBlock;

@end

typedef void (^onTrackReviewModeInfoSuccessBlock)(int reviewMode);
typedef void (^onTrackReviewModeInfoFailureBlock)();

@interface CEngineTrackReviewModeInfoBlock : CEngineBlock

@property (strong, nonatomic) onTrackReviewModeInfoSuccessBlock successBlock;
@property (strong, nonatomic) onTrackReviewModeInfoFailureBlock failureBlock;

@end

typedef void (^onSetAnnotationSuccessBlock)(PagePosition index, PDF_ANNOT_ITEM pdfAnnotItem);
typedef void (^onSetAnnotationFailureBlock)();

@interface CEngineSetAnnotationBlock : CEngineBlock

@property (strong, nonatomic) onSetAnnotationSuccessBlock successBlock;
@property (strong, nonatomic) onSetAnnotationFailureBlock failureBlock;

@end

typedef void (^onPDFAnnotationCountSuccessBlock)(int annotationCount);
typedef void (^onPDFAnnotationCountFailureBlock)();

@interface CEnginePDFAnnotationCountBlock : CEngineBlock

@property (strong, nonatomic) onPDFAnnotationCountSuccessBlock successBlock;
@property (strong, nonatomic) onPDFAnnotationCountFailureBlock failureBlock;

@end

typedef void (^onPDFSingleTapSuccessBlock)(CGPoint position);
typedef void (^onPDFSingleTapFailureBlock)();

@interface CEnginePDFSingleTapBlock : CEngineBlock

@property (strong, nonatomic) onPDFSingleTapSuccessBlock successBlock;
@property (strong, nonatomic) onPDFSingleTapFailureBlock failureBlock;

@end

typedef void (^onPDFSelectAnnotsSuccessBlock)(PDF_SELECT_ANNOTS_RESULT pdfSelectAnnotsResult);
typedef void (^onPDFSelectAnnotsFailureBlock)();

@interface CEnginePDFSelectAnnotsBlock : CEngineBlock

@property (strong, nonatomic) onPDFSelectAnnotsSuccessBlock successBlock;
@property (strong, nonatomic) onPDFSelectAnnotsFailureBlock failureBlock;

@end

typedef void (^onPDFUndoRedoSuccessBlock)();
typedef void (^onPDFUndoRedoFailureBlock)();

@interface CEnginePDFUndoRedoBlock : CEngineBlock

@property (strong, nonatomic) onPDFUndoRedoSuccessBlock successBlock;
@property (strong, nonatomic) onPDFUndoRedoFailureBlock failureBlock;

@end

typedef void (^onPptGetSlidesBitmapRequestBlock)(int bBitmapImage, int pageNum, int width, int height, BOOL isHide, NSString* slideTitle);

@interface CEnginePptGetSlidesBitmapBlock : CEngineBlock

@property (strong, nonatomic) onPptGetSlidesBitmapRequestBlock requestBlock;

@end

typedef void (^onPptDrawSlidesBitmapSuccessBlock)(UIImage* bitmap, int pageNum);
typedef void (^onPptDrawSlidesBitmapFailureBlock)();

@interface CEnginePptDrawSlidesBitmapBlock : CEngineBlock

@property (strong, nonatomic) onPptDrawSlidesBitmapSuccessBlock successBlock;
@property (strong, nonatomic) onPptDrawSlidesBitmapFailureBlock failureBlock;

@end

typedef void (^onSheetResizeTableSuccessBlock)(int sheetEditorResult);
typedef void (^onSheetResizeTableFailureBlock)();

@interface CEngineSheetResizeTableBlock : CEngineBlock

@property (strong, nonatomic) onSheetResizeTableSuccessBlock successBlock;
@property (strong, nonatomic) onSheetResizeTableFailureBlock failureBlock;

@end

typedef void (^onSetRangeInputFieldTextSuccessBlock)(NSString* inputFieldText);
typedef void (^onSetRangeInputFieldTextFailureBlock)();

@interface CEngineSetRangeInputFieldTextBlock : CEngineBlock

@property (strong, nonatomic) onSetRangeInputFieldTextSuccessBlock successBlock;
@property (strong, nonatomic) onSetRangeInputFieldTextFailureBlock failureBlock;

@end

typedef void (^onChangeAutoFilterStatusSuccessBlock)(bool bStatus);
typedef void (^onChangeAutoFilterStatusFailureBlock)();

@interface CEngineChangeAutoFilterStatusBlock : CEngineBlock

@property (strong, nonatomic) onChangeAutoFilterStatusSuccessBlock successBlock;
@property (strong, nonatomic) onChangeAutoFilterStatusFailureBlock failureBlock;

@end

typedef void (^onSetAutoFilterRectSuccessBlock)(AUFOFILTER_CONTEXT autoFilterContext);
typedef void (^onSetAutoFilterRectFailureBlock)();

@interface CEngineSetAutoFilterRectBlock : CEngineBlock

@property (strong, nonatomic) onSetAutoFilterRectSuccessBlock successBlock;
@property (strong, nonatomic) onSetAutoFilterRectFailureBlock failureBlock;

@end

typedef void (^onSetAutoFilterMenuInfoSuccessBlock)(AUTOFILTER_MENU_INFO* menuInfo);
typedef void (^onSetAutoFilterMenuInfoFailureBlock)();

@interface CEngineSetAutoFilterMenuInfoBlock : CEngineBlock

@property (strong, nonatomic) onSetAutoFilterMenuInfoSuccessBlock successBlock;
@property (strong, nonatomic) onSetAutoFilterMenuInfoFailureBlock failureBlock;

@end

typedef void (^onClearAniFrameStartSuccessBlock)();
typedef void (^onClearAniFrameStartFailureBlock)();

@interface CEngineClearAniFrameStartBlock : CEngineBlock

@property (strong, nonatomic) onClearAniFrameStartSuccessBlock successBlock;
@property (strong, nonatomic) onClearAniFrameStartFailureBlock failureBlock;

@end

typedef void (^onClearAniFrameEndSuccessBlock)();
typedef void (^onClearAniFrameEndFailureBlock)();

@interface CEngineClearAniFrameEndBlock : CEngineBlock

@property (strong, nonatomic) onClearAniFrameEndSuccessBlock successBlock;
@property (strong, nonatomic) onClearAniFrameEndFailureBlock failureBlock;

@end

typedef void (^onInsertFreeformShapesSuccessBlock)();
typedef void (^onInsertFreeformShapesFailureBlock)();

@interface CEngineInsertFreeformShapesBlock : CEngineBlock

@property (strong, nonatomic) onInsertFreeformShapesSuccessBlock successBlock;
@property (strong, nonatomic) onInsertFreeformShapesFailureBlock failureBlock;

@end

typedef void (^onSheetFunctionSuccessBlock)(int sheetEditorStatus, int sheetFunctionError, int sheetFunctionErrorCode);
typedef void (^onSheetFunctionFailureBlock)();

@interface CEngineSheetFunctionBlock : CEngineBlock

@property (strong, nonatomic) onSheetFunctionSuccessBlock successBlock;
@property (strong, nonatomic) onSheetFunctionFailureBlock failureBlock;

@end

typedef void (^onSheetDataValidationErrorSuccessBlock)(int nErrorStyle, NSString* strErrorTitle, NSString* strError);
typedef void (^onSheetDataValidationErrorFailureBlock)();

@interface CEngineSheetDataValidationErrorBlock : CEngineBlock

@property (strong, nonatomic) onSheetDataValidationErrorSuccessBlock successBlock;
@property (strong, nonatomic) onSheetDataValidationErrorFailureBlock failureBlock;

@end

typedef void (^onSheetDataValidationMenuSuccessBlock)(NSArray* aJNI_TitleString, CGRect rect, int nItemCheckedIndex);
typedef void (^onSheetDataValidationMenuFailureBlock)();

@interface CEngineSheetDataValidationMenuBlock : CEngineBlock

@property (strong, nonatomic) onSheetDataValidationMenuSuccessBlock successBlock;
@property (strong, nonatomic) onSheetDataValidationMenuFailureBlock failureBlock;

@end

typedef void (^onSheetPivotTableInDocumentSuccessBlock)(bool bExistPivotTableInDocument, bool bExistPivotTableInCurrentSheet);
typedef void (^onSheetPivotTableInDocumentFailureBlock)();

@interface CEngineSheetPivotTableInDocumentBlock : CEngineBlock

@property (strong, nonatomic) onSheetPivotTableInDocumentSuccessBlock successBlock;
@property (strong, nonatomic) onSheetPivotTableInDocumentFailureBlock failureBlock;

@end

typedef void (^onOLEFormatInfoSuccessBlock)(int nOleExtensionType, NSString* wideString);
typedef void (^onOLEFormatInfoFailureBlock)();

@interface CEngineOLEFormatInfoBlock : CEngineBlock

@property (strong, nonatomic) onOLEFormatInfoSuccessBlock successBlock;
@property (strong, nonatomic) onOLEFormatInfoFailureBlock failureBlock;

@end

typedef void (^onSheetEditBlockSuccessBlock)();
typedef void (^onSheetEditBlockFailureBlock)();

@interface CEngineSheetEditBlockBlock : CEngineBlock

@property (strong, nonatomic) onSheetEditBlockSuccessBlock successBlock;
@property (strong, nonatomic) onSheetEditBlockFailureBlock failureBlock;

@end

typedef void (^onSheetDynamicLoadingSuccessBlock)(int nVal);
typedef void (^onSheetDynamicLoadingFailureBlock)();

@interface CEngineSheetDynamicLoadingBlock : CEngineBlock

@property (strong, nonatomic) onSheetDynamicLoadingSuccessBlock successBlock;
@property (strong, nonatomic) onSheetDynamicLoadingFailureBlock failureBlock;

@end

typedef void (^onSheetCircularReferenceWarningSuccessBlock)();
typedef void (^onSheetCircularReferenceWarningFailureBlock)();

@interface CEngineSheetCircularReferenceWarningBlock : CEngineBlock

@property (strong, nonatomic) onSheetCircularReferenceWarningSuccessBlock successBlock;
@property (strong, nonatomic) onSheetCircularReferenceWarningFailureBlock failureBlock;

@end

typedef void (^onSheetFilterCommandResultSuccessBlock)(int nFilterCommandResult);
typedef void (^onSheetFilterCommandResultFailureBlock)();

@interface CEngineSheetFilterCommandResultBlock : CEngineBlock

@property (strong, nonatomic) onSheetFilterCommandResultSuccessBlock successBlock;
@property (strong, nonatomic) onSheetFilterCommandResultFailureBlock failureBlock;

@end

typedef void (^onSheetCellMoveCommandResultSuccessBlock)(int nCellMoveResult);
typedef void (^onSheetCellMoveCommandResultFailureBlock)();

@interface CEngineSheetCellMoveCommandResultBlock : CEngineBlock

@property (strong, nonatomic) onSheetCellMoveCommandResultSuccessBlock successBlock;
@property (strong, nonatomic) onSheetCellMoveCommandResultFailureBlock failureBlock;

@end

typedef void (^onSheetStatusBarFuncDataSuccessBlock)(NSString* wAverage, int nCount, int nNumericalCount, NSString* wMin, NSString* wMax, NSString* wSum);
typedef void (^onSheetStatusBarFuncDataFailureBlock)();

@interface CEngineSheetStatusBarFuncDataBlock : CEngineBlock

@property (strong, nonatomic) onSheetStatusBarFuncDataSuccessBlock successBlock;
@property (strong, nonatomic) onSheetStatusBarFuncDataFailureBlock failureBlock;

@end

typedef void (^onSheetHyperlinkTooltipSuccessBlock)(CGRect aJNI_CellPos, NSString* wHyperlinkTooltip);
typedef void (^onSheetHyperlinkTooltipFailureBlock)();

@interface CEngineSheetHyperlinkTooltipBlock : CEngineBlock

@property (strong, nonatomic) onSheetHyperlinkTooltipSuccessBlock successBlock;
@property (strong, nonatomic) onSheetHyperlinkTooltipFailureBlock failureBlock;

@end

typedef void (^onSheetInsertDeleteCellResultSuccessBlock)(int nCellInsertDeleteResult);
typedef void (^onSheetInsertDeleteCellResultFailureBlock)();

@interface CEngineSheetInsertDeleteCellResultBlock : CEngineBlock

@property (strong, nonatomic) onSheetInsertDeleteCellResultSuccessBlock successBlock;
@property (strong, nonatomic) onSheetInsertDeleteCellResultFailureBlock failureBlock;

@end

typedef void (^onSheetTableTotalsRowMenuSuccessBlock)(CGRect aJNI_CellPos, int nSubTotalFunctionIndex);
typedef void (^onSheetTableTotalsRowMenuFailureBlock)();

@interface CEngineSheetTableTotalsRowMenuBlock : CEngineBlock

@property (strong, nonatomic) onSheetTableTotalsRowMenuSuccessBlock successBlock;
@property (strong, nonatomic) onSheetTableTotalsRowMenuFailureBlock failureBlock;

@end

typedef void (^onSheetPivotFilterMenuSuccessBlock)(int nHandleId, NSString* strInformation, int nFocusedMenuIndex, NSArray* aJNI_TitleString, bool* aJNI_IsFixedItem, bool* aJNI_IsChecked, int nItemCount, CGRect aJNI_CellPos);
typedef void (^onSheetPivotFilterMenuFailureBlock)();

@interface CEngineSheetPivotFilterMenuBlock : CEngineBlock

@property (strong, nonatomic) onSheetPivotFilterMenuSuccessBlock successBlock;
@property (strong, nonatomic) onSheetPivotFilterMenuFailureBlock failureBlock;

@end

typedef void (^onSheetProtectionSheetCannotEditSuccessBlock)();
typedef void (^onSheetProtectionSheetCannotEditFailureBlock)();

@interface CEngineSheetProtectionSheetCannotEditBlock : CEngineBlock

@property (strong, nonatomic) onSheetProtectionSheetCannotEditSuccessBlock successBlock;
@property (strong, nonatomic) onSheetProtectionSheetCannotEditFailureBlock failureBlock;

@end


typedef void (^onShowKeypadSuccessBlock)();
typedef void (^onShowKeypadFailureBlock)();

@interface CEngineShowKeypadBlock : CEngineBlock

@property (strong, nonatomic) onShowKeypadSuccessBlock successBlock;
@property (strong, nonatomic) onShowKeypadFailureBlock failureBlock;

@end

typedef NSString* (^onGetResStringIDRequestBlock)(int stringId);

@interface CEngineGetResStringIDBlock : CEngineBlock

@property (strong, nonatomic) onGetResStringIDRequestBlock requestBlock;

@end

typedef NSString* (^onGetSheetCommentAuthorNameRequestBlock)();

@interface CEngineGetSheetCommentAuthorNameBlock : CEngineBlock

@property (strong, nonatomic) onGetSheetCommentAuthorNameRequestBlock requestBlock;

@end

typedef void (^onPptGetMasterLayoutBitmapRequestBlock)(BOOL bBitmapImage, int nWidth, int nHeight, int nMasterIndex, int nPageNum, int nPageType, BOOL isMasterBGHide, NSString* wideString);

@interface CEnginePptGetMasterLayoutBitmapBlock : CEngineBlock

@property (strong, nonatomic) onPptGetMasterLayoutBitmapRequestBlock requestBlock;

@end

typedef void (^onPptDrawMasterLayoutBitmapSuccessBlock)(UIImage* bitmap, int nMasterIndex, int nPageNum);
typedef void (^onPptDrawMasterLayoutBitmapFailureBlock)();

@interface CEnginePptDrawMasterLayoutBitmapBlock : CEngineBlock

@property (strong, nonatomic) onPptDrawMasterLayoutBitmapSuccessBlock successBlock;
@property (strong, nonatomic) onPptDrawMasterLayoutBitmapFailureBlock failureBlock;

@end

typedef void (^onPDFHyperLinkSuccessBlock)(NSString* strString, int left, int top, int right, int bottom);
typedef void (^onPDFHyperLinkFailureBlock)();

@interface CEnginePDFHyperLinkBlock : CEngineBlock

@property (strong, nonatomic) onPDFHyperLinkSuccessBlock successBlock;
@property (strong, nonatomic) onPDFHyperLinkFailureBlock failureBlock;

@end

typedef bool (^onGetPDFOutputWithAnnotationRequestBlock)();

@interface CEngineGetPDFOutputWithAnnotationBlock : CEngineBlock

@property (strong, nonatomic) onGetPDFOutputWithAnnotationRequestBlock requestBlock;

@end

typedef void (^onSheetTableTotalsRowSuccessBlock)(int sheetEditorResult);
typedef void (^onSheetTableTotalsRowFailureBlock)();

@interface CEngineSheetTableTotalsRowBlock : CEngineBlock

@property (strong, nonatomic) onSheetTableTotalsRowSuccessBlock successBlock;
@property (strong, nonatomic) onSheetTableTotalsRowFailureBlock failureBlock;

@end

typedef void (^onSheetProtectionSuccessBlock)(int result);
typedef void (^onSheetProtectionFailureBlock)();

@interface CEngineSheetProtectionBlock : CEngineBlock

@property (strong, nonatomic) onSheetProtectionSuccessBlock successBlock;
@property (strong, nonatomic) onSheetProtectionFailureBlock failureBlock;

@end

typedef void (^onPDFModifiedAnnotationSuccessBlock)(int pageNum);
typedef void (^onPDFModifiedAnnotationFailureBlock)();

@interface CEnginePDFModifiedAnnotationBlock : CEngineBlock

@property (strong, nonatomic) onPDFModifiedAnnotationSuccessBlock successBlock;
@property (strong, nonatomic) onPDFModifiedAnnotationFailureBlock failureBlock;

@end

typedef void (^onPDFSelectWidgetSuccessBlock)(int listCount);
typedef void (^onPDFSelectWidgetFailureBlock)();

@interface CEnginePDFSelectWidgetBlock : CEngineBlock

@property (strong, nonatomic) onPDFSelectWidgetSuccessBlock successBlock;
@property (strong, nonatomic) onPDFSelectWidgetFailureBlock failureBlock;

@end

typedef void (^onSpellCheckSuccessBlock)(LPSPELLCHECK_INFO spellCheckInfo);
typedef void (^onSpellCheckFailureBlock)();

@interface CEngineSpellCheckBlock : CEngineBlock

@property (strong, nonatomic) onSpellCheckSuccessBlock successBlock;
@property (strong, nonatomic) onSpellCheckFailureBlock failureBlock;

@end

typedef void (^onUndoRedoSuccessBlock)(int changedpagenum);
typedef void (^onUndoRedoFailureBlock)();


@interface CEngineUndoRedoBlock : CEngineBlock

@property (strong, nonatomic) onUndoRedoSuccessBlock successBlock;
@property (strong, nonatomic) onUndoRedoFailureBlock failureBlock;

@end

typedef void (^onVirtualKeypadSuccessBlock)();
typedef void (^onVirtualKeypadFailureBlock)();


@interface CEngineVirtualKeypadBlock : CEngineBlock

@property (strong, nonatomic) onVirtualKeypadSuccessBlock successBlock;
@property (strong, nonatomic) onVirtualKeypadFailureBlock failureBlock;

@end

typedef void (^onSlideShowMemoryLackSuccessBlock)();
typedef void (^onSlideShowMemoryLackFailureBlock)();

@interface CEngineSlideShowMemoryLackBlock : CEngineBlock

@property (strong, nonatomic) onSlideShowMemoryLackSuccessBlock successBlock;
@property (strong, nonatomic) onSlideShowMemoryLackFailureBlock failureBlock;

@end

