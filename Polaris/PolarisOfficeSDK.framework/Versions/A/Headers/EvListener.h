//
//  EvListener.h
//  PO6_framework
//
//  Created by Chanyong Lee on 2014. 9. 24..
//  Copyright (c) 2014년 Chanyong Lee. All rights reserved.
//

#ifndef PO6_framework_EvListener_h
#define PO6_framework_EvListener_h

@protocol EngineDelegate

@required

- (void)	onLoadComplete:(int) a_bookmarkExsit;
- (void)	onTotalLoadComplete;
- (void)	onLoadFail:(OpenResult_Type) a_errorId;
- (void)	onTerminate:(int)a_success;
- (void)	onCloseDoc;
- (void)	onDrawBitmap:(unsigned char *)image rectFlag:(int) a_rectFlag rectArray:(int[]) a_rectArray receivedEvent:(int) nEvent;

@optional

// - (void)	onSaveDoc:(int) a_success;
- (void)	onCoreNotify:(int) a_notifyCode;
- (void)    onCoreNotify2:(int) nNotifyCode2 Data:(void*) pData;
- (void)    onPageMove:(int)nCurrPage totalPages:(int)nTotalPage errorCode:(int)nErrorCode;
//- (void)	onObjectPoints(EDITOR_OBJECT_POINTARRAY a_setValue);
- (void)	onSearchMode:(int) a_searchType page:(int) a_currentPage totalpages:(int) atotalPage replaceAllCount:(int) a_replaceAllCount;
- (void)	onEditCopyCut:(int) a_caller type:(int) a_type result:(int) a_result string: (NSString*) a_strText data:(NSString*) a_strData mode:(int) a_mode imagePath:(NSString*) a_strimagePath
                  html:(NSString*) a_strHtml;

- (void)	onNewDoc:(int) a_success;
- (void)	onUndoOrRedo:(bool) a_isUndo action:(int) a_action page1:(int) a_page1 page2:(int) a_page2;
- (void)	onInsertFreeformShapes;	//Curve shape, Freeform shape, Scribble shape insert end callback

- (void)    onSheetChart:(int) a_nType status:(int)status;
- (void)	onPptInsertChart:(int) a_pptChartStatus;
- (void)	OnOLEFormatInfo:(int) a_type OlePath:(NSString*) a_strOlePath;
//- (void)	onPrintMode:(NSString*) a_strPrintFile;
//- (void)	onPrintedCount:(int) a_totalCount;

- (void)    onGetPageThumbnail:(UIImage*)image filePath:(NSString*)outputPath pageNum:(int)nPageNum;
- (void)    onObjectPoints:(LPEDITOR_OBJECT_POINTARRAY) param;
- (void)    onDrawGlview;

- (void) onSetDataRange:(const char*)range Data:(const char*)data;
- (void*)    onGetBitmapWithWidth:(int)width Height:(int)height;
- (NSString*) onGetFormulaFieldText;
- (int*)     onGetFormulaFieldSelection;
- (void) onSetFormulaFieldSelection:(int)startPosition endPosition:(int)endPosition;
- (void) onSetFormulaFieldText:(NSString*)formulaFieldText;
- (void) onSetFormulaSelectionEnabled:(int)enabled;
- (NSString*) onGetCellStyleText:(int) nBuiltinId;
- (int) onGetCellStyleTextLen:(int) nBuiltinId;
- (void) onSaveDoc:(SaveResultType)result MemoryBuffer:(NSData*) pData;
- (void) onPrintedCount:(int)totalCount;
- (void) onPrintMode:(NSString*)printFile MemoryBuffer:(NSData*) pData PageCount:(int)pageCount;
- (void) onPrintCompleted:(UIImage*)thumbnail;
- (void) onDrawPreviewBitmap:(UIImage*)image;
- (void) onEditOrViewMode:(BOOL)isViewMode;
- (void) onSheetSetHyperLinkResult:(int)nResult;
- (void) onSlideAnimationStart;
- (void) onSlideAnimationEnd:(BOOL)isAutoContinue;
- (void) onSheetInputField:(int)sheetEditorResult sheetInputFieldResult:(int)sheetInputFieldResult;

- (void) onChangeScreen;
- (void) onSheetGoToCell:(int)result;

- (void) onSheetNextCommentSearchFinish;
- (void) onSheetPrevCommentSearchFinish;

- (void) onSheetMemoNavigate:(int)status;

- (void) onTrackReviewModeInfo:(int)reviewMode;

- (void) onSetAnnotation:(PagePosition)index annotationItem:(PDF_ANNOT_ITEM)pdfAnnotItem;
- (void) onPDFAnnotationCount:(int)annotationCount;

- (void) onPDFSingleTap:(CGPoint)position;
- (void) onPDFSelectAnnots:(PDF_SELECT_ANNOTS_RESULT)pdfSelectAnnotsResult;
- (void) onPDFUndoRedo;

