//
//  CEngineHelper.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 9. 18..
//  Copyright (c) 2014년 infraware. All rights reserved.
//
// **************************************************************
//  C++로 바꿔줘야 하는 문제로 랩핑
//  엔진 생성을 매번 하지 않기 위해
//  에디터 뷰 뿐만 아니라 다른 콘트롤러에서 접근 하는 경우가 있지 않을까?...
// **************************************************************

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "EvInterface.h"
#import "CDefineCommon.h"
#import "CEngineHelperEnum.h"
#import "CEngineWrapperClass.h"

@class EvInterface;
@class CConfigData;
@class CBookmarkData;

@interface CEngineHelper : NSObject
// 엔진 초기화 관련
- (BOOL)initEngineWithHeapSize:(int)heapSize screenSize:(CGSize)screenSize listener:(id)listener isPreviewMode:(BOOL)previewMode ExternalFont:(NSString*)externalFontPath loadSysFont:(BOOL)load;

// 문서 오픈 관련
//- (ResultType)IOpen:(NSString*)filePath;
- (ResultType)openDocumentWithFilePath:(NSString *)filePath isEditMode:(bool)isEditMode;
- (ResultType)openDocumentWithFilePath:(NSString *)filePath password:(NSString *)password writePassword:(NSString *)writePassword protectDocumentReadMode:(int)protectReadMode;
- (ResultType)openDocumentWithDocumentType:(DOCUMENT_TYPE)nType Memory:(NSData *)memoryData isEditMode:(bool)isEditMode;
- (ResultType)openDocumentWithDocumentType:(DOCUMENT_TYPE)nType Memory:(NSData *)memoryData password:(NSString *)password writePassword:(NSString *)writePassword protectDocumentReadMode:(int)protectReadMode;
//- (void)IClose;
- (void)closeDocument;
- (void) releaseEngine;
// - NewDocument
//- (void)newDocument : (NSString*) aSzFilePath width:(int) nWidth height:(int) nHeight loadType:(int) a_eLoadType pptPaperType:(int) a_PPTPaperType newTemplatePPT:(int) NewTemplatePPT locale:(int) a_nLocale landscape:(int) bLandScape tempPath:(NSString*) a_sTempPath bookmarkPath:(NSString*) a_sBookMarkPath;
- (ResultType)openDocumentWithFilePath:(NSString *)filePath password:(NSString *)password writePassword:(NSString*)writePassword protectReadMode:(int)protectReadMode;
- (NSString*)getDocumentPassword:(bool)readMode;
- (void) setDocumentPassword:(NSString*)password writePassword:(NSString*)writePassword readOnlyRecommended:(bool)readOnlyRecommended;

- (void)createWordDocument;
- (void)createSlideDocumentWithTemplate:(int) NewTemplatePPT;
- (void)createSheetDocument;
- (void)createHwpDocument;

// 페이지 이동 관련
//- (void)IMovePage:(int)a_eMoveType a_nPage:(int)a_nPage;
//- (void)moveFirstPage;
//- (void)movePreviousPage;
//- (void)moveNextPage;
//- (void)moveLastPage;
- (void)movePageAtIndex:(NSInteger)nPageIndex;

- (void)movePageToTopOrBottomAtIndex:(int)nPageIndex;

// 화면 정보
//- (CGRect)IGetScrollInfo_Editor;
//- (CGRect)getScrollInfoAtEditMode;
- (CGRect)rectForPageScrollInfo;

//- (CGRect)IGetPageRect:(int)page ZoomRatio:(int) nZoom DPI:(int) nDPI;
//- (CGRect)getPageRect:(int)page ZoomRatio:(int) nZoom DPI:(int) nDPI;
- (CGRect)rectForPageAtIndex:(int)page ZoomRatio:(int) nZoom DPI:(int) nDPI;

// 문서 정보
//- (CONFIG_INFO)IGetConfig;
//- (CONFIG_INFO)getConfigInfo;
- (int)pageNumber;
- (int)totalPageNumber;
- (int)zoomRatioForFitToWidth;
- (int)zoomRatioForFitToHeight;
- (int)zoomRatio;
- (int)zoomRatioToMax;
- (int)zoomRatioToMin;
- (bool)isAnnotAble;

- (DOCUMENT_TYPE)documentExtension;
- (EditModeType)editorMode;

- (bool)isWordDocument;
- (bool)isSlideDocument;
- (bool)isSheetDocuemnt;
- (bool)isPDFDocument;
- (bool)isHWPDocument;
- (bool)isImageDocument;
- (bool)isTxtDocument;
- (bool)isODFDocument;

- (bool)isEditMode;
- (bool)isViewMode;
- (bool)isTextMode;
- (bool)isOutlineMode;
- (bool)isWeblayoutMode;
- (bool)isPrintlayoutMode;
- (bool)isMobileviewLayoutMode;

- (void)SwitchEditMode;
- (void)SwitchViewMode;
- (void)SwitchTextMode;
- (void)SwitchOutlineMode;
- (void)SwitchWeblayoutMode;
- (void)SwitchPrintlayoutMode;
- (void)SwitchMobileviewLayoutMode;

- (ObjectType)objectType;
- (ObjectBasicTypes) objectBasicType;
- (int)objectID;
- (EDITOR_OBJECT_POINTARRAY*)objectPointArray;
- (CGRect)objectBoundary;
- (int)objectConnectionPointCount;
- (EDIT_OBJECT_POINT*)objectConnectionPointArray;
- (BOOL)isLineStartPointConnectionLock;
- (BOOL)isLineEndPointConnectionLock;


- (POINT_INFO*)multiObjectPointInfo;
- (int)multiObjectCount;
- (ObjectMultiType)getObjectMultiType;
- (CGRect)objectEditingBoundary;
- (int)objectEditingAngle;
- (int)objectRotateAngle;
- (int)objectPointCount;
- (EDIT_OBJECT_POINT*)editObjectPointArray;
- (int)objectAdjustHandleCount;
- (EDIT_OBJECT_POINT*)objectHandlePoints;
- (ObjectEditingType)objectEditingType;
- (int)objectSmartGuideCount;
- (SMART_GUIDES_INFO*)objectSmartGuideInfo;
- (BOOL) isGroupEnable;

- (ObjectEditingControllerType)objectEditingControllerType;
- (bool)isObjectRotation;
- (BOOL)isMultiObjectRotation;

-(CGPoint) getObjectStartPoint;
-(CGPoint) getObjectEndPoint;
-(CGSize) getObjectSize;
-(CGPoint) getObjectstartPointFramePage;

- (int)animationOrderCount;
- (int *)animationOrderNumbers;

- (CGRect)textMarkingStartPosition;
- (CGRect)textMarkingEndPosition;
- (int)textMarkingLineCount;
- (NSMutableArray*)textMarkingRectArray;
- (int)tableCellTextMarkingRectCount;

- (int)tableCellRectCount;
- (NSMutableArray*)cellRectArray;
//- (DOCUMENT_TYPE)documentType;
//- (int)documentExtensionType;
- (PORANGE)sheetCellEditTextRange;
- (PORANGE)sheetCellActiveRange;
- (PORANGE)sheetCellSelectedRange;

//- (SCREEN_INFO)IGetScreenPos;
- (SCREEN_INFO)getScreenInfo;

//- (CARET_INFO)IGetCaretInfo;
- (CARET_INFO)getCaretInfo;

//- (void)ISetZoom:(int)zoomFactor offset:(CGPoint)offset;
- (void)setZoom:(int)zoomFactor offset:(CGPoint)offset;
- (void)setZoomWithCenterPositionX:(int)centerX CenterY:(int)centerY scale:(int)zoomFactor keyPressed:(int)keyPresess;

//- (void)IScroll:(int)a_eScrollType factor:(int)a_eFactor offsetX:(int)a_nOffsetX offsetY:(int)a_nOffsetY key:(int)a_eKey;
- (void)scrollPage:(int)a_nOffsetX offsetY:(int)a_nOffsetY;

