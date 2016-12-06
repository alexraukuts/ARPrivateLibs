//
//  EvInterface.h
//  PO6_framework
//
//  Created by Chanyong Lee on 2014. 9. 24..
//  Copyright (c) 2014년 Chanyong Lee. All rights reserved.
//

#ifndef PO6_framework_EvInterface_h
#define PO6_framework_EvInterface_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "E.h"
#import "EV.h"
#import "EvListener.h"


@interface EvInterface : NSObject
- (instancetype)initEngineWithHeapSize:(int)heapSize screenSize:(CGSize)screenSize sender:(id)sender isPreviewMode:(BOOL)previewMode ExternalFont:(NSString*)fontPath loadSysFont:(BOOL)load;
- (void)releaseEngine;
//- (void)onTimer:(id)a_timerInfo;
//- (void)setTimerWith:(unsigned char)a_nTimerID timeInterval:(unsigned int)nTime;
//- (void)killTimerWith:(unsigned char)a_nTimerID;
//- (UIImage*) convertFromBitmap:(void*)buff :(int)w :(int)h :(float)scale :(int)bit :(int)write;
- (void)EVPreviewEventProcess:(void*) pEventInfo;
- (void)EVEventProcess:(void*) pEventInfo;

- (void) ISetHeapSize: (int) a_nHeapSize;
- (int)IGetHeapSize;

- (void) ISetBookmarkPath: (NSString*) strBookmarkPath;
- (NSString*)IGetBookmarkPath;
- (NSString*)IGetDocPassword;

- (void) ISetTempPath : (NSString*) strPath;
- (NSString*)IGetTempPath;

- (void) IInitialize : (int) a_nWidth screenHeight: (int) a_nHeight scrollMode: (int) a_nScrollModeType bookmarkType: (int) a_nBookmarkType useAutoBookmark: (int) a_bUseAutoBookmark bitCounts: (int) a_nBits swapframebuffer: (int) a_bFrameBufferSwap dpi: (int) a_nDpi;

- (void) IFinalize;

- (void) ISetFrameDetectionArea : (FRAME_DETECTION_AREA) a_pFrameDetectionArea;

- (FRAME_DETECTION_AREA) IGetFrameDetectionArea;

//- (void) ITimer:(int)nTimerID;

- (void) IOpen : (NSString*) a_sFilePath isEditMode:(bool)isEditMode;

- (void) IOpenEx : (NSString*) a_sFilePath password:(NSString *)a_sPassword writePassword:(NSString *)a_sWritePassword protectDocumentReadMode:(int)a_nProtectReadMode;

- (void) IOpenWithType:(DOCUMENT_TYPE) nType Memory:(NSData*)memoryData isEditMode:(bool)isEditMode;

- (void) IOpenExWithType:(DOCUMENT_TYPE) nType Memory:(NSData*)memoryData password:(NSString *)a_sPassword writePassword:(NSString *)a_sWritePassword protectDocumentReadMode:(int)a_nProtectReadMode;

- (NSString*)IGetDocumentPassword:(bool)a_bReadMode;

- (void) ISetDocumentPassword:(NSString*)a_sPassword writePassword:(NSString*)a_sWritePassword readOnlyRecommended:(bool)a_bReadOnlyRecommended;

- (void) IClose;

- (void) IMovePage : (int)EEV_MOVE_TYPE a_nPage:(int)a_nPage;

- (void) IZoomInOut : (int) a_bI a_eKey:(int) EEV_MOVE_TYPE;

- (void) IFlick : (int)a_nVelocityX velocityY:(int)a_nVelocityY;

- (void) ISetZoom : (int) EEV_ZOOM_TYPE scale:(int) a_nScale startX:(int) a_nSx startY:(int) a_nSy endX:(int) a_nEx endY:(int) a_nEy keyType:(int) a_nKeyType step:(int) a_bStep haveZoomCenter:(int) a_bHaveZoomCenter zoomCenterX:(int) a_nZoomCenterX zoomCenterY:(int) a_nZoomCenterY useReleaseOffset:(bool)a_bUseReleaseOffset offsetX:(int)a_nOffsetX offsetY:(int)a_nOffsetY;

- (void) IScroll:(int) EEV_SCROLL_COMMAND_TYPE factor:(int) a_nFactor offsetX:(int) a_nOffsetX offsetY:(int) a_nOffsetY key:(int) EEV_KEY_TYPE;

- (void) IRotatePage : (int) EEV_ROTATE_TYPE angle:(int) a_nAngle;

- (void) IRotateFrame : (int) a_nAngle;

- (void) IReDraw;
- (void)IEditPageRedrawBitmap;

- (void) ISetViewMode : (int) EEV_VIEWMODE_TYPE;

- (void) IChangeScreen:(int) a_bLandScape width:(int) a_nWidth height:(int) a_nHeight rotate:(int) a_nRotate screenBufferType:(int) a_nScreenBufferType fixedZoom:(int) a_bFixedZoom;

- (void) IChangeDisplay : (int) EEV_DISPLAY_MODE_TYPE;

//- (void) ISetPageMap : (int) a_nMode drawContents:(int) a_bDrawContents position:(int) a_ePos generateDrawEvent:(int) a_bGenerateDrawEvt rowMargin:(int) a_nRowMargin colMargin:(int) a_nColMargin;

- (void) IThumbnail:(int) a_eMode pages:(int) a_nPages width:(int) a_nWidth height:(int) a_nHeight startPage:(int) a_nStartPage;

- (void) IGetPageThumbnail:(int) a_nSaveMode pageNum:(int) a_nPageNum width:(int) a_nWidth height:(int) a_nHeight outputPath:(NSString*) a_sOutputPath;

//- (void) IBookMarkOnOff : (int) a_bOn;
//
//- (void) ISaveBookMark;
//
//- (void) IApplyBookMark;
//
//- (void) IRemoveBookMark : (NSString*) a_sFilePath;
//
//- (void) IRemoveAllBookMark;
//
//- (void) IHyperLink : (int) a_eType xPosition:(int) a_nXPos yPosition:(int) a_nYPos;
//
//- (void) IHyperLinkEnd;

- (void) ISearchStart : (NSString*) a_sFind matchWord:(int) a_bMathchWord matchCase:(int) a_bCase halfFullWidth:(int) a_bHalfFullWidth directionUp:(int) a_bDirUp fixedZoom:(int) a_bFixedZoom ignoreSpace:(int) a_bIgnoreSpace ignorePunctuation:(int) a_bIgnorePunc findIn:(int) a_bFindIn;

