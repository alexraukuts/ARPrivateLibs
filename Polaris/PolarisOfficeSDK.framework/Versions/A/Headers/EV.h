//
//  EV.h
//  PO6_framework
//
//  Created by Chanyong Lee on 2014. 9. 24..
//  Copyright (c) 2014년 Chanyong Lee. All rights reserved.
//  UI와 PO_framework에서 사용하기 위해 엔진 구조체를 재정의

#ifndef PO6_framework_EV_h
#define PO6_framework_EV_h


#define PO_SMART_GUIDES_MAX	(20)
#define PO_SMART_GUIDES_GAP_MAX				(30)//smart guides gap max 3 , BORA_SMART_GUIDES_GAP_MAX
#define MAX_COLUMN_NUM 45
#define BORA_LABEL_LENGTH	256
#define BORA_FULLPATH_LENGTH	1024
#define BORA_FONTNAME_LENGTH	255
#define BORA_MEMOTEXT_LENGTH	512
#define BORA_DEFAULT_LENGTH		128
#define BORA_DATA_VALIDATION_TITLE_LENGTH 32
#define BORA_SHEETNAME_LENGTH	31
#define BORA_CHART_FONT_ELEMENTS_SIZE		6
#define BORA_DATA_VALIDATION_INPUTMESSAGE_LENGTH 255
#define BORA_INTERNET_MAX_URL_LENGTH 2083
#define BORA_WATERMARKTEXT_LENGTH 201
#define BORA_FINDSTR_LENGTH		1024
#define BORA_LENGTH_2048 	2048
#define BORA_PASSWORD_LENGTH	255				// for PDF4

typedef struct _tagPOPOINT
{
    int nX;
    int nY;
} POPOINT;

typedef struct _tagPOIRECT
{
    int		left;
    int		top;
    int		right;
    int		bottom;
}POIRect, *LPPOIRect;

typedef struct _tagPOFRECT
{
    float		left;
    float		top;
    float		right;
    float		bottom;
}POFRect, *LPPOFRect;

typedef struct _tagPOPOINT2
{
    POPOINT		startPoint;
    POPOINT		endPoint;
} POPOINT2;

typedef struct _tagPOSIZE
{
    int cx;
    int cy;
} POSIZE, *LPPOSIZE;

typedef struct _tagPORANGE
{
    int nRow1;
    int nCol1;
    int nRow2;
    int nCol2;
    int nLeft;
    int nTop;
    int nRight;
    int nBottom;
}PORANGE, *LPPORANGE;

// BrColorInfo
typedef struct _tagPOColorINFO
{
    int				nThemePaletteIndex;	//defualt = NONE_THEME_COLOR 0, theme color 쓰는 경우 idx 존재.
    unsigned int    nColor;
    bool			bAutoColor;
}COLOR_INFO, *LPCOLOR_INFO;
#define IS_SAMESIZE_COLOR_INFO (sizeof(COLOR_INFO) == sizeof(BrColorInfo))

//[2013.02.21][TID:13557] 해상도에 따른 Frame Detection Area 조정
//Pixel 단위, Screen 해상도가 높아질수록 커져야 한다.
typedef struct _tagFRAME_DETECTION_AREA
{
    int m_nCtrlBoxMargin;			//Frame Controller Detection Margin
    int m_nRotCtrlBoxHeight;		//Frame Rotation Controller Height
    int m_nFrameDetectionMargin;	//Frame Detection Margin
    int m_nSheetDetectionMargin;		//Sheet Detection Margin
    int m_nVMLShapeHandlePosMargin;		//VML Shape 조절점 높이 margin
    int m_nAdjustHandleDetectionMargin;	//Adjust Handle Detection Margin	//word/slide 삭제 처리, ZPD-1071
    double m_dDeviceDIP; // device dip( device independant pixel )
}FRAME_DETECTION_AREA, *LPFRAME_DETECTION_AREA;
#define IS_SAMESIZE_FRAME_DETECTION_AREA (sizeof(FRAME_DETECTION_AREA) == sizeof(BrFrameDetectionArea))

typedef struct _tagSCROLLINFO_EDITOR
{
    int nWidth;
    int nHeight;
    int nCurPosX;
    int nCurPosY;
    int bGaroScroll;
}SCROLLINFO_EDITOR, *LPSCROLLINFO_EDITOR;

typedef struct _tagSCREEN_INFO
{
    int nX;			// page bitmap pos x
    int nY;			// page bitmap pos y
    int nWidth;		// page bitmap width
    int nHeight;		// page bitmap height
    int nMapX;		// pagemap(thumbnail) bitmap pos x
    int nMapY;		// pagemap(thumbnail) bitmap pos y
    int nMapWidth;	// pagemap(thumbnail) bitmap width
    int nMapHeight;	// pagemap(thumbnail) bitmap height
    int nScrStartDx;
    int nScrEndDx;
}SCREEN_INFO, *LPSCREEN_INFO;
#define IS_SAMESIZE_SCREEN_INFO (sizeof(SCREEN_INFO) == sizeof(BrScreenInfo))

typedef struct _tagCONFIG_INFO
{
    int nCurPage;		// current page number
    int nCurCenterPage;      //»≠∏È ¡ﬂæ”ø° ¿ßƒ°«— ∆‰¿Ã¡ˆ ≥—πˆ
    int nTotalPages;		// total page count
    int bBGLoad;			// background loading
    int nZoomRatio;		// zoom ratio
    int nZoomInfo;		// zoom info
    int nScrollInfo;		// scroll info
    int nRotateAngle;		// rotate angle
    int bUseMemo;		// use memo
    int nMinZoom;		// minimum zoom ratio
    int nMaxZoom;		// maximum zoom ratio
    int nPlayInfo;		// text player info
    int nReflowState;	// reflow state( 0 : normal, 1 : reflow, 2 : disable{image, text})
    int	nZoomLevel;		// zoom level(reference : nZoomPhase)
    int	bContinuousMode; // continuous view mode
    int nFitToWidthZoomValue;	// fit to width zoom value
    int nFitToHeightZoomValue;	// fit to height zoom value
    int nDocExtType;		// document extension(DocExtensionType)
    int nOnlyOnePage;	// only one page show(not fittowholepage)
    int nBasicScaleZoom;	// scale zoom for only basic frame
    int bShowAnnot;		//annotation guride show/hide(for PDF4)
    bool bAddAnnotAble;
}CONFIG_INFO, *LPCONFIG_INFO;
#define IS_SAMESIZE_CONFIG_INFO (sizeof(CONFIG_INFO) == sizeof(BrConfigInfo))

typedef struct _tagPOPAGEINFO
{
    int nPagePosX;
    int nPagePosY;
    int nPageWidth;
    int nPageHeight;
}poPageInfo, *LPpoPageInfo;
#define IS_SAMESIZE_poPageInfo (sizeof(poPageInfo) == sizeof(BrPageInfo))

typedef struct _tagPAGEMAPPROPERTIES2
{
    int bExternalPagemap;
    int	bBluringPagemap;
    int	nPagemapWidth;
    int	nPagemapHeight;
}PAGEMAPPROPERTIES, *LPPAGEMAPPROPERTIES;
#define IS_SAMESIZE_PAGEMAPPROPERTIES (sizeof(PAGEMAPPROPERTIES) == sizeof(PagemapProperties))

typedef struct _tagPROPERTIES
{
    unsigned char	byPageEdgeWidth;		// page edge width
    unsigned char	byPageEdgePosition;		// page edge position
    char			bPageOutline;			// page outline
    unsigned int	dwBgColor;				// page background color
    unsigned int	dwEdgeColor;			// page edge color
    unsigned int	dwOutlineColor;			// page outline color
    unsigned int	dwPageMapColor;			// pagemap(thumbnail) color
    unsigned int	dwPageMapViewColor;		// pagemap(thumbnail) view region color
    unsigned char	nUseBookmark;			// use bookmark
    unsigned char	nBookmarkType;			// bookmark type : BrBookmarkType
    unsigned short	nScrollType;			// scroll type : BrScrollFactorType
    unsigned char	nFrameBufferSwap;		// bitmap color swapping
    unsigned char	bMakeThumbnailImage;	// make thumbnail image
    unsigned int	nMakeThumbnailPages;	// thumbnail page count{3 : prev page, current page, next page}
    void* 			pMemoList;				// external memo list
    char			bVariableScale;			// except maximum zoom ratio
    char			bFixedWidth;			// use fixed width
    unsigned int	nThumbnailPercent;		// thumbnail size, percent of LCD width or height
    unsigned int	nSearchMarkingMode;	// BrSearchMarkingMode
    unsigned char	bDrawDirtyBitmap;		// draw dirty bitmap
    PAGEMAPPROPERTIES	pPagemapProperties;	// page map properties
    unsigned char	bDualDisplay;			// dual display mode
    unsigned int	nZoomPhase;				// phase of zoom
    unsigned short	nGrayLevelForImage;		// gray level for rendering image (only for ebook)
    unsigned short	nDefLineSpace;			// default line space (default value:180%, only for ebook)
    unsigned short	nDefLineSpaceRatio;		// default line space ratio (default value:100%, only for ebook)
    unsigned short	nDefAlignment;			// default alignment (default value:justify, only for ebook)
    unsigned short	nDefCharSpace;			// default character space (default value:0%, only for ebook)
    void*			pEBookBackImg;			// background image (only for EBook)
    short			nEBookLeftMargin;		// left margin (only for EBook)
    short			nEBookTopMargin;		// top margin (only for EBook)
    short			nEBookRightMargin;		// right margin (only for EBook)
    short			nEBookBottomMargin;		// bottom margin (only for EBook)
    short			nMaxBookclipValue;
    int				nPageMargin;			// use BR_PAGEEDGE_MAX
    char			nSeperateModeAtComics;	// 0:normal, 1:vertical
    char			bUseOriginImageAtComics;// 0:current, 1:origin bitmap return
    char			nDirectionAtComics;		// 0:left->right, 1:right->left
    unsigned int	dwSearchMarkSelectColor;//
    int				nAutoDetectedCodePage;	// auto detected code page after opening txt file
}PROPERTIES, *LPPROPERTIES;
#define IS_SAMESIZE_PROPERTIES (sizeof(PROPERTIES) == sizeof(BoraViewerProperties))

typedef struct _tagPOCARET_INFO
{
    unsigned short	nType;
    int				nX;
    int				nY;
    int				nWidth;
    int				nHeight;
    unsigned char	bCaret;
    char			onlyCaretMove;
    int				nframeType; //현재 위치의 frametype 구별
    CARET_DIRECTION_TYPE             nDirection;
}CARET_INFO, *LPCARET_INFO;
#define IS_SAMESIZE_CARET_INFO (sizeof(CARET_INFO) == sizeof(BrCaretInfoEvent))

typedef struct _tagPOSMART_GUIDES_INFO
{
    unsigned int	nSmartGuideType; //0 sides, 1 center, 2 gap,
    POPOINT		startPoint;
    POPOINT		endPoint;
}SMART_GUIDES_INFO, *LPSMART_GUIDES_INFO;
#define IS_SAMESIZE_SMART_GUIDES_INFO (sizeof(SMART_GUIDES_INFO) == sizeof(BoraSmartGuidesInfo))

typedef struct _tagPOEDIT_OBJECT_POINT
{
    POPOINT		Point;
    unsigned int		nObjectType;
    unsigned int		nObjectEditInfo;
}EDIT_OBJECT_POINT, *LPEDIT_OBJECT_POINT;
#define IS_SAMESIZE_EDIT_OBJECT_POINT (sizeof(EDIT_OBJECT_POINT) == sizeof(BoraEditObjectPoint))

typedef struct _tagEDITCHARTELEMENTRANGE
{
    POPOINT		ptElementRanges[96];		// 한번에 선택되는 선택점수를 96개로 제한
    int				nRegionCnt;
    int				nElementPtCnt;
    bool			bDrawConnector;			// 선택점만 표시 or 선택점들사이 connector도 표시
    POIRect		clipRect;
}EDIT_CHART_ELEMENT_RANGE, *LPEDIT_CHART_ELEMENT_RANGE;
#define IS_SAMESIZE_EDIT_CHART_ELEMENT_RANGE (sizeof(EDIT_CHART_ELEMENT_RANGE) == sizeof(BoraEditChartElementRange))