- (bool)IsNoneSlideEffect:(SlideShowPlayType)a_PlayType page:(int)a_nPage;

//- (void)IChangeScreenWithSize:(CGSize)size;
- (void)changeScreenWithSize:(CGSize)size;
- (void)changeScreenWithSizeOnFixedZoom:(CGSize)size;
//- (void)IInsertString:(NSString*) text compositionType:(int) compositionType position:(int) position stringLength:(int) length;
- (NSString *)getMarkString;
- (void)insertString:(NSString*) text compositionType:(int) compositionType position:(int) position stringLength:(int) length;
- (void)inputVirtualKey:(VirtualKeys)key withShift:(bool)isShift withCtrl:(bool)isCtrl;
- (void)insertCharacter:(int)unicode;
- (void)replaceCharacter:(int)unicode;
- (void)replaceString:(NSString*)string length:(int)length;
- (void)deleteCharacter:(VirtualKeys)key repeatCount:(int)repeatCount;
//- (void)IHIDAction:(int)mode point:(CGPoint)point modifiers:(int)modifiers time:(int)time pressure:(int)pressure detectTouch:(bool)detectTouch;
- (void)touchesBegan:(CGPoint)point;
- (void)touchesMoved:(CGPoint)point;
- (void)touchesEnded:(CGPoint)point;
- (void)flickWithVelocityX: (int)velocityX velocityY:(int)velocityY;
- (void)touchesDoubleTap:(CGPoint)point;
- (void)touchesLongPress:(CGPoint)point;
- (void)touchesCanceled:(CGPoint)point;

// 텍스트 서식 패널 시작 (Text - Font, Paragrapg, Style) ++++++++++++++++++++++++++++++++
// Text - Font
- (void)setFont:(NSString*)font;
- (void)setAsianTextFont:(NSString*)asianTextFont;
- (void)setFontSize:(float)fontSize;
- (void)setFontColorWithStandardColor:(int)fontColor;
- (void)setFontColorWithThemeColor:(int)themeColorIndex;
- (void)setFontBGColorWithStandardColor:(int)fontColor;
- (void)setFontBGColorWithThemeColor:(int)themeColorIndex;

- (void)setFontEffectNormal;
- (void)setFontEffectBoldOn;
- (void)setFontEffectBoldOff;
- (void)setFontEffectItalicOn;
- (void)setFontEffectItalicOff;
- (void)setFontEffectOutlineOn;
- (void)setFontEffectOutlineOff;
- (void)setFontEffectEmbossedOn;
- (void)setFontEffectEmbossedOff;
- (void)setFontEffectEngravedOn;
- (void)setFontEffectEngravedOff;
- (void)setFontEffectUnderline:(FontEffectUnderlineStyle)underlineStyleIndex;
- (void)setFontEffectUnderlineColorWithStandardColor:(int)underlineStandardColor;
- (void)setFontEffectUnderlineColorWithThemeColor:(int)underlineThemeColorIndex;
- (void)setFontEffectStrikethrough:(NSUInteger)strikethroughCount;
- (void)setFontEffectSuperscriptOn;
- (void)setFontEffectSuperscriptOff;
- (void)setFontEffectSubscriptOn;
- (void)setFontEffectSubscriptOff;

- (void)setFontBackgroundColorNone;
- (void)setFontBackgroundColorWithStandardColor:(int)fontBackgroundColor;
- (void)setFontBackgroundColorWithThemeColor:(int)fontThemeColorIndex;

- (void)changeTextToUpperCase;
- (void)changeTextToLowerCase;

// Get
- (NSString*)getFont;
- (NSString*)getAsianTextFont;
- (float)getFontSize;
- (int)getFontColor;
- (BOOL)isFontColorUseThemeColor;
- (int)getFontBGColor;
- (BOOL)isFontEffectBoldOn;
- (BOOL)isFontEffectItalicOn;
- (BOOL)isFontEffectOutlineOn;
- (BOOL)isFontEffectEmbossedOn;
- (BOOL)isFontEffectEngravedOn;
- (BOOL)isFontEffectUnderlineOn;
- (FontEffectUnderlineStyle)getFontEffectUnderline;
- (int)getFontEffectUnderlineColor;
- (BOOL)isFontEffectUnderlineColorUseThemeColor;
- (int)getFontEffectStrikethroughCount;
- (BOOL)isFontEffectSuperscriptOn;
- (BOOL)isFontEffectSubscriptOn;

- (int)getFontBackgroundColor;
- (BOOL)isFontBackgroundColorUseThemeColor;


// Text - Paragraph - ISetParaAttribute
- (void)setParagraphVerticalAlign:(ParagraphVerticalAlign)alignType;
- (void)setParagraphHorizontalAlign:(ParagraphHorizontalAlign)alignType;
- (void)setParagraphDeleteBulletNumber;
- (void)setParagraphBulletsType:(int)nBulletsType bRestart:(bool)isRestart;
- (void)setParagraphBulletsNumberingType:(int)nBulletsNumberingType bRestart:(bool)isRestart;
- (void)setParagraphBulletsMultiLevelType:(int)nBulletsMultiLevelType bRestart:(bool)isRestart;
- (void)setParagraphNumberingStartNumber:(int) startNumber;
- (void)setParagraphNumberingRestart:(bool)numberRestart startNum:(int) startNumber;
- (void)setParagraphLeftIndentation;
- (void)setParagraphRightIndentation;
- (void)setParagraphLeftMargin:(NSInteger)nValue;
- (void)setParagraphRightMargin:(NSInteger)nValue;
- (void)setParagraphFirstLineMargin:(NSInteger)nValue;
- (void)setParagraphLineSpaceType:(ParagraphLineSpaceType)lineSpacingType;
- (void)setParagraphLineSpace:(int)spaceType lineSpacingValue:(double)value;
- (void)setParagraphLineSpace:(double)lineSpacingValue;
- (void)setParagraphBeforeSpacing:(NSInteger)nValue;
- (void)setParagraphAfterSpacing:(NSInteger)nValue;
- (void)setParagraphTextDirection:(ParagraphTextDirection)textDirectionType;
- (void)setWordTextFlow:(ParagraphTextDirection)textDirectionType;
- (void)setParagraphTextBiDirection:(ParagraphTextDirectionBiDirection)textBiDirection;
- (void)setSheetWrap:(bool)bWrap;

// IGetParaAttInfo
- (ParagraphVerticalAlign)getParagraphVerticalAlign;
- (ParagraphHorizontalAlign)getParagraphHorizontalAlign;
- (int)getParagraphBulletType;
- (int)getParagraphShapeBullet;
- (int)getParagraphNumberingBullet;
- (int)getParagraphMultiLevelBullet;
- (int)getParagraphNumberingStartNumber;
- (int)getParagraphLeftMargin;
- (int)getParagraphRightMargin;
- (int)getParagraphFirstLineMargin;
- (ParagraphLineSpaceType)getParagraphLineSpace;
- (double)getParagraphLineSpaceValue;
- (int)getParagraphBeforeSpacing;
- (int)getParagraphAfterSpacing;
- (int)getParagraphTextDirection;
- (int)getWordTextFlow;
- (int)getParagraphTextBidirection;
- (int)getSheetWrap;

// Text - Style
- (void)setFontStyle:(int)fontStyleID;
- (int)getFontStyleID;
// 텍스트 서식 패널 끝 (Text - Font, Paragrapg, Style) -----------------------------------

- (void)setTableResize:(int)width height:(int)height;
- (void)setShapeResize:(int)width height:(int)height isNoChangeAspect:(bool)isNoChangeAspect;
- (void)setObjectRotation:(int)rotation preset:(int)preset;

// 도형 타입 서식 패널 시작 (Shape / Image) ++++++++++++++++++++++++++++++++++++++++++++++++++++
// Set
- (void)setShapeFillColorSlide:(long)color;
- (void)setShapeFillColorWithStandardColor:(long)color;
- (void)setShapeFillColorWithThemeColor:(long)color;
- (void)setShapeGradation:(NSArray *)gradationInfo;
- (void)setShapeGradationDirection:(int)direction;
- (void)setShapeGradationWitheStandardColor:(long)color;
- (void)setShapeGradationWitheThemeColor:(long)color;
- (void)setShapeTexture:(UIImage *)textureImage;