- (void) ISearchStop;

- (void) ISetReplace:(NSString*)a_sFind matchWord:(int)a_bMathchWord matchCase:(int)a_bCase directionUp:(int)a_bDirUp replaceText:(NSString*)a_sReplace replaceMode:(int)bReplaceMode halfFullWidth:(int)a_bHalfFullWidth ignoreSpace:(int)a_bIgnoreSpace ignorePunctuation:(int) a_bIgnorePunc;
- (void) ISheetFindReplace:(NSString*)a_pszFindText replaceText:(NSString*)a_pszReplaceText  nFlag:(int)a_nFlag;

- (BOOL)isSearchMode;

- (void)onSearchMode:(int) a_searchType page:(int) a_currentPage totalpages:(int) atotalPage replaceAllCount:(int) a_replaceAllCount;

//
//- (void) IFindWordStart : (int) a_nXpos yPosition:(int) a_nYpos;
//
//- (void) IFindWordNext : (int) a_bDirUp;
//
//- (void) IFindWordNextByPos : (int) a_nXpos yPosition:(int) a_nYpos;
//
//- (void) IFindWordStop;
//
- (void) IThreadSuspend : (int) a_bSuspend;

- (void) ICancel;

- (PROPERTIES) IGetProperties;

- (void) ISetProperties : (LPPROPERTIES)a_pInfo;

- (SCREEN_INFO) IGetScreenPos;

- (void) ISetPreview : (int) a_nWidth height:(int) a_nHeight filePath:(NSString*) a_szFilePath Memory:(NSData*)memoryData Password:(NSString*) a_password;

//- (void) ISetPreviewTimerCB;

- (void) IExitPreview;

//- (BOOKMARK_LABEL) IGetBookmarkLabel : (int) aIndex;
//
//- (void) ISetBookmarkLabel : (LPBOOKMARK_LABEL) a_pLabel saveBookmarkInfo : (int) a_bSaveBookmarkInfo;

- (void) IChangeViewMode : (DocumentViewingModes) a_eMode width:(int) nWidth height:(int) nHeight canSelection:(int) bCanSelection fixedHeader:(int) bFixedHeader draw:(int) bDraw;
- (void) ISheetOpenViewModeChange:(int)a_Mode width:(int)nWidth height:(int)nHeight canSelection:(int)bCanSelection fiexdHeader:(int)bFixedHeader bDraw:(int)bDraw;

- (void) INewDocument : (NSString*) aSzFilePath width:(int) nWidth height:(int) nHeight loadType:(int) a_eLoadType pptPaperType:(int) a_PPTPaperType newTemplatePPT:(int) NewTemplatePPT locale:(int) a_nLocale landscape:(int) bLandScape tempPath:(NSString*) a_sTempPath bookmarkPath:(NSString*) a_sBookMarkPath;

- (void) ISaveDocument : (NSString*) a_pszFilePath saveOption:(int) nSaveOption fileMenuOperation:(FileMenuOperation)fileMenuOperation resolution:(unsigned int) a_nResolution;

- (void) ISaveDocument : (NSString*) a_pszFilePath saveOption:(int) nSaveOption fileMenuOperation:(FileMenuOperation)fileMenuOperation;

- (void) IExportPDF : (NSString*) a_pszFilePath pageCount:(int) a_nCount pageArray:(int[]) a_nPageArray resolution:(unsigned int) a_nResolution;

- (void) IEditDocument : (int) a_Mode dataType:(int) nDataType data:(NSString*) data;

- (void)IHIDAction:(int)mode point:(CGPoint)point modifiers:(int)modifiers time:(int)time pressure:(int)pressure detectTouch:(bool)detectTouch;

- (void) ICharInsert : (int) a_eMode unicode:(int) a_wCode repeat:(int) a_nRepeat fontName:(NSString*) a_szFontName meta:(int) a_nMeta;

- (void)IReplaceString : (NSString*)string length:(int)length;

- (void) ISetMarkingByPen : (int) a_nStartX startY:(int) a_nStartY endX:(int) a_nEndX endY:(int) a_nEndY selectMultiLine:(bool) a_bSelectMultiLine;

- (void) ISetFontAttribute : (LPFONT_INFO) pFontInfo;

- (void) ISetFontStyle : (int)nStyleID;

- (void)IGetWordShading:(int)applyTo wordShading:(LPPOWORDSHADING_INFO)wordShading;

- (void)ISetWordShading:(LPPOWORDSHADING_INFO)wordShading;

- (void) ISetParaAttribute: (LPPARAGRAPH_INFO) pParagraphAttInfo;

- (void)ISetCompBGColorIndexStart1:(int)a_start1 end1:(int)a_end1 indexStart2:(int)a_start2 end2:(int)a_end2 drawColor1:(int)a_color1 drawColor2:(int)a_color2 applyFlag:(int)a_bApplyFlag directDraw:(int)a_bDirectDraw;

- (void) ISetTextFlow: (LPTEXTFLOW_INFO) pTextFlowInfo;

- (void) ISheetWrap: (bool)bWrap;

- (void) ISheetFocus;

- (void) IParagraphAlign:(int) a_eAlign;

- (void) IBulletNumbering : (int) a_Mode numberingType:(int) a_Type numberReset:(bool) bNumberReset start:(int) a_Startat nBulletNumberMask:(int) a_nBulletNumMask nColor:(long) a_nColor bulletSize:(int) a_nBulletSizePct;

- (void) IIndentation:(int) a_eMode;

- (void) INumberingSetValue : (bool) a_bRestartNum bContinue:(bool) a_bContinue bChangeValue:(bool) a_bChangeValue startNum:(int) a_nStartNum;

//- (void) IGetMultiSelectPointInfo;

- (void) IGetScrollInfo_Editor:(LPSCROLLINFO_EDITOR)SCROLLINFO_EDITOR;

- (void) ISlideObjStartEx:(int) a_Width height:(int) a_Height thumbnailQuality:(float) thumbnail_quality pageNum:(int) a_PageNum;

- (bool) IGetPageInfo:(int) nPageNum pageInfo:(LPpoPageInfo) pPageInfo ZoomRatio:(int) nZoom DPI:(int) nDPI;

- (CARET_INFO) IGetCaretInfo;

- (void) ISetColumn:(int) a_nPageApply columnNumber:(int) a_nColNum IsEqualWidth:(bool) a_bEqualWidth IsBorderLine:(bool) a_bBorderLine columnWidth:(int[]) a_nColWid columnSpace:(int[]) a_nColSpace;