typedef struct _tagPOEDIT_OBJECT_RANGE
{
    POPOINT		startPoint;		//Start Point
    POPOINT		endPoint;		//End	Point
    int					nRotateAngle;	//Angle,
    
    POSIZE			sObejctSize;    // mm unit
    POSIZE			sObjectSizeEx1; //  mm unit  nObjectEditInfo  값에 맞추어 리본바에 연결하기 위한 값
    POSIZE			sObjectSizeEx2; //  mm unit  nObjectEditInfo  값에 맞추어 리본바에 연결하기 위한 값
    
    unsigned int		nObjectType;
    bool				bHasImage;
	bool				bHasFillImage; //  도형에 이미지/질감 채우기 시 속성
    bool				bHasShape;
    unsigned int		nObjectEditInfo; // for object editing info mask
    bool				bChild;
    
    //[TID:152][김회영]Frame Rotation > Editing Controller UI 구현하기 > Editing 과정의 Frame 위치 정보를 전달하기 위해 추가
    int				eEditing;
    int				eController;
    
    POPOINT		ptEditingStart;
    POPOINT		ptEditingEnd;
    int				nEditingAngle;
    
    //[TID:1685][김회영]객체 Multi-Select 지원
    int				nFrameID;
    
    //[TID:300][김회영]Page기준 좌표 전달하기
    POPOINT		startPointFromPage;
    
    int				bGroupEnabled;		//[TID:300][김회영]Group 가능 여부 확인
    int				bRotationEnabled;	//[TID:300][김회영]Rotation 가능 여부 확인
    int				bReplacementEnabled;//[TID:300][김회영]Replacement 가능 여부 확인
    int				bHyperlinkEnabled;	//[TID:300][김회영]Hyperlink 가능 여부 확인
    int				bOLE;				//[TID:300][김회영]OLE 가능 여부 확인
    int				bPureImage;			//[TID:300][김회영]Pure 이미지 여부 확인
    
    int				bClipEnabled;
    POPOINT		ptClipStart;
    POPOINT		ptClipEnd;
    
    //[2012.11.13][정민영][TID:10390] MistY - Graphic Flag support
    union {
        unsigned short    nGrapAttr;
        struct {
            unsigned short	isDML: 1;			/* DML Shape getOffice2007Shape() */
            unsigned short	is2007DocxVML: 1;	/* imported VML Shape for 2007 Docx , getOffice2007ShapeDocx()*/
            
            unsigned short	isSupport3D:1;		/* is 3D Roatation, depth, except Bevel*/
            unsigned short	isSupport3DBevel: 1;/* is 3D Bevel support*/
            unsigned short	is3D:1;				/* this shape is applied 3D Effect */
            unsigned short	is3DBevel:1;		/* this shape is applied 3D Bevel Effect */
            
            unsigned short	isSupportBgFillStyle:1;		/* this shape is support bg fill style */
            unsigned short	isSupportArtisticEffects:1;		/* this shape is support bg fill style */
            
            unsigned short	nReserved:8;
        } flag;
    } GrapAtt;
    
    int				nMarkingRectCount;
    unsigned int	startMarkDirection;	//Start Mark Direction
    unsigned int	endMarkDirection;	//End Mark Direction
    
    //[2012.07.25][TID:7725][윤성준] Line이 연결되었는지 정보
    int				nIsLineStartPointLock;
    int				nIsLineEndPointLock;
    
    int				nTextBasePos;		// text base position
    
    int				nObjectMarkingRectCount;
    
    EDIT_OBJECT_GUIDE_TYPE	eGuideType;//BrEditObjectGuideType 편집 중은 아니지만 ui 에 가이드 정보가 필요경우 지원
    POPOINT				ptGuideStart;
    POPOINT				ptGuideEnd;
    
    CHART_SELECTION_TYPE		eChartSelectionType;
    EDIT_CHART_ELEMENT_RANGE	ptChartElementRange;
    unsigned int nSubElementIndex;
    unsigned short nAxis;
    
    bool				bHasText;
    bool				bEditProtect;
}EDIT_OBJECT_RANGE, *LPEDIT_OBJECT_RANGE;
#define IS_SAMESIZE_EDIT_OBJECT_RANGE (sizeof(EDIT_OBJECT_RANGE) == sizeof(BoraEditObjectRange))

typedef struct _tagPOSMART_GUIDES_GAP_INFO
{
    unsigned int	bVertical; //0 Horizontal, 1 Vertical
    POPOINT2		mainLine;
    POPOINT2		sideLine1;//hori : up,   verti: left
    POPOINT2		sideLine2;//hori : down,  verti: right
}SMART_GUIDES_GAP_INFO, *LPSMART_GUIDES_GAP_INFO;
#define IS_SAMESIZE_SMART_GUIDES_GAP_INFO (sizeof(SMART_GUIDES_GAP_INFO) == sizeof(BoraSmartGuidesGapInfo))


typedef struct _tagPOEDITOR_OBJECT_POINTARRAY
{
    //For current selected object
    EDIT_OBJECT_RANGE		ptObjRange;
    
    unsigned char					nObjPointCnt;
    EDIT_OBJECT_POINT			ptObjPoint[3];
    
    int									ptAdjustHandleCnt;	//[TID:6406][윤성준] 상세변경 기능 (조절점, AdjustmentHandle) 구현
    //[2012-06-03][TID:6406][윤성준] ptAdjustHandleCnt == -1 은 무효 값 지원
    EDIT_OBJECT_POINT			ptAdjustHandle[10];
    
    
    //For multi selected object
    unsigned char					nMultiObj;			//[TID:1685][김회영]객체 Multi-Select 지원
    //BoraEditObjectRange	ptMultiObjRange[10];//[TID:1685][김회영]객체 Multi-Select 지원
    
    //For smart guides counts, 0 ~ 19 (X-xais(10) + Y-xais (10))
    unsigned char					nSmartGuidesCnt;
    SMART_GUIDES_INFO			ptSmartGuidesInfo[PO_SMART_GUIDES_MAX];//smart guides max 20
    
    unsigned char				nSmartGuidesGapCnt;
    SMART_GUIDES_GAP_INFO		ptSmartGuidesGapInfo[PO_SMART_GUIDES_GAP_MAX];//smart guides gap max 30
    
    int									nConnectionPointCnt;		//[2012.07.25][TID:7725][윤성준] 연결점 정보
    EDIT_OBJECT_POINT			ptConnectionPoint[10];
    
    int									nAnimationOrderCnt;
    int									ptAnimationOrder[10];
    int							nAnimationCount;
}EDITOR_OBJECT_POINTARRAY, *LPEDITOR_OBJECT_POINTARRAY;
#define IS_SAMESIZE_EDITOR_OBJECT_POINTARRAY (sizeof(EDITOR_OBJECT_POINTARRAY) == sizeof(BoraEditObjectPointArray))

typedef struct _tagPOPOINT_INFO
{
    unsigned int nObjectType;
    unsigned int nObjectEditInfo;
    
    POPOINT	startPoint;
    POPOINT	endPoint;
    
    POPOINT	ptEditingStart;
    POPOINT   ptEditingEnd;
    
    int			nRotateAngle;
    int			nEditingAngle;
    
    unsigned int bRotationEnabled;
    unsigned int bGroupEnabled;
    
    //[2012.07.25][TID:7725][윤성준] 연결선 구현
    int m_nIsLineStartPointLock;
    int m_nIsLineEndPointLock;
    
}POINT_INFO, * LPPOINT_INFO;
#define IS_SAMESIZE_POINT_INFO (sizeof(POINT_INFO) == sizeof(BoraPointInfo))

typedef struct _tagPOBOOKMARK_LABEL
{
    char	szLabel[BORA_LABEL_LENGTH];
    char	szFilePath[BORA_FULLPATH_LENGTH];
}BOOKMARK_LABEL, *LPBOOKMARK_LABEL;
#define IS_SAMESIZE_BOOKMARK_LABEL (sizeof(BOOKMARK_LABEL) == sizeof(BoraBookmarkLabel))


typedef struct _tagPOFONT_INFO
{
    unsigned short	nType;
    char			szFontName[BORA_FONTNAME_LENGTH];
    char			szEngFontName[BORA_FONTNAME_LENGTH];
    float			fFSize;
    unsigned short	nUNum;
    unsigned int	nFontAtt;
    unsigned int	nFontAttEx; //small caps,emphasis
    unsigned int	nMaskFontAtt;
    unsigned int	nMaskFontAttEx; //small caps,emphasis
#ifdef USE_FONT_COLOR_STRUCTURE
    COLOR_INFO		stFColor;
    COLOR_INFO		stBColor;
    COLOR_INFO		stUColor;
#endif
    unsigned int	nFColor;
    unsigned int	nBColor;
    unsigned int	nUColor;
    unsigned int	nWidth;		//preView Mode
    unsigned int	nHeight;	//preView Mode
    int				nFScale;	//장평
    bool			bPercentForCharSp;
    int				nSpacing;//character spacing value twip
    int				nEmphasisType;
    float			fTextVerticalPos;
    int				bUndo;
    int				nThemeColorPaletteIdx;
    bool			bNoApplyWord;	// FALSE(Default):apply to word at caret, TRUE:no apply to word at caret
    unsigned short	nThemeFontType; // 0:none, 1:major, 2:minor
    unsigned short	nThemeAscii;
    unsigned short	nThemeEastAsia;
    unsigned short	nThemeCs;
    unsigned short	nThemeHAnsi;
    unsigned short	nThemeHint;
}FONT_INFO, *LPFONT_INFO;
#define IS_SAMESIZE_FONT_INFO (sizeof(FONT_INFO) == sizeof(BrGuiFontEvent))






//0.Common

// BoraSheetFormatInfo
typedef struct _tagPOSHEET_FORMAT_INFO
{
    //Format type
    short			wFormat;
    unsigned short	wDecimalPlaces;
    unsigned char	bSeparate;
    unsigned short	wCurrency;
    unsigned short	wNegative;
    unsigned short	wAccounting;
    unsigned short	wDate;
    unsigned short	wTime;
    unsigned short	wFraction;
    unsigned short	wEtc;
    unsigned short	wLanguage;
    unsigned short	wUserCustom;
    unsigned short	wDateTerm;
    char			szFormatCode[BORA_MEMOTEXT_LENGTH];
    
    //Alignment
    unsigned short	wHorizontalAlignment;
    unsigned short	wVerticalAlignment;
    int				nIndent;
    unsigned char	bWrap;
    unsigned short  wReadOrder;
    unsigned char	bShrinkToFit;
    int             dwCellType;  //Cell type info.
    unsigned short  wRotation;
    
    unsigned short	wAligMask;
    
    
    //Font
    char			szFontName[BORA_FONTNAME_LENGTH];
    int				nFontSize;
    int             dwFontColor;
    unsigned char	bBold;
    unsigned char	bItalic;
    unsigned char	bUnderLine;
    unsigned char	bDoubleUnderLine;		// jhc [TID:6588][2012.05.21] - 5.0 기능 추가(폰트 밑줄 스타일 표현 추가)
    unsigned char	bSingleAccounting;		// jhc [TID:6588][2012.05.21] - 5.0 기능 추가(폰트 밑줄 스타일 표현 추가)
    unsigned char	bDoubleAccounting;		// jhc [TID:6588][2012.05.21] - 5.0 기능 추가(폰트 밑줄 스타일 표현 추가)
    unsigned char	bStrikeout;
    unsigned char	bSuperScript;	//  [10/4/2012 sylee0335]
    unsigned char	bSubScript;
    int				nFontThemeIdx;
    
    
    int             dwFontMask;
    int             dwFontMaskEx;
    
    //Border
    int             dwBorderStyle;
    COLOR_INFO		borderLeftClr;
    COLOR_INFO		borderTopClr;
    COLOR_INFO		borderRightClr;
    COLOR_INFO		borderBottomClr;
    COLOR_INFO		borderVertClr;
    COLOR_INFO		borderHorClr;
    COLOR_INFO		borderDiagonalClr;
    
    int             dwBorderMask;
    
    //Fill color in cell
    int             dwFillColor; //(FGColor)
    int             dwBGColor;   //(PattenColor, Gradient)
    int				nFillTheme;
    int				nBGTheme;
    unsigned short	wPatternStyle;
    unsigned short	wShadoawtStyle;
    unsigned short	wShadowApplicationType;
    
    int             dwFillMask;
    
    
    //Portect 
    unsigned char bProtectionLocked;
    unsigned char bProtectionHidden;
    unsigned char bProtectionModify;
    
}SHEET_FORMAT_INFO, *LPSHEET_FORMAT_INFO;
#define IS_SAMESIZE_SHEET_FORMAT_INFO (sizeof(SHEET_FORMAT_INFO) == sizeof(BoraSheetFormatInfo))

typedef struct _tagPAGESTYLENAMELIST
{
    int nStyleID;
    char szStyleName[BORA_DEFAULT_LENGTH];
}PAGESTYLENAMELIST;

typedef struct _tagPOPAGELAYOUTINFO
{
    int		nTargetPageNum;	//for getter function. //If nTargetPageNume==0, engine use current page. Ticket 30282
    
    int		nPaperMask;
    int		nPageApply; //Page Apply To
    
    int		nPaperSize;  //PaperSizeID
    int		nPaperWidth;
    int		nPaperHeight;
    
    int		nPaperMargin;
    int		nLeft;
    int		nTop;
    int		nRight;
    int		nBottom;
    int		nHeader;  //[sok1029][2013.09.09]
    int		nFooter; //[sok1029][2013.09.09]
    
    unsigned char		bGutterAtTop;	//øﬁ¬ , ¿≠¬ , ø¿∏•¬
    int		nGutter;		//[2013.05.20][TID:15372][¿±º∫¡ÿ] ¡¶∫ªøÎ ø©πÈ ∆Ì¡˝ ¿€æ˜]
    
    unsigned char		nDirection;	//¡æ¿Ã ∞°∑Œ/ºº∑Œ
    int		nTextDirection; //πÆ¿⁄ºˆ/¡Ÿºˆ>≈ÿΩ∫∆ÆπÊ«‚>∞°∑Œ/ºº∑Œ
    unsigned char	bTextFlow;
    
    unsigned char		nFace; //±‚∫ª, ∆‰¿Ã¡ˆ ∏∂¡÷∫∏±‚
    unsigned char		nVAlign; //¿ß¬ , ∞°øÓµ•, æÁ¬ , æ∆∑°¬
    
    int		nLineStartNum;
    int		nLineDistance;
    int		nLineCountBy;
    int		nLineApplyTo;
    
    unsigned char		bEqualWidth;
    unsigned char		bBorderLine; //∞Ê∞Ëº±
    unsigned char		bNewColStart; //¿‘∑¬∏∏ πﬁ¥¬¥Ÿ. return ∞™ æ∆¥‘
    int		nColumnType; //1, 2, 3, left, right, else
    int		nColNum;
    int		nColumnSpace;	//≥ ∫Ò
    int		nColWid[MAX_COLUMN_NUM];	//≥ ∫Ò
    int		nColSpace[MAX_COLUMN_NUM];	//∞£∞›
    
    unsigned char		bSectionType; //±∏ø™ Ω√¿€:SectionType [2014-10-16][sangdon]
    
//    char szStyleName[BORA_DEFAULT_LENGTH];
//    char szNextStyleName[BORA_DEFAULT_LENGTH];
    int nPageStyleID;
    int nNextPageStyleID;
    PAGESTYLENAMELIST szPageStyleNameList[20];
    
    int nPPTStartPageNum;
} PAGELAYOUT_INFO, *LPPAGELAYOUT_INFO;
#define IS_SAMESIZE_PAGELAYOUT_INFO (sizeof(PAGELAYOUT_INFO) == sizeof(BrPaperLayout))

//6.0 ¥‹≥ ∫Ò∞£∞›, ∞∞∞‘, ∞Ê∞Ëº± √ﬂ∞°
typedef struct _tagPOPAGELAYOUTTYPE
{
    unsigned short	nType;  //event type
    
    PAGELAYOUT_INFO	layout;
} PAGELAYOUT_TYPE, *LPPAGELAYOUT_TYPE;
#define IS_SAMESIZE_PAGELAYOUT_TYPE (sizeof(PAGELAYOUT_TYPE) == sizeof(BrGuiPaperLayoutEvent))