- (void)setObjectLineColorType:(ObjectLineColorType)lineColorType;
- (void)setObjectLineThickness:(float)thickness;
- (void)setObjectLineColorWithStandardColor:(long)color;
- (void)setObjectLineColorWithThemeColor:(long)color;
- (void)setObjectLineDash:(ObjectLineStyleDash)dashType;
- (void)setObjectLineDash:(ObjectLineStyleDash)dashType compound:(ObjectLineStyleCompound)compoundType;

- (void)setObjectTransparency:(int)transparency;
- (void)setObjectLineTransparency:(int)transparency;

- (void)setObjectEffectType:(NSInteger)effectType;
- (void)setObjectEffectType2003:(NSInteger)effectType;
- (void)setObjectEffectShadowOn;
- (void)setObjectEffectShadowOff;
- (void)setObjectEffectShadowType:(ObjectShadowStyle)shadowType;
- (void)setObjectEffectReflectionTransparency:(int)transparency;
- (void)setObjectEffectReflectionSize:(int)size;
- (void)setObjectEffectNeonStandardColor:(long)color;
- (void)setObjectEffectNeonThemeColor:(long)color;
- (void)setObjectEffectNeonSize:(int)size;
- (void)setObjectEffect3DSolidOn;
- (void)setObjectEffect3DSolidOff;
- (void)setObjectEffect3DSolidType:(NSInteger)solidType;
- (void)setObjectEffect3DSolidDepth:(int)solidDepth;
- (void)setObjectEffect3DRotationOn;
- (void)setObjectEffect3DRotationOff;
- (void)setObjectEffect3DRotationType:(int)rotationType;

- (void)setObjectOrderPosition:(ObjectPosition)position;
- (void)setObjectArrangeTextWrap:(ObjectTextWrapType)textWrap;
- (void)setObjectArrangeAlign:(ObjectAlignType)align;
- (void)setMultiObjectArrangeAlign:(ObjectAlignType)align;

- (void)setLineStartArrow:(ShapeLineStyleArrow) lineType;
- (void)setLineEndArrow:(ShapeLineStyleArrow) lineType;
- (void) setLineStyle:(long)lineColor lineThickness:(int)lineThickness lineDashType:(int)lineDashType;

- (void)replaceShape:(int)shapeType;


// Get
- (int)getShapeFillType;
- (long)getShapeFillSolidColor;
- (int)getShapeFillGradationDirection;
- (long)getShapeFillGradationColor;
- (NSArray *)getGradationSupportOfSelectedColor:(long)seletedColor;
- (NSArray *)getGradationInfo;
- (int)getShapeFillTextureType;
- (int)getShapeTexture;

- (float)getObjectLineThickness;
- (ObjectLineColorType)getObjectLineColorType;
- (int)getObjectLineColor;
- (int)getObjectLineDashType;
- (int)getObjectLineCompoundType;
- (int)getObjectTransparency;
- (int)getObjectLineTransparency;

- (BOOL)isObjectEffectShadowOn;
- (int)getObjectEffectShadowType;
- (int)getObjectEffectReflectionTransparency;
- (int)getObjectEffectReflectionSize;
- (int)getObjectEffectNeonType;
- (long)getObjectEffectNeonColor;
- (int)getObjectEffectNeonSize;
- (BOOL)isObjectEffect3DFormatOn;
- (int)getObjectEffect3DFormatType;
- (int)getObjectEffect3DFormatDepth;
- (BOOL)isObjectEffect3DRotationOn;
- (int)getObjectEffect3DRotationType;

- (int)getLineStartArrow;
- (int)getLineEndArrow;
- (NSArray *)getLineStyle;

// 순서와 맞춤은 get 정보 없음. 단일 동작 실행
- (int)getObjectArrangeTextwrap;

// Image
- (void)setImageLineTransparency:(int)transparency;
- (void)setImageEffectBrightness:(float)brightness;
- (void)setImageEffectContrast:(float)contrast;
- (void)setImageEffectRestorOriginal;
- (void)setImageStyle:(NSInteger)style;

- (float)getImageEffectBrightness;
- (float)getImageEffectContrast;
- (int)getImageStyle;

// 도형 타입 서식 패널 끝 (Shape / Image) ------------------------------------------------------

// START - 차트 관련 API ----------------------------------------------------------------

- (void)insertChart:(NSInteger)index;
- (void)insertChart:(NSInteger)index bPlaceHolder:(BOOL)bPlaceHolder;
- (void)replaceChart:(NSInteger)index;
- (void)switchBetweenRowAndCol;
- (void)doHideCellDataOnOff:(bool)isOn;
- (void)applyChartTitle:(NSString *)title;
- (void)applyChartXAxisTitle:(NSString *)title;
- (void)applyChartYAxisTitle:(NSString *)title;
- (void)applyChartLegendType:(NSInteger)index;
- (void)applyChartDataLabel:(NSInteger)index;

- (void)setChartStyle:(NSInteger)nChartStyleIndex;
- (void)setChartBorder:(int)nType isBorder:(bool)isBorder;
- (void)setChartOriginalData:(int)nEnableNumbFmt nNegativeType:(int)nNegativeType nDecPlaces:(int)nDecPlaces;
- (void)setChartNegative:(NSInteger)negativeType;
- (void)setChartDemicalType:(NSInteger)demicalType;
//- (void)setChartOrder:(int)orderType;
//- (void)setChartTextWrap:(int)textWrapType;
- (void)setChartFontSize:(NSInteger)fontSizeIndex;
- (void)setChartFontName:(NSString *)chartFontName;
- (void)setChartLayoutMajorAxis:(bool)isAxis;
- (void)setChartLayoutAxisGuideLine:(int)axisType isShow:(bool)isShow;
- (void)setChartLayoutYAxisLog:(bool)isYAxisLog;
- (void)setChartLayoutAxisLine:(bool)isAxisLine;
- (void)setChartLayoutAxisLabel:(bool)isAxisLabel;
- (void)setChartLayoutXAxisLabelSlope:(int)index;
- (void)setChartLayoutYAxisLabelSlope:(int)index;
- (void)showChartStyleImage;
- (void)startAdjustChartDataRange;
- (void)doneAdjustChartDataRange;
- (void)endAdjustChartDataRange;

- (void)getChartStyleThumbnail:(int)nChartStyleCount nWidth:(int)nWidth nHeight:(int)nHeight;
- (bool)isChartDisplayFormatEnable;
- (int)getChartLayoutXAxisLabelSploe;
- (int)getChartLayoutYAxisLabelSploe;
- (bool)isChartLayoutXAxisGuideLine;
- (bool)isChartLayoutYAxisGuideLine;
- (bool)isChartLayoutMajorGridLine;
- (bool)isChartLayoutYAxisLog;
- (bool)isChartLayoutAxisLine;
- (bool)isChartLayoutAxisLabel;
- (bool)isChartBorderFrameOnOff;
- (bool)isChartBorderPlotOnOff;
- (bool)isChartOriginalData;
- (int)chartFormatDisplayFormatNegativeType;
- (int)chartFormatDecimalPlacesValue;
- (bool)getHideCellDataStatus;
- (NSString *)getChartDataRange;
- (NSString *)getChartTitle;
- (NSString *)getChartXAxisTitle;
- (NSString *)getChartYAxisTitle;
- (NSInteger)getChartFontSize;
- (NSString *)getChartFontName;
- (int)getChartLegend;
- (int)getChartDataLabelPosition;
- (int)getChartType;
- (bool)isVerticalStickTypeChart;
- (bool)isVerticalStockTypeChart;
- (bool)isHorizontalStickTypeChart;
- (bool)isHorizontalStockTypeChart;
- (bool)isCircleTypeChart;
- (bool)isScatterTypeChart;
- (bool)isLineTypeChart;
- (bool)isSurfaceTypeChart;
- (bool)isDonutTypeChart;
- (bool)isRaderTypeChart;
- (NSUInteger)getChartStyleIndexOfTotalIndex:(NSUInteger)totalIndex;