- (void) IInsertString:(NSString*) aszTemp compositionType:(int) nCompType position:(int) nPos stringLength:(int) nStrLen;

- (void) ISheetDrawFormulaRange:(bool) a_bSelectRect selectIcon:(bool) a_bSelectIcon;

- (void) ISheetSetFormulaRangeColor:(int[]) a_nFormulaRangeColor;

- (int) IGetCurrentSheetIndex;

- (void*) ISheetBitmapEvent:(int)nEvent param1:(int)nParam1 param2:(int)nParam2;

- (UIImage*) ISheetBitmap:(CGRect)rect;

- (UIImage*) ISheetHeader:(CGRect)rect vertical:(bool)vertical size:(CGSize*)size;

- (int) ISheetHeaderFixSize:(bool)bVertical;

- (CGSize)IGetSheetHeaderSize;

- (void)ISheetFixFrame;

- (void) ISheetSetAlignment:(int) a_nHAlignment nVertical:(int) a_nVAlignment nIndent:(int) a_nIndent;

- (void) IInsertTextBox:(bool) verti bPreset:(bool) bPreset;

- (void) IInsertShapeStyle:(int)a_nShape styleNum:(int)a_nStyleNum shapeName:(NSString*)a_szShapeName;

- (void) ICreateTable:(int)a_nRow nColumn:(int)a_nCol nColor:(int)a_nColor nStyleNum:(int)a_nStyleNum bPlaceHolde:(bool) bPlaceHolder;

- (NSArray*) IGetUseFontNames;

- (bool)IGetParaAttInfo:(LPPARAGRAPH_INFO)info;

- (void)IGetFormatInfo:(LPSHEET_FORMAT_INFO)info;

- (void)IGetFontAttInfo:(LPFONT_INFO)info;

- (int)IGetFontStyle;

- (void)IChangeCase:(int)nType;

- (int)IGetTextWrapType;
- (void)ISetObjPos:(int)positionType;
- (void)ISetObjResize:(int)sizeX sizeY:(int)sizeY;
- (void)ISetTextWrapType:(int)textWrapType;
- (void)ISetMultiObjectAlign:(ObjectAlignType)align subAlign:(ObjectSubAlignType)subAlign;
- (void)ISetShapeProperty:(LPSHAPE_PROPERTY)pShape textureImage:(UIImage *)textureImage;
- (void)IGetGradientDrawColorInfo:(LPDRAW_GRADIENTCOLOR_INFO)pGradientColorInfo;

- (void)IImageInsert:(NSString*) a_pImgPath bitmapImage:(UIImage*)a_bitmap isReplaceImage:(bool)isReplaceImage;
-(void) IMediaInsert:(NSString*)a_pImgPath bitmapImage:(UIImage*)a_bitmap mediaPath:(NSString*)a_pMediaPath isLinked:(bool)bLinked isAudio:(bool)bAudio isReplaceVideo:(bool)isReplaceVideo;

- (void)ISetMovePageToTop:(BOOL) bSet;

- (void)ISetSlideShowEffect:(LPSLIDE_TRANSITION_INFO)slideTransitionInfo;

- (SLIDE_TRANSITION_INFO)IGetSlideShowEffect:(int)page;

- (bool) IIsNoneEffect:(SlideShowPlayType)playType page:(int)page;

- (void)ISlideShowWithWidth:(int)a_Width Height:(int)a_Height StartPage:(int)a_StartPage;
- (void) ISlideShowGlSetSync;
- (void) ISlideShowStop;
- (void) ISlideShowPlay:(SlideShowPlayType)playType page:(int)page animationIndex:(int)animationIndex isSkipEffect:(bool)isSkipEffect;

- (bool) IIsSlideShow;

- (void) ISlideShowContinue;

- (void) ISetFormCopyPaste:(int) nMode;

- (void) IClearFrameSet;

- (void) ISelectAll;

- (void) ISetPageMode:(PageMode) nPageMode;

-(void) ISetTableProperty:(int) a_Mask borderMask:(int) a_BorderMask style:(int) a_Style width:(int) a_Width borderColor:(int) borderColor fillColor:(int) fillColor tablePen:(int) nTablePen undo:(bool) a_bUndo;
- (void) ISetTableAtt:(TABLE_ATT) tableAttribute;

- (void) ISetTableStyleInfo:(int) a_nMask styleNum :(int) a_nStyleNum styleOption :(int) a_nStyleOption;
- (void) IGetTableStyleInfo:(LPTABLE_STYLE_INFO) lpTableStyleInfo;
- (void) ITablePenCmd:(int) a_Cmd isPenMode:(bool)a_isPenMode penType:(int)a_PenType width:(int) a_Width themePaletteIndex:(int) a_ThemePaletteIdx color:(int)a_Color preset:(int) a_Preset mask:(int) a_Mask;

- (void) IInsertTable:(NSString*)tableRange header:(bool)header tableStyleId:(int) tableStyleId;
- (void) ISetTableInfo:(int)tableID tableName:(NSString *)tableName tableStyleID:(int) tableStyleID tableStyleAttribute:(int)tableStyleAtt;

- (int) IGetBWPCellStatusInfo;

- (void) ICellInsertDelete:(int)Mode cellType:(int)cellType;
- (void) ICaretMark:(int)Mode selectMode:(int)selectMode;
- (void) ICellEqualWidthHeight:(int)Mode;
- (void) ICellMergeSeparate:(int)Mode row:(int)row column:(int)column;
- (void) ISetFrameGroup:(int)groupType;
- (void) ISheetMerge:(int)cmd;
- (void) ISheetInsertColumns:(int)isInsert count:(int)count isAutoFit:(int)autoFit;
- (void) ISheetInsertRows:(int)isInsert count:(int)count isAutoFit:(int)autoFit;
- (void) ISheetShowHideRowCol:(SheetShowHideType)RowColType value:(int)value isAutoFit:(int)isAutoFit;
- (void) ISheetInsertCell:(int)isInsert mode:(int)mode;
- (void) IInsertTableRowCol:(int)a_nTableID insertType:(int)a_nInsertType;
- (void) IDeleteTableRowCol:(int) a_nTableID deleteType:(int)a_nDeleteType;
- (void) ISheetClear:(int)sheetClearType;
- (void) ISetTableSelection:(int)tableId selectionType:(int)selectionType;
- (void) IResizeTable:(int)tableId tableRange:(NSString*)tableRange;