typedef struct _tagPOGUISETPARAATTINFO
{
    unsigned short	nType;
    int				nVAlignType;
    int				nHAlignType;
    int				nLeftMarginValue;
    int				nRightMarginValue;
    int				FirstLineType;
    int				FirstLineValue;
    int				nLineSpace;
    double			nLineSpaceValue;
    int				ParaTopValue;
    int				ParaBottomValue;
    int				nLineHeight;
    int				ParaDirection;	// LTR/RTL
    int				bUndo;			// undo flag
    int				nOutlineLevel;
    int				nTextFlow;
    int				bSupressLineNum; //1: 단락 건너띔, 0: 건너띄지 않음
    int				nMaskParaAtt;	// mask bit
    unsigned int	nWidth;		//preView Mode //20hoon //2014-07-15
    unsigned int	nHeight;	//preView Mode //20hoon //2014-07-15
    int				bInsertInOneLine; // «— ¡Ÿ∑Œ ¿‘∑¬ For HWP
}PARAGRAPH_INFO, *LPPARAGRAPH_INFO;
#define IS_SAMESIZE_PARAGRAPH_INFO (sizeof(PARAGRAPH_INFO) == sizeof(BrGuiSetParaAttEvent))

typedef struct _tagPOEXTFLOWINFO
{
    unsigned short	nType;
    
    int				bUndo;
    int				nTextFlow;
    int				nApplyTo;
}TEXTFLOW_INFO, *LPTEXTFLOW_INFO;
#define IS_SAMESIZE_TEXTFLOW_INFO (sizeof(TEXTFLOW_INFO) == sizeof(BrGuiSetTextFlowEvent))

typedef struct _tagPOBULLETITEMINFO
{
    int             nBulletMode;
    int             nBulletType;
    int             nBulletStyle;
    int             nAlign;
    int             nLeftMargin;
    int             nIndent;
    int             nTextSpc; //for PPT fontAttr
    int             nMask;	//for PPT fontAttr
    unsigned int   nTextColor; //for PPT fontAttr
    char            strBullet[128];
    FONT_INFO	stFontAtt;
    
    //각 item의 이미지
    unsigned char*	pImagebuffer;
    int			nImageWidth;
    int			nImageHeight;
} BULLETITEM_INFO, *LPBULLETITEM_INFO;
#define IS_SAMESIZE_BULLETITEM_INFO (sizeof(BULLETITEM_INFO) == sizeof(BrBulletItemInfo))

// BrBulletDisplayInfo
typedef struct _tagPOBULLETTYPE
{
    int			nCurBulletDepth;
    int			nCurOutlineNumer;
    BULLETITEM_INFO	BulletItemInfo[9];
}BULLET_TYPE, *LPBULLET_TYPE;
#define IS_SAMESIZE_BULLET_TYPE (sizeof(BULLET_TYPE) == sizeof(BrBulletDisplayInfo))

typedef struct _tagPOGUIBWPSERIALDATA
{
    char**	strRow;
}BWP_SERIAL_DATA,*LPBWP_SERIAL_DATA;

typedef struct _tagPOGUIBWPChartHideInfo
{
    unsigned short  sCount;
    unsigned short* p_sNumInfo;
}BWP_CHART_HIDE_INFO, *LPBWP_CHART_HIDE_INFO;

typedef struct _tagPOCHARTFONTDATA
{
    //[2011-08-11] Chart Font, Font Size
    char*						fNames[BORA_CHART_FONT_ELEMENTS_SIZE];
    float						fRatio;
}CHART_FONTDATA, *LPCHART_FONTDATA;
#define IS_SAMESIZE_CHART_FONTDATA (sizeof(CHART_FONTDATA) == sizeof(BrChartFontData))

//bmvinterface _tagBRCHARTDATALABELINFO
typedef struct _tagCHART_DATA_LABEL_INFO
{
    unsigned short	nType;
    unsigned short	nFlag;
    short			nLabelPos;
    char			bEnableNumFmt;
    unsigned short	nDecPlaces;
    unsigned short	nNegativeType;
    unsigned short	nSeperatePos;
    unsigned short	nShowOption;
} CHART_DATA_LABEL_INFO, *LPCHART_DATA_LABEL_INFO;
#define IS_SAMESIZE_CHART_DATA_LABEL_INFO (sizeof(CHART_DATA_LABEL_INFO) == sizeof(BrChartDataLabelInfo))


typedef struct _tagCHART_HIDE_INFO
{
    unsigned short  sCount;
    unsigned short* p_sNumInfo;
} CHART_HIDE_INFO, *LPCHART_HIDE_INFO;
#define IS_SAMESIZE_CHART_HIDE_INFO (sizeof(CHART_HIDE_INFO) == sizeof(BrChartHideInfo))

typedef struct _tagCHARTSERIALDATA
{
    char**			strRow;
} CHART_SERIAL_DATA,*LPCHART_SERIAL_DATA;
#define IS_SAMESIZE_CHART_SERIAL_DATA (sizeof(CHART_SERIAL_DATA) == sizeof(BrChartSerialData))

typedef struct _tagCHART_PLOTVISONLY_INFO
{
    unsigned short	nType;
    bool			bPlotVisOnly;
} CHART_PLOTVISONLY_INFO, *LPCHART_PLOTVISONLY_INFO;
#define IS_SAMESIZE_CHART_PLOTVISONLY_INFO (sizeof(CHART_PLOTVISONLY_INFO) == sizeof(BrChartPlotVisOnlyInfo))

typedef struct _tagCHART_DATA
{
    unsigned short		nMainType;
    unsigned short		nSubType;
    char				bSeriesInRows;
    char				bTitleOverlay;
    char*				szTitle;
    char*				szXAxisTitle;
    char*				szYAxisTitle;
    unsigned short		nLegend;
    unsigned short		nStyleID;
    char				bPlotBorder;
    char				bFrameBorder;
    char				bPlotVisOnly;
    
    char				bPlaceHolder;	// For BWP Chart
    CHART_HIDE_INFO*	colHideInfo;	// For BWP Chart
    CHART_HIDE_INFO*	rowHideInfo;	// For BWP Chart
    unsigned short		nItemCnt;		// For BWP Chart
    unsigned short		nSerialCnt;		// For BWP Chart
    char**				strItemName;	// For BWP Chart
    char**				strSerialName;	// For BWP Chart
    CHART_SERIAL_DATA*	serialData;		// For BWP Chart
    
    PORANGE             tRange;			// For Sheet Chart
    char				szRange[BORA_SHEETNAME_LENGTH * 10 + 1];	// For Sheet Chart
    unsigned char		bExternData;	// For Sheet Chart
    unsigned char		bPosUse;		// For Sheet Chart
    int					nStartX;		// For Sheet Chart
    int					nStartY;		// For Sheet Chart
    int					nWidth;			// For Sheet Chart
    int					nHeight;		// For Sheet Chart
} CHART_DATA, *LPCHART_DATA;
#define IS_SAMESIZE_CHART_DATA (sizeof(CHART_DATA) == sizeof(BrChartData))

typedef struct _tagCHART_STYLE_INFO
{
    unsigned short	nType;
    unsigned short	nChartStyle;
    unsigned short	nChartEffect;
} CHART_STYLE_INFO, *LPCHART_STYLE_INFO;
#define IS_SAMESIZE_CHART_STYLE_INFO (sizeof(CHART_STYLE_INFO) == sizeof(BrChartStyleInfo))

typedef struct _tagPOCAHRTSTYLELISTINFO
{
    int nChartStyleCnt;
    int* nChartStyleList;
}CHART_STYLE_LIST_INFO, *LPCHART_STYLE_LIST_INFO;
#define IS_SAMESIZE_CHART_STYLE_LIST_INFO (sizeof(CHART_STYLE_LIST_INFO) == sizeof(BrChartStyleListInfo))

typedef struct _tagCHART_MODIFY_INFO
{
    unsigned short	nType;
    int				nModifyMask;
    CHART_DATA		chartData;
    int				nX;
    int				nY;
} CHART_MODIFY_INFO, *LPCHART_MODIFY_INFO;
#define IS_SAMESIZE_CHART_MODIFY_INFO (sizeof(CHART_MODIFY_INFO) == sizeof(BrChartModifyInfo))

// [2011.08.05] Axis Line, Label, Title On/Off
typedef struct _tagCHART_AXES_INFO
{
    unsigned short	nType;
    unsigned short  nChart;
    char			bExistAxes[5];
    int				bAxesInfo[5];	// bit1			bit2		bit3		bit4		bit5
    // AxisLine		AxisLabel	AxisTitle	MajorGrid	MajorTick
    
    int				nAlignment[5];  // Label alignment.
    char			bScaleInfo[5];	// bit11			bit2			bit3
    // valuescale?		bLogarithmic	'show unit label'
    
    double			dLogBase[5];
    int				nUnitIndex[5];		// valuescale->m_AxmId
    char			bHasMinusValue;
} CHART_AXES_INFO, *LPCHART_AXES_INFO;
#define IS_SAMESIZE_CHART_AXES_INFO (sizeof(CHART_AXES_INFO) == sizeof(BrChartAxesInfo))

// 서식 패널 관련 Start ++++++++++++++++++++++++++++++++++++++++++++++

// 0.Common
// BrColorInfo
//typedef struct
//{
//    int				nThemePaletteIndex;	//defualt = NONE_THEME_COLOR 0, theme color 쓰는 경우 idx 존재.
//    unsigned long	nColor;
//    bool			bAutoColor;
//} COLOR_INFO, *LPCOLOR_INFO;

typedef struct _TagPOFRAMEGRADIENTCOLORINFO
{
    unsigned int lSelectedColor;
    
    bool bBright;
    bool bSupport;
    
    unsigned int lColor1;
    unsigned int lColor2;
    unsigned int lColor3;
    
    bool bIsForShape;
}DRAW_GRADIENTCOLOR_INFO, *LPDRAW_GRADIENTCOLOR_INFO;
// DRAW_GRADIENTCOLOR_INFO 구조체 검토 필요

// 1.Quick Style (빠른 스타일)
// BrFrameQuickStyle
typedef struct _tagPOFRAMEQUICKSTYLE
{
    ObjectQuickStyle            nQuickStyleFrameType;
    
    FrameShapePreset            nShapePreset;           //도형 Preset
    ThemeLineStylePreset        nLinePreset;            //선 Preset
    PictureStyle                nPicturePreset;         //그림 Preset
    
    ArrowPreset                 nArrwowPreset;			//화살표 Preset
    ThemeShapeStylePreset       nShapeThemePreset;		//도형 스타일
    ThemeLineStylePreset        nLineThemePreset;		//라인 스타일
    ImageStyle                  nImageStylePreset;		//이미지 스타일
    BgFillStyle                 nBgFillStylePreset;     //다른 테마 채우기 preset
}SHAPE_QUICK_STYLE, *LPSHAPE_QUICK_STYLE;
#define IS_SAMESIZE_SHAPE_QUICK_STYLE (sizeof(SHAPE_QUICK_STYLE) == sizeof(BrFrameQuickStyle))

// 2.Fill (채우기)
// BrImgageInfo
typedef struct _tagPO	 {
    BitmapFormat    format;
    unsigned int    width;
    unsigned int    height;
    unsigned int    frameWidth;
    unsigned int    frameHeight;
}IMAGE_INFO, *LPIMAGE_INFO;
#define IS_SAMESIZE_IMAGE_INFO (sizeof(IMAGE_INFO) == sizeof(BrImgageInfo))

// BrPictureTextureDetail
typedef struct _tagPOPICTURETEXTUREDETAIL
{
    PictureTextureFormat    nPictureTextureSelector;
    
    //Picture Texture
    TextureStyle            nPictureTextureType;
    
    //Picture Fill by File path
    char		pPictureFilePath[BORA_FULLPATH_LENGTH];//[MistY][2012.11.16][TID:10390] gradation / texture support
    
    void*		pixels;
    IMAGE_INFO	pixelInfo;
}SHAPE_FILL_PICTURE_TEXTURE_DETAIL, *LPSHAPE_FILL_PICTURE_TEXTURE_DETAIL;
#define IS_SAMESIZE_SHAPE_FILL_PICTURE_TEXTURE_DETAIL (sizeof(SHAPE_FILL_PICTURE_TEXTURE_DETAIL) == sizeof(BrPictureTextureDetail))

// BrFrameStretch
typedef struct _tagPOFRAMESTRETCH
{
    int			nOffsetLeft;
    int			nOffsetRight;
    int			nOffsetAbove;
    int			nOffsetBottom;
}SHAPE_STRETCH, *LPSHAPE_STRETCH;
#define IS_SAMESIZE_SHAPE_STRETCH (sizeof(SHAPE_STRETCH) == sizeof(BrFrameStretch))

// BrFrameTiling
typedef struct _tagPOFRAMETILING
{
    int			nOffsetX;
    int			nOffsetY;
    int			nScaleX;
    int			nScaleY;
    int			nAlignment;
    int			nMirrorType;
}SHAPE_TILING, *LPSHAPE_TILING;
#define IS_SAMESIZE_SHAPE_TILING (sizeof(SHAPE_TILING) == sizeof(BrFrameTiling))

// BrFramePicture
typedef struct _tagPOFRAMEPICTURE
{
    SHAPE_FILL_PICTURE_TEXTURE_DETAIL	stPictureTextureDetail;
    int                                 nPictureTransparency;
    
    bool                bPictureRotateWithShape;
    bool                bPictureAsTile;
    bool                bHasImageAttr;	//이미지 정보 가지고 있는지 체크
    bool                bSupportTexture;	// [10/27/2014 hskang] 질감 지원하는 도형인지 체크 UI요청 NPC-2975
    
    SHAPE_STRETCH       stPictureStretch;
    SHAPE_TILING        stPictureTiling;
}SHAPE_PICTURE, *LPSHAPE_PICTURE;
#define IS_SAMESIZE_SHAPE_PICTURE (sizeof(SHAPE_PICTURE) == sizeof(BrFramePicture))