// END - 차트 관련 API ------------------------------------------------------------------

- (void)doRepeatVideoOnOff:(bool)isOn;
- (bool)getRepeatVideoStatus;

- (void)insertImageByImagePath:(NSString*)imagePath;
- (void)insertMedia:(UIImage*)a_bitmap mediaPath:(NSString*)a_pMediaPath isLinked:(bool)bLinked isReplaceVideo:(bool)isReplaceVideo;
- (void)insertOnlineVideo:(NSString *)url;
- (void)insertImageByBitmap:(UIImage*)image;
- (void)insertHorizontalTextBox;
- (void)insertVerticalTextBox;
- (void)insertShape:(int)a_nShape;
- (void)insertShapeAtPosition:(int)shape rect:(CGRect)rect angle:(int)angle;
- (void)insertLineAtPosition:(int)shape rect:(CGRect)rect isStartArrow:(BOOL)startArrow isEndArrow:(BOOL)endArrow;
- (void)insertTable:(NSInteger)row column:(NSInteger)column bPlaceHolde:(BOOL)bPlaceHolde;
- (void)insertTableForSheet;

- (void)resizeSheetTable;
- (void)startTableRangeInput:(bool)isIncludeSheet;
- (void)stopTableRangeInput;


//- (BWP_CHART_DATA)getWordSlideChartInfo;
- (void)insertSymbol:(int)nSymbolcode;
- (bool)isEnableSymbol;

//Slide Transition
-(void)slideShowWithWidth:(int)a_Width Height:(int)a_Height StartPage:(int)a_StartPage;
-(void)slideShowGlSetSync;
-(void)slideShowStop;
- (void)slideShowPlay:(SlideShowPlayType)playType page:(int)page animationIndex:(int)animationIndex isSkipEffect:(bool)isSkipEffect;

- (void)setTransitionEffect:(int)pageNumber transitionType:(TransitionEffectType)transitionEffectType transitionOptionType:(TransitionEffectOptionType)transitionEffectOptionType Duration:(int)duration isTouchScreecn:(bool)bAdvClick isAfter:(bool)bAdvTime AdvanceTime:(int)nAdvTime;
- (int)getTransitionEffectType;
- (int)getTransitionEffectType:(int)pageIndex;
- (int)getTransitionEffectOptionType;
- (int)getTransitionDuration;
- (bool)isTransitionTouchTheScreen;
- (bool)isTransitionAfter;
- (int)getTransitionAfterTime;

// Slide Animation
- (void)addSlideAnimationToOptionSet:(SlideAnimationOptionSet)optionSet animationType:(SlideShowAnimationType)animationType animationPresetType:(SlideAnimationPresetType)presetType firstOptionValue:(int)firstOptionValue secondOptionValue:(int)secondOptionValue startTypeIndex:(SlideAnimationTriggerType)startTypeIndex;
- (void)setSlideAnimation:(int)index optionSet:(SlideAnimationOptionSet)optionSet animationType:(SlideShowAnimationType)animationType animationPresetType:(SlideAnimationPresetType)presetType firstOptionValue:(int)firstOptionValue secondOptionValue:(int)secondOptionValue startTypeIndex:(SlideAnimationTriggerType)startTypeIndex;
- (PPT_ANIMATION_INFO)getSlideAnimationInfo:(int)nIndex;

//- (int)getSlideAnimationListCount;
//- (int)getSlideAnimationFrameCount;
- (void)setSlideAnimationMove:(int)index moveIndex:(int)moveIndex;
- (void)setSlideAnimationDelete:(int)index;

- (void)addObjectAnimationToOptionSet:(SlideAnimationOptionSet)optionSet animationType:(SlideShowAnimationType)animationType animationPresetType:(SlideAnimationPresetType)presetType
					 firstOptionValue:(int)firstOptionValue secondOptionValue:(int)secondOptionValue startTypeIndex:(SlideAnimationTriggerType)startTypeIndex;
- (void)modifyObjectAnimation:(int)index optionSet:(SlideAnimationOptionSet)optionSet animationType:(SlideShowAnimationType)animationType animationPresetType:(SlideAnimationPresetType)presetType
			 firstOptionValue:(int)firstOptionValue secondOptionValue:(int)secondOptionValue startTypeIndex:(SlideAnimationTriggerType)startTypeIndex;
- (void)setObjectAnimationMove:(int)index moveIndex:(int)moveIndex;
- (void)setObjectAnimationDelete:(int)index;

- (PPT_ANIMATION_INFO)getObjectAnimationInfo:(int)index;
- (int)getObjectAnimationListCount;
- (int)getObjectAnimationList:(int)count pptAnimationList:(LPPPT_ANIMATION_INFO*)pptAnimationList;
- (int)getObjectAnimationFrameCount;

// Page Mode
- (void)setPageMode:(PageMode)pageMode;

// Edit : 구현부 작업 필요함
- (void)selectAll;
- (void)copyObject;
- (void)cutObject;
- (void)pasteObject:(int)dataType stringData:(NSString*)stringData;
- (void)copyFormat;
- (void)pasteFormat:(NSString*)stringData;
- (void)pasteValue:(NSString*)stringData;
- (void)pasteFormula:(NSString*)stringData;
- (void)clearFormat;

- (void) setExportPdfResolution:(int)aRes;

// Table
- (void)setTableFillColorWithStandardColor:(long)color;
- (void)setTableFillColorWithThemeColor:(int)themeColor;
- (void)setTableBorderProperty:(int)borderMask borderColor:(int)color borderWidth:(float)width borderStyle:(NSInteger)style;
- (void)setTableBorderOn:(int)borderType;
- (void)setTableBorderOff:(int)borderType;
- (int)getTableFillColor;
- (BOOL)isTableFillColorUseThemeColor;
- (long)getTableBorderColor;
- (float)getTableBorderWidth;
- (long)getTableBorderWidthFromLeft;
- (long)getTableBorderWidthFromTop;
- (long)getTableBorderWidthFromRight;
- (long)getTableBorderWidthFromBottom;
- (long)getTableBorderWidthFromVertical;
- (long)getTableBorderWidthFromHorizontal;
- (long)getTableBorderWidthFromDownDiagonal;
- (long)getTableBorderWidthFromUpDiagonal;

- (int)getTableBorderColorFromLeft;
- (int)getTableBorderColorFromTop;
- (int)getTableBorderColorFromRight;
- (int)getTableBorderColorFromBottom;
- (int)getTableBorderColorFromVertical;
- (int)getTableBorderColorFromHorizontal;
- (int)getTableBorderColorFromDownDiagonal;
- (int)getTableBorderColorFromUpDiagonal;

- (BOOL)isTableBorderColorUseThemeColor;

- (int)getTableBorderStyle;

- (BOOL)isTableLeftBorderON;
- (BOOL)isTableTopBorderON;
- (BOOL)isTableRightBorderON;
- (BOOL)isTableBottomBorderON;
- (BOOL)isTableVerticalBorderON;
- (BOOL)isTableHorizontalBorderON;
- (BOOL)isTableDownDiagonalBorderON;
- (BOOL)isTableUpDiagonalBorderON;

- (void)setTableStyleOptionHeaderRowON;
- (void)setTableStyleOptionHeaderRowOFF;
- (void)setTableStyleOptionFirstColumnON;
- (void)setTableStyleOptionFirstColumnOFF;
- (void)setTableStyleOptionTotalRowON;
- (void)setTableStyleOptionTotalRowOFF;
- (void)setTableStyleOptionLastColumnON;
- (void)setTableStyleOptionLastColumnOFF;
- (void)setTableStyleOptionBandedRowsON;
- (void)setTableStyleOptionBandedRowsOFF;
- (void)setTableStyleOptionBandedColumnsON;
- (void)setTableStyleOptionBandedColumnsOFF;