//memo
//- (bool) IMemoCommand:(LPMEMO_CMD_DATA)lpMemoCmdData;
- (bool) ISetMemoCommand:(LPMEMO_CMD_DATA)lpMemoCmdData;
- (bool) IGetMemoCommand:(LPMEMO_CMD_DATA)lpMemoCmdData;

- (void) ISheetInsertCommentText:(NSString*)comment;
- (void) ISheetDeleteCommentText;
- (void) IGetNextCommentText;
- (void) IGetPrevCommentText;

//pdf
- (void) ICreatePDFStickyNote:(int)posX yPosition:(int)posY;
- (int) IGetPDFBookmarkCount:(long)a_item;
//- (PDF_TOC_LIST_ITEM*) IGetPDFBookmarkList:(long)item;
- (void) IGetPDFBookmarkList:(long)item pdfBookmarkListItem:(LPPDF_BOOKMARK_LIST_ITEM)pdfBookmarkListItem;

- (void) IClearAllFormat;
- (void) ISetExportPdfResolution:(int)aRes;

- (void) IGetCellInfo:(LPSHEET_CELL_INFO) lpSheetCellInfo;
- (void) ISheetFormat:(LPSHEET_FORMAT) lpSheetFormat;
- (void) ICellStyle:(int)nCellStyle;
-(void) ISheetSetColor:(int)a_lColor themePaletteIndex:(int) a_IThemePaletteIndex undo:(int) a_bUndo;- (void) ISheetSetBorder:(LPSHEET_BORDER_INFO)lpSheetBorderInfo;
- (bool) isSheetTableActiveCell;
- (int) getTableCntInSelection;
//SheetCell
- (void) IRangeInputStart:(short)nRangeInputType;
- (void) IRangeInputStop;
//- (void)setRangeInpuFieldText:(char *)inputFieldText;
- (NSString *)getRangeInputFieldText;
- (void) ISheetSetRowColSize:(int)guiEvent value:(int)value isAutoFit:(int)isAutoFit;

// Chart
- (void) IChartCreateModity:(LPCHART_MODIFY_INFO) a_pChartModityInfo /*WordPPT:(bool) a_bWordPPT Insert:(bool) a_bInsert*/;
- (void) IGetChartDataInfo:(LPCHART_DATA) a_pChartData;
- (bool) IGetChartStyleListInfo:(LPCHART_STYLE_LIST_INFO) a_pChartStyleListInfo;
- (void) IChartThumbnail:(int)a_nWidth nHeight:(int)a_nHeight;
- (void) IGetChartStyleInfo:(LPCHART_STYLE_INFO) a_pChartStyleInfo;
- (void) IChartStyleModify:(bool)a_bChartStyle StyleOrEffect:(unsigned short) a_nStyleOrEffect;
- (void) IChartTitleModify:(int) a_nMask Title:(NSString*) a_pszTitle XTitle:(NSString*) a_pszXTitle YTitle:(NSString*) a_pszYTitle;
- (void) IChartLegendModify:(int) a_nLegend;
- (bool) IGetChartDataLabelInfo:(LPCHART_DATA_LABEL_INFO) a_pChartDataLabelInfo;
- (void) IChartDataLabelModify:(LPCHART_DATA_LABEL_INFO) a_pChartDataLabelInfo;
- (void) IChartAxesModify:(int)a_nChartType existAxes:(char[])a_bExistAxes axesInfo:(int[])a_bAxesInfo aligment:(int[])a_nAlignment scaleInfo:(char[])a_bScaleInfo logBase:(double[])a_dLogBase unitIndex:(int[])a_nUnitIndex hasMinusValue:(char)a_nHasMinusValue;
- (bool) IGetChartAxesInfo:(LPCHART_AXES_INFO)a_pChartAxesInfo;
- (void) IGetChartFontInfo:(LPCHART_FONTDATA)a_pChartFontData;
- (void) IChartFontModify:(NSString *)a_fName ratio:(float)a_fRatio;
- (void) IChartRowColChange;
- (void) IChartDataRangeModify:(bool)bFinished;
- (void) IChartDataRangeEnd;
- (void) IClearChartData:(LPCHART_DATA)a_pChartData;
- (void) IChartPlotVisOnlyInfo:(bool)a_pPlotVisOnly;

- (void) ISetPenMode:(int) a_eMode SetPenDraw:(bool) a_bPenDraw;
- (void) ISetPenColor:(int) a_nColor ThemeColorIndex:(int) nThemeColor Transparency:(int) a_nTransparency;
- (void) ISetPenSize:(float) a_nSize;
- (void) ISetPenTransparency:(int) a_nTransparency;
- (void) ISetClearAllPen;
- (void) IInfraPenAllErase;
- (void) ISetPenPosition:(int[]) a_pX YPos:(int[]) a_pY Time:(int[]) a_pTime Pressure:(int[]) a_pPressure Count:(int) nCnt;
- (void) ISetInfraPenShow:(BOOL) isShow;
- (BOOL) IsPenDrawFrameShow;

- (void) ISetMultiSelect:(bool) abMulti;
- (void) IGetMediaInfo:(LPMEDIA_INFO)mediaInfoData;
- (void) ISetMediaInfo:(LPMEDIA_INFO)mediaInfoData;

- (void)IRedoUndo:(EditStatus) a_Mode;

- (void) ISheetInputField:(int) a_bCancel;
- (void) ICharInput;
- (void) ISetRefNote:(int)nMode formType:(int)nFormType startNum:(int)nStartNum reStart:(int)nReStart position:(short)wPosition;
-(void) ISetHeaderFooterTemplate:(LPHEADER_FOOTER_TEMPLATE)lpHeaderFooterTemplate;

- (void)IBookmarkEditor:(BookmarkOperation) a_eMode bookmarkString:(NSString*) a_pszBookmark;
- (int)IGetBookmarkCount_Editor;
- (NSString*) IGetBookmarkInfo_Editor:(int)a_nIndex;

- (bool) IGetHyperLinkInfo:(LPHYPER_LINK_EDITOR)lpHyperLinkEditor position:(bool)bPosition x:(int)x y:(int)y;
- (void)ISetHyperLinkInfo:(LPHYPER_LINK_EDITOR)hyperLinkEditor;
//- (void)ISheetHyperLinkRun;
- (void)ISetSheetHyperLinkInfo:(LPHYPER_LINK_EDITOR)lpHyperLinkEditor;
- (void)ISheetRemoveHyperLink;
- (void)IGetSheetHyperLinkInfo:(LPHYPER_LINK_EDITOR)lpHyperLinkEditor;
- (NSString*)IGetMarkString;
- (NSArray*)IGetSheetNameList:(bool)a_bShow NeedsSingleQuotationMarks:(bool)bNeedsSingleQuotationMarks;