// BrFrameGradientStop
typedef struct _tagPOFRAMEGRADIENTSTOP
{
    COLOR_INFO		nGradientStopColor;
    
    int				nGradientStopLocation;
    int				nGradientStopBright;
    int				nGradientStopTranparency;
}SHAPE_GRADIENT_STOP, *LPSHAPE_GRADIENT_STOP;
#define IS_SAMESIZE_SHAPE_GRADIENT_STOP (sizeof(SHAPE_GRADIENT_STOP) == sizeof(BrFrameGradientStop))

// BrFrameGradient
typedef struct _tagPOFRAMEGRADIENT
{
    int                     nPreset;
    int                     nGradientType;
    int                     nGradientDirection;
    
    int						nGradientAngle;
    int						nGradientStopNumbers;
    bool					bGradientRotateWithShape;	//for fill
    SHAPE_GRADIENT_STOP		stGradientStop[10];
    int						nXOffset;				//±◊∂Ûµ•¿Ãº« ∞°∑Œ¡ﬂΩ… HWP¿¸øÎ
    int						nYOffset;				//±◊∂Ûµ•¿Ãº« ºº∑Œ¡ﬂΩ… HWP¿¸øÎ
    int                     nGBlur;
    int                     nGBlurCenter;
}SHAPE_GRADIENT, *LPSHAPE_GRADIENT;
#define IS_SAMESIZE_SHAPE_GRADIENT (sizeof(SHAPE_GRADIENT) == sizeof(BrFrameGradient))

// BrFramePattern
typedef struct _tagPOFRAMEPATTERN
{
    PatternType             nPatternType;
    ShadingPatternStyle     nShadingPatternType; // Word Shading 시 일반 Pattern Fill 과 사용되는 Index가 달라 사용
    
    COLOR_INFO				nPatternForeColor;
    COLOR_INFO				nPatternBackColor;
}SHAPE_PATTERN, *LPSHAPE_PATTERN;
#define IS_SAMESIZE_SHAPE_PATTERN (sizeof(SHAPE_PATTERN) == sizeof(BrFramePattern))

// BrFrameFill
typedef struct _tagPOFRAMEFILL
{
    FillStyle               nFillSelector;
    
    COLOR_INFO				nSolidColor;        //Solid Fill (단색 채우기)
    float					fSolidTransparency;
    
    SHAPE_GRADIENT          stGradientFill;     //Gradient Fill (그라데이션 채우기)
    SHAPE_PICTURE			stPictureFill;      //Picture or Texture Fill (그림 또는 질감 채우기)
    SHAPE_PATTERN			stPatternFill;      //Pattern Fill (패턴 채우기)
    bool					isBorderShading;
    int                     nApplyTo; //[hwp] 0 기본값, 1: 선택된 셀, 2: 모든 셀, 3: 테이블
    bool					blikeOneCell;//[hwp] 0 각 셀마다 적용, 1 하나의 셀 처럼 적용
}SHAPE_FILL, *LPSHAPE_FILL;
#define IS_SAMESIZE_SHAPE_FILL (sizeof(SHAPE_FILL) == sizeof(BrFrameFill))


// 3.Line Color (선 색)
// BrFrameLineColor
typedef struct _tagPOFRAMELINECOLOR
{
    ObjectLineColorType             nLineColorSelector;
    
    //Solid Line (실 선)
    COLOR_INFO                      nSolidColor;
    float                           fSolidTransparency;
    
    //Gradient Line (그라이데이션 선)
    SHAPE_GRADIENT                  stGradientLine;
}SHAPE_LINE_COLOR, *LPSHAPE_LINE_COLOR;
#define IS_SAMESIZE_SHAPE_LINE_COLOR (sizeof(SHAPE_LINE_COLOR) == sizeof(BrFrameLineColor))

// 4.Line Style (선 스타일)
// BrFrameArrow 화살표 설정
typedef struct _tagPOFRAMEARROW
{
    ShapeLineStyleArrow     nBeginType;
    ShapeLineStyleArrow     nEndType;
    ShapeLineStyleArrowSize	nBeginSize;
    ShapeLineStyleArrowSize	nEndSize;
}SHAPE_LINE_ARROW, *LPSHAPE_LINE_ARROW;
#define IS_SAMESIZE_SHAPE_LINE_ARROW (sizeof(SHAPE_LINE_ARROW) == sizeof(BrFrameArrow))

// BrFrameLineStyle
typedef struct _tagPOFRAMELINESTYLE
{
    //	BrLineStyleSelector		nLineStyleSelector;
    
    int                             nWidth;			//Unit:point
    ObjectLineStyleCompound         nCompoundType;
    ObjectLineStyleDash             nDashType;
    ObjectLineStyleCap              nCapType;
    ObjectLineStyleJoin             nJoinType;
    SHAPE_LINE_ARROW                stArrow;
}SHAPE_LINE_STYLE, *LPSHAPE_LINE_STYLE;
#define IS_SAMESIZE_SHAPE_LINE_STYLE (sizeof(SHAPE_LINE_STYLE) == sizeof(BrFrameLineStyle))

// 5.Shadow (그림자)
// BrFrameShadow
typedef struct _tagPOFRAMESHADOW
{
    ObjectShadowPreset	nPreset;
    COLOR_INFO			nColor;
    float				fTransparency;
    float				nSize;
    float				nBlur;
    float				nAngle;
    float				nDistance;
}SHAPE_SHADOW, *LPSHAPE_SHADOW;
#define IS_SAMESIZE_SHAPE_SHADOW (sizeof(SHAPE_SHADOW) == sizeof(BrFrameShadow))

// 6.Reflection (반사)
// BrFrameReflection
typedef struct _tagPOFRAMEREFLECTION
{
    ObjectReflectionPreset      nPreset;
    float                       fTransparency;
    float                       nSize;
    float                       nDistance;
    float                       nBlur;
}SHAPE_REFLECTION, *LPSHAPE_REFLECTION;
#define IS_SAMESIZE_SHAPE_REFLECTION (sizeof(SHAPE_REFLECTION) == sizeof(BrFrameReflection))

// 7.Glow (네온)
// BrFrameGlow
typedef struct _tagPOFRAMEGLOW
{
    ObjectGlowPreset        nPreset;
    COLOR_INFO				nColor;
    float					nSize;
    float					fTransparency;
}SHAPE_GLOW, *LPSHAPE_GLOW;
#define IS_SAMESIZE_SHAPE_GLOW (sizeof(SHAPE_GLOW) == sizeof(BrFrameGlow))

// 8.SoftEdge (부드러운 가장자리)
// BrFrameSoftEdge
typedef struct _tagPOFRAMESOFTEDGE
{
    ObjectSoftEdgePreset	nPreset;
    float					nSize;
}SHAPE_SOFTEDGE, *LPSHAPE_SOFTEDGE;
#define IS_SAMESIZE_SHAPE_SOFTEDGE (sizeof(SHAPE_SOFTEDGE) == sizeof(BrFrameSoftEdge))

// 9.3D Format (3차원 서식)
// BrFrame3DFormat
typedef struct _tagPO3DFormat
{
    Object3DFormatSelector 	n3DFormatSelector;
    ObjectBevelType     nBevelTopType;		//입체 효과
    float               nBevelTopWidth;
    float               nBevelTopHeight;
    ObjectBevelType     nBevelBottomType;
    float               nBevelBottomWidth;
    float               nBevelBottomHeight;
    COLOR_INFO          nDepthColor;
    float               nBackDepth;
    COLOR_INFO          nContourColor;		//외형선
    float               nContourSize;
    ObjectMaterialType  nSurfaceMaterial;	//표면
    ObjectMaterialType  nSurfaceLight;
    ObjectLightRigDirection  nSurfaceLightDir;
    float               nSurfaceAngle;
    ObjectCell3DFormatPreset nCell3DFormatPreset;
}SHAPE_3D_FORMAT, *LPSHAPE_3D_FORMAT;
#define IS_SAMESIZE_SHAPE_3D_FORMAT (sizeof(SHAPE_3D_FORMAT) == sizeof(BrFrame3DFormat))

// 10.3D Rotation (3차원 회전)
// BrFrame3DRotation
typedef struct _tagPO3DRotation
{
    Object3dRotationType    nPreset;
    int                     n3DCameraType; //hnsong:2011-11-22
    float                   nXRotation;
    float                   nYRotation;
    float                   nZRotation;
    float                   nPerspectiveAngle;
    float                   nObjectPos;
}SHAPE_3D_ROTATION, *LPSHAPE_3D_ROTATION;
#define IS_SAMESIZE_SHAPE_3D_ROTATION (sizeof(SHAPE_3D_ROTATION) == sizeof(BrFrame3DRotation))

// 11.Picture Correction	(그림 수정)
// BrFramePictureCorrection
typedef struct _tagPOFRAMEPICTURECORRECTION
{
    ObjectSoftenSharpenType		nSoftenSharpenPreset;
    BrightnessContrastPreset	nBrightnessContrastPreset;
    
    float       nSoftenSharpen;
    float		nBrightness;
    float		nContrast;
}SHAPE_PICTURE_CORRECTION, *LPSHAPE_PICTURE_CORRECTION;
#define IS_SAMESIZE_SHAPE_PICTURE_CORRECTION (sizeof(SHAPE_PICTURE_CORRECTION) == sizeof(BrFramePictureCorrection))

// 12.Picture Color (그림 색)
// BrFramePictureColor
typedef struct _tagPOFRAMEPICTURECOLOR
{
    SaturationPreset		nSaturationPreset;		//색 채도 미리설정
    ColorScalePreset		nColorScalePreset;		//색조 미리설정
    ImageReColorPreset		nRecolorPreset;			//다시 칠하기 미리 설정
    
    float					nSaturation;			//색 채도
    int						nColorScale;			//색 온도
    
    COLOR_INFO				nRecolorInfo;			//기타 변형
}SHAPE_PICTURE_COLOR, *LPSHAPE_PICTURE_COLOR;
#define IS_SAMESIZE_SHAPE_PICTURE_COLOR (sizeof(SHAPE_PICTURE_COLOR) == sizeof(BrFramePictureColor))

// 13.Artistic Effect (꾸밈 효과)
// BrFrameArtisticEffect
typedef struct _tagPOFRAMEARTISTICEFFECT
{
    int                         nTransparency;
    int                         nParameterValue;
    ImageArristicEffectPreset	nEffectPreset;
    
    int                         nParameterMin;
    int                         nParameterMax;
    
    int                         nOptionValue1;
    int                         nOptionValue2;
}SHAPE_ARTISTIC_EFFECT, *LPSHAPE_ARTISTIC_EFFECT;
#define IS_SAMESIZE_SHAPE_ARTISTIC_EFFECT (sizeof(SHAPE_ARTISTIC_EFFECT) == sizeof(BrFrameArtisticEffect))

// 14.Cropping (자르기)
// BrFrameCropping
typedef struct _tagPOFRAMECROPPING
{
    ObjectCropType	eCropSelector;
    
    // (자르기 모드 진입)
    int				bCroppingMode;
    int				bCroppingApply;
    
    // (가로 세로 비율: Crop to a common aspect ratio)
    int				nHorizontalRatio;
    int				nVerticalRatio;
    
    // (도형에 맞추어 자르기: Crop to a specific shape)
    ShapeInsertType	eShapeType;
    
    // (자르기 상세 변경)
    float			nPicturePositionWidth;
    float			nPicturePositionHeight;
    float			nPicturePositionOffsetX;
    float			nPicturePositionOffsetY;
    
    float			nCropPositionWidth;
    float			nCropPositionHeight;
    float			nCropPositionLeft;
    float			nCropPositionTop;
}SHAPE_CROPPING, *LPSHAPE_CROPPING;
#define IS_SAMESIZE_SHAPE_CROPPING (sizeof(SHAPE_CROPPING) == sizeof(BrFrameCropping))

// 15.Size (크기)
// BrFrameSize
typedef struct _tagPOFRAMESIZE
{
    float					nWidth;
    float					nHeight;
    float					nImageOrgWidth;		//이미지 원래 크기
    float					nImageOrgHeight;
    float					nRotation;
    int						nPercentWidth;      //[2013.09.26][jaesun][TID:17523] Size 배율 조절
    int						nPercentHeight;
    bool					bFlip;
    bool					bMirror;
    bool					bNoChangeAspect;	//가로 세로 비율 고정
    ChangeSizeType          nChangedSizeType;	//[2013.09.26][jaesun][TID:17523] Size 배율 조절
    RotationPreset          nRotationPreset;
    bool					bRelativeToOrgPictureSize;
    bool					bBestScaleForSlideShow;
    BestScaleType           nBestScaleType;
    float					fHeightRelative;
    unsigned short			bHeightRelative;
    float					fWidthRelative;
    unsigned short			bWidthRelative;
    int						nUseMask;			// 변경 할 값 ( 변경할지 유무 판단)  [4/16/2014 signous]
    int						nVaildMask;
}SHAPE_SIZE, *LPSHAPE_SIZE;
#define IS_SAMESIZE_SHAPE_SIZE (sizeof(SHAPE_SIZE) == sizeof(BrFrameSize))

// 16.Location (위치)
// BrFrameLocation
typedef struct _tagPOFRAMELOCATION
{
    float			nHorizontalDistance;
    float			nVerticalDistance;
    LocationFrom	nHorizontalLocationFrom;
    LocationFrom	nVerticalLocationFrom;
    
    unsigned short	bHorizontalLocationType;
    unsigned short	bHorizontalAlignment;
    unsigned short	bHorizontalBookLayout;
    unsigned short	bHorizontalRelative;
    float			fHorizontalRelativePosition;
    
    unsigned short	bVerticalLocationType;
    unsigned short	bVerticalAlignment;
    unsigned short	bVerticalRelative;
    float			fVerticalRelativePosition;
    
    unsigned short	bPreset;
    
    // [2013.10.21][PO 6.0][이정우] 페이지레이아웃.정렬/위치.기타레이아웃옵션.위치.옵션.텍스트와 함께 개체 이동 on/off
    bool			bMoveObjectWithText;
    // [2013.10.21][PO 6.0][이정우] 페이지레이아웃.정렬/위치.기타레이아웃옵션.위치.옵션.기준위치고정
    bool			bLockAnchor;
    // [2013.12.07][MID-45945][이정우]
    bool			bReCalcDistance;
    int				nUseMask;
    int				nVaildMask;
}SHAPE_LOCATION, *LPSHAPE_LOCATION;
#define IS_SAMESIZE_SHAPE_LOCATION (sizeof(SHAPE_LOCATION) == sizeof(BrFrameLocation))