- (BOOL)isTableStyleOptionHeaderRowON;
- (BOOL)isTableStyleOptionFirstColumnON;
- (BOOL)isTableStyleOptionTotalRowON;
- (BOOL)isTableStyleOptionLastColumnON;
- (BOOL)isTableStyleOptionBandedRowsON;
- (BOOL)isTableStyleOptionBandedColumnsON;

- (void)setTableStyle:(NSInteger)style;
- (NSInteger)getTableStyleIndex;
- (void)clearTableStyle;
- (int)getSheetTableCountInSelection;
- (BOOL)isExistSheetTableInSelectedRange;
- (BOOL)isSheetTable;

- (void)insertTableCell:(int)insertTableCellType;
- (void)deleteTableAll;
- (void)deleteTableRow;
- (void)deleteTableColumn;
- (void)setTableAlign:(NSInteger)nAlign;
- (void)selectRow;
- (void)selectColumn;
- (void)selectAllCell;
- (void)equalTableRow;
- (void)equalTableColumn;
- (void)tableCellmerge;
- (void)tableCellSplit:(int)row column:(int)column;
- (void)viewSheetCellSelectionArea;
- (void)autoFitRow;
- (void)autoFitColumn;
- (void)mergeSplitSheetCells;
- (void)insertSheetColumns:(int)count;
- (void)insertSheetRows:(int)count;
- (void)deleteSheetColumns;
- (void)deleteSheetRow;
- (void)insertSheetCell:(NSInteger)mode;
- (void)deleteSheeCell:(NSInteger)mode;
- (void)unhideSheetColumn;
- (void)hideSheetColumn;
- (void)unhideSheetRow;
- (void)hideSheetRow;
- (void)sheetClear:(int)sheetClearType;
- (void)setSheetCellRowSize:(int)rowSize;
- (void)setSheetCellColumnSize:(int)columnSize;
- (void)setTableSelection:(NSInteger)selectionType;
- (void)replaceImage:(UIImage*)image;
- (void)insertSheetTableRowColumn:(int)insertType;
- (void)deleteSheetTableRow;
- (void)deleteSheetTableColumn;

// Memo
- (void)showMemo;
- (void)hideMemo;
- (BOOL)isShowMemo;
- (void)insertMemo:(NSString*)memoData;
- (void)editMemo:(NSString*)memoData;
- (void)deleteMemo;
- (void)deleteCurrentSlideMemo;
- (void)deleteAllMemo;
- (void)setMemoSetting:(bool)isOn;
- (int)getNextMemoId;
- (int)getNextMemoPageNumber;
- (int)getPrevMemoId;
- (int)getPrevMemoPageNumber;
- (void)goToActiveMemo;
- (void)goToNextMemo;
- (void)goToPrevMemo;
- (void)goToFirstMemo;
- (void)goToLastMemo;
- (int)getActiveMemoId;
- (void)setActiveMemoId:(int)activeMemoId;
- (NSString*)getActiveMemoAuthor;
- (NSString*)getActiveMemoDate;
- (NSString*)getActiveMemoContents;
- (int)getActiveMemoPageNumber;
- (int)getMemoId;
- (int)getFirstMemoId;
- (int)getFirstMemoPageNumber;
- (int)getLastMemoId;
- (int)getLastMemoPageNumber;
- (BOOL)isMemoEditable;
- (BOOL)isExistMemoForSheet;
//- (MEMO_CMD_DATA)getMemoInfo;


- (int)getCaretMode;

- (int)getWordSlideOpInfo;
- (int)getWordSlideOpInfoEx;

- (int)getObjectRotationAngle;
- (int)getObjectWidthSize;
- (int)getObjectHeightSize;
- (bool)isRotationKeepRatio;
- (bool)isSheetSingleCell;
- (bool)isSheetTableActiveCell;
- (bool)isSheetMergeCell;
- (bool)isSheetCanMergeCell; // 여러 셀 판단
- (BOOL)isEmptyCell;
- (bool)isSheetHiddenColumns;
- (bool)isSheetHiddenRows;
- (bool)isSheetCellSelected;
- (int)getCurrentSheetCellRow1;
- (int)getCurrentSheetCellCol1;
- (int)getWordPptTableCellStatusInfo;


// Pen
- (void)setPenDrawingWithMode:(int) a_eMode SetPenDraw:(bool) a_bPenDraw;
- (void)setPenDrawingWithColor:(NSInteger) a_nColor ThemeColorIndex:(int) nThemeColor Transparency:(int) a_nTransparency;
- (void)setPenDrawingWithSize:(float) a_nSize;
- (void)setPenDrawingWithTransparency:(int) a_nTransparency;
- (void)setPenDrawingClearAll;
- (void)setPenDrawingWithXPostions:(int[]) a_pX YPos:(int[]) a_pY Time:(int[]) a_pTime Pressure:(int[]) a_pPressure Count:(int) nCnt;
- (void)startPenDrawingTableMode;
- (void)endPenDrawingTableMode;
- (void)setPenDrawingTableClear;
- (void)showDrawPen:(BOOL) isShow;
- (BOOL)isPenDrawShow;
- (int) getPenDrawingType;
- (BOOL)isPenDrawFrameShow;
- (void)startPenSelectionMode;
- (void)endPenSelectionMode;
- (BOOL)isPenSelectionMode;


// Cell Format
- (void) setCellGeneralFormat;
- (void)setCellNumberFormatDecimalPlaces:(int)decimalPlaces isSeperate:(bool)seperate negative:(int)negative;
- (void)setCellCurrencyFormatDecimalPlaces:(int)decimalPlaces currency:(int)currency negative:(int)negative;
- (void)setCellAccountFormatDecimalPlaces:(int)decimalPlaces accounting:(int)accounting;
- (void)setCellDateFormatIndex:(NSInteger)index countryIndex:(NSInteger)countryIndex;
- (void)setCellTimeFormatIndex:(NSInteger)index countryIndex:(NSInteger)countryIndex;
- (void)setCellPercentFormatDecimalPlaces:(int)decimalPlaces;
- (void)setCellFractionFormatIndex:(NSInteger)index;
- (void)setCellScientificFormatDecimalPlaces:(int)decimalPlaces;
- (void)setCellTextFormat;

- (SheetFormat)getCellFormat;
- (int)getCellFormatDecimalPlaces;
- (BOOL)isCellFormatUse1000Separated;
- (int)getCellFormatNegativeIndex;
- (int)getCellFormatCurrencyIndex;
- (int)getCellFormatAccountingIndex;
- (int)getCellFormatDateIndex;
- (int)getCellFormatTimeIndex;
- (int)getCellFormatFractionIndex;
- (int)getCellFormatDateLanguageIndex;
- (int)getCellFormatTimeLanguageIndex;

// Cell Property
- (void)setCellColorForSheet:(NSInteger)color;
- (int)getCellColorForSheet;
- (void)setCellBorderOffForSheet:(int)borderMask;
- (void)setCellBorderForSheet:(int)borderMask borderColor:(int)color borderStyle:(int)style;
- (int) getCellBorderColorForSheet;
- (int) getCellBorderStyleForSheet;
- (int) getCellBorderLeftColorForSheet;
- (int) getCellBorderLeftStyleForSheet;
- (BOOL)isCellAllBorderOnForSheet;
- (BOOL)isCellOutSideBorderOnForSheet;
- (BOOL)isCellInsideBorderOnForSheet;
- (BOOL)isCellLeftBorderONForSheet;
- (BOOL)isCellTopBorderONForSheet;
- (BOOL)isCellRightBorderONForSheet;
- (BOOL)isCellBottomBorderONForSheet;
- (BOOL)isCellVerticalBorderONForSheet;
- (BOOL)isCellHorizontalBorderONForSheet;
- (BOOL)isCellDownDiagonalBorderONForSheet;
- (BOOL)isCellUpDiagonalBorderONForSheet;
- (void)setCellStyleForSheet:(NSInteger)uiCellStyle;
- (int)getCellStyleForSheet;
- (BOOL)isEnableBorderHorizontal;
- (BOOL)isEnableBorderVertical;