- (void)ISetCroppingMode:(int)bCrop applyType:(int)bApplyType;
- (bool)IGetCroppingMode;

- (void)ISetPageBreakEvent:(int) pageBreakType;
- (void)ISetPaperInfo:(LPPAGELAYOUT_TYPE) pPageType;
- (void)ISetWatermark:(LPWATERMARK_INFO) watermarkInfo :(UIImage *) selectedImage;
- (void)ISetPageColor:(LPPAGECOLORINFO) pPageColor :(UIImage *) backgroundImage;
- (void)ISetWordBorder:(LPWORD_BORDER_INFO) pBorderInfo;

- (int)IGetPageDisplayCount;

- (void)IGetSectionInfo:(LPSECTION_INFO)lpSectionInfo;

- (int)ISetResetUndoData;

- (bool)IDocumentModified;
- (void)ISetModifiedFlag:(bool)modified;

- (int)IsWebMode;

- (void)ISetPrintEx:(PRINT_INFO)printInfo;

- (void)INoMarginView;
- (void)ISetPrintMode;
- (void)ISetWebMode;

- (void) IGetSheetInfo:(LPSHEET_INFO)lpSheetInfo sheetIndex:(int)index;
- (int) IGetSheetCount;
- (void) ISheetEdit:(SheetEdit)mode sheetName:(NSString*)sheetName sheetIndex:(int)sheetIndex sheets:(int)sheets moveIndex:(int)moveIndex isCopy:(int)copy;

- (void) ISetInfraPenDrawMode:(int)bFlag;
- (int) IGetInfraPenDrawMode;

- (BOOL) IPDFUpdated;

- (NSString*) IGetCommentText;
- (void) IGetFirstCommentText;
- (void) IGetLastCommentText;
- (int) IBrGetFlag:(int)type;

- (NSString*) IGetVideoPath;

// Animation
//- (void) ISetSlideAnimationAdd:(LPSLIDE_ANIMATION_INFO)lpSlideAnimationInfo;
//- (void) ISetSlideAnimation:(int)nIndex SlideAnimationInfo:(LPSLIDE_ANIMATION_INFO)lpSlideAnimationInfo;
//- (void) IGetAnimationInfo:(int)index lpSlideAnimationInfo:(LPSLIDE_ANIMATION_INFO)lpSlideAnimationInfo;
//- (int) IGetSlideAnimationList_Count;
//- (int) IGetSlideFrameAnimation_Count;
//- (int) IGetSlideFrameAnimation_Index:(int)index;
//- (void) ISetAnimationMove:(int)index moveIndex:(int)moveIndex;
//- (void) ISetAnimationDelete:(int)index;

// new animation
- (void) ISetAnimationAdd:(LPPPT_ANIMATION_INFO)lpPPTAnimationInfo;
- (void) ISetAnimation:(int)index pptAnimationInfo:(LPPPT_ANIMATION_INFO)lpPPTAnimationInfo;
- (void) ISetAnimationMove:(int)index moveIndex:(int)moveIndex;
- (void) ISetAnimationDelete:(int)index;
- (void) IGetAnimationInfo:(int)seqIndex index:(int)index pptAnimationInfo:(LPPPT_ANIMATION_INFO)lpPptAnimationInfo;
- (int) IGetAnimationSeqCount;
- (int) IGetAnimationSeqTotalCount:(int)seqIndex;
- (int) IGetAnimationList:(int)seqIndex count:(int)count pptAnimationList:(LPPPT_ANIMATION_INFO*)pptAnimationList;
- (int) IGetFrameAnimation_Count;
- (int) IGetFrameAnimation_Index:(int)seqIndex index:(int)index;
//- (void) ISetSlideAnimation:(int)presetClass presetID:(int)presetID subType:(int)subType
//                 timingType:(int)timingType duration:(int)duration delay:(int)delay
//                      color:(int)color transparency:(int)transparency scaleX:(int)scaleX scaleY:(int)scaleY angle:(int)angle;
////- (void) ISetSlideAnimationAdd:(int)presetClass presetID:(int)presetID subType:(int)subType
//                    timingType:(int)timingType duration:(int)duration delay:(int)delay
//                         color:(int)color transparency:(int)transparency scaleX:(int)scaleX scaleY:(int)scaleY angle:(int)angle;

// Header Footer
- (void) ISetHeaderFooterNavigation:(LPHEADER_FOOTER_NAVIGATION)lpHeaderFooterNavigation;
- (void) ISetHeaderFooterOption:(LPHEADER_FOOTER_OPTION)lpHeaderFooterOption;
- (int) IGetTopUndoDataInfo;
- (int) IGetTopRedoDataInfo;

// PDF Bookmark
- (long) IPDFBmkCmd:(PDFBookmarkCommand)cmd selectedItem:(long)selItem lpPdfBookmarkListItem:(LPPDF_BOOKMARK_LIST_ITEM)lpPdfBookmarkListItem;
- (long) IPDFBmkCmdMove:(PDFBookmarkCommand)cmd selectedItem:(long)selItem targetItem:(long)targetItem;
- (void) IGotoPDFBookmark:(long)item;

// Slide Manage
- (void) ISlideManage:(int)mode currentPageNumber:(int)currentPageNumber layoutType:(int)layoutType masterIndex:(int)masterIndex layoutPageNum:(int)layoutPageNum;

// Sheet Formula
- (void) ISheetSetAutoFormula:(int)function;

// Slide note
- (void) ISlideNoteInput:(int)slidePage slideNoteString:(NSString*)szSlideNote length:(int)length;
- (NSString*) IGetSlideNoteString:(int)pageNum;

// Filter
- (void) ISheetFilter;
- (BOOL) ISheetFilterIsRunning;
- (void) ISetAutofilterButtonConfiguration:(NSString*) a_normal pressed:(NSString*)a_presse;
- (BOOL) ISheetIsExistFilterState;
- (void) ISheetFilterCommand:(int) a_nHandleId IndexOfIndexCell:(int) a_nIndexOfIndexCell FixedItem:(int) a_nFixedItem CommandStrings:(NSArray*) a_szCommandStrings;
- (void) ISheetDataValidationDropDownInput:(NSString *) a_strInputData;