// 17.TextBox (텍스트 상자)
// BrFrameTextBox
typedef struct _tagPOFRAMETEXTBOX
{
    int				nModifyMask;			//변경된 값이 어떤 것인지 체크
    int				nVertiAlign;			//BrFrameTextBoxVerticalType
    int				nTextFlow;				//BrFrameTextBoxFlow
    bool			bNoAutoText;			//자동 맞춤 안함
    bool			bFitTextToShape;		//Text를 도형 크기에 맞춤- 지원 안하고 대신에 세로로 키운다
    bool			bFitShapeToText;		//도형을 텍스트 크기에 맞춤
    float			nLeftMargin;			//MM단위
    float			nTopMargin;				//MM단위
    float			nRightMargin;			//MM단위
    float			nBottomMargin;			//MM단위
    bool			bWrap;					//도형의 텍스트 배치
    bool			bDoNotRotateText;		//텍스트 회전 안 함
    int				nUseMask;			// 변경 할 값 ( 변경할지 유무 판단)  [4/16/2014 signous]
    int				nVaildMask;				//다중선택시 동일값 체크마스크
}SHAPE_TEXTBOX, *LPSHAPE_TEXTBOX;
#define IS_SAMESIZE_SHAPE_TEXTBOX (sizeof(SHAPE_TEXTBOX) == sizeof(BrFrameTextBox))

// 18.Edit Shape (도형 편집)
//[2013.10.01][TID:16326][윤성준] 연결선 바꾸기 작업
// BrFrameEditShape
typedef struct _tagPOFRAMESHAPEEDIT
{
    EditShapeType nEditShapeSelector;
    int nShapeID; //도형 모양 변경
    
}SHAPE_EDIT, *LPSHAPE_EDIT;
#define IS_SAMESIZE_SHAPE_EDIT (sizeof(SHAPE_EDIT) == sizeof(BrFrameEditShape))

// 19.Picture Compression	(그림 압축)
// BrFramePictureCompression
typedef struct _tagPOFRAMEPICTURECOMPRESSION
{
    bool		bApplyOnlyThisPicture;
    bool		bDeleteCutPictureArea;
    int			nTargetPrint;
}SHAPE_PICTURE_COMPRESSION, *LPSHAPE_PICTURE_COMPRESSION;
#define IS_SAMESIZE_SHAPE_PICTURE_COMPRESSION (sizeof(SHAPE_PICTURE_COMPRESSION) == sizeof(BrFramePictureCompression))

// BrGuiFrameFormatEvent
typedef struct _tagPOSHAPE_PROPERTY
{
    unsigned short              nType;					//=BrGUI_FRAME_FORAMT_EVENT
    unsigned char				bUndo;
    int							nFrameFormatSelector;	// 0.Frame Format Selector (BrFrameFormatSelector)
    
    SHAPE_QUICK_STYLE           stQuickStyle;			// 1.Quick Style (빠른 스타일)
    SHAPE_FILL                  stFill;                 // 2.Fill (채우기)
    SHAPE_LINE_COLOR            stLineColor;			// 3.Line Color (선 색)
    SHAPE_LINE_STYLE            stLineStyle;			// 4.Line Style (선 스타일)
    SHAPE_SHADOW				stShadow;				// 5.Shadow (그림자)
    SHAPE_REFLECTION			stReflection;			// 6.Reflection (반사)
    SHAPE_GLOW					stGlow;					// 7.Glow (네온)
    SHAPE_SOFTEDGE				stSoftEdge;				// 8.SoftEdge (부드러운 가장자리)
    SHAPE_3D_FORMAT				st3DFormat;				// 9.3D Format (3차원 서식)
    SHAPE_3D_ROTATION 			st3DRotation;			// 10.3D Rotation (3차원 회전)
    SHAPE_PICTURE_CORRECTION	stPictureCorrection;	// 11.Picture Correction	(그림 수정)
    SHAPE_PICTURE_COLOR			stPictureColor;			// 12.Picture Color (그림 색)
    SHAPE_ARTISTIC_EFFECT       stArtisticEffect;		// 13.Artistic Effect (꾸밈 효과)
    SHAPE_CROPPING				stCropping;				// 14.Cropping (자르기)
    SHAPE_SIZE					stSize;					// 15.Size (크기)
    SHAPE_LOCATION				stLocation;				// 16.Location (위치)
    SHAPE_TEXTBOX				stTextBox;				// 17.TextBox (텍스트 상자)
    SHAPE_EDIT                  stEditShape;			// 18.Edit Shape (도형 편집)
    SHAPE_PICTURE_COMPRESSION	stPictureCompression;	// 19.Picture Compression (그림 압축)
} SHAPE_PROPERTY, *LPSHAPE_PROPERTY;
#define IS_SAMESIZE_SHAPE_PROPERTY (sizeof(SHAPE_PROPERTY) == sizeof(BrGuiFrameFormatEvent))

// 서식 패널 관련 End ---------------------------------------------

// BrGuiPPTSlideShowEffectEvent
typedef struct _tagPOSLIDE_TRANSITION_INFO
{
    unsigned short	nType;
    int				nPageNum;
    int				nOldEffectType; //PowerPoint 2003, 2007
    TransitionEffectType nEffectType; //PowerPoint 2010
    TransitionEffectOptionType nOptionType;
    int				nDuration;
    int				bAdvClick;
    int				bAdvTime;
    int				nAdvTime;
}SLIDE_TRANSITION_INFO,*LPSLIDE_TRANSITION_INFO;
#define IS_SAMESIZE_SLIDE_TRANSITION_INFO (sizeof(SLIDE_TRANSITION_INFO) == sizeof(BrGuiPPTSlideShowEffectEvent))

//_tagGUIBORDERINFO
typedef struct _tagPOGUI_BORDER_EVENT
{
    unsigned short	nType;
    unsigned short	nStyleID;
    int			nBorderMask;
    int			nBorderStyle;
    int			nBorderWidth;
    COLOR_INFO			nBorderColor;
    COLOR_INFO			nBorderLeftColor;
    COLOR_INFO			nBorderTopColor;
    COLOR_INFO			nBorderRightColor;
    COLOR_INFO			nBorderBottomColor;
    COLOR_INFO			nBorderVerticalColor;
    COLOR_INFO			nBorderHorizontalColor;
    COLOR_INFO			nBorderDownDiagonalColor;
    COLOR_INFO			nBorderUpDiagonalColor;
    COLOR_INFO			nCellColor;
    int			nBorderLeftWidth;
    int			nBorderTopWidth;
    int			nBorderRightWidth;
    int			nBorderBottomWidth;
    int			nBorderVerticalWidth;
    int			nBorderHorizontalWidth;
    int			nBorderDownDiagonalWidth;
    int			nBorderUpDiagonalWidth;
    int			nTablePen;//워드,슬라이드 테이블 테두리 preset  BrTablePenType 을 세팅하세요
    int			bBorderVerticalEnabled;
    int			bBorderHorizantalEnabled;
    int			nStyleOption;
    int			bUndo;
    int			nApplyTo;
    int         nCellMakingType;
    int			nColorMask;//BR_TABLE_PROPERTY_CELL_COLOR_NONE: 셀 채우기 없음, BR_TABLE_PROPERTY_CELL_COLOR_DIFF : 셀 음영 색이 달라서 결정 못함, BR_TABLE_PROPERTY_CELL_COLOR_NONE: 테이블 배경 채우기 없음,
}GUI_BORDER_EVENT, *LPGUI_BORDER_EVENT;
#define IS_SAMESIZE_GUI_BORDER_EVENT (sizeof(GUI_BORDER_EVENT) == sizeof(BrGuiBorderEvent))


typedef struct _tagPOTABLE_ATT
{
    unsigned short	nType;
    int			nMask;
    unsigned char	bWidthType;
    int			nWidth;
    int			nBaseWidth;
    unsigned char	bAlign;
    unsigned char	bTextArround;
    int				nLeftMargin;
    int			nCellTopMargin;//기본 셀 여백 (전체표에 동일하게 적용)
    int			nCellBottomMargin;//기본 셀 여백 (전체표에 동일하게 적용)
    int			nCellLeftMargin;//기본 셀 여백 (전체표에 동일하게 적용)
    int			nCellRightMargin;//기본 셀 여백 (전체표에 동일하게 적용)
    int			nCellSpace;
    int			nRowHeight;
    unsigned char   bAutoResizeByContent;
    unsigned char   bRowHeightType;
    unsigned char	bRowCantSplit; /* 페이지 끝에서 행을 자동으로 나누기, 0:unchecked, 1:checked, 2:indeterminate */
    unsigned char	bRepeatRowHeading;
    unsigned char	bVerticalAlign;
    unsigned char	bWholeTableSameCellMargin;
    unsigned char	bColumnWidthType;
    unsigned char	bCellWidthType;
    int			nColumnWidth;
    int			nCellWidth;
    int			nRowHeading;
    int			nCellTopMarginExt;//셀 여백
    int			nCellBottomMarginExt;//셀 여백
    int			nCellLeftMarginExt;//셀 여백
    int			nCellRightMarginExt;//셀 여백
    unsigned short	*pReplaceSubject;
    unsigned short	*pReplaceComment;
    int				nRowColMoving;
    unsigned char	bHorizontalLocationType;
    unsigned char	bHorizontalAlignment;
    unsigned char	bHorizontalRelative;
    int			nHorizontalDistance;
    unsigned char	bVerticalLocationType;
    unsigned char	bVerticalAlignment;
    unsigned char	bVerticalRelative;
    int			nVerticalDistance;
    unsigned char	bUseCellMarginExt; /* hwp 지정  0:unchecked, 1:checked, 2:indeterminate */
    unsigned char	bIgnoreConvertTwip;
    unsigned char	bProtected;/* 사용자 편집을 막을지 여부 */
    unsigned char	bEditable;/* 양식모드에서 편집 가능 여부 */
    unsigned char	bDirty;/* 사용자 편집을 막을지 여부 */
    char		    szHwpFieldName[1024]; /* hwp 양식 모드 필드 이름 버퍼크기 1024 utf8*/
}TABLE_ATT, *LPTABLE_ATT;
#define IS_SAMESIZE_TABLE_ATT (sizeof(TABLE_ATT) == sizeof(BrGuiTablePropertyEvent))

typedef struct _tagPOTABLE_STYLE_INFO{
    int nID;
    int nOption;
}TABLE_STYLE_INFO, *LPTABLE_STYLE_INFO;

//  [12/17/2012 sylee0335]
typedef struct _tagPOSHEET_FORMULA_ERROR_INFO
{
    short			nErrorType;
    PORANGE		tIndicatorPos;
}SHEET_FORMULA_ERROR_INFO, *LPSHEET_FORMULA_ERROR_INFO;
#define IS_SAMESIZE_SHEET_FORMULA_ERROR_INFO (sizeof(SHEET_FORMULA_ERROR_INFO) == sizeof(BoraSheetFormulaErrInfo))

typedef struct _tagPOSHEET_TABLE_INFO
{
    int			nID;
    char		szTableName[BORA_DEFAULT_LENGTH*3 + 1];
    int			nTableStyleID;
    int			nTableStyleAtt;
    PORANGE	tableRange;
}SHEET_TABLE_INFO, *LPSHEET_TABLE_INFO;
#define IS_SAMESIZE_SHEET_TABLE_INFO (sizeof(SHEET_TABLE_INFO) == sizeof(BrSheetTableInfo))

#define MEMO_AUTHOR_BUFFER_LENGTH 256
typedef struct _tagPOMEMOCMDDATA
{
    int		cmd_type;
    int		bShow;
    int		memo_id;
    char*	szMemo;
    //	int		buf_len;
    int		x_pos;
    int		y_pos;
    char	szAuthor[MEMO_AUTHOR_BUFFER_LENGTH];//utf8
    char	szDate[MEMO_AUTHOR_BUFFER_LENGTH];
    int		parent_id;
    int		page_num; // for ppt
}MEMO_CMD_DATA, *LPMEMO_CMD_DATA;
#define IS_SAMESIZE_MEMO_CMD_DATA (sizeof(MEMO_CMD_DATA) == sizeof(BrMemoCmdData))

typedef struct _tagPOPDF_BOOKMARK_LIST_ITEM
{
    void *			item;
    int				nTitleLen;
    char*			szTitle;
    short			HasKids;
    short			BookmarkType; // 0 Pagemove, 3 URL move, 9 Unknown
    int				nURLLen;
    char*			szURL;
    float*			color;      // default black 0~1까지 RGB 배열
    int				font_style; // (0 Normal, 1 Bold, 2 Itelic, 3 Bold & Itelic)
    int				nPageNum;
    int				left;
    int				top;
}PDF_BOOKMARK_LIST_ITEM, *LPPDF_BOOKMARK_LIST_ITEM; // BoraPDFTOCListItem, *LPBoraPdfTOCListItem;
#define IS_SAMESIZE_PDF_BOOKMARK_LIST_ITEM (sizeof(PDF_BOOKMARK_LIST_ITEM) == sizeof(BoraPDFTOCListItem))

typedef struct _tagPOSHEET_CELL_INFO
{
    PORANGE					tRowHeader;
    PORANGE					tColumnHeader;
    int							wRowHeight;
    int							wColWidth;
    
    unsigned char				bProtectedRange;
    //Active row-column info.
    PORANGE					tActiveRange;
    PORANGE					tSelectedRange;
    PORANGE					tEditTextRange;
    SHEET_FORMULA_ERROR_INFO		tFormulaErrInfo; //  [12/17/2012 sylee0335]
    
    // DataValidation Prompt [6/10/2014 chunrans4]
    char szDataValidationPromptTitle[BORA_DATA_VALIDATION_TITLE_LENGTH*3+1];
    char szDataValidationPrompt[BORA_DATA_VALIDATION_INPUTMESSAGE_LENGTH*3+1];
    
}SHEET_CELL_INFO, *LPSHEET_CELL_INFO;
#define IS_SAMESIZE_SHEET_CELL_INFO (sizeof(SHEET_CELL_INFO) == sizeof(SHEET_CELL_INFO))