// group
- (void)setObjectGroup;
- (void)setObjectUngroup;

//delete objcet
- (void)deleteObject;

- (void)duplicate;

//pdf annotation
- (void)showAnnotation;
- (void)hideAnnotation;
- (BOOL)isShowAnnotation;
- (void)addStickyNote:(int)xPosition yPosition:(int)yPosition;
- (BOOL)isPDFStickyNoteCreated;

// pdf bokmark
- (int)getPdfBookmarkCount;
- (NSArray*)getPDFChildBookmarksInfo:(long)parentID;
- (void)goToPDFBookmarkWithItem:(long)item;
- (void)moveBookmark:(CBookmarkData*)moveItem Into:(long)targetItem;
- (void)moveBookmark:(long)item targetBookmark:(long)toItem;
- (void)moveBookmarkToSub:(long)item targetBookmark:(long)toItem;
- (void)moveBookmarkToPrev:(long)item targetBookmark:(long)toItem;
- (void)deletePDFBookmark:(long)item;
- (void)renamePDFBookmark:(CBookmarkData *)renameItem;

// multi select
- (void)startMultiSelectionMode;
- (void)endMultiSelectionMode;
- (BOOL)isMultiSelectionMode;

// undo redo
- (void)redo;
- (void)undo;
- (BOOL)isEnableRedo;
- (BOOL)isEnableUndo;
- (void)resetUndoRedoData;

// Sheet Input
- (void)sheetCharInput;
- (void)confirmSheetInput:(SheetInputConfirmType)inputConfirmType;

// Footnote/Endnote
- (void)insertFootnote;
- (void)insertEndnote;
- (BOOL)isEnableFootnotes;

// Header/Footer
- (void)addHeader:(int)templateType;
- (void)addFooter:(int)templateType;
- (void)addEmptyHeader;
- (void)addEmptyThreeColumnHeader;
- (void)addEmptyFooter;
- (void)addEmptyThreeColumnFooter;
- (void)addHeaderPageNumber:(int)templateType;
- (void)addFooterPageNumber:(int)templateType;
- (HEADER_FOOTER_OPTION)getHeaderFooterOption;

// Bookmark
- (void)addBookmark:(NSString*)addBookmarkString;
- (void)moveSelectedBookmarkPosition:(NSString*)selectedBookmarkString;
- (void)deleteBookmark:(NSString*)deleteBookmarkString;
- (NSMutableArray*)getBookmarkList;
- (int)getBookmarkCount;
- (BOOL)isEnableBookmark;
- (BOOL)isEnableAddBookmark;

//Hyperlink
-(NSString *)getHyperlinkUrl;
-(NSString *)getHyperlinkUrlAtPoint:(CGPoint)touchPoint;
-(NSString *)getHyperlinkUrlForSheet;
- (BOOL)isHyperlinkWebUrl;
- (void)addHyperlinkUrl:(NSString *)showingTxt URL:(NSString *)url;
- (void)addHyperlinkUrlForSheet:(NSString *)showingTxt URL:(NSString *)url;
- (void)addHyperlinkBookMark:(NSString *)showingText BookMarkInfo:(NSString *)bookMarkInfo;
- (void)addHyperlinkBookMarkForSheet:(NSString *)showingText BookMarkInfo:(NSString *)bookMarkInfo nSheet:(NSUInteger)nSheet;
- (void)addHyperlinkBookMarkForSlide:(NSString *)showingText LinkType:(WordSlideLinkType)linkType PageNum:(int)pageNum;
- (void)removeHyperlink;
- (void)removeHyperlinkForSheet;
- (BOOL)isEnableHyperLink;
- (BOOL)isEnableHyperLinkText;
- (void)runHyperLinkInCellForSheet;
- (NSArray *)getSheetTabNameListExceptHideTab;
- (BOOL)isExistHyperlinkInfo;
- (BOOL)isExistHyperlinkInfoAtPoint:(CGPoint)touchPoint;
- (BOOL)isExistHyperlinkInfoForSheet;
- (int)getHyperLinkType;
- (int)getHyperLinkTypeAtPint:(CGPoint)touchPoint;
- (int)getHyperLinkTypeForSheet;
-(NSString *)getHyperlinkText;
-(NSString *)getHyperlinkTextForSheet;
-(NSString *)getHyperlinkCellRangeForSheet;
-(int)getHyperlinkPageNumber;
-(int)getHyperlinkPageNumberAtPoint:(CGPoint)touchPoint;
-(int)getHyperlinkSheetIndexForSheet;


//find/Replace
- (void) searchStart:(NSString*)findText MatchWhole:(int)matchWhole MatchCase:(int)matchCase halfFullWidth:(int)halfFullWidth directionUp:(int)direction;
- (void) searchStop;
- (void) setReplace:(NSString*)a_sFind matchWord:(int)a_bMathchWord matchCase:(int)a_bCase directionUp:(int)a_bDirUp replaceText:(NSString*)a_sReplace replaceMode:(int)bReplaceMode halfFullWidth:(int)a_bHalfFullWidth;
- (void) sheetFind:(NSString*)a_pszFindText nFlag:(int)a_nFlag;
- (void) sheetReplace:(NSString*)a_pszFindText replaceText:(NSString*)a_pszReplaceText nFlag:(int)a_nFlag;
- (BOOL) isSearchMode;

// Image Crop
- (void)startCroppingMode;
- (void)applyCropping;
- (void)cancelCropping;
- (BOOL)isCroppingMode;

// word page layout
- (void) setPageBreakType:(int) breakType;
- (void) setPageLayoutInfo:(NSMutableArray *) pageLayoutInfo;
- (int) getSectionDocumentInfo;
- (NSMutableArray *)getPageLayoutInfo;

// word page background
- (void) setPageWatermarkInfo:(NSMutableArray *) waterMarkInfo;
- (NSMutableArray *) getPageWatermarkInfo;
- (int) getPageBackgroundColor;
- (int) getPageBackgroundType;
- (void) setPageBackgroundColor:(int) pageColor;
- (void) setPageBackgroundImage:(UIImage *) backgroundImage;
- (void) setPageBackgroundGradationInfo:(NSMutableArray *)gradationInfo;
- (NSMutableArray *) getPageBackgroundGradationInfo;
- (void) setPageBorderInfo:(NSMutableArray *)borderInfo;
- (void) setTextParaBorderInfo:(NSMutableArray *)borderInfo;
- (NSMutableArray *) getPageBorderInfo;
- (NSMutableArray *) getTextParaBorderInfo;

// Page Display Info
- (int)getPageDisplayCount;
- (NSMutableArray*)getPageHeaderBoundaryHeightList;
- (NSMutableArray*)getPageFooterBoundaryHeightList;
- (NSMutableArray*)getPageScreenPositionXList;
- (NSMutableArray*)getPageScreenPositionYList;
- (NSMutableArray*)getPageWidthList;
- (NSMutableArray*)getPageHeightList;

// Word Section
- (SECTION_INFO)getSectionInfoAtPageIndex:(int)pageIndex;

// File Save
- (BOOL)isEnableSave;
- (void)setDocumentModified:(BOOL)modified;
- (void)saveDocument;
- (void)saveAsDocument:(NSString*)documentSavePath;
- (void)autoSaveDocument:(NSString*)documentSaveTempPath;
- (void)setDocumentTempPath:(NSString*)tempPath;

- (int)rulerbarPageInfomation:(int*) nPageLeftLogical TextLeftPos:(int*) nTextLeftPos TextRightPos:(int*)nTextRightPos PageRightPos:(int*)nPageRightPos PageRightLogical:(int*)nPageRightLogical;

// Export
- (void)exportToPDF:(NSString*)exportFilePath isIncludingInk:(BOOL)includingInk;
- (void)exportToTXT:(NSString*)exportFilePath;
- (void)exportToPowerPointShow:(NSString*)exportFilePath;
- (void)exportToImage:(NSString*)exportFilePath exportRange:(PrintRange)exportRange;
- (BOOL)isEnableExportToPDF;