//pivottable
- (void) ISheetPivotItemFilterCommand:(int) a_nHandleId CheckedList:(bool[]) a_bChecked CheckedCount:(int)length;
- (void) ISheetPivotFilterFixedItemCommand:(int) a_nHandleId Command:(NSString*) a_szCommand;
- (int) ISheetCreatePivotTableDatas:(int) nSheetIndex SourceTalbeRange:(PORANGE*) sourceTableRange PivotTableRange:(PORANGE*) pivotTableRange;
- (NSArray*) ISheetGetPivotFieldNames:(int) a_hPivotTableHandle;
- (void) ISheetSetPivotFields:(int) a_hPivotTableHandle Axis:(int) a_nAxis FieldIndex:(int) a_nFieldIndex PivotFieldIndex:(int) a_nPivotFieldIndex;
- (NSArray*) ISheetGetPivotFields:(int) a_hPivotTableHandle Axis:(int) a_nAxis;
- (void) ISheetSetPivotFieldCount:(int) a_hPivotTableHandle Axis:(int) a_nAxis Count:(int) a_nCount;
- (int) ISheetGetPivotFieldCount:(int) a_hPivotTableHandle Axis:(int) a_nAxis;
- (void) ISheetSetPivotTableAtts:(int) a_hPivotTableHandle ElementName:(NSString*) a_sElementName ChildIndex:(int) a_nChildIndex AttributName:(NSString*) a_sAttributeName AttributeValue:(NSString*) a_sAttributeValue;
- (NSString*) ISheetGetPivotTableAtts:(int) a_hPivotTableHandle ElementName:(NSString*) a_sElementName ChildIndex:(int) a_nChildIndex AttributeName:(NSString*) a_sAttributeName;
- (void) ISheetMakePivotFieldItems:(int) a_hPivotTableHandle;
- (void) ISheetMakePivotTable:(int) a_hPivotTableHandle;
- (void) ISheetDeletePivotTableInterfaceHandle:(int) a_hPivotTableHandle;

// SlideShow
- (void) ISetSlideShowSetting:(LPSLIDE_SHOW_SETTING)lpSlideShowSetting;
- (void) IGetSlideShowSetting:(LPSLIDE_SHOW_SETTING)lpSlideShowSetting;
- (void) IStopSlideEffect:(SlideShowStopType)stopType;
- (BOOL) IIsWaiting;

// Slide
- (BOOL) IGetIsSlideHide:(int)page;
- (void) ISetSlideHide:(int)page isHide:(BOOL)isHide;
- (int) IGetSlideLayout:(int)page;

// Sheet CF
- (void) ISetSheetEditCF:(LPSHEET_EDIT_CFS_INFO)lpSheetEditCfsInfo;
- (void) IGetSheetEditCF:(LPSHEET_EDIT_CFS_INFO)lpSheetEditCfsInfo;

// Slideshow video
- (NSString*) IGetSlideShowVideoInfo:(int)xPosition yPosition:(int)yPosition rect:(CGRect*)rect mediaInfo:(LPMEDIA_INFO)lpMediaInfo;

// Slide layout prepare
- (void)prepareForSlideLayoutEdit;

// sheet calculate
- (void) ISheetCalculateNow:(BOOL)bActiveSheet;

- (BOOL) IPageModified:(int)pageNum;

- (int) IGetPDFAnnotCountForSlide:(int)pageNum;
- (void) IRemoveAllPDFAnnotationForSlide:(int)pageNum;
- (BOOL) IIsPDFSaveAble;
- (BOOL) IIsPDFPrintAble;
- (BOOL) IIsPDFAddnoteAble;
- (BOOL) IIsPDFEmbeddedFile:(char*) pathstr;
- (void) IPDFApplySlideAnnot;

- (int) ISheetGetColumnDefaultWidth;
- (void) ISheetSetColumnDefaultWidth:(int)columnDefaultWidth;

- (CGSize)IGetSheetHeaderSize:(bool)bFixed;

// Get
- (int)getEditorMode;
- (void) IGetConfig:(CONFIG_INFO*)info;
- (CONFIG_INFO)getConfig;
- (BOOL) isPenDrawShow;
- (ObjectType)getObjectType;
- (EDITOR_OBJECT_POINTARRAY*)getObjectPointArray;
- (FONT_INFO)getFontInfo;
- (SHEET_FORMAT_INFO)getSheetFormatInfo;
- (int)getSectionDocumentInfo;
- (PAGELAYOUT_TYPE)getPageLayoutInfo;
- (WATERMARK_INFO)getPageWatermarkInfo;
- (PAGE_COLOR_INFO)getPageBackgroudInfo;
- (WORD_BORDER_INFO)getPageBorderInfo;
- (WORD_BORDER_INFO)getTextParaBorderInfo;
- (PARAGRAPH_INFO)getParagraphInfo;
- (TEXTFLOW_INFO)getWordTextFlowInfo;
- (BULLET_TYPE)getBulletType;
- (CHART_DATA)getChartData;
- (CHART_STYLE_INFO)getChartStyleInfo;
//- (GUI_SHEET_CHART_DATALABELINFO)getChartDataLabelInfo;
- (CHART_FONTDATA)getChartFontInfo;
- (CHART_STYLE_LIST_INFO)getChartStyleListInfo;
- (CHART_AXES_INFO)getChartAxisInfo;
- (SHAPE_PROPERTY)getShapeProperty;
- (DRAW_GRADIENTCOLOR_INFO)getGradientDrawInfo;
- (int)getTextMarkingLineCount;
- (short*)getTextMarkingRectArray;
- (GUI_BORDER_EVENT)getTableBorderProperty;
- (TABLE_ATT)getTableAttribute;
//- (TABLE_STYLE_INFO)getTableStyleInfo;
- (SHEET_TABLE_INFO)getSheetTableInfo;
- (SHEET_CELL_INFO)getSheetCellInfo;
- (SHEET_CELL_STYLE_INFO)getSheetCellStyleInfo;
- (DocumentViewingModes)getDocumentViewingMode;
//- (GUI_SHEET_ALL_CHART_EVENT)getSheetChartInfo;
- (SHEET_BORDER_INFO)getSheetBorderInfo;
- (POINT_INFO*) getMultiObjectPointInfo;
- (MEDIA_INFO)getMediaInfo;
- (BWP_OP_INFO)getWordSlideOpInfo;
//- (MEMO_CMD_DATA)getMemoInfo;
- (HEADER_FOOTER_TEMPLATE)getHeaderFooterTemplate;
- (HYPER_LINK_EDITOR)getHyperLinkEditor;
- (HYPER_LINK_EDITOR)getSheetHyperLinkEditor;
- (PAGE_DISPLAY_INFO*)getPageDisplayInfoArray;
- (HEADER_FOOTER_OPTION)getHeaderFooterOption;
- (HEADER_FOOTER_NAVIGATION)getHeaderFooterNavigation;
- (int)getActiveMemoId;
- (BOOL)isShowAnnotation;
- (BOOL)isPDFStickyNoteCreated;