typedef struct _tagPOSHEET_FORMAT
{
    unsigned short		nType;
    short				nFormat;
    unsigned short		nDecimalPlaces;
    unsigned char		bSeparate;
    unsigned short		nCurrency;
    unsigned short		nNegative;
    unsigned short		nAccounting;
    unsigned short		nDate;
    unsigned short		nTime;
    unsigned short		nFraction;
    unsigned short		nEtc;
    unsigned short		nLanguage;
    unsigned short		nUserCustom;
    unsigned short		nDateTerm;
    char				szFormatCode[BORA_MEMOTEXT_LENGTH];
    int					bUndo;
}SHEET_FORMAT, *LPSHEET_FORMAT;
#define IS_SAMESIZE_SHEET_FORMAT (sizeof(SHEET_FORMAT) == sizeof(BrGuiSheetFormatEvent))

typedef struct _tagPOSHEET_CELL_STYLE_INFO
{
    unsigned short nType;
#ifndef SUPPORT_SHEET_CELL_STYLE
    int nCellStyle;
#else
    int		nIndex;
    int		nBuiltinId;
    char	szCellstyleName[BORA_DEFAULT_LENGTH];
    int 	nXfId;
    bool	bBuiltIn;
    bool	bCustomBuiltIn;
    bool	bHidden;
    int		nILevel;
    int		nCategory;
#endif
}SHEET_CELL_STYLE_INFO, *LPSHEET_CELL_STYLE_INFO;
#define IS_SAMESIZE_SHEET_CELL_STYLE_INFO (sizeof(SHEET_CELL_STYLE_INFO) == sizeof(BrSheetCellStyleInfo))

typedef struct _tagPOSHEET_BORDER_INFO
{
    unsigned short	nType;
    int			nBorderMask;
    short			eBorderLeftStyle;
    short			eBorderTopStyle;
    short			eBorderRightStyle;
    short			eBorderBottomStyle;
    short			eBorderHorizontalStyle;
    short			eBorderVerticalStyle;
    short			eBorderDiagonalStyle;
    COLOR_INFO		nBorderLeftColor;
    COLOR_INFO		nBorderTopColor;
    COLOR_INFO		nBorderRightColor;
    COLOR_INFO		nBorderBottomColor;
    COLOR_INFO		nBorderHorizontalColor;
    COLOR_INFO		nBorderVerticalColor;
    COLOR_INFO		nBorderDiagonalColor;
    bool			bBorderHorizantalEnabled;
    bool			bBorderVerticalEnabled;
    bool			bUndo;
} SHEET_BORDER_INFO, *LPSHEET_BORDER_INFO;
#define IS_SAMESIZE_SHEET_BORDER_INFO (sizeof(SHEET_BORDER_INFO) == sizeof(BrGuiSheetBorderEvent))

typedef struct _tagPOMediaInfo{
    union {
        int				nMediaFlag;
        struct {
            int			Rewind				:1;
            int			Loop				:1;
            int			Mute				:1;
            int			FullScreen			:1;
            int			AutoStartPlay		:1;
            int			HideWhileNotPlaying	:1;
            int			HideDuringShow		:1;
            int			BackgroundAudioPlay	:1;
            int			PlayAcrossSlides	:1;
        }option;
    }MediaFlag;
    
    int nTrimStartTime;
    int nTrimEndTime;
    int nVolume;
}MEDIA_INFO,*LPMEDIA_INFO;
#define IS_SAMESIZE_MEDIA_INFO (sizeof(MEDIA_INFO) == sizeof(BrGuiMediaInfoEvent))

typedef struct _tagPOBWP_OP_INFO
{
    int					nCaretMode;
    //	unsigned char		bCutCopy;
    //	unsigned char		bPaste;
    int				nStatusOP;
   	int				nStatusOPEx; // nStatusOP (Edit Status) bit 부족으로 extend 추가
    //	unsigned char		bSelectedLargeData;
    int					nObjectType;
    //	BrBWPGrapAttrInfo	nObjectInfo; delete at 2011-10-26 by hunius
    //	unsigned char		bHasNativeClipboardData;
    int					nMemoID;
}BWP_OP_INFO, *LPBWP_OP_INFO;
#define IS_SAMESIZE_BWP_OP_INFO (sizeof(BWP_OP_INFO) == sizeof(BrBWPOpInfo))

typedef struct _tagPO_HEADER_FOOTER_EDIT
{
    int							nTargetPageNum;//If nTargetPageNume==0, engine use current page.
    
    HeaderFooterType		eFrameHeaderFooterType;
    HeaderFooterAction      eFrameHeaderFooterAction;
    bool						bCreateMode;			// HWPø°º≠ ∏∏µÈ±‚ ∂«¥¬ ∆Ì¡˝ ø©∫Œ
}HEADER_FOOTER_EDIT, *LPHEADER_FOOTER_EDIT;
#define IS_SAMESIZE_HEADER_FOOTER_EDIT (sizeof(HEADER_FOOTER_EDIT) == sizeof(BrSectionFrameHeaderFooterEdit))

typedef struct _tagPO_HEADER_FOOTER_TEMPLATE_EDIT
{
    int									nTargetPageNum;//If nTargetPageNume==0, engine use current page.
    
    HeaderFooterType				eFrameHeaderFooterType;
    HeaderFooterTemplateType		eFrameHeaderFooterTemplateType;
}HEADER_FOOTER_TEMPLATE_EDIT, *LPHEADER_FOOTER_TEMPLATE_EDIT;
#define IS_SAMESIZE_HEADER_FOOTER_TEMPLATE_EDIT (sizeof(HEADER_FOOTER_TEMPLATE_EDIT) == sizeof(BrSectionFrameHeaderFooterTemplateEdit))

typedef struct _tagPO_HEADER_FOOTER_NAVIGATION
{
    int	nTargetPageNum;//If nTargetPageNume==0, engine use current page.
    bool bNext;		// 다음 헤더/푸터 이동 가능 여부
    bool bPrev;		// 이전 헤더/푸터 이동 가능 여부
    HeaderFooterNavigation	eHeaderFooterNavigation;
}HEADER_FOOTER_NAVIGATION, *LPHEADER_FOOTER_NAVIGATION;
#define IS_SAMESIZE_HEADER_FOOTER_NAVIGATION (sizeof(HEADER_FOOTER_NAVIGATION) == sizeof(BrSectionFrameHeaderFooterNavigation))

typedef struct _tagPO_HEADER_FOOTER_OPTION
{
    int		nTargetPageNum;							//If nTargetPageNume==0, engine use current page.
    
    bool	bOptionDifferentFirstPage;
    bool	bOptionDifferentOddEvenPage;
    
    bool	bHeaderDifferentFirstPage;
    bool	bFooterDifferentFirstPage;
    
    bool	bHeaderDifferentOddEvenPage;
    bool	bFooterDifferentOddEvenPage;
    
    bool	bHeaderLinkedToPreviousSection;
    bool	bFooterLinkedToPreviousSection;
    
    bool	bOptionShowDocumentText;
    bool	bOptionShowPageNumber;
    //for only getter function
    HeaderFooterType	eTargetPageHeaderType;
    HeaderFooterType	eTargetPageFooterType;
    
}HEADER_FOOTER_OPTION, *LPHEADER_FOOTER_OPTION;
#define IS_SAMESIZE_HEADER_FOOTER_OPTION (sizeof(HEADER_FOOTER_OPTION) == sizeof(BrSectionFrameHeaderFooterOption))

typedef struct _tagPO_HEADER_FOOTER_LOCATION
{
    int		nTargetPageNum;					//If nTargetPageNume==0, engine use current page.
    
    int		nHeaderPositionFromTop;			//ms word only
    int		nFooterPositionFromBottom;		//ms word only
    
    int		nHeaderMarginLeft;				//odt only
    int		nHeaderMarginRight;				//odt only
    int		nHeaderMarginBottom;			//odt only, header spacing
    
    int		nFooterMarginLeft;				//odt only
    int		nFooterMarginRight;				//odt only
    int		nFooterMarginTop;				//odt only, footer spacing
    
    int		nHeaderMinHeight;				//hwp/odt only,	hwp: header margin, odt: header height
    int		nFooterMinHeight;				//hwp/odt only, hwp: footer margin, odt: footer height
    
    bool	bHeaderDynamicSpacing;			//ODT,
    bool	bFooterDynamicSpacing;			//ODT,
}HEADER_FOOTER_LOCATION, *LPHEADER_FOOTER_LOCATION;
#define IS_SAMESIZE_HEADER_FOOTER_LOCATION (sizeof(HEADER_FOOTER_LOCATION) == sizeof(BrSectionFrameHeaderFooterLocation))

typedef struct _tagPO_HEADER_FOOTER_TEMPLATE
{
    unsigned short							nType;									//=BRGUI_SECTION_FORMAT_EVENT
    
    int										nSectionFormatSelector;					//0.Section Format Selector (BrSectionFormatSelector)
    
    HEADER_FOOTER_EDIT			stSectionFrameHeaderFooterEdit;			//1.Frame Header/Footer Edit
    HEADER_FOOTER_TEMPLATE_EDIT	stSectionFrameHeaderFooterTemplateEdit;	//2.Frame Header/Footer Template Edit
    HEADER_FOOTER_NAVIGATION	stSectionFrameHeaderFooterNavigation;	//3.Frame Header/Footer Navigation
    HEADER_FOOTER_OPTION		stSectionFrameHeaderFooterOption;		//4.Frame Header/Footer Option
    HEADER_FOOTER_LOCATION		stSectionFrameHeaderFooterLocation;		//5.Frame Header/Footer Location
    
    bool									bCancel;								//[13.04.03][MID-23427][¿Ã¡§øÏ]
}HEADER_FOOTER_TEMPLATE, *LPHEADER_FOOTER_TEMPLATE;
#define IS_SAMESIZE_HEADER_FOOTER_TEMPLATE (sizeof(HEADER_FOOTER_TEMPLATE) == sizeof(BrGuiSectionFormatEvent))

typedef struct _tagPO_HYPER_LINK_EDITOR
{
    unsigned short	nType;
    unsigned short	nRunType; // for ppt  , LINK_RUNTYPE_MOUSE_CLICK ¬¸∞Ì
    int				nSheet;
    unsigned short	nLinkType;
    unsigned short	nLinkTypeMouseOver;//over
    unsigned short	nPageNum;
    unsigned short	nPageNumMouseOver;//over
    char			szHyperText[BORA_INTERNET_MAX_URL_LENGTH];
    char			szHyperLink[BORA_INTERNET_MAX_URL_LENGTH];
    char			szHyperCell[BORA_INTERNET_MAX_URL_LENGTH];
    char			szHyperLinkMouseOver[BORA_INTERNET_MAX_URL_LENGTH];//over
    char			szHyperTooltip[BORA_INTERNET_MAX_URL_LENGTH];
    bool			bForSetPPTExcute;
}HYPER_LINK_EDITOR, *LPHYPER_LINK_EDITOR;
#define IS_SAMESIZE_HYPER_LINK_EDITOR (sizeof(HYPER_LINK_EDITOR) == sizeof(BrGuiHyperLinkEditorEvent))

typedef struct _tagPOPAGE_DISPLAY_INFO
{
    int nPageNum;
    int nPageWidth;
    int nPageHeight;
    int nScreenPagePosX;
    int nScreenPagePosY;
    int nPageDisplayPosX;
    int nPageDisplayPosY;
    int nPageDisplayWidth;
    int nPageDisplayHeight;
    
    //[2012.12.30][TID:7609][김회영]Section Header/Footer 고도화 : 현재 보여지는 Page 정보
    int	nPageHeaderBoundaryHeight;		//Logical Distance from page top to header guideline
    int nPageFooterBoundaryHeight;		//Logical Distance from page bottom to footer guideline
    
}PAGE_DISPLAY_INFO, *LPPAGE_DISPLAY_INFO;
#define IS_SAMESIZE_PAGE_DISPLAY_INFO (sizeof(PAGE_DISPLAY_INFO) == sizeof(BrPageDisplayInfo))

typedef struct _tagPOSECTION_INFO
{
    int					nTargetPageNum;//If nTargetPageNume==0, engine use current page.
    
    PageLayoutScope     ePageLayoutScope;
    
    int					nSectionNum;
    int					nTotalSectionNum;
    
    bool				bSectionFirstPage;
    bool				bSectionOddPage;
    bool				bSectionEvenPage;
    
    int					nPageWidth;
    int					nPageHeight;
    PageOrientation     ePageOrientation;
    PageTextDirection	ePageTextDirection;
    
    int					nPageColumn;
    
    int					nPageMarginRight;
    int					nPageMarginLeft;
    int					nPageMarginTop;
    int					nPageMarginBottom;
    int					nPageMarginGutter;		//[2013.05.20][TID:15372][윤성준] 제본용 여백 편집 작업
    
    unsigned int		nPageColor;
    
    bool				bPageHasHeader;
    
    bool				bPageHasFooter;
    
}SECTION_INFO, *LPSECTION_INFO;
#define IS_SAMESIZE_SECTION_INFO (sizeof(SECTION_INFO) == sizeof(BrSectionPageLayout))

typedef struct _tagPOWATERMARKINFO
{
    unsigned short		nType;
    int                 nSelector;
    
    // Picture Watermark (±◊∏≤ øˆ≈Õ∏∂≈©)
    char				szFilePath[BORA_FULLPATH_LENGTH];
    void				*pixels;
    IMAGE_INFO          pixelInfo;
    
    int					nScale;
    bool				bWashout;
    
    // Text Watermark (≈ÿΩ∫∆Æ øˆ≈Õ∏∂≈©)
    char				szText[BORA_WATERMARKTEXT_LENGTH];	//≈ÿΩ∫∆Æ
    char				szFontName[BORA_FONTNAME_LENGTH];	//±€≤√
    int					nTextSize;							//≈©±‚
    COLOR_INFO			nColor;								//ªˆ			//ZPD-5496
    bool				bSemitransparent;					//π›≈ı∏Ì
    bool				bLayoutHorizontal;					//∑π¿Ãæ∆øÙ - ∞°∑Œ
} WATERMARK_INFO, *LPWATERMARK_INFO;
#define IS_SAMESIZE_WATERMARK_INFO (sizeof(WATERMARK_INFO) == sizeof(BrGuiWatermarkEvent))