-(void)sheetFocus;

- (void)requestDocumentThumbnailInDocument:(NSString*)documentPath thumbnailWidth:(int)width thumbnailHeight:(int)height;
- (void)requestDocumentThumbnailInFileManager:(NSString*)documentPath thumbnailWidth:(int)width thumbnailHeight:(int)height Memory:(NSData*)memoryData Password:(NSString*) password;

- (BOOL)isEnableUseClipAreaForSheet;
- (CGRect)rectForSheetClipArea;

- (NSString *)getSelectedFrameImagePath;

- (int)getTotalSheetPageInPrintActiveSheet;
- (int)getTotalSheetPageInPrintEntireSheet;

- (void)startTextboxEditModeForSheet;
- (void)endTextboxEditModeForSheet;

- (void)redraw;
- (void)editPageRedrawBitmap;

- (int)getSheetCellRowHeight;
- (int)getSheetCellColumnWidth;

// Sheet Tab
- (int)getCurrentSheetIndex;
- (int)getSheetTabCount;
- (BOOL)isSheetFreezePanes;
- (BOOL)isProtectedSheetAtIndex:(NSInteger)index;
- (void)insertSheetTabAtIndex:(NSInteger)index;
- (void)copySheetTabAtIndex:(NSInteger)index newSheetName:(NSString*)sheetName;
- (void)moveSheetTabAtIndex:(NSInteger)index moveTo:(NSInteger)moveIndex;
- (void)deleteSheetTabAtIndex:(NSInteger)index;
- (void)renameSheetTabAtIndex:(NSInteger)index sheetNameAfterRename:(NSString*)sheetName;

// Sheet TextBox
- (NSString*) getSheetTextboxString;
- (void) setSheetTextboxString:(NSString*)string;

// File Information
- (SUMMARY_DATA)getDocumentInformation;
- (WORD_COUNT_STATISTICS)getWordDocumentProperties;
- (void)setDocumentAuthor:(NSString*)author;
- (void)setDocumentLastModifiedBy:(NSString*)modifiedBy;
- (NSString*)getPDFAuthor;
- (NSString*)getPDFTitle;
- (NSString*)getPDFProducer;

- (void)deletePenDataAfterSlideShow;
- (BOOL)isExistPenDataAfterSlideShowAtPage:(int)page;
- (BOOL)isExistPenDataAfterSlideShow;

- (void)setSmartGuideMode:(bool)isOn;

- (void)goToCell:(NSString*)cell;
- (int)getObjectTypeAtPosition:(CGPoint)point;


// Track Change
- (void)setTrackEnable:(bool)trackEnable;
- (void)setTrackChangeMode:(TrackChangeMode)mode;
- (BOOL)isEnableTrack;
- (TrackChangeMode)getTrackChangeMode;
- (void)showMemoMarkup:(bool)isShow;
- (void)showInsertDeleteMarkup:(bool)isShow;
- (BOOL)isShowMemoMarkup;
- (BOOL)isShowInsertDeleteMarkup;
- (WORD_CHANGES_DATA)getChangesContentInfo;
- (BOOL)isChangesContentData;
- (void)previousChange;
- (void)nextChange;
- (void)acceptThisChange;
- (void)rejectThisChange;
- (void)acceptAllChanges;
- (void)rejectAllChanges;
- (void)acceptThisChangeAndMoveNext;
- (void)rejectThisChangeAndMoveNext;
- (void)acceptShownChanges;
- (void)rejectShownChanges;
- (void)setDocumentAuthorForTrackChange:(NSString *)author;
- (int)getTotalReviewersCount;
- (BOOL)getReviewerInfoAtIndex:(int)reviewerIndex wordReviewerInfo:(LPWORD_REVIEWER_INFO)wordReviewerInfo;
- (BOOL)setReviewerShowState:(int[])indexList withSize:(int)listSize;

// Sheet Sort
- (BOOL)canSortCell;
- (WRAPPER_PORANGE*)getSortCellRange;
- (void)setSheetSort:(int)orientation primaryKey:(int)primaryKey secondaryKey:(int)secondaryKey finalKey:(int)finalKey;

- (NSString*)getVideoPath;

// PDF Annotation
- (void)setPDFAnnotation:(void*)annotItem text:(NSString*)text color:(int)color opacity:(float)opacity fillColor:(int)fillcolor;
- (void)requestPDFAnnotationCount;
- (void)removePDFAnnotationAtIndex:(void*)item;
- (void)removeAllPDFAnnotation;
- (void)goToPDFAnnotationWithItem:(PDF_ANNOT_ITEM)item isClicked:(BOOL)bClicked;
- (PDF_ANNOT_ITEM)getPDFAnnotationItemAtIndex:(int)index;

// Sheet Protection
- (void)protectSheet;
- (void)unprotectSheet;
- (WORKBOOK_PROTECTION)getWorkbookProtection;

// Chart Data Sheet
- (void)setChartDataWithSerialName:(NSArray*)serialNames ItemName:(NSArray*)itemNames SerialData:(NSArray*)serialDatas;

- (NSArray*)getChartSerialName;
- (NSArray*)getChartItemName;
- (NSArray*)getChartSerialData;

// Header/Footer
- (BOOL)isHeaderEditMode;
- (BOOL)isHeaderFooterEditMode;
- (void)exitHeaderFooterNavigation;
- (void)setHeaderFooterOption:(HEADER_FOOTER_OPTION)headerFooterOption;
- (int)getTopUndoDataInfo;
- (int)getTopRedoDataInfo;

// Slide
- (void)moveSlideFromCurrentPage:(int)currentPage ToDestinationPage:(int)destPage;

// Sheet Formula
- (void)setSheetAutoFormula:(SheetFormulaType)autoFormulaType;

// Slide Note
- (void)inputSlideNoteContents:(NSInteger)index contents:(NSString*)string;
- (NSString*)getSlideNoteContents:(NSInteger)index;

// Slide show
- (void)setSlideShowSetting:(SLIDE_SHOW_SETTING)slideShowSetting;
- (SLIDE_SHOW_SETTING)getSlideShowSetting;
- (void)stopSlideEffect:(SlideShowStopType)stopType;
- (BOOL)isSlideShowWaiting;

// Slide manage
- (BOOL)isSlideHide:(int)page;
- (void)slideHide:(int)page;
- (void)slideUnhide:(int)page;
- (int)getSlideLayout:(int)page;
- (void)setSlideLayout:(int)page andMasterType:(int)masterType andNewLayout:(int)layoutPageNum;
- (int)getSlideBackgroundColor:(int)page;
- (void)setSlideBackgroundColor:(int)color;
- (void)slideDuplicate:(int)currenPage andMovingPage:(int)movingPage;
- (void)slideDelete:(int)currenPage andMovingPage:(int)movingPage;
- (void)slideCopy:(int)page;
- (void)slideCut:(int)page;
- (void)slidePaste:(int)page;
- (void)slideInsert:(int)page andMasterType:(int)masterType andLayoutType:(int)layoutPageNum;

// sheet conditionalFormat api
- (NSArray_WRAPPER_SHEET_EDIT_C_F*)getSheetEditConditionalFormatList;
- (void)replaceSheetEditCF:(NSArray_WRAPPER_SHEET_EDIT_C_F*)replaceList;
- (void)addSheetEditCF:(WRAPPER_SHEET_EDIT_C_F*)addItem;
- (void)clearSheetEditCFSelectedCell;
- (void)clearSheetEditCFWholeSheet;

// sheet filter api
- (void)setSheetFilter;
- (BOOL)isSheetFilterRunning;
- (void)setAutoFilterButtonConpigurationWithNormal:(NSString *)normal pressed:(NSString *)pressed;
- (BOOL)isExistFilterState;
- (void)setAutoFilterCommand:(int) a_nHandleId IndexOfIndexCell:(int) a_nIndexOfIndexCell FixedItem:(int) a_nFixedItem CommandStrings:(NSArray*) a_szCommandStrings;
- (void)setSheetDataValidationDropDownInput:(NSString *) a_strInputData;