- (short*)getCellRectArray;
- (int)getCellRectCount;
- (long)getEditStatus;
- (BOOL) isMultiSelectionMode;

- (bool)isWordDocument;
- (bool)isSlideDocument;
- (bool)isSheetDocuemnt;
- (bool)isPDFDocument;
- (bool)isHWPDocument;
- (bool)isImageDocument;
- (bool)isTxtDocument;
- (bool)isODFDocument;
- (bool)isRepeatPlay;

- (void)IAnnotationShow:(bool) bEnable;

- (int)IGetRulerbarPgInfo:(int*) nPageLeftLogical TextLeftPos:(int*) nTextLeftPos TextRightPos:(int*)nTextRightPos PageRightPos:(int*)nPageRightPos PageRightLogical:(int*)nPageRightLogical;

- (NSString*)IGetClipboardDirectory;
- (void)ISetClipboardDirectory:(NSString*) szDir;

- (NSString*)IFrameToImageFile;

- (int) ISheetGetPrintTotalPage:(int)printOption;

- (int) IGetPenType;

- (void) IInputChar :(int) a_wCode;
- (void) ISheetSetTextboxEditMode:(int) bTextEdit;
- (void) ISheetSetTextboxText : (NSString*) text length:(int)length;
- (NSString*) ISheetGetTextBoxText;

- (void) IGetSummaryData:(LPSUMMARY_DATA)lpSummaryData;
- (void) ISetSummaryData:(int)nMask title:(NSString*)a_szTitle author:(NSString*)a_szAuthor modifiedBy:(NSString*)a_szModifiedBy;
- (BOOL) IGetWordCountStatistics:(BOOL)a_bCountFrame wordCountStatistics:(LPWORD_COUNT_STATISTICS)lpWordCountStatistics;

- (NSString*) IGetPDFAuthor;
- (NSString*) IGetPDFTitle;
- (NSString*) IGetPDFProducer;

- (ParagraphVerticalAlign)getParagraphVerticalAlignForSheet;
- (ParagraphHorizontalAlign)getParagraphHorizontalAlignForSheet;

- (CGRect) IGetSheetTextboxRectInfo;

- (void) IShapeInsertEx:(int)shape shapeStyleIndex:(int)style xPosition:(int)x yPosition:(int)y width:(int)width height:(int)height angle:(int)angle;

- (void) IDeletePenDataForSlideShow;
- (int) IIsPenDataForSlideShow:(int)page;

- (void) ISetGuides:(int)mask showSmartGuides:(bool)showSmartGuides showSmartGap:(bool)showSmartGap showGrid:(bool)showGrid showGuides:(bool)showGuides value:(int)value color:(long)color showPageGuides:(bool)showPageGuides showMarginGuides:(bool)showMarginGuides showParaGuides:(bool)showParaGuides;

- (void) ISheetGoToCell:(NSString*)goToCellText isUseList:(BOOL)bUseList;
- (int) IGetObjectType:(CGPoint)point;

- (void) ISetTrackChangesMode:(BOOL)bEnable mode:(int)mode;
- (void) IGetTrackChangesModeInfo:(LPWORD_CHANGES_TRACK_MODE)lpWordChangeTrackMode;
- (void) ISetTrackMarkupShowState:(BOOL)bEnable markupType:(int)markupType;
- (int) IGetTrackMarkupShowState:(int)markupType;
- (BOOL) IGetChangesContentInfo:(LPWORD_CHANGES_DATA)lpWordChangesData isOnlyCheck:(int)bOnlyCheck;
- (void) ISetRevisionState:(int)applyMode move:(int)move;
- (BOOL) ISetDocAuthor:(NSString*)author;
- (int) IGetTotalReviewerNameCount;
- (BOOL) IGetReviewerInfo:(int)reviewerIndex wordReviewerInfo:(LPWORD_REVIEWER_INFO)lpWordReviewerInfo;
- (BOOL) ISetReviewerShowState:(int*)indexList listSize:(int)listSize;
- (int) IGetCellType;
- (int) IGetSortRange:(LPPORANGE)range extendRange:(int)extendRange;
- (void) ISheetSort:(int)sortByRow key1:(int)key1 key2:(int)key2 key3:(int)key3;

- (void)IFreeEngineMemory:(void*)addr;

- (void) IModifyPDFAnnotation:(void*)item text:(NSString*)text color:(int)color opacity:(float)opacity fillColor:(int)fillcolor;
- (void) IGetPDFAnnotationCount;
- (void) IRemovePDFAnnotation:(void*)item;
- (void) IRemoveAllPDFAnnotation;
- (void) IGotoAnnotation:(int)action annotationType:(int)annotType pageNumber:(int)pageNum annotationIndex:(int)annotIndex left:(float)left top:(float)top right:(float)right bottom:(float)bottom isClicked:(bool)bClicked;
- (void) IGetPDFAnnotationListItem:(int)index pdfAnnotationItem:(LPPDF_ANNOT_ITEM)lpPdfAnnotItem;

- (void) ISetSheetProtection:(LPSHEET_PROTECT_OPTION)lpSheetProtectOption;
- (void) IGetSheetProtection:(LPSHEET_PROTECT_OPTION)lpSheetProtectOption;
- (void) IGetWorkbookProtectionInfo:(LPWORKBOOK_PROTECTION)lpWorkbookProtection;

- (void) ISetFillColor:(int)color;

- (BOOL) ISheetGetSortKeyInfoExtend:(LPSORTING_INFO)lpShortingInfo;

- (int) IGetPPTMasterCount;
- (int) IGetPPTLayoutCount:(int)masterIndex;
- (int) IGetPPTMasterPageInfo:(int)masterIndex width:(int)width height:(int)height;
- (int) IGetPPTLayoutPageInfo:(int)masterIndex layoutPageNum:(int)layoutPageNum width:(int)width height:(int)height;
- (void) ISheetTableTotalsRow:(int)index;
- (int) IGetBWPProtectStatusInfo;