typedef struct _tagPOBORDERLINEINFO {
    bool						bExist;
    int                         nLineStyle;
    int                         nWidthPrefix;	// (preset)
    int                         nArtStyle;		// Art border style
    int							nArtWidth;		// Art border width (1pt ~ 31pt)
    int							nSpace;			// Margin (pt)
    unsigned int				nColor;
    bool						bIsColorTheme;   //
} BORDER_LINE_INFO;
#define IS_SAMESIZE_BORDER_LINE_INFO (sizeof(BORDER_LINE_INFO) == sizeof(BrBorderLine))

typedef struct _tagPOCELLLINEINFO {
    bool                        bExist;
    bool						bApply;			//set 에서 update
    int                         nLineStyle;
    int                         nWidthPrefix;    // (preset)
    COLOR_INFO                  nColorInfo;
} CELL_LINE_INFO; //bmvinterface.h : BrCellLine
#define IS_SAMESIZE_CELL_LINE_INFO (sizeof(CELL_LINE_INFO) == sizeof(BrCellLine))

typedef struct _tagPOWORDBORDERINFO
{
    unsigned short			nType;
    
    int                     nSelector;					// Text, Paragraph, Page Border
    
    int                     nBorderType;				// None, Box Border, Shadow Border, 3D Border, User Custom Border
    
    BORDER_LINE_INFO		stLeftBorder;
    BORDER_LINE_INFO		stTopBorder;
    BORDER_LINE_INFO		stRightBorder;
    BORDER_LINE_INFO		stBottomBorder;
    BORDER_LINE_INFO		stBetweenBorder;
    
    //for Cell and Table
    int                     nCellLineType; //none, box, all, grid, custom
    CELL_LINE_INFO          stLeftCellLine; //for cell or table
    CELL_LINE_INFO          stTopCellLine;//for cell or table
    CELL_LINE_INFO          stRightCellLine;//for cell or table
    CELL_LINE_INFO          stBottomCellLine;//for cell or table
    CELL_LINE_INFO          stInsideHCellLine;//for cell or table
    CELL_LINE_INFO          stInsideVCellLine;//for cell or table
    CELL_LINE_INFO          stTl2brCellLine;//for cell or table
    CELL_LINE_INFO          stTr2blCellLine;//for cell or table
    
    //Cell and Table border option
    int                     nCellSelectedType;
    bool                   bAllTableMarked;
    
    //Page border option
    int                     nPageBorderApplyTo;			// Display Options
    int                     nOffsetFrom;				// Positioning Base
    bool					bBehindText;				// Z-Order
    bool					bAlignBordersAndEdge;		// Align Paragraph and Table Borders with Page Border
    bool					bDoNotSurroundFooter;		// Excludes Footer
    bool					bDoNotSurroundHeader;		// Excludes Header
    
    //20hoon
    //True ¿Ã∏È, ƒ…∑µ¿Ã ¥‹æÓæ»ø° ¿÷¿ª∂ß, ¥‹æÓ µ⁄æÓ ¿÷¥¬ Ω∫∆‰¿ÃΩ∫±Ó¡ˆ ∆˜«‘«œø©, ≈ÿΩ∫∆Æ ∫∏¥ı ¿˚øÎ
    //¥‹, Ω∫∆‰¿ÃΩ∫ªÁ¿Ãø° ¿÷∞≈≥™, Ω∫∆‰¿ÃΩ∫ µ⁄ø° ¿÷¿∏∏È, ≈ÿΩ∫∆Æ ∫∏¥ı º≥¡§ ±‚¥… ¿€µø«œ¡ˆ æ ¿Ω
    char					bContainsBackwardSpacesForTextBorder;
} WORD_BORDER_INFO, *LPWORD_BORDER_INFO;
#define IS_SAMESIZE_WORD_BORDER_INFO (sizeof(WORD_BORDER_INFO) == sizeof(BrGuiWordBorderEvent))

typedef struct _tagPOPRINT_INFO
{
    unsigned short	nType;
    int				nPaperSize;
    int				nPrintRes;
    int				nStartPage;
    int				nEndPage;
#ifdef USE_UNICODE_SYSTEM
    unsigned short	szFilePath[BORA_FULLPATH_LENGTH];
#else
    char 			szFilePath[BORA_FULLPATH_LENGTH];
#endif
    int				nPrintOptions;	// PRINT_XLS_MODE | PRINT_OPTION_MODE
    int				nPrintAreaMode;
    char			szPageBoundary[BORA_DEFAULT_LENGTH];
    char			szOutputPath[BORA_FULLPATH_LENGTH];
    char			szOutputFilename[BORA_FULLPATH_LENGTH];
    bool			bWithDraw;
    bool			bIsPreview;
    bool			bIsTotalPages;
    int				nWidth;
    int				nHeight;
    int				nLeftPrintMargin;
    int				nTopPrintMargin;
    int				nRightPrintMargin;
    int				nBottomPrintMargin;
    int				nPPTHandoutType; //1,2,3,10,11,40,41,60,61,90,91 ( 41은 4슬라이드세로정렬, 10개요보기, 11 노트포함 )
}PRINT_INFO, *LPPRINT_INFO;
#define IS_SAMESIZE_PRINT_INFO (sizeof(PRINT_INFO) == sizeof(BrGuiPrintEvent))

typedef struct _tagPOSHEETFINDREPLACEINFO
{
    unsigned short		nType;
    char 				pStrFind[BORA_FINDSTR_LENGTH];
    char				pStrReplace[BORA_FINDSTR_LENGTH];
    SHEET_FORMAT_INFO	tFormatFind;
    SHEET_FORMAT_INFO	tFormatReplace;
    int 				nFlag;	// Use an enum BrSheetFindReplace
}SHEET_REPLACE_FORMAT_INFO, *LPBSHEET_REPLACE_FORMAT_INFO;
#define IS_SAMESIZE_SHEET_REPLACE_FORMAT_INFO (sizeof(SHEET_REPLACE_FORMAT_INFO) == sizeof(BrGuiSheetFindReplaceEvent))

typedef struct _tagPAGECOLORINFO
{
    unsigned short	nType;
    SHAPE_FILL		stFill;
    SHAPE_PICTURE_CORRECTION		stFillPicCorrection;
    bool			bApplyToAll;
} PAGE_COLOR_INFO, *LPPAGECOLORINFO;
#define IS_SAMESIZE_PAGE_COLOR_INFO (sizeof(PAGE_COLOR_INFO) == sizeof(BrGuiPageColorEvent))

typedef struct _tagPOSHEET_INFO
{
    char			szSheetName[BORA_SHEETNAME_LENGTH*3 + 1];
    unsigned char	bProtectSheet;
    unsigned char	bFreeze;
    unsigned char	bPageBreak;
    unsigned char   bArabic;
    unsigned char	bShowHeader;
    unsigned char	bShowGrid;
}SHEET_INFO, *LPSHEET_INFO;
#define IS_SAMESIZE_SHEET_INFO (sizeof(SHEET_INFO) == sizeof(BoraSheetInfo))

typedef struct _tagUISUMMARY_DATA
{
    char szTitle[BORA_DEFAULT_LENGTH+1];
    char szAuthor[BORA_DEFAULT_LENGTH+1];
    char szModifiedBy[BORA_DEFAULT_LENGTH+1];
    int nPage;                  // only use doc
    int nWords;                 // only use doc
    bool bSavePreview;
}SUMMARY_DATA, *LPSUMMARY_DATA; // engine에 없는 구조체. ui에서만 사용

typedef struct _tagPOWORD_COUNT_STATISTICS
{
    int nPageCnt;
    int nWordCnt;
    int nCharCnt;
    int nCharWithoutSpaceCnt;
    int nParaCnt;
    int nLineCnt;
    int nBeforeUndo;
    int nFullwidthWordCnt;
    int nHalfwidthWordCnt;
}WORD_COUNT_STATISTICS, *LPWORD_COUNT_STATISTICS;
#define IS_SAMESIZE_WORD_COUNT_STATISTICS (sizeof(WORD_COUNT_STATISTICS) == sizeof(BrWordCountStatistics))

typedef struct _tagPOWORD_CHANGES_TRACK_MODE
{
    bool bTrackEnabled;
    int  nReviewMode;
}WORD_CHANGES_TRACK_MODE, *LPWORD_CHANGES_TRACK_MODE;   // engine에 없는 구조체. ui에서만 사용

typedef struct _tagPOWORD_CHANGES_DATA
{
    char		szChangesContent[BORA_LENGTH_2048];
    char		szAuthor[BORA_DEFAULT_LENGTH];
    int			nChangesType;
    int			nYear;
    int			nMonth;
    int			nDay;
    int			nHour;
    int			nMin;
}WORD_CHANGES_DATA, *LPWORD_CHANGES_DATA;
#define IS_SAMESIZE_WORD_CHANGES_DATA (sizeof(WORD_CHANGES_DATA) == sizeof(BrChangesInfo))

typedef struct _tagPOWORD_REVIEWER_INFO
{
    char        szReviewerName[BORA_LENGTH_2048];
    bool        bShow;
}WORD_REVIEWER_INFO, *LPWORD_REVIEWER_INFO;             // engine에 없는 구조체. ui에서만 사용

typedef struct _tagPOSLIDE_ANIMATION_INFO
{
    unsigned short	nType;
    int				nPageNum;
    int				nIndex; //Add(0)
    int				nMoveIndex;
    SlideShowAnimationType nAnimationType;
    SlideAnimationDirectionType nDirectionType;
    SlideAnimationShapesType nShapesType;
    SlideAnimationSpokesType nSpokesType;
    SlideAnimationVanishingPointType nVanishingPointType;
    SlideAnimationPresetType nPresetType;
    SlideAnimationTriggerType nTriggerType;
    int				nDuration;
    int				nDelay;
    int				nOrder;
    SlideAnimationFrameType nFrameType;
    int				nFrameID;
    int				nTransparency;
    COLOR_INFO		nColorinfo;
    int				nScaleX;
    int				nScaleY;
    int				nAngle;
}SLIDE_ANIMATION_INFO,*LPSLIDE_ANIMATION_INFO;
#define IS_SAMESIZE_SLIDE_ANIMATION_INFO (sizeof(SLIDE_ANIMATION_INFO) == sizeof(BrGuiPPTSlideAnimationEvent))

typedef struct _tagPPT_ANIMATION_INFO
{
    unsigned short	nType;
    int				nPageNum;
    int				nIndex; //Add(0)
    int				nMoveIndex;
    AnimationPresetClassType	nPresetClass;
    int				nPresetID;
    int				nSubType;
    int				nDuration;
    int				nDelay;
    SlideAnimationTimingType nTimingType;
    int				nOrder;
    SlideAnimationFrameType nFrameType;
    int				nFrameID;
    int				nTransparency;
    COLOR_INFO		nColorinfo;
    int				nScaleX;
    int				nScaleY;
    int				nAngle;
    int				nTextAnimationStart;
    int				nTextAnimationEnd;
    SlidePathAnimationEditModeType ePathEditMode;
    SlideTextAnimationType eTextType;
    int			bPathAnimationReverse;
    bool		bAllApply;
    
}PPT_ANIMATION_INFO,*LPPPT_ANIMATION_INFO;
#define IS_SAMESIZE_PPT_ANIMATION_INFO (sizeof(PPT_ANIMATION_INFO) == sizeof(BrGuiPPTAnimationEvent))

typedef struct _tagPOCFVO_COLORSCALE_CUSTOM
{
    SheetCondfmtValueObjectType			 nCfvoMinType;
    SheetCondfmtValueObjectType			 nCfvoMidType;
    SheetCondfmtValueObjectType			 nCfvoMaxType;
    int			 nMinColor;
    int			 nMidColor;
    int			 nMaxColor;
    char		 szCFRuleValueMin[BORA_DEFAULT_LENGTH];
    char		 szCFRuleValueMid[BORA_DEFAULT_LENGTH];
    char		 szCFRuleValueMax[BORA_DEFAULT_LENGTH];
}CFVO_COLORSCALE_CUSTOM, *LPCFVO_COLORSCALE_CUSTOM; //BrCfvoColorscaleCustom, *LPBrCfvoColorscaleCustom;
#define IS_SAMESIZE_CFVO_COLORSCALE_CUSTOM (sizeof(CFVO_COLORSCALE_CUSTOM) == sizeof(BrCfvoColorscaleCustom))

// databar custom
typedef struct _tagPOCFVO_DATABAR_CUSTOM
{
    SheetCondfmtValueObjectType			 nCfvoMinType;
    SheetCondfmtValueObjectType			 nCfvoMaxType;
    int  		 nFillColor;
    int  		 nBorderColor;
    bool 		 bGradiant;
    bool 		 bDrawBorder;
    bool 		 bRTL;
    bool 		 bShowValue;
    int			 nNegativeFillColor;
    int  		 nNegativeBorderColor;
    int			 nAxisType;
    int  		 nAxisColor;
    bool 		 bSameAsPositiveFill;
    bool 		 bSameAsPositiveBorder;
    char		 szCFRuleValueMin[BORA_DEFAULT_LENGTH];
    char		 szCFRuleValueMax[BORA_DEFAULT_LENGTH];
}CFVO_DATABAR_CUSTOM, *LPCFVO_DATABAR_CUSTOM; //BrCfvoDatabarCustom, *LPBrCfvoDatabarCustom;
#define IS_SAMESIZE_CFVO_DATABAR_CUSTOM (sizeof(CFVO_DATABAR_CUSTOM) == sizeof(BrCfvoDatabarCustom))