- (void)onPptGetSlidesBitmap:(int)bBitmapImage pageNum:(int)pageNum width:(int)width height:(int)height isHide:(BOOL)isHide slideTitle:(NSString*)slideTitle;
- (void)onPptDrawSlidesBitmap:(UIImage*)bitmap pageNum:(int)pageNum;

- (void) onSheetResizeTable:(int)sheetEditorResult;
- (void) onSetRangeInputFieldText:(NSString*)inputFieldText;

- (void) onChangeAutoFilterStatus:(bool) bStatus;
- (void) onSetAutoFilterRect:(AUFOFILTER_CONTEXT) autoFilterContext;
- (void) onSetAutoFilterMenuInfo:(AUTOFILTER_MENU_INFO*) menuInfo;

//public abstract Bitmap	getChartThumbnailBitmap(int a_index, int a_width, int a_height);
//public abstract String	onGetResId(int a_stringId);
//public abstract Bitmap	getBitmap(int a_width, int a_height, boolean a_isNotUsedSmoothRender);


- (void) onClearAniFrameStart;
- (void) onClearAniFrameEnd;

- (void) onSheetFunction:(int)sheetEditorStatus sheetFunctionError:(int)sheetFunctionError sheetFunctionErrorCode:(int)sheetFunctionErrorCode;

- (void)onSheetDataValidationError:(int)nErrorStyle ErrorTitle:(NSString*)strErrorTitle ErrorString:(NSString*)strError;

- (void)onSheetDataValidationMenu:(NSArray*)aJNI_TitleString CellRect:(CGRect)rect CheckedIndex:(int)nItemCheckedIndex;

- (void)onSheetPivotTableInDocument:(bool) bExistPivotTableInDocument ExistPivotTableInCurrentSheet:(bool) bExistPivotTableInCurrentSheet;

- (void)onOLEFormatInfo:(int)nOleExtensionType FileName:(NSString*)wideString;

- (void)onSheetEditBlock;

-(void)onSheetDynamicLoading:(int)nVal;

-(void)onSheetCircularReferenceWarning;

-(void)onSheetFilterCommandResult:(int)nFilterCommandResult;	

-(void)onSheetCellMoveCommandResult:(int)nCellMoveResult;

-(void)onSheetStatusBarFuncData:(NSString*)wAverage Count:(int) nCount NumericalCount:(int) nNumericalCount Min:(NSString*) wMin Max:(NSString*) wMax Sum:(NSString*) wSum;	

-(void)onSheetHyperlinkTooltip:(CGRect)aJNI_CellPos HyperlinkTooltip:(NSString*)wHyperlinkTooltip;

-(void)onSheetInsertDeleteCellResult:(int)nCellInsertDeleteResult;

-(void)onSheetTableTotalsRowMenu:(CGRect)aJNI_CellPos SubTotalFunctionIndex:(int)nSubTotalFunctionIndex;

-(void)onSheetPivotFilterMenu:(int)nHandleId Information:(NSString*)strInformation FocusedMenuIndex:(int)nFocusedMenuIndex TitleString:(NSArray*)aJNI_TitleString IsFixedItem:(bool*) aJNI_IsFixedItem IsChecked:(bool*) aJNI_IsChecked ItemCount:(int) nItemCount CellRect:(CGRect) aJNI_CellPos;

-(void)onSheetProtectionSheetCannotEdit;
-(void)onShowKeypad;

-(NSString*)onGetResStringID:(int)stringId;
-(NSString*)onGetSheetCommentAuthorName;

-(void)onPptGetMasterLayoutBitmap:(BOOL)bBitmapImage width:(int)nWidth heigth:(int)nHeight masterIndex:(int)nMasterIndex pageNum:(int)nPageNum pageType:(int)nPageType isMasterBackgroundHide:(BOOL)isMasterBGHide wideString:(NSString*)wideString;
-(void)onPptDrawMasterLayoutBitmap:(UIImage*)bitmap masterIndex:(int)nMasterIndex pageNum:(int)nPageNum;

-(void)onPDFHyperLink:(NSString*) strString left:(int)left top:(int)top right:(int)right bottom:(int)bottom;

- (bool)onGetPDFOutputWithAnnotation;

- (void)onSheetTableTotalsRow:(int)sheetEditorResult;

- (void)onSheetProtection:(int)result;

- (void)onPDFModifiedAnnotation:(int)pageNum;
- (void)onPDFSelectWidgetWithCount:(int)listCount;

-(void) onSpellCheck:(LPSPELLCHECK_INFO)spellCheckInfo;

- (void) onUndoRedo:(int)changedpagenum;
- (void) onVirtualKeypad;

- (void) onSlideShowMemoryLack;
- (NSString*)onGetLicense;
- (NSMutableArray*)onGetMainFeatureBundleId;
- (NSString*)onGetMainFeatureName;

- (NSInteger)getLogType;

@end

#endif