- (void)ISetSplFlickNodrawFlag:(bool)bNodraw;

- (void)ICaretMove:(CaretMoveMode) a_Mode AltKey:(bool)bAltKey ShiftKey:(bool)bShiftKey ControlKey:(bool)bControlKey CommandKey:(bool)bCommandKey Repeat:(int) a_nRepeat;

- (void)IShowDocContent:(bool) bShowCropMarks ShowCRMarks:(bool) bShowCRMarks;

- (void) ISpellCheckScreen:(bool)bMode;
- (int) ISpellCheckWrong:(LPSPELLCHECK_INFO)lpSpellCheckInfo;
- (void) ISetPathAnimationHide:(bool)bHide pageNum:(int)nPageNum;
- (bool) isPathAnimationHide;
- (bool) hasPathAnimation;

// Engine callback.
//- (void)updateView:(UIImage *)image;
//- (void)loadComplete;
- (void)	onLoadComplete:(int) a_bookmarkExsit;
- (void)	onTotalLoadComplete;
- (void)	onLoadFail:(OpenResult_Type) a_errorId;
- (void)	onTerminate:(int)a_success;
- (void)	onCloseDoc;
- (void)	onDrawBitmap:(unsigned char *)image rectFlag:(int) a_rectFlag rectArray:(int[]) a_rectArray receivedEvent:(int) nEvent;
- (void)    onGetPageThumbnail:(UIImage*)image filePath:(NSString*)outputPath pageNum:(int)nPageNum;
- (void)    onObjectPoints:(LPEDITOR_OBJECT_POINTARRAY) param;
- (void)    onPageMove:(int)nCurrPage totalPages:(int)nTotalPage errorCode:(int)nErrorCode;
- (void)    onDrawGlview;
- (void*)    onGetBitmapWithWidth:(int)width Height:(int)height;

- (void)OnDrawBitmapUnlock:(void*) pSceenBitmapInfo HRect:(void*) pHorIRect VRect:(void*) pVerIRect receivedEvent:(int) nEvent;
- (unsigned char*)GetBitmapWithWidth:(int) nWidth Height:(int) nHeight;

- (void)useOpenGLBuffer;
- (void)setOpenGLBuffer:(void*)bitmap Width:(int)width Height:(int)height;

- (void) onSetDataRange:(const char*)range Data:(const char*)data;
- (char*) onGetFormulaFieldText;
- (int*)  onGetFormulaFieldSelection;
- (void) onSetFormulaFieldSelection:(int)startPosition endPosition:(int)endPosition;
- (void) onSetFormulaFieldText:(char*)formulaFieldText;
- (void) onSetFormulaSelectionEnabled:(int)enabled;

- (char*) onGetCellStyleText:(int) nBuiltinId;
- (int) onGetCellStyleTextLen:(int) nBuiltinId;

- (void)	onCoreNotify:(int) a_notifyCode;
- (void)    onCoreNotify2:(int) nNotifyCode2 Data:(void*) pData;

- (void)    onSheetChart:(int) a_nType status:(int)status;
- (void)	onPptInsertChart:(int) a_pptChartStatus;

- (void) onSaveDoc:(int)result MemoryBuffer:(NSData*) pData;

- (void) onSheetNextCommentSearchFinish;
- (void) onSheetPrevCommentSearchFinish;

- (void) onTrackReviewModeInfo:(int)reviewMode;

- (void) onSetRangeInputFieldText:(char *)inputFieldText;

- (void) onChangeAutoFilterStatus:(bool) bStatus;
- (void) onSetAutoFilterRect:(AUFOFILTER_CONTEXT) autoFilterContext;
- (void) onSetAutoFilterMenuInfo:(AUTOFILTER_MENU_INFO*) menuInfo;

- (void) onClearAniFrameStart;
- (void) onClearAniFrameEnd;

- (bool) canDrawStatus;
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

- (void)onSheetProtection:(int)result;

-(void)onSheetPivotFilterMenu:(int)nHandleId Information:(NSString*)strInformation FocusedMenuIndex:(int)nFocusedMenuIndex TitleString:(NSArray*)aJNI_TitleString IsFixedItem:(bool*) aJNI_IsFixedItem IsChecked:(bool*) aJNI_IsChecked ItemCount:(int) nItemCount CellRect:(CGRect) aJNI_CellPos;

-(void)onSheetProtectionSheetCannotEdit;
-(void)onShowKeypad;

-(NSString*)onGetResStringID:(int)stringId;
-(NSString*)onGetSheetCommentAuthorName;
- (bool)onGetPDFOutputWithAnnotation;

- (BOOL)getLoadSystemFont;
- (NSString*)getExternalFontPath;

-(void) onSpellCheck:(LPSPELLCHECK_INFO)spellCheckInfo;
- (BOOL)getSystemFontCount:(short*)a_pTotalFontCnt;
- (BOOL)getSystemFontNames:(char**)a_ppszFontNames;
-(int) getSheetFormulaRangeCount;
-(POIRect*) getSheetFormulaRangeArray;
- (void) onUndoRedo:(int)changedpagenum;
- (void) onVirtualKeypad;

- (int)IGetSheetDateFormatCodeCount:(int)a_nLocale calendarType:(int)a_nCalendarType;
- (NSArray*)IGetSheetDateFormatCodeList:(int)a_nLocale calendarType:(int)a_nCalendarType;
- (int)IGetTimeFormatCodeCount:(int)a_nLocale;
- (NSArray*)IGetTimeFormatCodeList:(int)a_nLocale;

- (NSArray*)IGetListWidgetString:(void*)a_pAnnot count:(int)a_nCount;
- (void)ISetListWidgetIdx:(void*)a_pAnnot index:(int)a_nIndex;

- (void)ISheetDataValidationAnswerError:(DataValidationErrorStyleEventType)a_nErrorStlyeEventType;

- (UIImage*)getPreviewThumbnail:(int)thumbnailType index:(int)index;

- (int)IGetCompatibilityModeVersion;

// USE_LICENSE_KEY
- (void)IGetEncryptedData:(char*)pDstBuffer;
- (int)ICheckLicense:(char*)aLicenseKey;
- (NSString*) onGetLicense;
- (NSMutableArray*)onGetMainFeatureBundleId;
- (NSString*)onGetMainFeatureName;

- (NSInteger)getLogType;

@end

#endif