// iconset custom
typedef struct _tagPOCFVO_ICONSET_CUSTOM
{
    SheetCondfmtIconSetType				 nIconType;
    SheetCondfmtValueObjectType			 nCfvoType1;
    SheetCondfmtValueObjectType			 nCfvoType2;
    SheetCondfmtValueObjectType			 nCfvoType3;
    SheetCondfmtValueObjectType			 nCfvoType4;
    bool					 bIconsetGte1;		// iconset
    bool					 bIconsetGte2;
    bool					 bIconsetGte3;
    bool					 bIconsetGte4;
    bool					 bIconsetReverse;
    bool 					 bShowValue;
    char					 szCFRuleValue1[BORA_DEFAULT_LENGTH];
    char					 szCFRuleValue2[BORA_DEFAULT_LENGTH];
    char					 szCFRuleValue3[BORA_DEFAULT_LENGTH];
    char					 szCFRuleValue4[BORA_DEFAULT_LENGTH];
}CFVO_ICONSET_CUSTOM, *LPCFVO_ICONSET_CUSTOM;   //BrCfvoIconsetCustom, *LPBrCfvoIconsetCustom;
#define IS_SAMESIZE_CFVO_ICONSET_CUSTOM (sizeof(CFVO_ICONSET_CUSTOM) == sizeof(BrCfvoIconsetCustom))

typedef struct _tagPOCONDFMT_CELL_VALUE_BASE
{
    CFVO_COLORSCALE_CUSTOM	colorScaleCustomAttr;
    CFVO_DATABAR_CUSTOM		databarCustomAttr;
    CFVO_ICONSET_CUSTOM		iconsetCustomAttr;
}CONDFMT_CELL_VALUE_BASE, *LPCONDFMT_CELL_VALUE_BASE; // BrCondfmtCellValueBase, *LPBrCondfmtCellValueBase;
#define IS_SAMESIZE_CONDFMT_CELL_VALUE_BASE (sizeof(CONDFMT_CELL_VALUE_BASE) == sizeof(BrCondfmtCellValueBase))

// 다음을 포함하는
typedef struct _tagPOCONDFMT_CONTAIN_FORMAT_OPTION
{
    SheetCondfmtRuleOperator    nOperatorType;
    int                         nTextColor;
    int                         nFillColor;
    int                         nBorderColor;
    char                        szCFRuleFormula1[BORA_DEFAULT_LENGTH];
    char                        szCFRuleFormula2[BORA_DEFAULT_LENGTH];
    char                        szCFRuleTimePeriod[BORA_DEFAULT_LENGTH];
}CONDFMT_CONTAIN_FORMAT_OPTION, *LPCONDFMT_CONTAIN_FORMAT_OPTION; //BrCondfmtContainFormatOption, *LPCondfmtContainFormatOption;
#define IS_SAMESIZE_CONDFMT_CONTAIN_FORMAT_OPTION (sizeof(CONDFMT_CONTAIN_FORMAT_OPTION) == sizeof(BrCondfmtContainFormatOption))

// 상위 또는 하위
typedef struct _tagPOCONDFMT_TOP10
{
    bool					bPercent;
    int						nRank;
    bool					bBottom;
    int						nTextColor;
    int						nFillColor;
    int						nBorderColor;
}CONDFMT_TOP10, *LPCONDFMT_TOP10;   //BrCondfmtTop10, *LPCondfmtTop10;
#define IS_SAMESIZE_CONDFMT_TOP10 (sizeof(CONDFMT_TOP10) == sizeof(BrCondfmtTop10))

// 평균보다 크거나 작은
typedef struct _tagPOCONDFMT_ABOVE_AVERAGE
{
    bool	bAboveAverage;
    bool	bEqualAverage;
    int		nStdDev;
    int						nTextColor;
    int						nFillColor;
    int						nBorderColor;
}CONDFMT_ABOVE_AVERAGE, *LPCONDFMT_ABOVE_AVERAGE;   //BrCondfmtAboveAverage, *LPCondfmtAboveAverage;
#define IS_SAMESIZE_CONDFMT_ABOVE_AVERAGE (sizeof(CONDFMT_ABOVE_AVERAGE) == sizeof(BrCondfmtAboveAverage))

// 고유 또는 중복값만 서식 지정
typedef struct _tagPOCONDFMT_DUP_UNIQUE_VAL_FORMAT
{
    int						nTextColor;
    int						nFillColor;
    int						nBorderColor;
}CONDFMT_DUP_UNIQUE_VAL_FORMAT, *LPCONDFMT_DUP_UNIQUE_VAL_FORMAT;   //BrCondfmtDupUniqueValFormat, *LPBrCondfmtDupUniqueValFormat;
#define IS_SAMESIZE_CONDFMT_DUP_UNIQUE_VAL_FORMAT (sizeof(CONDFMT_DUP_UNIQUE_VAL_FORMAT) == sizeof(BrCondfmtDupUniqueValFormat))

// 수식을 사용하여 서식을 지정할 셀 결정
typedef struct _tagPOCONDFMT_EXPRESSION
{
    int			 nTextColor;
    int			 nFillColor;
    int			 nBorderColor;
    char		 szCFRuleExpression[BORA_DEFAULT_LENGTH];
}CONDFMT_EXPRESSION, *LPCONDFMT_EXPRESSION;     //BrCondfmtExpression, *LPCondfmtExpression;
#define IS_SAMESIZE_CONDFMT_EXPRESSION (sizeof(CONDFMT_EXPRESSION) == sizeof(BrCondfmtExpression))

typedef struct _tagPOSHEET_EDIT_C_F
{
    PORANGE                                 tCFtargetRuleRange;
    SheetCondfmtInsertRuleType				eRuleType;
    bool									bStopIfTrue;
    char									pRangeText[BORA_DEFAULT_LENGTH];
    /* Custom Property */
    CONDFMT_CELL_VALUE_BASE                 cellValueBaseProperty;
    CONDFMT_CONTAIN_FORMAT_OPTION           containFormatOptionProperty;
    CONDFMT_TOP10                           top10Property;
    CONDFMT_ABOVE_AVERAGE                   aboveAverageProperty;
    CONDFMT_DUP_UNIQUE_VAL_FORMAT           dupUniqueProperty;
    CONDFMT_EXPRESSION                      expressionProperty;
}SHEET_EDIT_C_F, *LPSHEET_EDIT_C_F;
#define IS_SAMESIZE_SHEET_EDIT_C_F (sizeof(SHEET_EDIT_C_F) == sizeof(BrSheetEditCFEvent))

typedef struct _tagPOSHEET_EDIT_CFS_INFO
{
    unsigned short              nType;
    unsigned short              nCfListSize;
    float                       nAverageValue;
    unsigned int                nDeleteRuleIndex;
    bool                        bDisplayRuleInfoByWholeSheet;
    SheetCondfmtEditOption		nEditOption;
    SHEET_EDIT_C_F*             pCFList;
}SHEET_EDIT_CFS_INFO, *LPSHEET_EDIT_CFS_INFO;
#define IS_SAMESIZE_SHEET_EDIT_CFS_INFO (sizeof(SHEET_EDIT_CFS_INFO) == sizeof(BrGuiSheetEditCFEventInfo))

typedef struct _tagPOPDF_ANNOT_ITEM
{
    int			nPageNum;
    int			nIndex;
    int			nType;
    POFRect     rect;
    char*		pText;       //[BORA_LENGTH_2048];
    void*		pAnnot;
    int			style;
    int			color;
    int			fillColor;
    float		opacity;
    char*		szContents;         //[BORA_LENGTH_2048];
    char*		szAuthor;           //[BORA_FULLPATH_LENGTH];
    char*		szSubject;          //[BORA_FULLPATH_LENGTH];
    int			nPosX;
    int			nPosY;
    int         time;
    float		nThickness;
    int			nSubType;
    int			nLineStyle;
}PDF_ANNOT_ITEM, *LPPDF_ANNOT_ITEM; //BoraAnnotItem, *LPBoraAnnotItem;
#define IS_SAMESIZE_PDF_ANNOT_ITEM (sizeof(PDF_ANNOT_ITEM) == sizeof(BoraAnnotItem))

typedef struct _tagPOPDF_SELECT_ANNOTS_RESULT
{
    int						 left;
    int						 top;
    int						 right;
    int						 bottom;
    
    char					 bSameThickness;
    float					 nThickness;
    char					 bSameColor;
    int						 color;
    char					 bSameFillColor;
    int						 fillcolor;
    char					 bSameOpacity;
    float					 opacity;
}PDF_SELECT_ANNOTS_RESULT, *LPPDF_SELECT_ANNOTS_RESULT;  //BoraPDFSelectAnnotsResult, *LPBoraPDFSelectAnnotsResult;

//  [11/18/2013 sylee0335] 시트 보호 옵션
typedef struct _tagPOSHEET_PROTECT_OPTION
{
    unsigned short	nType;
    bool			bSheet;
    bool			bSelectLockedCells;
    bool			bSelectUnlockedCells;
    bool			bFormatCells;
    bool			bFormatColumns;
    bool			bFormatRows;
    bool			bInsertColumns;
    bool			bInsertRows;
    bool			bInsertHyperlinks;
    bool			bDeleteColumns;
    bool			bDeleteRows;
    bool			bSort;
    bool			bAutoFilter;
    bool			bPivotTables;
    bool			bObjects;
    bool			bScenario;
    char			szPassword[BORA_PASSWORD_LENGTH];
}SHEET_PROTECT_OPTION, *LPSHEET_PROTECT_OPTION; //BrGuiSheetProtectOption, *LPBrGuiSheetProtectOption;
#define IS_SAMESIZE_SHEET_PROTECT_OPTION (sizeof(SHEET_PROTECT_OPTION) == sizeof(BrGuiSheetProtectOption))

typedef struct _tagPOWORKBOOK_PROTECTION
{
    unsigned short	nType;
    bool			bStructureLock;
    bool			bWindowLock;
    char			szPassword[BORA_PASSWORD_LENGTH];
}WORKBOOK_PROTECTION, *LPWORKBOOK_PROTECTION;   //BrGuiWorkbookProtection, *LPBrGuiWorkbookProtection;
#define IS_SAMESIZE_WORKBOOK_PROTECTION (sizeof(WORKBOOK_PROTECTION) == sizeof(BrGuiWorkbookProtection))

typedef struct _tagPOSLIDE_SHOW_SETTING
{
    int	nType;
    int nStartPage;
    int nEndpage;
    bool nSlideshowTiming;
    bool nSlideshowAnimationWith;
    bool nSlideshowLoop;
    SlideShowType nSlideShowType;
    COLOR_INFO		nPenColor;
    COLOR_INFO		nLaserColor;
}SLIDE_SHOW_SETTING, *LPSLIDE_SHOW_SETTING; // BrGuiPPTSlideShowSetting,*LPBrGuiPPTSlideShowSetting;
#define IS_SAMESIZE_SLIDE_SHOW_SETTING (sizeof(SLIDE_SHOW_SETTING) == sizeof(BrGuiPPTSlideShowSetting))

// sheet autofilter
typedef struct _tagAUTOFILTERCONTEXT {
    PORANGE tFilterRange;
    PORANGE tIndexRange;
    PORANGE tDataRange;
    PORANGE tStartRange;
}AUFOFILTER_CONTEXT;

typedef struct _tagAUTOFILTERMENUINFO {
    
    int          nHandleId;                   // Handle ID 정보 ( Autofilter / Table 구분 )
    int          nFocusIndex;                // 선택한 Menu의 Index 값
    int          nItemCount;                 // Autofilter Menu에 표시할 전체 Item 개수
    char**       aItemTitle;// = null;          // Item Title
    bool*        aIsFixedInfo;// = null;                  // 고정 Item 여부 정보
    bool*        aIsCheckedInfo;// = null;              // Check 여부 정보
    POIRect      aCellPositionInfo;// = null; // 눌려진 Filter Button이 있는 Cell의 위치 정보 ( pixel 단위 )
}AUTOFILTER_MENU_INFO;

typedef struct _tagPOSORTING_INFO
{
    unsigned short		nType;
    int					nHandle;
    unsigned char		bCaseSensitive;
    unsigned char		bColumnSort;
    int*				pKeys;
    int					nKeyCount;
#ifdef SHEET_OFFICE_70
    int					nHeaderCellStatus;		//[20140509][jdjang][#25857] 내 데이터 머리글 표시 기능
#endif //SHEET_OFFICE_70
}SORTING_INFO, *LPSORTING_INFO; //BrGuiSheetSortExtendEvent, *LPBrGuiSheetSortExtendEvent;
#define IS_SAMESIZE_SORTING_INFO (sizeof(SORTING_INFO) == sizeof(BrGuiSheetSortExtendEvent))

typedef struct _tagPOSPELLCHECK_INFO
{
    unsigned short   nType;
    unsigned short   *pWordStr;                  // wrong string (Unicode)
    int                  nLen;                         // string length
    unsigned char    bClass;                        // frame class
    int                  nPageNum;                  // page number
    int                  nObjectID;                   // frame id number
    int                  nNoteNum;                  // note number
    int                  nParaIndex;                  // paragraph index
    int                  nColIndex;                   // column index
    int                  bDraw;                       // flag for drawing callback
}SPELLCHECK_INFO, *LPSPELLCHECK_INFO;   // BrGuiBWPMarkWrongSpellEvent, *LPBrGuiBWPMarkWrongSpellEvent;
#define IS_SAMESIZE_SPELLCHECK_INFO (sizeof(SPELLCHECK_INFO) == sizeof(BrGuiBWPMarkWrongSpellEvent))
typedef struct _tagSHEET_FORMULA_RANGE_LIST
{
    int nCount;
    POIRect* arrRect;
}SHEET_FORMULA_RANGE_LIST, *LPSHEET_FORMULA_RANGE_LIST; // engine에 없는 구조체. ui에서만 사용

typedef struct _tagPOWORDSHADING_INFO
{
    unsigned short nType;
    unsigned int  nFillColor;
    char cPatternStyle;
    unsigned int nPatternColor;
    char cColorThemeFlag; //7th Bit-FillColor , 8th Bit-PattenrColor
    char cApplyTo; //0x01:text , 0x02:paragraph
    
    //20hoon
    //True 이면, 케럿이 단어안에 있을때, 단어 뒤어 있는 스페이스까지 포함하여, 텍스트 보더 적용
    //단, 스페이스사이에 있거나, 스페이스 뒤에 있으면, 텍스트 보더 설정 기능 작동하지 않음
    char bContainsBackwardSpacesForTextShading;
}POWORDSHADING_INFO, *LPPOWORDSHADING_INFO;
#define IS_SAMESIZE_POWORDSHADING_INFO (sizeof(POWORDSHADING_INFO) == sizeof(BrGuiSetShadingEvent))

#endif //PO6_framework_EV_h