//pivottable api
- (void)setPivotItemFilterCommnd:(int) a_nHandleId CheckedList:(bool[]) a_bChecked CheckedCount:(int)length;
- (void)setPivotFilterFixedItemCommand:(int) a_nHandleId Command:(NSString*) a_szCommand;
- (int)createPivotTableDatas:(int) nSheetIndex SourceTalbeRange:(PORANGE*) sourceTableRange PivotTableRange:(PORANGE*) pivotTableRange;
- (NSArray*)getPivotFieldNames:(int) a_hPivotTableHandle;
- (void)setPivotFields:(int) a_hPivotTableHandle Axis:(int) a_nAxis FieldIndex:(int) a_nFieldIndex PivotFieldIndex:(int) a_nPivotFieldIndex;
- (NSArray*)getPivotFields:(int) a_hPivotTableHandle Axis:(int) a_nAxis;
- (void)setPivotFieldCount:(int) a_hPivotTableHandle Axis:(int) a_nAxis Count:(int) a_nCount;
- (int)getPivotFieldCount:(int) a_hPivotTableHandle Axis:(int) a_nAxis;
- (void)setPivotTableAtts:(int) a_hPivotTableHandle ElementName:(NSString*) a_sElementName ChildIndex:(int) a_nChildIndex AttributName:(NSString*) a_sAttributeName AttributeValue:(NSString*) a_sAttributeValue;
- (NSString*)getPivotTableAtts:(int) a_hPivotTableHandle ElementName:(NSString*) a_sElementName ChildIndex:(int) a_nChildIndex AttributeName:(NSString*) a_sAttributeName;
- (void)makePivotFieldItems:(int) a_hPivotTableHandle;
- (void)makePivtoTable:(int) a_hPivotTableHandle;
- (void)deletePivotTableInterfaceHandle:(int) a_hPivotTableHandle;

// slideshow video
- (NSString *)getSlideShowVideoInfo:(CGPoint)touchPoint videoRect:(CGRect*)rect mediaInfo:(MEDIA_INFO)mediaInfo;

// slidelayout
- (void)prepareForSlideLayoutEdit;

// sheet insert cell
- (BOOL)isSheetTableHeaderOn;
- (BOOL)isSheetTableTotalOn;
- (BOOL)isSheetSelectedTableHeader;
- (BOOL)isSheetSelectedTableFooter;
- (BOOL)isSheetSelectedAboveOfTableFooter;
- (BOOL)isSheetSelectedRightOfTable;
- (BOOL)isSheetSelectedLeftAndAboveOfTable;

- (BOOL)isSlidePageModifiedAtIndex:(NSInteger)pageIndex;

- (BOOL)isCellProtectionLocked;

- (int)getPdfAnnotationCountForSlide:(int)page;
- (void)removeAllPDFAnnotationForSlide:(int)page;
- (BOOL)isPdfSlideShowUpdated;
- (BOOL)isPdfSaveAvailable;
- (BOOL)isPdfAddnoteAbailable;
- (BOOL)isPdfEmbeddedFile:(char*) pathstr;
- (BOOL)isPdfPrintAvailable;
- (void)pdfApplySlideAnnot;

- (int)getSheetColumnDefaultWidth;
- (void)setSheetColumnDefaultWidth:(int)columnDefaultWidth;

- (void)setAnnotationFillColor:(int)color;
- (NSArray*)getPDFWidgetListString:(void*)annotItem count:(int)count;
- (void)setPDFWidgetListIdx:(void*)annotItem index:(int)index;

- (WRAPPER_SORTING_INFO*)getSortingInfo;

- (int)getPPTMasterCount;
- (int)getPPTLayoutCount:(int)masterIndex;
- (int)getPPTMasterPageInfo:(int)masterIndex width:(int)width height:(int)height;
- (int)getPPTLayoutPageInfo:(int)masterIndex layoutPageNum:(int)layoutPageNum width:(int)width height:(int)height;

- (void)setSheetTableTotalsRow:(NSInteger)index;
- (NSInteger)getBWPProtectStatusInfo;
- (CGSize)getSheetHeaderSize:(BOOL)bFixed;

- (void)setOnSpellCheckScreenMode:(BOOL)isOn;
- (void)markSpellCheckWrong:(LPSPELLCHECK_INFO)spellCheckInfo;
- (void)setHideAnimationPath:(bool)isOn;
- (BOOL)IsHideAnimationPath;
- (BOOL)hasAnimationPath;

- (void)setCompBGColorIndexStart1:(int)a_start1 end1:(int)a_end1 indexStart2:(int)a_start2 end2:(int)a_end2 drawColor1:(int)a_color1 drawColor2:(int)a_color2 applyFlag:(int)a_bApplyFlag directDraw:(int)a_bDirectDraw;

//======================= 수정 전 // 기존 함수들=====================
- (void)IThumbnail:(int)a_eMode pages:(int)a_nPages width:(int)a_nWidth height:(int)a_nHeight startPage:(int)a_nStartPage;
- (void)IGetPageThumbnail:(int)a_nSaveMode pageNum:(int)a_nPageNum width:(int)a_nWidth height:(int)a_nHeight outputPath:(NSString*)a_sOutputPath;
- (void)ISlideObjStartEx:(int)a_Width height:(int)a_Height thumbnailQuality:(float)thumbnail_quality pageNum:(int)a_PageNum;
- (void*) ISheetBitmapEvent:(int)nEvent param1:(int)nParam1 param2:(int)nParam2;
- (UIImage*) ISheetBitmap:(CGRect)rect;
- (UIImage*) ISheetHeader:(CGRect)rect vertical:(bool)vertical size:(CGSize*)size;
- (int) ISheetHeaderFixSize:(bool)bVertical;
- (CGSize)IGetSheetHeaderSize;
- (void)ISheetFixFrame;

- (void)setOpenGLBuffer:(void*)bitmap Width:(int)width Height:(int)height;

+ (instancetype)sharedEngineHelper;

- (void)showNoMarginView;
- (void)setPrintMode;
- (void)setWebMode;

- (CGRect)getSheetTextBoxRect;
- (void)viewPdfReflowText;
- (void)viewToFitTheWidthOfTheScreen;
- (void)viewToFitTheHeightOfTheScreen;
- (void)viewToFitThePage;

// Cell Formular error
- (SHEET_FORMULA_ERROR_INFO)getSheetCellFormulaErrorInfo;

- (void)sheetCalculateNow;

- (void)setSplFlickNodrawFlag:(bool)bNodraw;

- (void)moveCaretPosition:(CaretMoveMode) a_Mode AltKey:(bool)bAltKey ShiftKey:(bool)bShiftKey ControlKey:(bool)bControlKey CommandKey:(bool)bCommandKey Repeat:(int) a_nRepeat;

- (BOOL)systemFontCount:(short*)a_pTotalFontCnt;
- (BOOL)systemFontNames:(char**)a_ppszFontNames;

- (int)sheetFormulaRangeCount;
- (POIRect*)sheetFormulaRangeArray;
- (int)getSheetDateFormatCodeCount:(int)a_nLocale;
- (NSArray*)getSheetDateFormatCodeList:(int)a_nLocale;
- (int)getSheetTimeFormatCodeCount:(int)a_nLocale;
- (NSArray*)getSheetTimeFormatCodeList:(int)a_nLocale;
- (LocaleType)getCurrentLocaleType;

- (void)setSheetDataValidationAnswerError:(DataValidationErrorStyleEventType)a_nErrorStlyeEventType;

- (UIImage*)getPreviewThumbnail:(int)thumbnailType index:(int)index;

- (int)getCompatibilityModeVersion;

//licenseCheck
- (int)checkLicense:(char*)aLicenseKey;
- (void)getEncryptedData:(char*)pDstBuffer;

@end
