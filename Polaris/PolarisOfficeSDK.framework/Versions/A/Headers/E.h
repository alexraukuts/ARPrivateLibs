//
//  E.h
//  PO6_framework
//
//  Created by Chanyong Lee on 2014. 9. 24..
//  Copyright (c) 2014년 Chanyong Lee. All rights reserved.
//
// Engine과 UI에서 사용되는 enum

#ifndef PO6_framework_E_h
#define PO6_framework_E_h

typedef enum OpenResult_Type
{
    OpenResult_InternalError = (0x0000),// 0[0x0] error
    OpenResult_MemoryError = (-0x0001),// 0[0x0] Malloc fail
    OpenResult_UnsupportedVersion = (-0x0002),// 0[0x0] Unsupported version
    OpenResult_UnsupportedType = (-0x0003),// 0[0x0] Unsupported file type, invalid name
    OpenResult_CorruptFile = (-0x0004),// 0[0x0] Corrupted file
    OpenResult_PasswordDoc = (-0x0005),// 0[0x0] Protected file
    OpenResult_LongTimeError = (-0x0006),// 0[0x0] loading time is very long so it ends
    OpenResult_DocEditProtect = (-0x0007),// 0[0x0] Document Edit Protect
    OpenResult_FontInitialError = (-0x0008),// 0[0x0] font engine error
    OpenResult_MemoryInitialError = (-0x0009),// 0[0x0] memory manager error
    OpenResult_FileCreateError = (-0x0010),// 0[0x0] Couldn't create data file =(memo, screen capture, print)
    OpenResult_FileWriteError = (-0x0011),// 0[0x0] Write error =(세부 에러는 UI에서 처리)
    OpenResult_FileStorageError = (-0x0012),// 0[0x0] Not enough storage error
    OpenResult_FileNotModified = (-0x0013),// 0[0x0]
    OpenResult_InvalidFormula = (-0x0014),// 0[0x0] Formula error
    OpenResult_MissObject = (-0x0015),// 0[0x0] 일부 Object를 읽지 못했을때
    OpenResult_PasswordDiff = (-0x0016),// 0[0x0] 입력 password가 틀린 경우 2011.05.23 add by hnsong
    OpenResult_NotPagePdfExport = (-0x0017),// 0[0x0] 문서에 페이지가 없는 경우
    OpenResult_AddFailPdfExport = (-0x0018),// 0[0x0] PDF Export 내부에서 발생한 문제
    OpenResult_UnsupportedEncryptionType = ( -0x0019),// 0[0x0] 미지원 암호 문서
    OpenResult_UnusedCommandAsCellMultiselection = ( -0x0020),// 0[0x0] jhc[2012.07.13] - Sheet 셀 멀티 셀렉션에서 지원하지 않는 command일 경우 리턴 에러 타입 정의.
    OpenResult_UsingFile = (-0x0021),// 0[0x0] 파일 사용 중
    OpenResult_ReadonlyFile = (-0x0022),// 0[0x0] 읽기 전용 문서 오픈 에러시 사용됨
    OpenResult_TerminateOnSlaveThread = (-0x0023),// 0[0x0] Multi-core 사용 시 Slave Thread에서 Terminate를 시도하는 경우, 이 값을 체크하여 Master Thread에서 Terminate하도록 함
    OpenResult_CorruptImageInHwpExport = (-0x0024),// 0[0x0] 한글 문서 내의 이미지 파일에 오류가 있을 경우
    OpenResult_ClipboardCrossFormat = (-0x0025),// 0[0x0]클립 보드기능시 교차 포맷으로 들어 올때 Error 처리
    OpenResult_WritePasswordDoc = (-0x00027),// 0[0x0] Protected file
    OpenResult_WritePasswordDiff = (-0x0028),
    OpenResult_ReadOnlyRecommendedDoc = (-0x0029),//읽기 권장 문서
    OpenResult_UnsupportedTypeXml = (-0x0109),// 0[0x0] XML파일을 강제변환 할 때
    OpenResult_UnsupportedTypeHtml = (-0x0110),// 0[0x0] HTML파일을 강제변환 할 때
    OpenResult_Document_Truncated = (0x0020),
}OpenResult_Type;

typedef enum FontEffectUnderlineStyle
{
    FontEffectUnderlineStyle_None = 0,
    FontEffectUnderlineStyle_Single,		//단일선
    FontEffectUnderlineStyle_Words,			//워드
    FontEffectUnderlineStyle_Double,		//이중선
    FontEffectUnderlineStyle_Dotted,		//점선
    FontEffectUnderlineStyle_Dash,			//파선
    FontEffectUnderlineStyle_DashLong,		//긴 파선
    FontEffectUnderlineStyle_DotDash,		//일점 쇄선
    FontEffectUnderlineStyle_DotDotDash,	//이점 쇄선
    FontEffectUnderlineStyle_Wavy,			//물결선
    FontEffectUnderlineStyle_WavyDouble,	//이중물결선
    
    FontEffectUnderlineStyle_Thick,			//굵은선
    FontEffectUnderlineStyle_DottedHeavy,	//굵은 점선
    FontEffectUnderlineStyle_DashHeavy,		//굵은 파선
    FontEffectUnderlineStyle_DashLongHeavy,	//굵은 긴파선
    FontEffectUnderlineStyle_DotDashHeavy,	//굵은 일점 쇄선
    FontEffectUnderlineStyle_DotDotDashHeavy,//굵은 이점 쇄선
    FontEffectUnderlineStyle_WavyHeavy,		//굵은 물결선
    
    FontEffectUnderlineStyle_Sheet_Single	= 31,
    FontEffectUnderlineStyle_Sheet_Double	= 32
}FontEffectUnderlineStyle;

typedef enum FontChangeCase
{
    FontChangeCase_Sentence  = 1,
    FontChangeCase_Upper     = 2,
    FontChangeCase_Lower     = 3,
    FontChangeCase_Title     = 4,
    FontChangeCase_Toggle    = 5,
    FontChangeCase_EachWord,
    FontChangeCase_ToHalfWidth,
    FontChangeCase_ToFullWidth,
    FontChangeCase_End
}FontChangeCase;

typedef enum FontStyleID
{
    FontStyle_Normal                = 1,
    FontStyle_NoSpacing             = 5,
    FontStyle_Heading               = 6,
    FontStyle_Heading1              = 7,
    FontStyle_Heading2              = 8,
    FontStyle_Subtitle              = 16,
    FontStyle_SubtitleEmphasis      = 17,
    FontStyle_Emphasis              = 18,
    FontStyle_IntenseEmphasis       = 19,
    FontStyle_Strong                = 20,
    FontStyle_Quote                 = 21,
    FontStyle_IntenseQuote          = 22,
    FontStyle_SubtitleReference     = 23,
    FontStyle_IntenseReference      = 24,
    FontStyle_BookTitle             = 25,
    FontStyle_ListParagraph         = 26,
}FontStyleID;

typedef enum
{
    
    ParagraphMaskAttribute_Align                =0x00000001,
    ParagraphMaskAttribute_CharSp               =0x00000002,
    ParagraphMaskAttribute_WordSp               =0x00000004,
    ParagraphMaskAttribute_LineSp               =0x00000008,
    ParagraphMaskAttribute_LineSpUnit           =0x00000010,
    ParagraphMaskAttribute_Indent               =0x00000020,
    ParagraphMaskAttribute_Leftmargin     		=0x00000040,
    ParagraphMaskAttribute_Rightmargin     		=0x00000080,
    ParagraphMaskAttribute_VerticalAlign    	=0x00000100,
    ParagraphMaskAttribute_HanguelWord     		=0x00000200,
    ParagraphMaskAttribute_EnglishWord     		=0x00000400,
    ParagraphMaskAttribute_BeforeSpacing   		=0x00000800,
    ParagraphMaskAttribute_AfterSpacing   		=0x00001000,
    ParagraphMaskAttribute_BiDirection			=0x00002000,
    ParagraphMaskAttribute_Textflow             =0x00004000,
    ParagraphMaskAttribute_Outlinelevel         =0x00008000,
    ParagraphMaskAttribute_Deftabpos			=0x00010000,
    ParagraphMaskAttribute_Tapattr              =0x00020000,
    ParagraphMaskAttribute_SupressLinenumber	=0x00040000,
    
    ParagraphMaskAttribute_Bd_Fill              =0x00100000,
    ParagraphMaskAttribute_Bd_Shadow			=0x00200000,
    ParagraphMaskAttribute_Bd_Fromtext          =0x00400000,
    ParagraphMaskAttribute_Bd_LineLeft          =0x00800000,
    ParagraphMaskAttribute_Bd_LineTop           =0x01000000,
    ParagraphMaskAttribute_Bd_LineRight         =0x02000000,
    ParagraphMaskAttribute_Bd_LineBottom		=0x04000000,
    ParagraphMaskAttribute_Bd_LineBetween       =0x08000000,
    
    ParagraphMask_ApplyAll                      =0x0FFFFFFFF,
}ParagraphMask;

typedef enum
{
    BulletNumber_Reset 	= 0x0001,
    BulletNumber_Startat 	= 0x0002,
    BulletNumber_Color		= 0x0004,
    BulletNumber_Szpct		= 0x0008,
    BulletNumber_ThemeColor		=  0x0010
}BulletNumberMask;

/**
 * typedef enum	{}EEV_BULLET_NUMBERING;
 */
typedef enum
{
    BulletInput 			= 0,
    NumberingInput          = 1,
    MultinumberingInput 	= 2,
    DeleteBulletNumber      = 3 //delete bullet and numbering
}BulletNumbering;

/**
 * typedef enum	{}EEV_BULLETNUMBER_TYPE;
 */
typedef enum
{
    BulletNumber_TypeNo = 0,
    BulletNumber_Type1 = 1,
    BulletNumber_Type2 = 2,
    BulletNumber_Type3 = 3,
    BulletNumber_Type4 = 4,
    BulletNumber_Type5 = 5,
    BulletNumber_Type6 = 6,
    BulletNumber_Type7 = 7,
    BulletNumber_Type8 = 8,
    BulletNumber_Type9 = 9,
    BulletNumber_Type10 = 10,
    BulletNumber_Type11 = 11,
    BulletNumber_Type12 = 12,
    BulletNumber_Type13 = 13,
    BulletNumber_Type14 = 14,
    BulletNumber_Type15 = 15,
    
    BulletNumber_Picture = 126,
    BulletNumber_Bullet = 127,
    BulletNumber_None = 128
}BulletNumberType;

typedef enum
{
    LineSpaceUnit_Twip          = 0,
    LineSpaceUnit_Percentage    = 1,
    LineSpaceUnit_Fix           = 2,
    LineSpaceUnit_AtLeast       = 3,
    LineSpaceUnit_Multiple      = 4
}LineSpaceUnit;

typedef enum
{
    TextDirection_None			= 0,
    TextDirection_Garo			= 1,
    TextDirection_GaroRotate	= 2,
    TextDirection_Sero			= 3,
    TextDirection_Sero90		= 4,
    TextDirection_Sero270		= 5,
    TextDirection_SeroRtl		= 6,
    TextDirection_SeroLtr		= 7
}ParagraphTextDirectionType;


// E.java EV_GUI_EVENT 추후 정리 필요 / 단락 정렬에 필요한 부분만 가져옴

typedef enum{
    GuiGeneralAlign   				= 0x0000,	// General Align(None, only sheet)
    GuiLeftAlign                    = 0x0109,	// Left Align
    GuiCenterAlign					= 0x010A,	// Center Align
    GuiRightAlign                   = 0x010B,	// Right Align
    GuiJustifyAlign					= 0x010C,	// Justify Align
    GuiTopAlign						= 0x010D,	// Top Align
    GuiMiddleAlign					= 0x010E,	// Middle Align
    GuiBottomAlign					= 0x010F	// Bottom Align
}GuiAlignEvent;

typedef enum
{
    Paragraph_VerticalAlignNone = -1,
    Paragraph_Top           = 5,
    Paragraph_Middle       = 6,
    Paragraph_Bottom        = 7
}ParagraphVerticalAlign;

typedef enum
{
    Paragraph_None          = -1,
    Paragraph_Left          = 0,
    Paragraph_Center        = 1,
    Paragraph_Right         = 2,
    Paragraph_Justify       = 3,
    Paragraph_Distribute    = 4
}ParagraphHorizontalAlign;

typedef enum
{
    ParagraphLineSpaceType_Normal,
    ParagraphLineSpaceType_AtLeast,
    ParagraphLineSpaceType_Fix,
    ParagraphLineSpaceType_Multiple
}ParagraphLineSpaceType;

typedef enum
{
    ParagraphTextDirection_None,
    ParagraphTextDirection_Garo,
    ParagraphTextDirection_GaroRotate,
    ParagraphTextDirection_Sero,
    ParagraphTextDirection_Sero90,
    ParagraphTextDirection_Sero270,
    ParagraphTextDirection_SeroRtl,
    ParagraphTextDirection_SeroLtr
}ParagraphTextDirection;

typedef enum
{
    ParagraphTextDirectionBiDirection_Ltr,
    ParagraphTextDirectionBiDirection_Rtl
}ParagraphTextDirectionBiDirection;

typedef enum
{
    ChartBorderPlot,
    ChartBorderFrame
}ChartBorderType;

typedef enum
{
    Scroll_Up = 0,
    Scroll_Down,
    Scroll_Left,
    Scroll_Right,
    Scroll_Home,
    Scroll_End,
    Scroll_Set,
    Scroll_SetPagemap
}ScrollType;

typedef enum
{
    Move_FirstPage = 0,
    Move_PreviousPage,
    Move_PreviousPageExtend,
    Move_NextPage,
    Move_NextPageExtend,
    Move_LastPage,
    Move_SetPage
}MoveType;

typedef enum //BrScreenType
{
    ViewMode_FitToWidth         = 0x01,
    ViewMode_FitToHeight        = 0x02,
    ViewMode_FitToOrigin        = 0x03, // 100%
    ViewMode_FitToWholePage     = 0x04, // Wholepage, fit on LCD
    ViewMode_SelectRange        = 0x05, // selection range mode
    ViewMode_FitToReflow        = 0x06, // fixedmode
    ViewMode_ChangeTextOnly     = 0x07, // text only
    ViewMode_BaseFrame          = 0x08, // text only
    ViewMode_FitToTextWidth     = 0x09, // fit to text width (word only)
    ViewMode_MaxScreen
}ViewModeType;

typedef enum
{
    Rotate_Set = 0,
    Rotate_Clockwise,
    Rotate_Counterclockwise
}RotateType;

typedef enum
{
    Zoom_Normal = 0,
    Zoom_Region,
}ZoomType;

typedef enum
{
    HidAction_Down = 0,
    HidAction_Move,
    HidAction_Up,
    HidAction_DoubleClick,
    HidAction_LongPress,
    HidAction_Cancel,
    HidAction_Set,
    HidAction_Unknown,
    HidAction_Mask = 0xFF  //HIdAction type max
} HidAction;

typedef enum //BrDisplayMode
{
    DISPLAY_MODE_ONE_PAGE,
    DISPLAY_MODE_CONTINUOUS_PAGE
}DISPLAY_MODE_TYPE;

typedef enum EV_PAGEMAP_COMMAND_TYPE {
    PAGEMAP_AUTO_PAGEMAP_SHOW				= 0x0,
    PAGEMAP_AUTO_PAGEMAP_HIDE				= 0x1,
    PAGEMAP_MAGNIFIER_ALWAYS_SHOW		= 0x2,
    PAGEMAP_ONLY_MAGNIFIER_HIDE			= 0x3,	// auto page map이 있다면 auto pagemap은 사라지지 않음
    PAGEMAP_ONLY_MAGNIFIER_ALWAYS_SHOW	= 0x4,
    PAGEMAP_OFF								= 0x5
}PAGEMAP_COMMAND_TYPE;

typedef enum CARET_DIRECTION_TYPE
{
    CARET_DIR_BOTTOM	= 0, // 가로, 전자 단어 270도 회전
    CARET_DIR_LEFT	= 1, // 세로, 모든 텍스트 90도 회전, 세로형:오른쪽에서 왼쪽
    CARET_DIR_RIGHT	= 2	 // 모든 텍스트 270도 회전, 세로형:왼쪽에서 오른쪽
}CARET_DIRECTION_TYPE;

//bmvinterface.h => BrChartSelectionType
typedef enum CHART_SELECTION_TYPE
{
    CHART_SELECTION_TYPE_NONE = 0,
    CHART_SELECTION_TYPE_CHART,
    CHART_SELECTION_TYPE_PLOT,
    CHART_SELECTION_TYPE_LEGEND,
    CHART_SELECTION_TYPE_TITLE,
    CHART_SELECTION_TYPE_AXIS,
    CHART_SELECTION_TYPE_AXIS_TITLE,
    CHART_SELECTION_TYPE_MAJORGRIDLINES,
    CHART_SELECTION_TYPE_MINORGRIDLINES,
    CHART_SELECTION_TYPE_SERIES,
    CHART_SELECTION_TYPE_SERIES_DATALABEL,
    CHART_SELECTION_TYPE_DATAPOINT,
    CHART_SELECTION_TYPE_DATALABEL,
    CHART_SELECTION_TYPE_DATALABELLINES,
    CHART_SELECTION_TYPE_HIGHLOWLINES,
    CHART_SELECTION_TYPE_DROPLINES,
    CHART_SELECTION_TYPE_OPENCLOSEBARSUP,
    CHART_SELECTION_TYPE_OPENCLOSEBARSDOWN,
    CHART_SELECTION_TYPE_FLOOR,
    CHART_SELECTION_TYPE_WALL,
    CHART_SELECTION_TYPE_BACKWALL,
    CHART_SELECTION_TYPE_SIDEWALL,
    CHART_SELECTION_TYPE_PIVOTFILTER
}CHART_SELECTION_TYPE;

//Modify Chart Flags. bmvinterface.h => #define BR_CHART_MODIFY_XXX
typedef enum _tagCHART_MODIFY_FLAG
{
    CHART_MODIFY_ALL			=	-1,
    CHART_MODIFY_INSERT			=	CHART_MODIFY_ALL,
    CHART_MODIFY_TYPE			=   0x0001,
    CHART_MODIFY_MAIN_TITLE		=	0x0002,
    CHART_MODIFY_XAXIS_TITLE	=	0x0004,
    CHART_MODIFY_YAXIS_TITLE	=	0x0008,
    CHART_MODIFY_LEGEND			=	0x0010,
    CHART_MODIFY_DATA_VALUE		=	0x0080,
    CHART_MODIFY_STYLE			=	0x0100,
    CHART_MODIFY_PLOT_BORDER	=	0x0200,
    CHART_MODIFY_SERIES_IN_ROWS	=	0x0400,
    CHART_MODIFY_PLOTVISONLY	=	0x0800,
    CHART_MODIFY_FRAME_BORDER	=	0x1000,
    CHART_MODIFY_DATA_RANGE		=	0x2000
}CHART_MODIFY_FLAG;

typedef enum EDIT_OBJECT_GUIDE_TYPE
{
    OBJECT_GUIDE_NONE		= 0x0000, //디폴트 가이드 없음
    OBJECT_GUIDE_TABLE_POS	= 0x0001 //셀 안에 케럿존재(노멀, 케럿마킹), 셀 마킹, 후버링시에 테이블 LeftTop,Right Bottom 위치
    
}EDIT_OBJECT_GUIDE_TYPE; //eGuideType

typedef enum
{
    IME_INSERT = 0,
    IME_REPLACE,
    DELETE_CHAR
}CHAR_INPUT;

typedef enum
{
    DOCTYPE_BORA 	= 0,
    
    DOCTYPE_PPT 	= 1,
    DOCTYPE_DOC	= 2,
    DOCTYPE_HWP	= 3,
    DOCTYPE_GUL	= 4,
    DOCTYPE_XLS	= 5,
    
    DOCTYPE_PDF	= 6,
    DOCTYPE_HTM	= 7,
    DOCTYPE_HTML	= 8,
    DOCTYPE_MHT	= 9,
    DOCTYPE_MHTML	= 10,
    
    DOCTYPE_SMS	= 11,
    DOCTYPE_TXT	= 12,
    DOCTYPE_VCF	= 13,
    DOCTYPE_VCD	= 14,
    DOCTYPE_VCS	= 15,
    
    DOCTYPE_VMG	= 16,
    DOCTYPE_VNT	= 17,
    DOCTYPE_DOCX	= 18,
    DOCTYPE_PPTX	= 19,
    DOCTYPE_XLSX	= 20,
    
    DOCTYPE_JPG	= 21,
    DOCTYPE_JPEG	= 22,
    DOCTYPE_BMP	= 23,
    DOCTYPE_GIF	= 24,
    DOCTYPE_PNG	= 25,
    
    DOCTYPE_TIF	= 26,
    DOCTYPE_TIFF	= 27,
    DOCTYPE_WMF	= 28,
    DOCTYPE_EMF	= 29,
    DOCTYPE_WBMP	= 30,
    
    DOCTYPE_PCX 	= 31,
    DOCTYPE_ZIP	= 34,
    
    DOCTYPE_EPUB	= 36,
    DOCTYPE_MFI	= 37,
    DOCTYPE_TNS	= 38,
    DOCTYPE_CNI	= 39,
    DOCTYPE_RTF	= 40,
    
    DOCTYPE_CSV	= 41,
    
    DOCTYPE_THMX	= 42,
    DOCTYPE_ODT	= 43,	// ".odt"
    DOCTYPE_ODS	= 44,	// ".ods"
    DOCTYPE_ODP	= 45,	// ".odp"
    DOCTYPE_SVM    = 46,	// ".svm"
    
    DOCTYPE_DOT = 47,
    DOCTYPE_DOTX = 48,
    DOCTYPE_XLT = 49,
    DOCTYPE_XLTX = 50,
    DOCTYPE_POT = 51,
    DOCTYPE_POTX = 52,
    DOCTYPE_PPS = 53,
    DOCTYPE_PPSX = 54,
    DOCTYPE_PPTM = 55,
    DOCTYPE_XLSM = 56,
    DOCTYPE_DOCM = 57,
    
    DOCTYPE_MAX	= 0xff
}DOCUMENT_TYPE;

typedef enum {
    ObjectEdit_No                   = 0x00000000,
    ObjectEdit_QuickStyle           = 0x00000001,	//1.Quick Style (빠른 스타일)
    ObjectEdit_Fill                 = 0x00000002,	//2.Fill (채우기)
    ObjectEdit_LineColor            = 0x00000004,	//3.Line Color (선 색)
    ObjectEdit_LineStyle            = 0x00000008,	//4.Line Style (선 스타일)
    ObjectEdit_Shadow               = 0x00000010,	//5.Shadow (그림자)
    ObjectEdit_Reflection           = 0x00000020,	//6.Reflection (반사)
    ObjectEdit_Glow                 = 0x00000040,	//7.Glow (네온)
    ObjectEdit_Softedge             = 0x00000080,	//8.SoftEdge (부드러운 가장자리)
    ObjectEdit_3dFormat             = 0x00000100,	//9.3D Format (3차원 서식)
    ObjectEdit_3dRotation           = 0x00000200,	//10.3D Rotation (3차원 회전)
    ObjectEdit_PictureCorrection    = 0x00000400,	//11.Picture Correction	(그림 수정)
    ObjectEdit_PictureColor         = 0x00000800,	//12.Picture Color (그림 색)
    ObjectEdit_ArtisticEffect       = 0x00001000,	//13.Artistic Effect (꾸밈 효과)
    ObjectEdit_Cropping             = 0x00002000,	//14.Cropping (자르기)
    ObjectEdit_Size                 = 0x00004000,	//15.Size (크기)
    ObjectEdit_Location             = 0x00008000,	//16.Location (위치)
    ObjectEdit_Textbox              = 0x00010000,	//17.TextBox (텍스트 상자)
    ObjectEdit_EditShape            = 0x00020000,	//18.Edit Shape (도형 편집)
    ObjectEdit_PictureCompression	= 0x00040000	//19.Picture Compression (도형 압축)
}ObjectEditFormat;

typedef enum {
    ObjectStyle_Shape           =	0,
    ObjectStyle_Line            =	1,
    ObjectStyle_Picture         =	2,
    ObjectStyle_LineArrow		=	3,
    ObjectStyle_ThemeShape      =	4,
    ObjectStyle_ThemeLine		= 	5,
    ObjectStyle_Image			=	6,
    ObjectStyle_ThemeFillBg     =	7,      //for Po 6.0 template
}ObjectQuickStyle;

typedef enum {
    FrameShapePreset_NONE	= 0,
    
    FrameShapePreset_A1	= 1,
    FrameShapePreset_A2	= 2,
    FrameShapePreset_A3	= 3,
    FrameShapePreset_A4	= 4,
    FrameShapePreset_A5	= 5,
    FrameShapePreset_A6	= 6,
    
    FrameShapePreset_B1	= 7,
    FrameShapePreset_B2	= 8,
    FrameShapePreset_B3	= 9,
    FrameShapePreset_B4	= 10,
    FrameShapePreset_B5	= 11,
    FrameShapePreset_B6	= 12,
    
    FrameShapePreset_C1	= 13,
    FrameShapePreset_C2	= 14,
    FrameShapePreset_C3	= 15,
    FrameShapePreset_C4	= 16,
    FrameShapePreset_C5	= 17,
    FrameShapePreset_C6	= 18,
    
    FrameShapePreset_D1	= 19,
    FrameShapePreset_D2	= 20,
    FrameShapePreset_D3	= 21,
    FrameShapePreset_D4	= 22,
    FrameShapePreset_D5	= 23,
    FrameShapePreset_D6	= 24,
    
    FrameShapePreset_E1	= 25,
    FrameShapePreset_E2	= 26,
    FrameShapePreset_E3	= 27,
    FrameShapePreset_E4	= 28,
    FrameShapePreset_E5	= 29,
    FrameShapePreset_E6	= 30,
    
    FrameShapePreset_F1	= 31,
    FrameShapePreset_F2	= 32,
    FrameShapePreset_F3	= 33,
    FrameShapePreset_F4	= 34,
    FrameShapePreset_F5	= 35,
    FrameShapePreset_F6	= 36,
    
    FrameShapePreset_G1	= 37,
    FrameShapePreset_G2	= 38,
    FrameShapePreset_G3	= 39,
    FrameShapePreset_G4	= 40,
    FrameShapePreset_G5	= 41,
    FrameShapePreset_G6	= 42,
    
    FrameShapePreset_H1	= 43,
    FrameShapePreset_H2	= 44,
    FrameShapePreset_H3	= 45,
    FrameShapePreset_H4	= 46,
    FrameShapePreset_H5	= 47,
    FrameShapePreset_H6	= 48,
    
    FrameShapePreset_I1	= 49,
    FrameShapePreset_I2	= 50,
    FrameShapePreset_I3	= 51,
    FrameShapePreset_I4	= 52,
    FrameShapePreset_I5	= 53,
    FrameShapePreset_I6	= 54,
    
    FrameShapePreset_J1	= 55,
    FrameShapePreset_J2	= 56,
    FrameShapePreset_J3	= 57,
    FrameShapePreset_J4	= 58,
    FrameShapePreset_J5	= 59,
    FrameShapePreset_J6	= 60,
    
    FrameShapePreset_K1	= 61,
    FrameShapePreset_K2	= 62,
    FrameShapePreset_K3	= 63,
    FrameShapePreset_K4	= 64,
    FrameShapePreset_K5	= 65,
    FrameShapePreset_K6	= 66,
    
    FrameShapePreset_L1	= 67,
    FrameShapePreset_L2	= 68,
    FrameShapePreset_L3	= 69,
    FrameShapePreset_L4	= 70,
    FrameShapePreset_L5	= 71,
    FrameShapePreset_L6	= 72
}FrameShapePreset;

typedef enum {
    ThemeShapeStyle0_None         = 0,
    
    ThemeShapeStyle1_Dk1          = 1,
    ThemeShapeStyle2_Accent1      = 2,
    ThemeShapeStyle3_Accent2      = 3,
    ThemeShapeStyle4_Accent3      = 4,
    ThemeShapeStyle5_Accent4      = 5,
    ThemeShapeStyle6_Accent5      = 6,
    ThemeShapeStyle7_Accent6      = 7,
    
    ThemeShapeStyle8_Dk1          = 8,
    ThemeShapeStyle9_Accent1      = 9,
    ThemeShapeStyle10_Accent2     = 10,
    ThemeShapeStyle11_Accent3     = 11,
    ThemeShapeStyle12_Accent4     = 12,
    ThemeShapeStyle13_Accent5     = 13,
    ThemeShapeStyle14_Accent6     = 14,
    
    ThemeShapeStyle15_Dk1         = 15,
    ThemeShapeStyle16_Accent1     = 16,
    ThemeShapeStyle17_Accent2     = 17,
    ThemeShapeStyle18_Accent3     = 18,
    ThemeShapeStyle19_Accent4     = 19,
    ThemeShapeStyle20_Accent5     = 20,
    ThemeShapeStyle21_Accent6     = 21,
    
    ThemeShapeStyle22_Dk1         = 22,
    ThemeShapeStyle23_Accent1     = 23,
    ThemeShapeStyle24_Accent2     = 24,
    ThemeShapeStyle25_Accent3     = 25,
    ThemeShapeStyle26_Accent4     = 26,
    ThemeShapeStyle27_Accent5     = 27,
    ThemeShapeStyle28_Accent6     = 28,
    
    ThemeShapeStyle29_Dk1         = 29,
    ThemeShapeStyle30_Accent1     = 30,
    ThemeShapeStyle31_Accent2     = 31,
    ThemeShapeStyle32_Accent3     = 32,
    ThemeShapeStyle33_Accent4     = 33,
    ThemeShapeStyle34_Accent5     = 34,
    ThemeShapeStyle35_Accent6     = 35,
    
    ThemeShapeStyle36_Dk1         = 36,
    ThemeShapeStyle37_Accent1     = 37,
    ThemeShapeStyle38_Accent2     = 38,
    ThemeShapeStyle39_Accent3     = 39,
    ThemeShapeStyle40_Accent4     = 40,
    ThemeShapeStyle41_Accent5     = 41,
    ThemeShapeStyle42_Accent6     = 42,
}ThemeShapeStylePreset;

typedef enum {
    ThemeLineStyle0_None      = 0,
    
    ThemeLineStyle1_Dk1       = 1,
    ThemeLineStyle2_Accent1   = 2,
    ThemeLineStyle3_Accent2   = 3,
    ThemeLineStyle4_Accent3   = 4,
    ThemeLineStyle5_Accent4   = 5,
    ThemeLineStyle6_Accent5   = 6,
    ThemeLineStyle7_Accent6   = 7,
    
    ThemeLineStyle8_Dk1       = 8,
    ThemeLineStyle9_Accent1   = 9,
    ThemeLineStyle10_Accent2  = 10,
    ThemeLineStyle11_Accent3  = 11,
    ThemeLineStyle12_Accent4  = 12,
    ThemeLineStyle13_Accent5  = 13,
    ThemeLineStyle14_Accent6  = 14,
    
    ThemeLineStyle15_Dk1      = 15,
    ThemeLineStyle16_Accent1  = 16,
    ThemeLineStyle17_Accent2  = 17,
    ThemeLineStyle18_Accent3  = 18,
    ThemeLineStyle19_Accent4  = 19,
    ThemeLineStyle20_Accent5  = 20,
    ThemeLineStyle21_Accent6  = 21,
}ThemeLineStylePreset;

typedef enum {
    PictureStyle_None	= 0,
    PictureStyle_1		= 1,
    PictureStyle_2		= 2,
    PictureStyle_3		= 3,
    PictureStyle_4		= 4,
    PictureStyle_5		= 5,
    PictureStyle_6		= 6,
    PictureStyle_7		= 7,
    PictureStyle_8      = 8,
    PictureStyle_9		= 9,
}PictureStyle;

typedef enum {
    ArrowPreset_None	= 0,
    ArrowPreset_0		= 1,
    ArrowPreset_1		= 2,
    ArrowPreset_2		= 3,
    ArrowPreset_3		= 4,
    ArrowPreset_4		= 5,
    ArrowPreset_5		= 6,
    ArrowPreset_6		= 7,
    ArrowPreset_7		= 8,
    ArrowPreset_8		= 9,
    ArrowPreset_9		= 10,
    ArrowPreset_10		= 11,
    ArrowPreset_Max    = 12,
}ArrowPreset;

typedef enum {
    ImageStyle0_None							= 0,
    ImageStyle1_SimpleFrameWhite                = 1,//단순형 프레임, 흰색
    ImageStyle2_BeveledMatteWhite				= 2,//입체 무광택, 흰색
    ImageStyle3_MetalFrame						= 3,//금속 프레임
    ImageStyle4_DropShadowRectangle				= 4,//사각형 그림자
    ImageStyle5_ReflectedRoundedRectangle		= 5,//반사형 모서리가 둥근 직사각형
    ImageStyle6_SoftEdgeRectangle				= 6,//부드러운 가장자리 직사각형
    ImageStyle7_DoubleFrameBlack                = 7,//이중 프레임, 검정
    ImageStyle8_ThickMatteBlack					= 8,//굵은 무광택, 검정
    ImageStyle9_SimpleFrameBlack                = 9,//단순형 프레임, 검정
    
    ImageStyle10_BeveledAndOval                 = 10,//입체 타원, 검정
    ImageStyle11_CompoundFrameBlack				= 11,//복합형 프레임, 검정
    ImageStyle12_ModerateFrameBlack             = 12,//일반 프레임, 검정
    ImageStyle13_CenterShadowRectangle			= 13,//사각형 가운데 그림자
    ImageStyle14_RoundedDiagonalCornerWhite     = 14,//둥근 대각선 모서리, 흰색
    ImageStyle15_SnipDiagonalCorner             = 15,//대각선 방향의 모서리 잘림,흰색
    ImageStyle16_ModerateFrameWhite             = 16,//일반 프레임, 흰색
    ImageStyle17_RotatedWhite                   = 17,//회전, 흰색
    ImageStyle18_PrespectiveShadowWhite         = 18,//원근감 있는 그림자, 흰색
    ImageStyle19_RelaxedPerspectiveWhite        = 19,//낮은 수준의 원근감, 흰색
    
    ImageStyle20_SoftEdgeOval  					= 20,//부드러운 가장자리 타원
    ImageStyle21_BevelRectangle 				= 21,//입체 직사각형
    ImageStyle22_BevelPerspective               = 22,//입체 원근감
    ImageStyle23_ReflectedPerspectiveRight 		= 23,//반사형 원근감, 오른쪽
    ImageStyle24_ReflectedPerspectiveLeftWhite  = 24,//입체 원근감, 왼쪽, 흰색
    ImageStyle25_ReflectedBevelBlack            = 25,//반사형 입체, 검정
    ImageStyle26_ReflectedBevelWhite            = 26,//반사형 입체, 흰색
    ImageStyle27_MetalRoundedRectangle 			= 27,//모서리가 둥근 금속 직사각형
    ImageStyle28_MetalOval                      = 28,//금속 타원,
}ImageStyle;

typedef enum {
    BgFillStyle_0	= 0,
    
    BgFillStyle_1	= 1,
    BgFillStyle_2	= 2,
    BgFillStyle_3	= 3,
    BgFillStyle_4	= 4,
    BgFillStyle_5	= 5,
    
    BgFillStyle_6	= 6,
    BgFillStyle_7	= 7,
    BgFillStyle_8	= 8,
    BgFillStyle_9	= 9,
    BgFillStyle_10	= 10,
    
    BgFillStyle_11	= 11,
    BgFillStyle_12	= 12,
}BgFillStyle;


typedef enum {
    FillStyle_Difference          = -1,
    FillStyle_No                  = 0,    //No Fill (채우기없음)
    FillStyle_Solid               = 1,    //Solid Fill (단색채우기)
    FillStyle_Gradient            = 2,    //Gradient Fill (그라데이션채우기)
    FillStyle_Picture             = 3,    //Picture or Texture Fill (그림또는질감채우기)
    FillStyle_Pattern             = 4,    //Pattern Fill (패턴채우기)
    FillStyle_SlideBackground     = 5,    //Slide Background Fill (슬라이드배경채우기)
    FillStyle_Spuit               = 6,    //spuit fill (스포이트)
}FillStyle;


typedef enum  {
    PictureTextureFormat_Texture 	= 0,
    PictureTextureFormat_File		= 1,
    PictureTextureFormat_Bitmap     = 2,
}PictureTextureFormat;

typedef enum
{
    TextureStyle_No             = 0,//Picture Fill (그림 채우기)
    TextureStyle_Etc,               //↓Texture Fill (질감 채우기), //[2014.01.23][MID:46500][윤성준] Word page 배경에서, 그림 채우기/질감 채우기 구분 못하는 문제 수정
    
    TextureStyle_Papyrus,
    TextureStyle_Canvas,
    TextureStyle_Denim,
    TextureStyle_WovenMat,
    TextureStyle_WaterDroplets,
    
    TextureStyle_PapaerBag,
    TextureStyle_FishFossil,
    TextureStyle_Sand,
    TextureStyle_GreenMarble,
    TextureStyle_WhiteMarble,
    
    TextureStyle_BrownMarble,
    TextureStyle_Granite,
    TextureStyle_NewPrint,
    TextureStyle_Rectcled,
    TextureStyle_Parchment,
    
    TextureStyle_Ssationery,
    TextureStyle_BlueTissuePaper,
    TextureStyle_PinkTissuePaper,
    TextureStyle_PurpleMesh,
    TextureStyle_Bouquet,
    
    TextureStyle_Cork,
    TextureStyle_Walnut,
    TextureStyle_Oak,
    TextureStyle_MediumWood,
}TextureStyle;

typedef enum
{
    BitmapFormat_None,
    BitmapFormat_RGBA8888,
    BitmapFormat_RGB565,
    BitmapFormat_RGBA4444,
    BitmapFormat_A8,
}BitmapFormat;

typedef enum
{
    Gradiend_None = 0,
    
    LightGradientAccent1 = 1,
    LightGradientAccent2 = 2,
    LightGradientAccent3 = 3,
    LightGradientAccent4 = 4,
    LightGradientAccent5 = 5,
    LightGradientAccent6 = 6,
    
    TopSpotlightGradientAccent1 = 7,
    TopSpotlightGradientAccent2 = 8,
    TopSpotlightGradientAccent3 = 9,
    TopSpotlightGradientAccent4 = 10,
    TopSpotlightGradientAccent5 = 11,
    TopSpotlightGradientAccent6 = 12,
    
    CenterGradientAccent1 = 13,
    CenterGradientAccent2 = 14,
    CenterGradientAccent3 = 15,
    CenterGradientAccent4 = 16,
    CenterGradientAccent5 = 17,
    CenterGradientAccent6 = 18,
    
    BottomSpotlightGradientAccent1 = 19,
    BottomSpotlightGradientAccent2 = 20,
    BottomSpotlightGradientAccent3 = 21,
    BottomSpotlightGradientAccent4 = 22,
    BottomSpotlightGradientAccent5 = 23,
    BottomSpotlightGradientAccent6 = 24,
    
    RadarGradientAccent1 = 25,
    RadarGradientAccent2 = 26,
    RadarGradientAccent3 = 27,
    RadarGradientAccent4 = 28,
    RadarGradientAccent5 = 29,
    RadarGradientAccent6 = 30,
    
    //for VML shape gradient presets
    VmlGradient_EarlySunset = 31,		//이른 해질녘
    VmlGradient_LateSunset 	= 32,		//늦은 해질녘
    VmlGradient_NightFall 	= 33,		//밤의 어둠
    VmlGradient_DayBreak 	= 34,		//새벽
    VmlGradient_Horizon 	= 35,		//가로
    VmlGradient_Desert 		= 36,		//사막
    VmlGradient_Ocean 		= 37,		//해양
    VmlGradient_CalmWater 	= 38,		//잔잔한 물
    VmlGradient_Fire 		= 39,		//불
    VmlGradient_Fog 		= 40,		//안개
    VmlGradient_Moss 		= 41,		//이끼
    VmlGradient_Peacock 	= 42,		//광택
    VmlGradient_Wheat 		= 43,		//밀
    VmlGradient_Parchment 	= 44,		//양피지
    VmlGradient_Mahogany 	= 45,		//마호가니
    VmlGradient_Rainbow 	= 46,		//무지개
    VmlGradient_Rainbow2 	= 47,		//무지개2
    VmlGradient_Gold 		= 48,		//황금색
    VmlGradient_Gold2 		= 49,		//황금색2
    VmlGradient_Brass 		= 50,		//황동
    VmlGradient_Chrome 		= 51,		//크롬
    VmlGradient_Chrome2 	= 52,		//크롬2
    VmlGradient_Silver 		= 53,		//은색
    VmlGradient_Sapphire 	= 54,		//사파이어
    
    Gradient_Etc = 55,
    Gradient_Max = 56
}GradientStyle;

typedef enum
{
    ShapeGradientType_Invalid   = 0,
    ShapeGradientType_Linear,
    ShapeGradientType_Radar,
    ShapeGradientType_Square,
    ShapeGradientType_Path,
    ShapeGradientType_Title,
    ShapeGradientType_Conic
}ShapeGradientType;

typedef enum
{
    GradientDirection_Invalid        = 0,
    GradientDirection_Down,						//가로 1
    GradientDirection_Up,						//가로 2
    GradientDirection_Left,						//세로 2
    GradientDirection_Right,					//세로 1
    GradientDirection_TopLeftToBottomRight,     //상향 대각선 1
    GradientDirection_TopRightToBottomLeft,     //하향 대각선 1
    GradientDirection_BottomLeftToTopRight,     //하향 대각선 2
    GradientDirection_BottomRigtToTopLeft,      //상향 대각선 2
    GradientDirection_FromCenter,				//가운데에서 1
    GradientDirection_FromTopLeftCorner,		//모서리에서 1
    GradientDirection_FromTopRightCorner,		//모서리에서 2
    GradientDirection_FromBottomLeftCorner,		//모서리에서 3
    GradientDirection_FromBottomRightCorner,	//모서리에서 4
    GradientDirection_HorizontalIn,				//가로 3
    GradientDirection_HorizontalOut,			//가로 4
    GradientDirection_VerticalIn,				//세로 3
    GradientDirection_VerticalOut,				//세로 4
    GradientDirection_SlashOut,					//상향 대각선 3		//2014.08.25 Ticket 29505, VML Gradient direction 추가
    GradientDirection_SlashIn,					//상향 대각선 4
    GradientDirection_BslashOut,				//하향 대각선 3
    GradientDirection_BslashIn,					//하향 대각선 4
    GradientDirection_FromCenterIn,				//가운데에서 2
}ShapeGradientDirection;

typedef enum
{
    PatternType_NO          = 0,
    
    PatternType_5Per,
    PatternType_10Per,
    PatternType_20Per,
    PatternType_25Per,
    PatternType_30Per,
    PatternType_40Per,
    
    PatternType_50Per,
    PatternType_60Per,
    PatternType_70Per,
    PatternType_75Per,
    PatternType_80Per,
    PatternType_90Per,
    
    PatternType_LightDownwardDiagonal,
    PatternType_LIghtUpwardDigonal,
    PatternType_DarkDownwardDiagonal,
    PatternType_DarkUpwardDiagonal,
    PatternType_WideDownwardDiagonal,
    PatternType_WideUpwardDigonal,
    
    PatternType_LightVertical,
    PatternType_LightHorizontal,
    PatternType_NarrowVertical,
    PatternType_NarrowHorizontal,
    PatternType_DarkVertical,
    PatternType_DarkHorizontal,
    
    PatternType_DashedDownwardDigonal,
    PatternType_DashedUpwardDigonal,
    PatternType_DashedHorizontal,
    PatternType_DashedVertical,
    PatternType_SmallConfetti,
    PatternType_LargeConfetti,
    
    PatternType_Stagger,
    PatternType_Wave,
    PatternType_DiagonalBrick,
    PatternType_HorizontalBrick,
    PatternType_Weave,
    PatternType_Plaid,
    
    PatternType_Divot,
    PatternType_DottedGrid,
    PatternType_DottedDiamond,
    PatternType_Shingle,
    PatternType_Trellis,
    PatternType_Sphere,
    
    PatternType_SmallGrid,
    PatternType_LargeGrid,
    PatternType_SmallCheckerBoard,
    PatternType_LargeCheckerBoard,
    PatternType_Checkers,
    PatternType_SolidDiamond
}PatternType;

typedef enum {
    //ShadingPatternStyle_None = -1,
    ShadingPatternStyle_Erase     = -1,
    ShadingPatternStyle_100per   = 1,
    ShadingPatternStyle_5per     = 2,
    ShadingPatternStyle_10per    = 3,
    ShadingPatternStyle_12_5per  = 4,
    ShadingPatternStyle_15per    = 5,
    ShadingPatternStyle_20per    = 6,
    ShadingPatternStyle_25per    = 7,
    ShadingPatternStyle_30per    = 8,
    ShadingPatternStyle_35per    = 9,
    ShadingPatternStyle_37_5per  = 10,
    ShadingPatternStyle_40per    = 11,
    ShadingPatternStyle_45per    = 12,
    ShadingPatternStyle_50per    = 13,
    ShadingPatternStyle_55per    = 14,
    ShadingPatternStyle_60per    = 15,
    ShadingPatternStyle_62_5per  = 16,
    ShadingPatternStyle_65per    = 17,
    ShadingPatternStyle_70per    = 18,
    ShadingPatternStyle_75per    = 19,
    ShadingPatternStyle_80per    = 20,
    ShadingPatternStyle_85per    = 21,
    ShadingPatternStyle_87_5per  = 22,
    ShadingPatternStyle_90per    = 23,
    ShadingPatternStyle_95per    = 24,
    ShadingPatternStyle_DarkHorizontal      = 25,
    ShadingPatternStyle_DarkVertical        = 26,
    ShadingPatternStyle_DarkDownDiagonal    = 27,
    ShadingPatternStyle_DarkUpDiagonal      = 28,
    ShadingPatternStyle_DarkGrid            = 29,
    ShadingPatternStyle_DarkTrellis         = 30,
    ShadingPatternStyle_Lightorizontal      = 31,
    ShadingPatternStyle_LightVertical       = 32,
    ShadingPatternStyle_LightDownDiagonal   = 33,
    ShadingPatternStyle_LightUpdigonal      = 34,
    ShadingPatternStyle_LightGrid           = 35,
    ShadingPatternStyle_LightTrellis        = 36,
}ShadingPatternStyle;

//3.Line Color (선 색)
typedef enum {
    LineColorType_No = 0,		//No Line (선 없음)
    LineColorType_Solid,		//Solid Line (실 선)
    LineColorType_Gradient,	//Gradient Line (그라이데이션 선)
    LineColorType_Spuit,		//spuit line(스포이트)
}ObjectLineColorType;

//겹선 종류
typedef enum
{
    LineStyleCompound_None = -1,
    LineStyleCompound_No   = 0,
    LineStyleCompound_Simple,
    LineStyleCompound_Double,
    LineStyleCompound_ThickThin,
    LineStyleCompound_ThinThick,
    LineStyleCompound_Triple,
}ObjectLineStyleCompound;

//대시 종류
typedef enum
{
    LineStyleDash_None = -1,
    LineStyleDash_No,
    LineStyleDash_Solid,
    LineStyleDash_RoundDot,
    LineStyleDash_SquareDot,
    LineStyleDash_Dashes,
    LineStyleDash_DashDot,
    LineStyleDash_DashLongLine,
    LineStyleDash_LongDashDot,
    LineStyleDash_LongDashDotDot,
}ObjectLineStyleDash;

//끝 모양 종류
typedef enum
{
    LineStyleCap_None  = -1,
    LineStyleCap_No,
    LineStyleCap_Square,      //사각형
    LineStyleCap_Pie,         //원형
    LineStyleCap_Flat,		//평면
}ObjectLineStyleCap;

//조인 유형
typedef enum
{
    LineStyleJoin_None = -1,
    LineStyleJoin_No,
    LineStyleJoin_Pie,		//원형
    LineStyleJoin_Bevel,      //빗면
    LineStyleJoin_Meter,      //미터
}ObjectLineStyleJoin;

//화살표 설정-시작/끝 종류
typedef enum
{
    ShapeLineStyleArrow_None = -1,
    ShapeLineStyleArrow_No,
    ShapeLineStyleArrow_Arrow,
    ShapeLineStyleArrow_OpenArrow,
    ShapeLineStyleArrow_Stealth,
    ShapeLineStyleArrow_Diamond,
    ShapeLineStyleArrow_Oval,
}ShapeLineStyleArrow;

//화살표 설정-시작/끝 크기
typedef enum
{
    ShapeLineStyleArrowSize_None = -1,
    ShapeLineStyleArrowSize_0,
    ShapeLineStyleArrowSize_1,
    ShapeLineStyleArrowSize_2,
    ShapeLineStyleArrowSize_3,
    ShapeLineStyleArrowSize_4,
    ShapeLineStyleArrowSize_5,
    ShapeLineStyleArrowSize_6,
    ShapeLineStyleArrowSize_7,
    ShapeLineStyleArrowSize_8,
    ShapeLineStyleArrowSize_9
}ShapeLineStyleArrowSize;

typedef enum {
    ShadowStyle_OffsetNone = 0,
    ShadowStyle_OffsetLeft = 3,
    ShadowStyle_OffsetRight,
    ShadowStyle_OffsetTop,
    ShadowStyle_OffsetBottom,
    ShadowStyle_OffsetRightBottom,
    ShadowStyle_OffsetLeftBottom,
    ShadowStyle_OffsetRightTop,
    ShadowStyle_OffsetLeftTop,
    ShadowStyle_OffsetCenter,
    
    ShadowStyle_InsideLeft,
    ShadowStyle_InsideRight,
    ShadowStyle_InsideTop,
    ShadowStyle_InsideBottom,
    ShadowStyle_InsideRightBottom,
    ShadowStyle_InsideLeftBottom,
    ShadowStyle_InsideRightTop,
    ShadowStyle_InsideLeftTop,
    ShadowStyle_InsideCenter,
    
    ShadowStyle_PerspectiveUpperLeft,
    ShadowStyle_PerspectiveUpperRight,
    ShadowStyle_PerspectiveBottom,
    ShadowStyle_PerspectiveLowerLeft,
    ShadowStyle_PerspectiveLowerRight,
} ObjectShadowStyle;

typedef enum
{
    ShadowPreset_None                   = 0,//Shadow가 존재하지 않음.
    ShadowPreset_OuterEtc               = 1,//Outer shadow는 존재하지만 해당하는 Preset없음.
    ShadowPreset_InnerEtc               = 2,//Inner shadow는 존재하지만 해당하는 Preset없음.		//[2013.11.27][MID:43565][윤성준] Outer/Inner shadow 적용 상태 UI 에서 알지 못하는 문제 처리
    ShadowPreset_OffsetLeft             = 3,//Offset
    ShadowPreset_OffsetRight            = 4,
    ShadowPreset_OffsetTop              = 5,
    ShadowPreset_OffsetBottom           = 6,
    ShadowPreset_OffsetRightBottom		= 7,
    ShadowPreset_OffsetLeftBottom       = 8,
    ShadowPreset_OffsetRightTop         = 9,
    ShadowPreset_OffsetLeftTop			= 10,
    ShadowPreset_OffsetCenter           = 11,
    ShadowPreset_InsideLeft				= 12,//Inside
    ShadowPreset_InsideRight            = 13,
    ShadowPreset_InsideTop              = 14,
    ShadowPreset_InsideBottom           = 15,
    ShadowPreset_InsideRightBottom		= 16,
    ShadowPreset_InsideLeftBottom       = 17,
    ShadowPreset_InsideRightTop         = 18,
    ShadowPreset_InsideLeftTop			= 19,
    ShadowPreset_InsideCenter           = 20,
    ShadowPreset_PerspectiveUpperLeft   = 21,//Perspective
    ShadowPreset_PerspectiveUpperRight	= 22,
    ShadowPreset_PerspectiveBottom      = 23,
    ShadowPreset_PEerspectiveLowerLeft  = 24,
    ShadowPreset_PerspectiveLowerRight	= 25,
    ShadowPreset_Max					= 26,
    ShadowPreset_PerspectiveImageStyleD = 27,//PO50 이미지스타일D 그림자
    ShadowPreset_PerspectiveImageStyleE	= 28//PO50 이미지스타일E 그림자
}ObjectShadowPreset;

typedef enum {
    Shadow_None = 0,
    Shadow_OffsetLeft = 3,
    Shadow_OffsetRight,
    Shadow_OffsetTop,
    Shadow_OffsetBottom,
    Shadow_OffsetRightBottom,
    Shadow_OffsetLeftBottom,
    Shadow_OffsetRightTop,
    Shadow_OffsetLeftTop,
    Shadow_OffsetCenter,
    
    Shadow_InsideLeft,
    Shadow_InsideRight,
    Shadow_InsideTop,
    Shadow_InsideBottom,
    Shadow_InsideRightBottom,
    Shadow_InsideLeftBottom,
    Shadow_InsideRightTop,
    Shadow_InsideLeftTop,
    Shadow_InsideCenter,
    
    Shadow_PerspectiveUpperLeft,
    Shadow_PerspectiveUpperRight,
    Shadow_PerspectiveBottom,
    Shadow_PerspectiveLowerLeft,
    Shadow_PerspectiveLowerRight,
}ObjectShadow; // UI에서 사용. 그림자 선택 위치(바깥쪽, 안쪽, 원금감)

typedef enum
{
    ReflectionPreset_None				= 0,//Reflection이 존재하지 않음.
    ReflectionPreset_Etc   				= 1,//Reflection이 존재하지만 해당하는 Preset없음.
    ReflectionPreset_TightTouching 		= 2,//Touching
    ReflectionPreset_HalfTouching		= 3,
    ReflectionPreset_FullTouching		= 4,
    ReflectionPreset_Tight4ptOffset     = 5,//4PT
    ReflectionPreset_Half4ptOffset      = 6,
    ReflectionPreset_Full4ptOffset      = 7,
    ReflectionPreset_Tight8ptOffset     = 8,//8PT
    ReflectionPreset_Half8ptOffset      = 9,
    ReflectionPreset_Full8ptOffset      = 10,
    ReflectionPreset_Po6Half15Size      = 11,
    ReflectionPreset_Po6Half30Size      = 12,
    ReflectionPreset_Po6Half45Size      = 13,
    ReflectionPreset_Po6Half60Size      = 14,
    ReflectionPreset_Po6Half75Size      = 15,
    ReflectionPreset_Po6Half90Size      = 16,
    ReflectionPreset_Max				= 17
}ObjectReflectionPreset;

typedef enum
{
    GlowPreset_None			= 0,//Glow가 존재하지 않음.
    
    GlowPreset_5ptAccent1	= 1,
    GlowPreset_5ptAccent2	= 2,
    GlowPreset_5ptAccent3	= 3,
    GlowPreset_5ptAccent4	= 4,
    GlowPreset_5ptAccent5	= 5,
    GlowPreset_5ptAccent6	= 6,
    
    GlowPreset_8ptAccent1	= 7,
    GlowPreset_8ptAccent2	= 8,
    GlowPreset_8ptAccent3	= 9,
    GlowPreset_8ptAccent4	= 10,
    GlowPreset_8ptAccent5	= 11,
    GlowPreset_8ptAccent6 	= 12,
    
    GlowPreset_11ptAccent1	= 13,
    GlowPreset_11ptAccent2	= 14,
    GlowPreset_11ptAccent3	= 15,
    GlowPreset_11ptAccent4	= 16,
    GlowPreset_11ptAccent5	= 17,
    GlowPreset_11ptAccent6	= 18,
    
    GlowPreset_18ptAccent1	= 19,
    GlowPreset_18ptAccent2	= 20,
    GlowPreset_18PtAccent3	= 21,
    GlowPreset_18ptAccent4	= 22,
    GlowPreset_18ptAccent5	= 23,
    GlowPreset_18ptAccent6	= 24,
    
    GlowPreset_Etc			= 25,
    GlowPreset_Max			= 26
}ObjectGlowPreset;

typedef enum
{
    SoftEdgePreset_None		= 0,//SoftEdge가 존재하지 않음.
    SoftEdgePreset_Etc		= 1,//SoftEdge가 존재하지만 해당하는 Preset없음.
    SoftEdgePreset_1pt		= 2,
    SoftEdgePreset_2_5pt	= 3,
    SoftEdgePreset_5pt		= 4,
    SoftEdgePreset_10pt		= 5,
    SoftEdgePreset_25pt		= 6,
    SoftEdgePreset_50pt		= 7,
    SoftEdgePreset_Max		= 8
}ObjectSoftEdgePreset;

typedef enum
{
    BevelType_None = 0,
    BevelType_Circle,
    BevelType_RelaxedInsert,
    BevelType_Cross,
    BevelType_CoolSlant,
    BevelType_Angle,
    BevelType_SoftRound,
    BevelType_Convex,
    BevelType_Slope,
    BevelType_Divot,
    BevelType_Riblet,
    BevelType_HardEdge,
    BevelType_ArtDeco
}ObjectBevelType;

typedef enum
{
    MaterialType_None = 0,
    MaterialType_Matte,
    MaterialType_WarmMatte,
    MaterialType_Plastic,
    MaterialType_Metal,
    MaterialType_DarkEdge,
    MaterialType_SoftEdge,
    MaterialType_Flat,
    MaterialType_WireFrame,
    MaterialType_Powder,
    MaterialType_TranslucentPowder,
    MaterialType_Clear
}ObjectMaterialType;

typedef enum 
{
	LightType_None,// 0[0x0]
	LightTypeThree_Point,// 1[0x1]
	LightType_Balance,// 2[0x2]
	LightType_Soft,// 3[0x3]
	LightType_Harsh,// 4[0x4]
	LightType_Flood,// 5[0x5]
	LightType_Contrasting,// 6[0x6]
	LightType_Morning,// 7[0x7]
	LightType_Sunrise,// 8[0x8]
	LightType_Sunset,// 9[0x9]
	LightType_Chilly,// 10[0xa]
	LightType_Freezing,// 11[0xb]
	LightType_Flat,// 12[0xc]
	LightTypeTwo_Point,// 13[0xd]
	LightType_Glow,// 14[0xe]
	LightTypeBright_Room// 15[0xf]
}ObjectLightType;

typedef enum 
{
	LightDir_None,// 0[0x0]
	LightDir_Bottom,// 1[0x1]
	LightDirBottom_Left,// 2[0x2]
	LightDirBottom_Right,// 3[0x3]
	LightDir_Left,// 4[0x4]
	LightDir_Right,// 5[0x5]
	LightDir_Top,// 6[0x6]
	LightDirTop_Left,// 7[0x7]
	LightDirTop_Right// 8[0x8]
}ObjectLightRigDirection;

typedef enum 
{
	Cell3dformat_None,// 0[0x0]
	Cell3dformat_Circle,// 1[0x1]
	Cell3dformatRelaxed_Inset,// 2[0x2]
	Cell3dformat_Cross,// 3[0x3]
	Cell3dformatCool_Slant,// 4[0x4]
	Cell3dformat_Angle,// 5[0x5]
	Cell3dformatSoft_Round,// 6[0x6]
	Cell3dformat_Convex,// 7[0x7]
	Cell3dformat_Slope,// 8[0x8]
	Cell3dformat_Divot,// 9[0x9]
	Cell3dformat_Riblet,// 10[0xa]
	Cell3dformatHard_Edge,// 11[0xb]
	Cell3dformatArt_Deco,// 12[0xc]
	Cell3dformat_Unknown// 13[0xd]
}ObjectCell3DFormatPreset;

typedef enum 
{
	Object3dformatSelector_None,// 0[0x0] default 
	Object3dformatSelector_Cell// 1[0x1] BrCell3DFormatPreset
} Object3DFormatSelector;

typedef enum {
    Object3dFormat_None,
    Object3dFormat_Circle,
    Object3dFormat_RelaxedInsert,
    Object3dFormat_Cross,
    Object3dFormat_CoolSlant,
    Object3dFormat_Angle,
    Object3dFormat_SoftRound,
    Object3dFormat_Convex,
    Object3dFormat_Slope,
    Object3dFormat_Divot,
    Object3dFormat_Riblet,
    Object3dFormat_HardEdge,
    Object3dFormat_ArtDeco
}Object3dFormat;

typedef enum
{
    Object3dRotationType_None                               = 0,//3DRotation이 존재하지 않음.
    Object3dRotationType_Etc                                = 1,//3DRotation이 존재하지만 해당하는 Preset없음.
    Object3dRotationType_IsometricLeftDown                  = 2,//Isometric
    Object3dRotationType_IsometricRightUp                   = 3,
    Object3dRotationType_IsometricTopUp                     = 4,
    Object3dRotationType_IsometricBottomDown                = 5,
    Object3dRotationType_OffAxis1Left                       = 6,//Off Axis
    Object3dRotationType_OffAxis1Right                      = 7,
    Object3dRotationType_OffAxis1Top                        = 8,
    Object3dRotationType_OffAxis2Left                       = 9,
    Object3dRotationType_OffAxis2Right                      = 10,
    Object3dRotationType_OffAxis2Top                        = 11,
    Object3dRotationType_OffPerspectiveFront                = 12,//Perspective
    Object3dRotationType_OffPerspectiveLeft                 = 13,
    Object3dRotationType_OffPerspectiveRight                = 14,
    Object3dRotationType_OffPerspectiveBelow                = 15,
    Object3dRotationType_OffPerspectiveAbove                = 16,
    Object3dRotationType_OffPerspectiveRelaxedModerately	= 17,
    Object3dRotationType_OffPerspectiveRelaxed				= 18,
    Object3dRotationType_OffPerspectiveContrastingLeft		= 19,
    Object3dRotationType_OffPerspectiveContrastingRight     = 20,
    Object3dRotationType_OffPerspectiveHeroicExtremeLeft	= 21,
    Object3dRotationType_OffPerspectiveHeroicExtremeRight	= 22,
    Object3dRotationType_OffObliqueTopLeft                  = 23,//Oblique
    Object3dRotationType_OffObliqueTopRight                 = 24,
    Object3dRotationType_OffObliqueBottomLeft               = 25,
    Object3dRotationType_OffObliqueBottomRight              = 26,
    Object3dRotationType_Max                                = 27
}Object3dRotationType;

typedef enum
{
    SoftenType_None = 0,
    SoftenType_1,   //-50
    SoftenType_2,   //-25
    SharpenType_1,  //0
    SharpenType_2,  //25
    SharpenType_3,  //50
}ObjectSoftenSharpenType;

typedef enum
{
    TextWrap_InlineWithText = 0,	//텍스트 앞 (In Front of Text)
    TextWrap_InlineWithLine,		//텍스트 줄 안 (In Line with Text)
    TextWrap_InlineTopAndBottom,	//위/아래 (Top and Bottom)
    TextWrap_Rect,					//정사각형 (Square)
    TextWrap_Tight,					//빽빽하게 (Tight)
    TextWrap_FullThrough,			//투과하여 (Through)
    TextWrap_Bottom 				//텍스트 뒤(Behind Text)
}ObjectTextWrapType;

typedef enum
{
    BrightnessContrastType_None = 0,
    
    BrightnessContrastType_1,//-40,-40
    BrightnessContrastType_2,//-20,-40
    BrightnessContrastType_3,//0,-40
    BrightnessContrastType_4,//20,-40
    BrightnessContrastType_5,//40,-40
    
    BrightnessContrastType_6,//-40,-20
    BrightnessContrastType_7,//-20,-20
    BrightnessContrastType_8,//0,-20
    BrightnessContrastType_9,//20,-20
    BrightnessContrastType_10,//40,-20
    
    BrightnessContrastType_11,//-40,0
    BrightnessContrastType_12,//-20,0
    BrightnessContrastType_13,//0,0
    BrightnessContrastType_14,//20,0
    BrightnessContrastType_15,//40,0
    
    BrightnessContrastType_16,//-40,20
    BrightnessContrastType_17,//-40,20
    BrightnessContrastType_18,//-40,20
    BrightnessContrastType_19,//-40,20
    BrightnessContrastType_20,//-40,20
    
    BrightnessContrastType_21,//-40,40
    BrightnessContrastType_22,//-20,40
    BrightnessContrastType_23,//0,40
    BrightnessContrastType_24,//20,40
    BrightnessContrastType_25//40,40	
}BrightnessContrastPreset;

typedef enum
{
    Saturation_NONE = 0,
    Saturation_33,
    Saturation_66,
    Saturation_100,
    Saturation_200,
    Saturation_300,
    Saturation_400
}SaturationPreset;

typedef enum
{
    ColorScale_None = 0,
    ColorScale_4700,
    ColorScale_5300,
    ColorScale_5900,
    ColorScale_6500,
    ColorScale_7200,
    ColorScale_8800,
    ColorScale_11200
}ColorScalePreset;


//그림 색 다시 칠하기 미리 설정
typedef enum
{
    Recolor_No,					//다시 칠하기 없음
    
    Recolor_Grayscale,			//회색조
    Recolor_Sephia,				//세피아
    Recolor_Washout,			//희미하게
    Recolor_BlackWhite25,		//흑백: 25%
    Recolor_BlackWhite50,		//흑백: 50%
    Recolor_BlackWhite75,		//흑백: 75%
    
    Recolor_text2DarkColor,		//청회색, 텍스트 색 2 어둡게
    Recolor_Accent1DarkColor,	//파랑, 어두운 강조색 1
    Recolor_Accent2DarkColor,	//주황, 어두운 강조색 2
    Recolor_Accent3DarkColor,	//회색-50%, 어두운 강조색 3
    Recolor_Accent4DarkColor,	//황금색, 어두운 강조색 4
    Recolor_Accent5DarkColor,	//파랑, 어두운 강조색 5
    Recolor_Accent6DarkColor,	//녹색, 어두운 강조색 6
    
    Recolor_Bg2BrightColor,		//회색-25%, 배경색2 밝게
    Recolor_Accent1BrightColor,	//파랑, 밝은 강조색 1
    Recolor_Accent2BrightColor,	//주황, 밝은 강조색 2
    Recolor_Accent3BrightColor,	//회색-50%, 밝은 강조색 3
    Recolor_Accent4BrightColor,	//황금색, 밝은 강조색 4
    Recolor_Accent5BrightColor,	//파랑, 밝은 강조색 5
    Recolor_Accent6BrightColor,	//녹색, 밝은 강조색 6
}ImageReColorPreset;


//13.Artistic Effect (꾸밈 효과)
typedef enum
{
    ArtisticEffect_None                 = 0,
    ArtisticEffect_Marker               = 1,
    ArtisticEffect_PencilGrayscale      = 2,
    ArtisticEffect_PencilSketch         = 3,//PO6  Edit Supprot
    ArtisticEffect_LineDrawing          = 4,
    ArtisticEffect_ChalkSketch          = 5,
    ArtisticEffect_PaintStrokes         = 6,
    ArtisticEffect_PaintBrush           = 7,//PO6  Edit Supprot
    ArtisticEffect_GlowDiffused         = 8,//PO6  Edit Supprot
    ArtisticEffect_Blur                 = 9,//PO6  Edit Supprot
    ArtisticEffect_LightScreen          = 10,//PO6  Edit Supprot
    ArtisticEffect_WaterColorSponge     = 11,
    ArtisticEffect_FilmGrain            = 12,//PO6  Edit Supprot
    ArtisticEffect_MosaucBubbles        = 13,
    ArtisticEffect_Glass                = 14,//PO6  Edit Supprot
    ArtisticEffect_Cement               = 15,
    ArtisticEffect_Texturizer           = 16,//PO6  Edit Supprot
    ArtisticEffect_CrisscorssEtching    = 17,
    ArtisticEffect_PastelsSmoothing     = 18,
    ArtisticEffect_PlasticWrap          = 19,
    ArtisticEffect_Cutout               = 20,
    ArtisticEffect_PhotoCopy            = 21,//PO6  Edit Supprot
    ArtisticEffect_GlowEdge             = 22//PO6  Edit Supprot
}ImageArristicEffectPreset;

//14.Cropping (자르기)
typedef enum {
    Crop_No = 0,		// 원래대로
    Crop_MouseMode,		// 자르기 모드 진입
    Crop_AspectRatio,   // 자르기 모드 : 가로 세로 비율
    Crop_Fill,          // 자르기 모드 : 채우기
    Crop_Fit,           // 자르기 모드 : 맞춤
    Crop_Shape,         // 도형에 맞추어 자르기
    Crop_Detail         // 자르기 상세 변경
}ObjectCropType;

// anesin: GUI Shape Type 정리
typedef enum {
    ShapeInsertType_FreeDraw                    = 13,
    
    //---[Line & FreeDraw]------------------------------------------------------
    ShapeInsertType_BeginLine                   = 100,  // no real shape
    ShapeInsertType_Line                        = 101,
    ShapeInsertType_Arrow                       = 102,
    ShapeInsertType_DoubleArrow                 = 103,
    ShapeInsertType_ElbowConnector              = 104,
    ShapeInsertType_ElbowArrowConnector         = 105,
    ShapeInsertType_ElbowDoubleArrowConnector   = 106,
    ShapeInsertType_CurvedConnector             = 107,
    ShapeInsertType_CurvedArrowConnector        = 108,
    ShapeInsertType_CurvedDoubleArrowConnector  = 109,
    ShapeInsertType_Curve                       = 110,
    ShapeInsertType_Freeform                    = 111,
    ShapeInsertType_Scrible                     = 112,
    ShapeInsertType_EndLine                     = 199,  // no real shape
    
    //---[Rectangle]------------------------------------------------------------
    ShapeInsertType_BeginRectangle                      = 200,  // no real shape
    ShapeInsertType_Rectangle                           = 201,
    ShapeInsertType_RoundedRectangle                    = 202,
    ShapeInsertType_SnipSingleCornerRectangle           = 203,
    ShapeInsertType_SnipSameSideCornerRectangle         = 204,
    ShapeInsertType_SnipDiagonalCornerRectangel         = 205,
    ShapeInsertType_SnipAndRoundSingleCornerRectangel   = 206,
    ShapeInsertType_RoundSingleCornerRectangle          = 207,
    ShapeInsertType_RoundSameSideCornerRectangle        = 208,
    ShapeInsertType_RoundDiagonalCornerRectangle        = 209,
    ShapeInsertType_EndRectangle                        = 299,  // no real shape
    
    //---[Basic]----------------------------------------------------------------
    ShapeInsertType_BeginBasic          = 300,  // no real shape
    ShapeInsertType_Oval                = 301,
    ShapeInsertType_IsoscelesTriangle   = 302,
    ShapeInsertType_RightTriangle       = 303,
    ShapeInsertType_parallelogram       = 304,
    ShapeInsertType_Trapezoid           = 305,
    ShapeInsertType_Diamond             = 306,
    ShapeInsertType_RegularPentagon     = 307,
    ShapeInsertType_Hexagon             = 308,
    ShapeInsertType_Heptagon            = 309,
    ShapeInsertType_Octagon             = 310,
    ShapeInsertType_Decagon             = 311,
    ShapeInsertType_Dodecagon           = 312,
    ShapeInsertType_Pie                 = 313,
    ShapeInsertType_Chord               = 314,
    ShapeInsertType_Teardrop            = 315,
    ShapeInsertType_Frame               = 316,
    ShapeInsertType_HalfFrame           = 317,
    ShapeInsertType_LShape              = 318,
    ShapeInsertType_DiagonalStripe      = 319,
    ShapeInsertType_Plus                = 320,
    ShapeInsertType_Plaque              = 321,
    ShapeInsertType_Can                 = 322,
    ShapeInsertType_Cube                = 323,
    ShapeInsertType_Bevel               = 324,
    ShapeInsertType_Donut               = 325,
    ShapeInsertType_NoSymbol            = 326,
    ShapeInsertType_BlockArc            = 327,
    ShapeInsertType_FolderCorner        = 328,
    ShapeInsertType_SmileyFace          = 329,
    ShapeInsertType_Heart               = 330,
    ShapeInsertType_LightingBolt        = 331,
    ShapeInsertType_Sun                 = 332,
    ShapeInsertType_Moon                = 333,
    ShapeInsertType_Cloud               = 334,
    ShapeInsertType_Arc                 = 335,
    ShapeInsertType_DoubleBracket       = 336,
    ShapeInsertType_DoubleBrace         = 337,
    ShapeInsertType_LeftBracket         = 338,
    ShapeInsertType_RightBracket        = 339,
    ShapeInsertType_LeftBrace           = 340,
    ShapeInsertType_RightBrace          = 341,
    ShapeInsertType_EndBasic            = 399,  // no real shape
    
    //---[Arrow]----------------------------------------------------------------
    ShapeInsertType_BeginArrow              = 400,  // no real shape
    ShapeInsertType_RightArrow              = 401,
    ShapeInsertType_LeftArrow               = 402,
    ShapeInsertType_UpArrow                 = 403,
    ShapeInsertType_DownArrow               = 404,
    ShapeInsertType_LeftRightArrow          = 405,
    ShapeInsertType_UpDownArrow             = 406,
    ShapeInsertType_QuadArrow               = 407,
    ShapeInsertType_LeftRightUpArrow        = 408,
    ShapeInsertType_BentArrow               = 409,
    ShapeInsertType_UTurnArrow              = 410,
    ShapeInsertType_LeftUpArrow             = 411,
    ShapeInsertType_BentUpArrow             = 412,
    ShapeInsertType_CurvedRightArrow        = 413,
    ShapeInsertType_CurvedLeftArrow         = 414,
    ShapeInsertType_CurvedUpArrow           = 415,
    ShapeInsertType_CurvedDownArrow         = 416,
    ShapeInsertType_StripedRightArrow       = 417,
    ShapeInsertType_NotchedRightArrow       = 418,
    ShapeInsertType_Pentagon                = 419,
    ShapeInsertType_ChevronUp               = 420,
    ShapeInsertType_RightArrowCallout       = 421,
    ShapeInsertType_DownArrowCallout        = 422,
    ShapeInsertType_LeftArrowCallout        = 423,
    ShapeInsertType_UpArrowCallout          = 424,
    ShapeInsertType_LeftRightArrowCallout   = 425,
    ShapeInsertType_UpDownArrowCallout      = 426,
    ShapeInsertType_QuadArrowCallout        = 427,
    ShapeInsertType_CircularArrow           = 428,
    ShapeInsertType_EndArrow                = 499,  // no real shape
    
    //---[Math]-----------------------------------------------------------------
    ShapeInsertType_BeginMath       = 500,  // no real shape
    ShapeInsertType_MathPlus        = 501,
    ShapeInsertType_MathMinus       = 502,
    ShapeInsertType_MathMultiply    = 503,
    ShapeInsertType_MathDivision    = 504,
    ShapeInsertType_MathEqual       = 505,
    ShapeInsertType_MathNotEqual    = 506,
    ShapeInsertType_EndMath         = 599,  // no real shape
    
    //---[Flow Chart]-----------------------------------------------------------
    ShapeInsertType_BeginFlowChart                      = 600,  // no real shape
    ShapeInsertType_FlowChartProcess                    = 601,
    ShapeInsertType_FlowChartAlternateProcess           = 602,
    ShapeInsertType_FlowChartDecision                   = 603,
    ShapeInsertType_FlowChartData                       = 604,
    ShapeInsertType_FlowChartPredefinedProcess          = 605,
    ShapeInsertType_FlowChartIntenalStorage             = 606,
    ShapeInsertType_FlowChartDocument                   = 607,
    ShapeInsertType_FlowChartMultiDocumnet              = 608,
    ShapeInsertType_FlowChartTerminator                 = 609,
    ShapeInsertType_FlowChartPreParation                = 610,
    ShapeInsertType_FlowChartManualInput                = 611,
    ShapeInsertType_FlowChartManualOperation            = 612,
    ShapeInsertType_FlowChartConnector                  = 613,
    ShapeInsertType_FlowChartOffPageConnector           = 614,
    ShapeInsertType_FlowChartCard                       = 615,
    ShapeInsertType_FlowChartPunchedTape                = 616,
    ShapeInsertType_FlowChartSummingJunction            = 617,
    ShapeInsertType_FlowChartOr                         = 618,
    ShapeInsertType_FlowChartCollate                    = 619,
    ShapeInsertType_FlowChartSort                       = 620,
    ShapeInsertType_FlowChartExtract                    = 621,
    ShapeInsertType_FlowChartMerge                      = 622,
    ShapeInsertType_FlowChartStoredData                 = 623,
    ShapeInsertType_FlowChartDelay                      = 624,
    ShapeInsertType_FlowChartSequentialAccessStorage    = 625,
    ShapeInsertType_FlowChartMagneticDisk               = 626,
    ShapeInsertType_FlowChartDirecAccessStorage         = 627,
    ShapeInsertType_FlowChartDisplay                    = 628,
    ShapeInsertType_EndFlowChart                        = 699,  // no real shape
    
    //---[Star]-----------------------------------------------------------------
    ShapeInsertType_BeginStar           = 700,  // no real shape
    ShapeInsertType_Explosion1          = 701,
    ShapeInsertType_Explosion2          = 702,
    ShapeInsertType_4PointStar          = 703,
    ShapeInsertType_5PointStar          = 704,
    ShapeInsertType_6PointStar          = 705,
    ShapeInsertType_7PointStar          = 706,
    ShapeInsertType_8PointStar          = 707,
    ShapeInsertType_10PointStar         = 708,
    ShapeInsertType_12PointStar         = 709,
    ShapeInsertType_16PointStar         = 710,
    ShapeInsertType_24PointStar         = 711,
    ShapeInsertType_32PointStar         = 712,
    ShapeInsertType_UpRibbon            = 713,
    ShapeInsertType_DownRibbon          = 714,
    ShapeInsertType_CurvedUpRibbon      = 715,
    ShapeInsertType_CurvedDownRibbon    = 716,
    ShapeInsertType_VerticalScroll      = 717,
    ShapeInsertType_HorizontalScroll    = 718,
    ShapeInsertType_Waves               = 719,
    ShapeInsertType_DoubleWave          = 720,
    ShapeInsertType_EndStar             = 799,  // no real shape
    
    //---[Description]----------------------------------------------------------
    ShapeInsertType_BeginDescription                = 800,  // no real shape
    ShapeInsertType_RectangularCallout              = 801,
    ShapeInsertType_RoundedRectangularCallout       = 802,
    ShapeInsertType_OvalCallout                     = 803,
    ShapeInsertType_CloudCallout                    = 804,
    ShapeInsertType_LineCallout1                    = 805,
    ShapeInsertType_LineCallout2                    = 806,
    ShapeInsertType_LineCallout3                    = 807,
    ShapeInsertType_LineCallout1AccentBar           = 808,
    ShapeInsertType_LineCallout2AccentBar           = 809,
    ShapeInsertType_LineCallout3AccentBar           = 810,
    ShapeInsertType_LineCallout1NoBorder            = 811,
    ShapeInsertType_LineCallout2NoBorder            = 812,
    ShapeInsertType_LineCallout3NoBorder            = 813,
    ShapeInsertType_LineCallout1BorderAndAccentBar  = 814,
    ShapeInsertType_LineCallout2BorderAndAccentBar  = 815,
    ShapeInsertType_LineCallout3BorderAndAccentBar  = 816,
    ShapeInsertType_EndDescription                  = 899,  // no real shape
    
    //---[Action Button]--------------------------------------------------------
    ShapeInsertType_BeginActionButton           = 900,  // no real shape
    ShapeInsertType_ActionButtonBackOrPreVious  = 901,
    ShapeInsertType_ActionButtonForwardOrNext   = 902,
    ShapeInsertType_ActionButtonBeginning       = 903,
    ShapeInsertType_ActionButtonEnd             = 904,
    ShapeInsertType_ActionButtonHome            = 905,
    ShapeInsertType_ActionButtonInformation     = 906,
    ShapeInsertType_ActionButtonReturn          = 907,
    ShapeInsertType_ActionButtonMovie           = 908,
    ShapeInsertType_ActionButtonDocumnet        = 909,
    ShapeInsertType_ActionButtonSound           = 910,
    ShapeInsertType_ActionButtonHelp            = 911,
    ShapeInsertType_ActionButtonCustom          = 912,
    ShapeInsertType_EndActionButton             = 999,  // no real shape
    
    //---[Horizontal Line]------------------------------------------------------
    ShapeInsertType_HorizonTalLine              = 1000,
    
#ifdef LG_TEXT_ANNOTATION
    //---[Text Annotation]------------------------------------------------------
    ShapeInsertType_BeginTextAnnotation         = 1100,	// no real shape
    ShapeInsertType_TextAnnotationTypeA         = 1101,
    ShapeInsertType_TextAnnotationTypeB         = 1102,
    ShapeInsertType_TextAnnotationTypeC         = 1103,
    ShapeInsertType_EndTextAnnotation           = 1104,	// no real shape
#endif
    
    //---[Additional Shape]-----------------------------------------------------
    
    SHAPETYPE_Max
}ShapeInsertType;

//[2013.09.26][jaesun][TID:17523] Size 배율 조절
typedef enum
{
    ChangeSize_None = 0,
    ChangeSize_Normal,
    ChangeSize_Percent,
    ChangeSize_Restore
}ChangeSizeType;

//15.Size (크기)
typedef enum { //[2012.12.06][MID:18431][윤성준] 다중 선택 객체의 회전 문제
    Rotation_None = 0,
    Rotation_Right90Degree,
    Rotation_Right180Defree,
    Rotation_Left90Degree,
    Rotation_Flip,          //Flip 후 회전각도 (360 - CurrentAngle) 로 변경
    Rotation_Mirror,		//Mirror 후 회전각도 (360 - CurrentAngle) 로 변경
}RotationPreset;

typedef enum {
    BestScale_1280x1024 = 0,
    BestScale_1024x768,
    BestScale_800x600,
    BestScale_720x512,
    BestScale_640x480
}BestScaleType;

//16.Location (위치)
typedef enum
{
    LocationFrom_TopLeftCorner,
    LocationFrom_Center
}LocationFrom;

//18.Edit Shape (도형 편집)
typedef enum {
    EditShapeType_None = 0,
    EditShapeType_ChangeShape,			// 도형 모양 변경
    EditShapeType_EdotPoints,			// 점 편집
    EditShapeType_ReRouteConnectors     // 연결선 바꾸기
}EditShapeType;


typedef enum
{
    EditModeType_Viewmode   = 0x00,
    EditModeType_Word		= 0x01,
    EditModeType_Sheet		= 0x02,
    EditModeType_Ppt		= 0x03,
    EditModeType_ImageBwp	= 0x04,	// BWP_IMAGE_VIEWER
    EditModeType_Note		= 0x05, // Note_Engine
    //EEditModeType_DocLayout = 0x06,  // Note_Engine
    EditModeType_ZoomMode	= 0x07,  // Note_Engine
//#ifdef EXPORT_ODT
    EditModeType_Odt		= 0x08,
//#endif // EXPORT_ODT
//#ifdef EXPORT_ODP
    EditModeType_ODP		= 0x09,
//#endif // EXPORT_ODP
//#ifdef EXPORT_ODS
    EditModeType_Ods		= 0x0A,
//#endif // EXPORT_ODS
} EditModeType;

typedef enum
{
    ObjectType_None                     = 0x0000,
    ObjectType_Cell                     = 0x0001,
    ObjectType_CellMark                 = 0x0002,
    ObjectType_LineMarking              = 0x0003,
    ObjectType_Table                    = 0x0004,
    ObjectType_Image                    = 0x0005,
    ObjectType_Rectangle                = 0x0006,
    ObjectType_TextRectangle            = 0x0007,
    ObjectType_Chart                    = 0x0008,
    ObjectType_Line                     = 0x0009,
    ObjectType_Group                    = 0x000A,
    ObjectType_HeaderRow                = 0x000B,
    ObjectType_HeaderColumn             = 0x000C,
    ObjectType_ChartImage               = 0x000D,
    ObjectType_OleImage                 = 0x000E,
    ObjectType_FreeForm                 = 0x000F,
    ObjectType_VideoImage               = 0x0010,//[2012.08.24][MistY][TID:7322] - video 지원
    ObjectType_BlankImage               = 0x0011,
    ObjectType_BlankObject              = 0x0012,
    ObjectType_InfraPenDraw             = 0x0013,
    ObjectType_MemoFrame                = 0x0014,//for PPT
    ObjectType_AudioImage               = 0x0015,//[2013.11.22][MistY][TID:7322] - audio 지원
    ObjectType_BlankChart               = 0x0016,//Placeholder Chart
    ObjectType_BlankMedia               = 0x0017,//Placeholder Media
    ObjectType_BlankTable               = 0x0018,//PlaceHolder Table
    ObjectType_FillImage                = 0x0019,
    ObjectType_FillChart                = 0x001A,
    ObjectType_FillTable                = 0x001B,
    ObjectType_HorizontalLine           = 0x001C,
    ObjectType_HwpChart                 = 0x001D,
#ifdef LG_TEXT_ANNOTATION
    ObjectType_TextAnnotationA          = 0x001D,
    ObjectType_TextAnnotationB          = 0x001E,
    ObjectType_TextAnnotationC          = 0x001F,
#endif
    ObjectType_TableDraw                = 0x0020,
    ObjectType_TableErase               = 0x0030,
    ObjectType_TableRedraw              = 0x0040,
    ObjectType_TableNewDraw             = 0x0050,
    ObjectType_FreeformLine             = 0x0060,
    ObjectType_PolyData                 = 0x0070,
    ObjectType_MultiSelection           = 0x0071,
    ObjectType_PathAnimationLine        = 0x0080, //[이상호] pathAnimation 직선
    ObjectType_PathAnimationRectangle   = 0x0090, //[이상호] pathAnimation 도형
    ObjectType_DropCap                  = 0x00A0, //20hoon //첫문자 장식
    ObjectType_CellResize               = 0x00B0,
    ObjectType_CellResizeStart          = 0x00C0,
    ObjectType_WordArt2003              = 0x00C1, //20hoon 2003 워드 아트
    ObjectType_EquationFrame            = 0x00C2, //20hoon
    ObjectType_HwpWordArtFrame          = 0x00C3, //20hoon //HWP 글맵시 프레임 !!
    ObjectType_Brace                    = 0x00C4, //강희성 {}[]() 모양의 도형.
    ObjectType_SmartArt                 = 0x00C5, //[정주영] SmartArt 도형
    ObjectType_SmartArtChild            = 0x00C6, //[정주영] SmartArt 내부 도형
    ObjectType_SmartArtChildLine        = 0x00C7, //[정주영] SmartArt 내부 도형 (Line)
    ObjectType_StickyNote               = 0x0100,//for PDF
    ObjectType_SelectedClick            = 0x1000,
    ObjectType_Max                      = 0x7FFF
}ObjectType;

#endif

typedef enum TransitionEffectType
{
    TransitionEffectType_None = 0,		//없음
    TransitionEffectType_Crop,			//자르기
    TransitionEffectType_Fade,			//밝기 변화
    TransitionEffectType_Push,			//밀어내기
    TransitionEffectType_Wipe,			//닦아내기
    TransitionEffectType_Breaks,		//나누기
    TransitionEffectType_Appear,		//나타내기
    TransitionEffectType_RandomBars,	//실선 무늬
    TransitionEffectType_Shapes,		//도형
    TransitionEffectType_Uncover,		//당기기
    TransitionEffectType_Cover,			//덮기
    TransitionEffectType_Blink,			//깜박이기
    TransitionEffectType_Dissolve,		//흩어 뿌리기
    TransitionEffectType_CheckerBoard,	//바둑판 무늬
    TransitionEffectType_Blinds,		//블라인드
    TransitionEffectType_Clock,			//시계
    TransitionEffectType_Water,			//파장
    TransitionEffectType_Honeycomb,		//벌집형
    TransitionEffectType_Glitter,		//반짝이기
    TransitionEffectType_Maize,			//소용돌이
    TransitionEffectType_Shred,			//조각
    TransitionEffectType_Switch,		//전환
    TransitionEffectType_Flip,			//넘기기
    TransitionEffectType_Gallery,		//갤러리
    TransitionEffectType_Cube,			//큐브
    TransitionEffectType_Doors,			//문
    TransitionEffectType_Box,			//상자
    TransitionEffectType_Zoom,			//확대/축소
    TransitionEffectType_GoTo,			//이동
    TransitionEffectType_FerrisWheel,	//관람차
    TransitionEffectType_Conveyor,		//컨베이어
    TransitionEffectType_Rotate,		//회전
    TransitionEffectType_Window,		//창문
    TransitionEffectType_Orbit,			//궤도
    TransitionEffectType_FlyThrough,	//날기
    //MS 2013
    TransitionEffectType_FallOver,		//넘어지기
    TransitionEffectType_Drape,			//늘어뜨리기
    TransitionEffectType_Curtains,		//커튼
    TransitionEffectType_Wind,			//바람
    TransitionEffectType_Prestige,		//등장하기
    TransitionEffectType_Fracture,		//부서지기
    TransitionEffectType_Crush,			//구겨지기
    TransitionEffectType_PeelOff,		//벗겨내기
    TransitionEffectType_PageCurl,		//페이지 말기
    TransitionEffectType_Airplane,		//비행기
    TransitionEffectType_Origami,		//종이접기
    TransitionEffectType_Comb,			//빗질하기
    TransitionEffectType_Random,		//랜덤
    TransitionEffectType_Etc            //2010 미지원 효과
}TransitionEffectType;

typedef enum TransitionEffectOptionType
{
    TransitionEffectOptionType_None = 0,				//없음, (시계)시계 방향
    TransitionEffectOptionType_Soften,					//부드럽게
    TransitionEffectOptionType_ThroughBlack,			//검은 화면 후 다음 슬라이드
    TransitionEffectOptionType_FromRight,				//오른쪽에서
    TransitionEffectOptionType_FromTop,					//위에서
    TransitionEffectOptionType_FromLeft,				//왼쪽에서
    TransitionEffectOptionType_FromBottom,				//아래에서
    TransitionEffectOptionType_FromTopRight,			//오른쪽 위에서
    TransitionEffectOptionType_FromBottomRight,			//오른쪽 아래에서
    TransitionEffectOptionType_FromTopLeft,				//왼쪽 위에서
    TransitionEffectOptionType_FromBottomLeft,			//왼쪽 아래에서
    TransitionEffectOptionType_Center,					//가운데부터
    TransitionEffectOptionType_Right,					//오른쪽으로
    TransitionEffectOptionType_Left,					//왼쪽으로
    TransitionEffectOptionType_SmoothlyFromRight,		//오른쪽에서 부드럽게
    TransitionEffectOptionType_SmoothlyFromLeft,		//왼쪽에서 부드럽게
    TransitionEffectOptionType_ThroughBlackFromRight,	//오른쪽부터 검은 화면 후 다음 슬라이드
    TransitionEffectOptionType_ThroughBlackFromLeft,	//왼쪽부터 검은 화면 후 다음 슬라이드
    TransitionEffectOptionType_HexagonsFromRight,		//오른쪽부터 6각형
    TransitionEffectOptionType_HexagonsFromTop,		//위쪽부터 6각형
    TransitionEffectOptionType_HexagonsFromBottom,		//아래쪽부터 6각형
    TransitionEffectOptionType_HexagonsFromLeft,		//왼쪽부터 6각형
    TransitionEffectOptionType_DiamondsFromRight,		//왼쪽으로 다이아몬드
    TransitionEffectOptionType_DiamondsFromTop,		//아래로 다이아몬드
    TransitionEffectOptionType_DiamondsFromBottom,		//위로 다이아몬드
    TransitionEffectOptionType_DiamondsFromLeft,		//오른쪽으로 다이아몬드
    TransitionEffectOptionType_Vertical,					//세로
    TransitionEffectOptionType_Horizontal,				//가로
    TransitionEffectOptionType_VerticalIn,				//세로 안쪽으로
    TransitionEffectOptionType_VerticalOut,				//세로 바깥쪽으로
    TransitionEffectOptionType_HorizontalIn,			//가로 안쪽으로
    TransitionEffectOptionType_HorizontalOut,			//가로로 펼치기
    TransitionEffectOptionType_StripsIn,				//파편 모으기
    TransitionEffectOptionType_StripsOut,				//파편 펼치기
    TransitionEffectOptionType_ParticlesIn,				//입자 모으기
    TransitionEffectOptionType_ParticlesOut,			//입자 펼치기
    TransitionEffectOptionType_In,						//안쪽
    TransitionEffectOptionType_Out,						//펼치기
    TransitionEffectOptionType_InWithBounce,			//바운스하며 모으기
    TransitionEffectOptionType_OutWithBounce,			//바운스하며 펼치기
    TransitionEffectOptionType_Circle,					//원형
    TransitionEffectOptionType_Diamond,					//다이아몬드
    TransitionEffectOptionType_Plus,						//십자형
    TransitionEffectOptionType_Clockwise,				//시계 방향
    TransitionEffectOptionType_CounterClockwise,		//시계 반대 방향
    TransitionEffectOptionType_Wedge,					//V자형
    TransitionEffectOptionType_PageCurlDoubleLeft,		//페이지 말기 - 이중 왼쪽
    TransitionEffectOptionType_PageCurlDoubleRight,		//페이지 말기 - 이중 오른쪽
    TransitionEffectOptionType_PageCurlSingleLeft,		//페이지 말기 - 단일 왼쪽
    TransitionEffectOptionType_PageCurlSingleRight,		//페이지 말기 - 단일 오른쪽
    TransitionEffectOptionType_ZoomRotate,				//확대/축소 확대 후 회전
}TransitionEffectOptionType;

typedef enum
{
    ObjectPosition_First = 0,
    ObjectPosition_Front,
    ObjectPosition_Back,
    ObjectPosition_Last,
    ObjectPosition_BringFrontOfText,
    ObjectPosition_SendBehindOfText,
}ObjectPosition;

//[TID:1685][김회영]객체 Multi-Select 지원 > Core API 추가
typedef enum
{
    ObjectAlignType_None		= 0,
    ObjectAlignType_Left		= 1,
    ObjectAlignType_Center	= 2,
    ObjectAlignType_Right		= 3,
    ObjectAlignType_Top		= 4,
    ObjectAlignType_Middle	= 5,
    ObjectAlignType_Bottom	= 6,
    ObjectAlignType_DistributeHorizontally    = 7,
    ObjectAlignType_DistributeVertically      = 8,
}ObjectAlignType;

//[TID:17800][박은영] 정렬_맞춤 추가 지원
typedef enum
{
    ObjectSubAlignType_None				= 0,
    ObjectSubAlignType_SelectedObjects	= 1,	// Slide & Document
    ObjectSubAlignType_Slide				= 2,	// Slide only
    ObjectSubAlignType_Page				= 3,	// Document	only
    ObjectSubAlignType_Margin				= 4,	// Document	only
}ObjectSubAlignType;

typedef enum SlideShowPlayType
{
    SlideShowPlayType_Previous	= 1,
    SlideShowPlayType_Next		= 2,
    SlideShowPlayType_First		= 3,
    SlideShowPlayType_Last		= 4,
    SlideShowPlayType_Page		= 5,
    SlideShowPlayType_Stop		= 6
}SlideShowPlayType;

typedef enum TextMarkDirectionType
{
    textmarkDirTopLeft      = 0,
    textmarkDirBottomRight  = 1,
    textmarkDirLeftBottom   = 2,
    textmarkDirRightTop     = 3,
    textmarkDirLeftTop      = 4,
    textmarkDirRightBottom  = 5
}TextmarkDirectionType;

typedef enum
{
    PageMode_ContinuousMode             = 0,
    PageMode_OnePageMode                = 1,
    PageMode_DoublePageMode,
    PageMode_DoubleContinuePageMode,
    PageMode_DirectionHorizontal,
    PageMode_DirectionVertical,
    PageMode_SlideMode,
    PageMode_ViewWithMode,
    PageMode_OnlyOnePageTopCenter,  //[dwchun : 2013.03.21] : iOS 요구 사항. 한 페이지 모드일 때, 화면 중앙 상단 정렬 기능
}PageMode;

typedef enum LineType {
    LineType_Unknown  =  -1,
    LineType_None  =  0,
    LineType_Doc1_SimpleSolid = 1,
    LineType_Doc2_SimpleSquareDot,//SQUARE DOT
    LineType_Doc3_SimpleLongSquareDot, //LONG SQUARE DOT
    LineType_Doc4_SimpleDash,//DASH
    LineType_Doc5_SimpleDashDot,//DASH DOT
    LineType_Doc6_SimpleDashDotDot,//DASH DOT DOT
    LineType_Doc7_DoubleSolid,//DOUBLE SOLID
    LineType_Doc8_TripleEqualSolid,//TIRPLE EQAL SOLID
    LineType_Doc9_ThickThinSmallGapSolid,//THICK THIN SMALL GAP SOLID
    LineType_Doc10_ThinThinkSmallGapSolid,//THIN THICK SAMLL GAP SOLID
    LineType_Doc11_TripleSmallGapSolid,//TRIPLE SMALL GAP SOLID
    LineType_Doc12_ThickThinSolid,//THICK THIN SOLID
    LineType_Doc13_ThinThinkSolid,//THIN THICK SOLID
    LineType_Doc14_TripleSolid,//TRIPLE
    LineType_Doc15_ThickThinLargeGapSolid,//THICK THIN LARGE GAP SOLID
    LineType_Doc16_ThinThinkLargeGapSolid,//THIN THICK LAGRE GAP SOLID
    LineType_Doc17_TripleLargeGapSolid,//TRIPLE LARGE GAP SOLID
    LineType_Doc18_WaveOneSolid,//WAVE ONE SOLID
    LineType_Doc19_WaveDoubleSolid,//WAVE DOUBLE Simple
    LineType_Doc20_DiagonalLineSolid,//DIAGONAL LINE SOLID
    LineType_Doc21_3DEmbossSolid,//3D 볼록
    LineType_Doc22_3DEngraveSolid,//3D 오목
    LineType_Doc23_OutsetSolid, //OUTSET
    LineType_Doc24_InsetSolid,//INSET
    
    LineType_Slides1_SimpleSolid = 31,
    LineType_Slides2_SimpleLongSquareDot, //LONG SQUARE DOT
    LineType_Slides3_SimpleSquareDot,//SQUARE DOC
    LineType_Slides4_SimpleSmallDashDot,//SMALL DASH DOT
    LineType_Slides5_SimpleSmallDashDotDot,//SAMLL DASH DOT DOT
    LineType_Slides6_SimpleLargeGapDot,//LARGE GAP DOT
    LineType_Slides7_SimpleDash,//DASH
    LineType_Slides8_SimpleLongDash,//LONG DASH
    LineType_Slides9_SimpleDashDot,//DASH DOT
    LineType_Slides10_SimpleLongDashDot,//LONG DASH DOT
    
    LineType_Hwp1_SimpleSolid = 51,
    LineType_Hwp2_SimpleDash, //DASHSTYLE_DASH 파선
    LineType_Hwp3_SimpleSquareDot,//DASHSTYLE_SQUARE_DOT 점선
    LineType_Hwp4_SimpleLongDashDot,//LONG_DASH_DOT 일점쇄선
    LineType_Hwp5_SimpleLongDashDotDot,//LONG_DASH_DOT_DOT 이점쇄선
    LineType_Hwp6_SimpleLongDash,//LONG_DASH 긴 파선
    LineType_Hwp7_SimpleRoundDot,//ROUND_DOT 원형 점선
    LineType_Hwp8_DoubleSolid,//이중실선
    LineType_Hwp9_ThinThickSolid,//얇고 굵은 이중선
    LineType_Hwp10_ThickThinSolid,//굵고 얇은 이중선
    LineType_Hwp11_TripleSolid,//삼중선
    
    LineType_Sheet_Thin =               1,
    LineType_Sheet_Hair =               7,
    LineType_Sheet_Dotted =             4,
    LineType_Sheet_Dashed =             3,
    LineType_Sheet_DashDot =            9,
    LineType_Sheet_DashDotDot =         11,
    LineType_Sheet_MediumDashDotDot =   12,
    LineType_Sheet_MediumDashDot =      10,
    LineType_Sheet_MediumDash =         8,
    LineType_Sheet_Medium =             2,
    LineType_Sheet_Thick =              5,
    LineType_Sheet_Double =             6,
    LineType_Sheet_SlantedDashDot =     13
    
    
} LineType;

typedef enum
{
    TableStyleForSheet_Null = 0,	//표 스타일 없음
    TableStyleForSheet_Light1,		//표 스타일 밝게 1
    TableStyleForSheet_Light2,		//표 스타일 밝게 2
    TableStyleForSheet_Light3,		//표 스타일 밝게 3
    TableStyleForSheet_Light4,		//표 스타일 밝게 4
    TableStyleForSheet_Light5,		//표 스타일 밝게 5
    TableStyleForSheet_Light6,		//표 스타일 밝게 6
    TableStyleForSheet_Light7,		//표 스타일 밝게 7
    TableStyleForSheet_Light8,		//표 스타일 밝게 8
    TableStyleForSheet_Light9,		//표 스타일 밝게 9
    TableStyleForSheet_Light10,		//표 스타일 밝게 10
    TableStyleForSheet_Light11,		//표 스타일 밝게 11
    TableStyleForSheet_Light12,		//표 스타일 밝게 12
    TableStyleForSheet_Light13,		//표 스타일 밝게 13
    TableStyleForSheet_Light14,		//표 스타일 밝게 14
    TableStyleForSheet_Light15,		//표 스타일 밝게 15
    TableStyleForSheet_Light16,		//표 스타일 밝게 16
    TableStyleForSheet_Light17,		//표 스타일 밝게 17
    TableStyleForSheet_Light18,		//표 스타일 밝게 18
    TableStyleForSheet_Light19,		//표 스타일 밝게 19
    TableStyleForSheet_Light20,		//표 스타일 밝게 20
    TableStyleForSheet_Light21,		//표 스타일 밝게 21
    
    TableStyleForSheet_Medium1,		//표 스타일 보통 1
    TableStyleForSheet_Medium2,		//표 스타일 보통 2
    TableStyleForSheet_Medium3,		//표 스타일 보통 3
    TableStyleForSheet_Medium4,		//표 스타일 보통 4    //25
    TableStyleForSheet_Medium5,		//표 스타일 보통 5
    TableStyleForSheet_Medium6,		//표 스타일 보통 6
    TableStyleForSheet_Medium7,		//표 스타일 보통 7
    TableStyleForSheet_Medium8,		//표 스타일 보통 8
    TableStyleForSheet_Medium9,		//표 스타일 보통 9 //30
    TableStyleForSheet_Medium10,	//표 스타일 보통 10
    TableStyleForSheet_Medium11,	//표 스타일 보통 11
    TableStyleForSheet_Medium12,	//표 스타일 보통 12
    TableStyleForSheet_Medium13,	//표 스타일 보통 13
    TableStyleForSheet_Medium14,	//표 스타일 보통 14   // 35
    TableStyleForSheet_Medium15,	//표 스타일 보통 15
    TableStyleForSheet_Medium16,	//표 스타일 보통 16
    TableStyleForSheet_Medium17,	//표 스타일 보통 17
    TableStyleForSheet_Medium18,	//표 스타일 보통 18
    TableStyleForSheet_Medium19,	//표 스타일 보통 19   // 40
    TableStyleForSheet_Medium20,	//표 스타일 보통 20
    TableStyleForSheet_Medium21,	//표 스타일 보통 21
    TableStyleForSheet_Medium22,	//표 스타일 보통 22
    TableStyleForSheet_Medium23,	//표 스타일 보통 23
    TableStyleForSheet_Medium24,	//표 스타일 보통 24   // 45
    TableStyleForSheet_Medium25,	//표 스타일 보통 25
    TableStyleForSheet_Medium26,	//표 스타일 보통 26
    TableStyleForSheet_Medium27,	//표 스타일 보통 27
    TableStyleForSheet_Medium28,	//표 스타일 보통 28
    
    TableStyleForSheet_Dark1,		//표 스타일 어둡게 1   // 50
    TableStyleForSheet_Dark2,		//표 스타일 어둡게 2
    TableStyleForSheet_Dark3,		//표 스타일 어둡게 3
    TableStyleForSheet_Dark4,		//표 스타일 어둡게 4
    TableStyleForSheet_Dark5,		//표 스타일 어둡게 5
    TableStyleForSheet_Dark6,		//표 스타일 어둡게 6   // 55
    TableStyleForSheet_Dark7,		//표 스타일 어둡게 7
    TableStyleForSheet_Dark8,		//표 스타일 어둡게 8
    TableStyleForSheet_Dark9,		//표 스타일 어둡게 9
    TableStyleForSheet_Dark10,		//표 스타일 어둡게 10
    TableStyleForSheet_Dark11,		//표 스타일 어둡게 11
    
    TableStyleForSheet_Custom,		//표 스타일 : 사용자 지정
}TableStyleForSheet;

typedef enum
{
    TableStyle_Invalid	= -1,
    TableStyle_None		=  0,
    
    //word table style 112
    /*  row 1 */
    TableStyleForWord_NormalTable = 99,
    TableStyleForWord_TableGrid = 100,
    TableStyleForWord_TableGridLight,
    TableStyleForWord_PlainTable1,
    TableStyleForWord_PlainTable2,
    TableStyleForWord_PlainTable3,
    TableStyleForWord_PlainTable4,  // 105
    TableStyleForWord_PlainTable5,
    
    TableStyleForWord_GridTableLight1,
    TableStyleForWord_GridTableLight1_Accent1,
    TableStyleForWord_GridTableLight1_Accent2,
    TableStyleForWord_GridTableLight1_Accent3,  // 110
    TableStyleForWord_GridTableLight1_Accent4,
    TableStyleForWord_GridTableLight1_Accent5,
    TableStyleForWord_GridTableLight1_Accent6,
    
    TableStyleForWord_GridTable2,
    TableStyleForWord_GridTable2_Accent1,   // 115
    TableStyleForWord_GridTable2_Accent2,
    TableStyleForWord_GridTable2_Accent3,
    TableStyleForWord_GridTable2_Accent4,
    TableStyleForWord_GridTable2_Accent5,
    TableStyleForWord_GridTable2_Accent6,   // 120
    
    TableStyleForWord_GridTable3,
    TableStyleForWord_GridTable3_Accent1,
    TableStyleForWord_GridTable3_Accent2,
    TableStyleForWord_GridTable3_Accent3,
    TableStyleForWord_GridTable3_Accent4,   // 125
    TableStyleForWord_GridTable3_Accent5,
    TableStyleForWord_GridTable3_Accent6,
    
    TableStyleForWord_GridTable4,
    TableStyleForWord_GridTable4_Accent1,
    TableStyleForWord_GridTable4_Accent2,   // 130
    TableStyleForWord_GridTable4_Accent3,
    TableStyleForWord_GridTable4_Accent4,
    TableStyleForWord_GridTable4_Accent5,
    TableStyleForWord_GridTable4_Accent6,
    
    TableStyleForWord_GridTable5Dark,   // 135
    TableStyleForWord_GridTable5Dark_Accent1,
    TableStyleForWord_GridTable5Dark_Accent2,
    TableStyleForWord_GridTable5Dark_Accent3,
    TableStyleForWord_GridTable5Dark_Accent4,
    TableStyleForWord_GridTable5Dark_Accent5,   // 140
    TableStyleForWord_GridTable5Dark_Accent6,
    
    TableStyleForWord_GridTable6,
    TableStyleForWord_GridTable6_Accent1,
    TableStyleForWord_GridTable6_Accent2,
    TableStyleForWord_GridTable6_Accent3,   // 145
    TableStyleForWord_GridTable6_Accent4,
    TableStyleForWord_GridTable6_Accent5,
    TableStyleForWord_GridTable6_Accent6,
    
    TableStyleForWord_GridTable7Colorful,
    TableStyleForWord_GridTable7Colorful_Accent1,   // 150
    TableStyleForWord_GridTable7Colorful_Accent2,
    TableStyleForWord_GridTable7Colorful_Accent3,
    TableStyleForWord_GridTable7Colorful_Accent4,
    TableStyleForWord_GridTable7Colorful_Accent5,
    TableStyleForWord_GridTable7Colorful_Accent6,   // 155
    
    TableStyleForWord_ListTable1Light,
    TableStyleForWord_ListTable1Light_Accent1,
    TableStyleForWord_ListTable1Light_Accent2,
    TableStyleForWord_ListTable1Light_Accent3,
    TableStyleForWord_ListTable1Light_Accent4,      // 160
    TableStyleForWord_ListTable1Light_Accent5,
    TableStyleForWord_ListTable1Light_Accent6,
    
    TableStyleForWord_ListTable2,
    TableStyleForWord_ListTable2_Accent1,
    TableStyleForWord_ListTable2_Accent2,   // 165
    TableStyleForWord_ListTable2_Accent3,
    TableStyleForWord_ListTable2_Accent4,
    TableStyleForWord_ListTable2_Accent5,
    TableStyleForWord_ListTable2_Accent6,
    
    TableStyleForWord_ListTable3,   // 170
    TableStyleForWord_ListTable3_Accent1,
    TableStyleForWord_ListTable3_Accent2,
    TableStyleForWord_ListTable3_Accent3,
    TableStyleForWord_ListTable3_Accent4,
    TableStyleForWord_ListTable3_Accent5,   // 175
    TableStyleForWord_ListTable3_Accent6,
    
    TableStyleForWord_ListTable4,
    TableStyleForWord_ListTable4_Accent1,
    TableStyleForWord_ListTable4_Accent2,
    TableStyleForWord_ListTable4_Accent3,   // 180
    TableStyleForWord_ListTable4_Accent4,
    TableStyleForWord_ListTable4_Accent5,
    TableStyleForWord_ListTable4_Accent6,
    
    TableStyleForWord_ListTable5,
    TableStyleForWord_ListTable5_Accent1,   // 185
    TableStyleForWord_ListTable5_Accent2,
    TableStyleForWord_ListTable5_Accent3,
    TableStyleForWord_ListTable5_Accent4,
    TableStyleForWord_ListTable5_Accent5,
    TableStyleForWord_ListTable5_Accent6,   // 190
    
    TableStyleForWord_ListTable6Colorful,
    TableStyleForWord_ListTable6Colorful_Accent1,
    TableStyleForWord_ListTable6Colorful_Accent2,
    TableStyleForWord_ListTable6Colorful_Accent3,
    TableStyleForWord_ListTable6Colorful_Accent4,
    TableStyleForWord_ListTable6Colorful_Accent5,
    TableStyleForWord_ListTable6Colorful_Accent6,
    
    TableStyleForWord_ListTable7Colorful,
    TableStyleForWord_ListTable7Colorful_Accent1,
    TableStyleForWord_ListTable7Colorful_Accent2,
    TableStyleForWord_ListTable7Colorful_Accent3,
    TableStyleForWord_ListTable7Colorful_Accent4,
    TableStyleForWord_ListTable7Colorful_Accent5,
    TableStyleForWord_ListTable7Colorful_Accent6,
    
    TableStyleForWord_Q1_Calendar1,	 /* support only docx */
    TableStyleForWord_Q2_Calendar2,	/* support only docx */
    TableStyleForWord_Q3_Calendar3,	/* support only docx */
    TableStyleForWord_Q4_Calendar4,	/* support only docx */
    TableStyleForWord_Q5_LightShading_Accent1,/* support only docx *///대학 1
    TableStyleForWord_Q6_MediumShading2_Accent5,/* support only docx *///대학 2
    TableStyleForWord_Q7_LightList, /* support only docx */// 그리스 알파벳
    TableStyleForWord_Q8_TableShapeList,/* support only docx *///항목 표 모양
    TableStyleForWord_Q9_MediumList2_Accent1,/* support only docx */	//매트릭스
    
    //slide table style 74
    /*  row 1 */
    TableStyleForSlide_Default = 2999, //PPTX 문서에서 스타일이 명시되지 않은 경우 적용
    TableStyleForSlide_NoGrid = 3000,
    TableStyleForSlide_Theme1_Accent1,
    TableStyleForSlide_Theme1_Accent2,
    TableStyleForSlide_Theme1_Accent3,
    TableStyleForSlide_Theme1_Accent4,
    TableStyleForSlide_Theme1_Accent5,  // 3005
    TableStyleForSlide_Theme1_Accent6,
    
    /*  row 2 */
    TableStyleForSlide_NoTableGrid,
    TableStyleForSlide_Theme2_Accent1,
    TableStyleForSlide_Theme2_Accent2,
    TableStyleForSlide_Theme2_Accent3,  // 3010
    TableStyleForSlide_Theme2_Accent4,
    TableStyleForSlide_Theme2_Accent5,
    TableStyleForSlide_Theme2_Accent6,
    
    /*  row 3 */
    TableStyleForSlide_Bright1,
    TableStyleForSlide_Bright1_Accent1, // 3015
    TableStyleForSlide_Bright1_Accent2,
    TableStyleForSlide_Bright1_Accent3,
    TableStyleForSlide_Bright1_Accent4,
    TableStyleForSlide_Bright1_Accent5,
    TableStyleForSlide_Bright1_Accent6, // 3020
    
    /*  row 4 */
    TableStyleForSlide_Bright2,
    TableStyleForSlide_Bright2_Accent1,
    TableStyleForSlide_Bright2_Accent2,
    TableStyleForSlide_Bright2_Accent3,
    TableStyleForSlide_Bright2_Accent4, // 3025
    TableStyleForSlide_Bright2_Accent5,
    TableStyleForSlide_Bright2_Accent6,
    
    /*  row 5 */
    TableStyleForSlide_Bright3,
    TableStyleForSlide_Bright3_Accent1,
    TableStyleForSlide_Bright3_Accent2, // 3030
    TableStyleForSlide_Bright3_Accent3,
    TableStyleForSlide_Bright3_Accent4,
    TableStyleForSlide_Bright3_Accent5,
    TableStyleForSlide_Bright3_Accent6,
    
    /*  row 6 */
    TableStyleForSlide_Normal1,         // 3035
    TableStyleForSlide_Normal1_Accent1,
    TableStyleForSlide_Normal1_Accent2,
    TableStyleForSlide_Normal1_Accent3,
    TableStyleForSlide_Normal1_Accent4,
    TableStyleForSlide_Normal1_Accent5, // 3040
    TableStyleForSlide_Normal1_Accent6,
    
    /*  row 7 */
    TableStyleForSlide_Normal2,
    TableStyleForSlide_Normal2_Accent1, //slide default style
    TableStyleForSlide_Normal2_Accent2,
    TableStyleForSlide_Normal2_Accent3, // 3045
    TableStyleForSlide_Normal2_Accent4,
    TableStyleForSlide_Normal2_Accent5,
    TableStyleForSlide_Normal2_Accent6,
    
    /*  row 8 */
    TableStyleForSlide_Normal3,
    TableStyleForSlide_Normal3_Accent1, // 3050
    TableStyleForSlide_Normal3_Accent2,
    TableStyleForSlide_Normal3_Accent3,
    TableStyleForSlide_Normal3_Accent4,
    TableStyleForSlide_Normal3_Accent5,
    TableStyleForSlide_Normal3_Accent6, // 3055
    
    /*  row 9 */
    TableStyleForSlide_Normal4,
    TableStyleForSlide_Normal4_Accent1,
    TableStyleForSlide_Normal4_Accent2,
    TableStyleForSlide_Normal4_Accent3,
    TableStyleForSlide_Normal4_Accent4, // 3060
    TableStyleForSlide_Normal4_Accent5,
    TableStyleForSlide_Normal4_Accent6,
    
    /*  row 10 */
    TableStyleForSlide_Dark1,
    TableStyleForSlide_Dark1_Accent1,
    TableStyleForSlide_Dark1_Accent2,   // 3065
    TableStyleForSlide_Dark1_Accent3,
    TableStyleForSlide_Dark1_Accent4,
    TableStyleForSlide_Dark1_Accent5,
    TableStyleForSlide_Dark1_Accent6,
    
    /*  row 11 */
    TableStyleForSlide_Dark2,           // 3070
    TableStyleForSlide_Dark2_Accent12,
    TableStyleForSlide_Dark2_Accent34,
    TableStyleForSlide_Dark2_Accent56,
    
    
}TableStyle;

typedef enum
{
    TableDelete_Row = 0,	//표 행 삭제
    TableDelete_Column,		//표 열 삭제
}SheetTableDeleteRowColType;

typedef enum
{
    SheetShow_Row   =  0,
    SheetShow_Column = 1,
}SheetShowHideType;

typedef enum
{
    WordTableCellDelete = 1,
    WordTableCellInsert,
    WordTableCellWidthEvent,
    WordTableCellHeightEvent,
}TableCellInsertDeleteType;

typedef enum
{
    TableCellDeleteRow = 0,
    TableCellDeleteColumn,
    TableCellDeleteAll,
}TableCellDeleteType;

typedef enum
{
    TableSelection_ColumnData = 0,	//표 열 데이터
    TableSelection_TotalColumn,	//전제 표 열
    TableSelection_Row,			//표 행
}TableSelectionType;

typedef enum
{
    WordTableCellHeight = 1,
    WordTableCellWidth,
    WordTableCellWidthHeight,
}WordTableCellEqualType;

typedef enum
{
    WordTableCellMerge = 0,
    WordTableCellSeparate,
}WordTableCellMergeSeparate;

typedef enum
{
    SelectCell_Table		 	= 0,	// table
    SelectCell_Row				= 1,	// row
    SelectCell_Column				= 2,	// col
    SelectCell_OneCell				= 3,	// one cell
    SelectCell_AllCell				= 4		// all cell
}selectCellMode;

typedef enum
{
    SheetCellType_None			= 0x0000,
    SheetCellType_Number		= 0x0001,
    SheetCellType_Text			= 0x0002,
    SheetCellType_Logical		= 0x0004,
    SheetCellType_Error		= 0x0008,
    SheetCellType_Formala		= 0x0010,
    SheetCellType_Merged		= 0x0020,
    SheetCellType_Hidden_Row	= 0x0040,
    SheetCellType_Hidden_Column	= 0x0080,
    SheetCellType_Single		= 0x0100,
    SheetCellType_Multi		= 0x0200
}SheetCellType;

typedef enum
{
    SheetShift_Horizontal = 0,	//The cells to the right of the selection will be moved to the right to make room for the new cells.
    SheetShift_Vertical,		//The cells below the selection will be moved down to make room for the new cells.
    SheetShift_Rows,			//The entire rows that the selection spans will be inserted.
    SheetShift_Columns,			//The entire columns that the selection spans will be inserted.
    
    //[20140514][jdjang][#26358] 복사한 셀 삽입 / 잘라낸 셀 삽입 기능 추가
    SheetShift_Copy_Horizontal,	// 복사한 셀 삽입 - 오른쪽 밀기
    SheetShift_Copy_Vertical,	// 복사한 셀 삽입 - 아래쪽 밀기
    SheetShift_Cut_Try,			// 잘라낸 셀 삽입 - 시도
    SheetShift_Cut_Horizontal,	// 잘라낸 셀 삽입 - 오른쪽 밀기
    SheetShift_Cut_Vertical,	// 잘라낸 셀 삽입 - 아래쪽 밀기
    
    SheetShift_Copy_Rows,		// 행 삽입하여 붙여넣기 - Copy
    SheetShift_Cut_Rows			// 행 삽입하여 붙여넣기 - Cut
}SheetInsertDeleteCell;

typedef enum
{
    TableInsert_Row_Up = 0,	//위에 표 행 삽입
    TableInsert_Row_Bottom,	//아래 표 행 삽입
    TableInsert_Column_Left,	//왼쪽에 표 열 삽입
    TableInsert_Column_Right,	//오른쪽에 표 열 삽입
}SheetTableInsertRowColumnType;

typedef enum
{
    CaretMark               = 0,
    CaretChangeCellSize     = 1,
    CaretOneSelectCell      = 2,
    CaretMultiSelectCell    = 3,
    CaretSelectMarkCancel   = 4,
}caretMarkType;

typedef enum
{
    DocumentEditMode                = 0,
    DocumentViewMode                = 1,
    DocumentWeblayoutMode           = 2,
    DocumentPrintlayoutMode         = 3,
    DocumentMobileviewLayoutMode    = 4,
    DocumentTextMode                = 5,
    DocumentOutlineMode             = 6
}DocumentViewingModes;

typedef enum SheetFormat
{
    SheetFormat_General = 0,
    SheetFormat_Number,
    SheetFormat_Currency,
    SheetFormat_Accounting,	// jhc[TID:5621][2012.04.16] - 5.0 개발(회계 형식 기능 추가)
    SheetFormat_Date,
    SheetFormat_Time,
    SheetFormat_Percentage,
    SheetFormat_Fraction,
    SheetFormat_Scientific,
    SheetFormat_Text,
    SheetFormat_Etc,	//[2013.06.14][jaesun][TID:15772]  우편번호, 전화번호, 민번 기능 추가
    SheetFormat_UserCustom,
    SheetFormat_Max
}SheetFormat;

typedef enum SheetFormatDateTermType {
    SheetFormatDateTermType_BC,
    SheetFormatDateTermType_AC
}SheetFormatDateTermType;

typedef enum LocaleType {
    LocaleType_UKEnglish            = 0,
    LocaleType_Korean               = 1,
    LocaleType_Bulgarian            = 2,
    LocaleType_Croatian             = 3,
    LocaleType_Czech                = 4,
    LocaleType_Danish               = 5,
    LocaleType_Dutch                = 6,
    LocaleType_Finnish              = 7,
    LocaleType_French               = 8,
    LocaleType_German               = 9,
    LocaleType_Greek                = 10,
    LocaleType_Hungarian            = 11,
    LocaleType_Icelandic            = 12,
    LocaleType_Italian              = 13,
    LocaleType_Macedonian_Fyrom     = 14,
    LocaleType_Norwegian            = 15,
    LocaleType_Polish               = 16,
    LocaleType_Portuguese           = 17,
    LocaleType_Romanian             = 18,
    LocaleType_Serbian              = 19,
    LocaleType_Slovak               = 20,
    LocaleType_Slovenian            = 21,
    LocaleType_Spanish              = 22,
    LocaleType_Swedish              = 23,
    LocaleType_Turkish              = 24,
    LocaleType_Russian              = 25,
    LocaleType_Arabic               = 26,
    LocaleType_Hebrew               = 27,
    LocaleType_S_Chinese            = 28,
    LocaleType_T_Chinese_TW         = 29,
    LocaleType_T_Chinese_HK         = 30,
    LocaleType_Brazilian_Portuguese = 31,
    LocaleType_Spanish_Mexico       = 32,
    LocaleType_Canadian_French      = 33,
    LocaleType_USEnglish            = 34,
    LocaleType_Dutch_Belgium        = 35,
    LocaleType_English_Austrailia   = 36,
    LocaleType_English_Canada       = 37,
    LocaleType_English_Ireland      = 38,
    LocaleType_French_Switzerland   = 39,
    LocaleType_French_Belgium       = 40,
    LocaleType_German_Switzerland   = 41,
    LocaleType_Italian_Switzerland  = 42,
    LocaleType_Russian_Israel       = 43,
    LocaleType_Japanese             = 44,
    LocaleType_Kazakhstan           = 45,
    LocaleType_Lithuanian           = 46,
    LocaleType_Latvian              = 47,
    LocaleType_Estonian             = 48,
    LocaleType_Vietnames            = 49,
    LocaleType_Hebrew2              = 50,
    LocaleType_Thai                 = 51,
    LocaleType_Indonesia            = 52,
    LocaleType_Malay                = 53,
    LocaleType_Farsi                = 54,
    LocaleType_Ukrainian            = 55,
    LocaleType_Spanish_SA           = 56,
    LocaleType_Urdu                 = 57
}LocaleType;

typedef enum SheetFormatTimeType {
    SheetFormatTimeType_1,
    SheetFormatTimeType_2,
    SheetFormatTimeType_3,
    SheetFormatTimeType_4,
    SheetFormatTimeType_5,
    SheetFormatTimeType_6,
    SheetFormatTimeType_7
}SheetFormatTimeType;

typedef enum SheetChartAxis {
    X_AXIS = 0,
    Y_AXIS = 1
}SheetChartAxis;

typedef enum SheetChartSeries
{
    SHEET_CHART_SERIES_IN_ROWS,
    SHEET_CHART_SERIES_IN_COLUMNS,
    SHEET_CHART_SERIES_IN_AUTO
}SheetChartSeries;

typedef enum EditMode
{
    EditMode_Cut,
    EditMode_Copy,
    EditMode_Paste,
    EditMode_PasteValue,
    EditMode_PasteFormat,
    EditMode_Clone,
    EditMode_PasteFormula,
    EditMode_FormulaAndNumberFormat,
    EditMode_OriginalFormat,
    EditMode_NoBorder,
    EditMode_OriginalRowWidth,
    EditMode_SwitchRowAndColumn,
    EditMode_ValueAndNumberFormat,
    EditMode_ValueAndOrigianlFormat,
    EditMode_LinkedPaste,
    EditMode_Picture,
    EditMode_LinkedPicture,
    EditMode_Memo,
    EditMode_OriginalTheme,
    EditMode_SelectedPasteRowWidth,
    EditMode_CopyFormat,
    EditMode_PasteKeepTextOnly, //for ppt & word
    EditMode_PasteMergeFormat, //for ppt & word
    EditMode_PasteUseDestnationTheme, //for ppt & word
}EditMode;


typedef enum
{
    ObjectEditing_None = 0,
    ObjectEditing_Moving = 1,
    ObjectEditing_Resizing= 2,
    ObjectEditing_Rotating= 3
}ObjectEditingType;


typedef enum {
    VirtualKey_Back         = 0x08,
    VirtualKey_Tab          = 0x09,
    VirtualKey_Linefeed     = 0x0A,
    VirtualKey_Return       = 0x0D,
    VirtualKey_Shift        = 0x10,
    VirtualKey_Control      = 0x11,
    VirtualKey_Escape       = 0x1B,
    VirtualKey_Space        = 0x20,
    VirtualKey_Prior        = 0x21,
    VirtualKey_Next         = 0x22,
    VirtualKey_End          = 0x23,
    VirtualKey_Home         = 0x24,
    VirtualKey_Left         = 0x25,
    VirtualKey_Up           = 0x26,
    VirtualKey_Right        = 0x27,
    VirtualKey_Down         = 0x28,
    VirtualKey_Select       = 0x29,
    VirtualKey_Print        = 0x2A,
    VirtualKey_Execute      = 0x2B,
    VirtualKey_Snapshot     = 0x2C,
    VirtualKey_Insert       = 0x2D,
    VirtualKey_Delete       = 0x2E,
    VirtualKey_Help         = 0x2F,
    VirtualKey_F4           = 0x73,
}VirtualKeys;

typedef enum
{
    EditObjectType_None             = 0x0000,
    EditObjectType_Cell             = 0x0001,
    EditObjectType_Cellmark         = 0x0002,
    EditObjectType_Linemarking      = 0x0003,
    EditObjectType_Table            = 0x0004,
    EditObjectType_Image            = 0x0005,
    EditObjectType_Rectangle        = 0x0006,
    EditObjectType_TextRectangle    = 0x0007,
    EditObjectType_Chart            = 0x0008,
    EditObjectType_Line             = 0x0009,
    EditObjectType_Group            = 0x000A,
    EditObjectType_HeaderRow        = 0x000B,
    EditObjectType_HeaderColumn     = 0x000C,
    EditObjectType_ChartImage       = 0x000D,
    EditObjectType_OLEImage         = 0x000E,
    EditObjectType_Freeform         = 0x000F,
    EditObjectType_VideoImage       = 0x0010,//[2012.08.24][MistY][TID:7322] - video 지원
    EditObjectType_BlankImage       = 0x0011,
    EditObjectType_BlankObject      = 0x0012,
    EditObjectType_InfraPenDraw     = 0x0013,
    EditObjectType_MemoFrame        = 0x0014,//for PPT
    EditObjectType_AudioImage       = 0x0015,//[2013.11.22][MistY][TID:7322] - audio 지원
    EditObjectType_BlankChart       = 0x0016,//Placeholder Chart
    EditObjectType_BlankMedia       = 0x0017,//Placeholder Media
    EditObjectType_BlankTable       = 0x0018,//PlaceHolder Table
    EditObjectType_FillImage        = 0x0019,
    EditObjectType_FillChart        = 0x001A,
    EditObjectType_FillTable        = 0x001B,
    EditObjectType_HorizontalLine   = 0x001C,
    EditObjectType_HwpChart         = 0x001D,
    EditObjectType_HwpEquation      = 0x001E,
#ifdef LG_TEXT_ANNOTATION
    EditObjectType_TextannotationA = 0x001D,
    EditObjectType_TextannotationB = 0x001E,
    EditObjectType_TextannotationC = 0x001F,
#endif
    EditObjectType_TableDraw        = 0x0020,
    EditObjectType_TableErase       = 0x0030,
    EditObjectType_TableRedraw      = 0x0040,
    EditObjectType_TableNewDraw     = 0x0050,
    EditObjectType_FreeformLine     = 0x0060,
    EditObjectType_PolyData         = 0x0070,
    EditObjectType_PathAnimationLine = 0x0080, //[이상호] pathAnimation 직선
    EditObjectType_PathAnimationRectangle = 0x0090, //[이상호] pathAnimation 도형
    EditObjectType_DropCap          = 0x00A0, //20hoon //첫문자 장식
    EditObjectType_CellResize       = 0x00B0,
    EditObjectType_CellResizeStart  = 0x00C0,
    EditObjectType_WordArt2003      = 0x00C1, //20hoon 2003 워드 아트
    EditObjectType_EquationFrame    = 0x00C2, //20hoon
    EditObjectType_HwpWordArtFrame  = 0x00C3, //20hoon //HWP 글맵시 프레임 !!
    EditObjectType_SelectedClick    = 0x1000,
    EditObjectType_Max              = 0x7FFF
}EditObejctType;

typedef enum
{
    EditStatus_Redo = 0,
    EditStatus_Undo = 1,
}EditStatus;

typedef enum
{
    HeaderFooterType_NoHeaderFooter,
    HeaderFooterType_Header,
    HeaderFooterType_Footer,
    HeaderFooterType_FootNote,
    HeaderFooterType_BothHeader,
    HeaderFooterType_OddHeader,
    HeaderFooterType_EvenHeader,
    HeaderFooterType_FirstHeader,
    HeaderFooterType_BothFooter,
    HeaderFooterType_OddFooter,
    HeaderFooterType_EvenFooter,
    HeaderFooterType_FirstFooter
}HeaderFooterType;

typedef enum
{
    HeaderFooterAction_Edit,
    HeaderFooterAction_Delete
}HeaderFooterAction;

typedef enum
{
    HeaderFooterTemplateType_No,
    HeaderFooterTemplateType_BlankOneColumn,
    HeaderFooterTemplateType_BlankThreeColumn,
    HeaderFooterTemplateType_PageNumberLeft,
    HeaderFooterTemplateType_PageNumberCenter,
    HeaderFooterTemplateType_PageNumberRight,
    HeaderFooterTemplateType_Austin,
    HeaderFooterTemplateType_Banded,
    HeaderFooterTemplateType_FacetEvenPage,
    HeaderFooterTemplateType_FacetOddPage,
    HeaderFooterTemplateType_Filigree,
    HeaderFooterTemplateType_Grid,
    HeaderFooterTemplateType_Integral,
    HeaderFooterTemplateType_IonDark,
    HeaderFooterTemplateType_IonLight,
    HeaderFooterTemplateType_MotionEvenPage,
    HeaderFooterTemplateType_MotionOddPage,
    HeaderFooterTemplateType_Retrospect,
    HeaderFooterTemplateType_Semaphore,
    HeaderFooterTemplateType_Sideline,
    HeaderFooterTemplateType_Slice1,
    HeaderFooterTemplateType_Slice2,
    HeaderFooterTemplateType_ViewMasterHorizontal,
    HeaderFooterTemplateType_ViewMasterVertical,
    HeaderFooterTemplateType_Whisp
}HeaderFooterTemplateType;

typedef enum
{
    HeaderFooterNavigation_GoToHeader,
    HeaderFooterNavigation_GoToFooter,
    HeaderFooterNavigation_GoToBody,
    HeaderFooterNavigation_JumpToPreviousHeaderOrFooter,
    HeaderFooterNavigation_JumpToNextHeaderOrFooter,
}HeaderFooterNavigation;

typedef enum BookmarkOperation
{
    BookmarkOperation_Add,
    BookmarkOperation_Move,
    BookmarkOperation_Delete
}BookmarkOperation;

typedef enum SheetHyperlink
{
    SheetHyperlink_None         = 0x0000,
    SheetHyperlink_File         = 0x0001,
    SheetHyperlink_Url          = 0x0003,
    SheetHyperlink_Unc          = 0x0007,
    SheetHyperlink_Mail         = 0x000F,
    SheetHyperlink_Phone        = 0x001F,
    SheetHyperlink_Curbook      = 0x0020,
    SheetHyperlink_Newbook      = 0x0040,
    SheetHyperlink_SheetCell	= 0x0080
}SheetHyperlink;

typedef enum PageLayoutMargin {
    PageLayoutMargin_User       = 0,    // 공통 유저 모드
    PageLayoutMargin_Basic      = 1,    // 기본       (DOC : Normal       HWP : 기본                ODT : 일반)
    PageLayoutMargin_Narrow     = 2,    // 좁게       (DOC : Narrow       HWP : 머리말/꼬리말 포함     ODT : 화살표)
    PageLayoutMargin_Normal     = 3,    // 보통       (DOC : Moderate     HWP : 없음                ODT : 없음)
    PageLayoutMargin_Wide       = 4,    // 넓게       (DOC : 넓게          HWP : 머리말/꼬리말 포함     ODT : 넓게)
    PageLayoutMargin_Narrow_HWP = 5,    // 좁게       (DOC : 없음          HWP : 머리말/꼬리말 제외     ODT : 없음)
    PageLayoutMargin_Wide_HWP   = 6,    // 넓게       (DOC : 없음          HWP : 머리말/꼬리말 제외     ODT : 없음)
    PageLayoutMargin_2003_DOC   = 7,    // 2003 기본  (DOC : 2003 기본     HWP : 없음                ODT : 없음)
    PageLayoutMargin_Mirrored   = 8,    // 마주보기    (DOC : Mirrored     HWP : 없음                ODT : 페이지 마주보기)
} PageLayoutMargin;

typedef enum PageLayoutSize
{
    PageLayoutSize_A3         = 13,
    PageLayoutSize_A4         = 14,
    PageLayoutSize_A5         = 15,
    PageLayoutSize_Letter     = 35
} PageLayoutSize;

typedef enum PageLayoutBreak
{
    PageLayoutBreak_NoBreak,
    PageLayoutBreak_PageBreak,
    PageLayoutBreak_ColumnBreak,
    PageLayoutBreak_SectionNextPage,
    PageLayoutBreak_SectionNextColumn,
    PageLayoutBreak_SectionContinuous,
    PageLayoutBreak_SectionEven_Page,
    PageLayoutBreak_SectionOdd_Page,
    PageLayoutBreak_BlackPage,
} PageLayoutBreak;

typedef enum PageLayoutScope
{
    PageLayoutScope_ThisSection,
    PageLayoutScope_ThisPointForward,
    PageLayoutScope_WholeDocument,
    PageLayoutScope_PageBreak            = 3,
    PageLayoutScope_SelectText           = 4, //6.0
    PageLayoutScope_SelectSection        = 5  //6.0
}PageLayoutScope;

typedef enum PageLayoutMask {
    PageLayoutMask_Size         = 0x0001,
    PageLayoutMask_Margin		= 0x0002,
    PageLayoutMask_Direction	= 0x0004,
    PageLayoutMask_Column		= 0x0008,
    PageLayoutMask_LineNumber	= 0x0010,
    PageLayoutMask_View         = 0x0020,
    PageLayoutMask_Section      = 0x0040,
} PageLayoutMask;

typedef enum PageWatermark {
    PageWatermark_Watermark_No,			// No Watermark (øˆ≈Õ∏∂≈© æ¯¿Ω)
    PageWatermark_Watermark_Picture,		// Picture Watermark (±◊∏≤ øˆ≈Õ∏∂≈©)
    PageWatermark_Watermark_Text			// Text Watermark (≈ÿΩ∫∆Æ øˆ≈Õ∏∂≈©)
} PageWatermark;

typedef enum
{
    PageOrientation_Vertical,
    PageOrientation_Horizontal,
}PageOrientation;

typedef enum
{
    PageTextDirection_Horizontal,
    PageTextDirection_Vertical,
    PageTextDirection_RotateAllText90,
    PageTextDirection_RotateAllText270,
    PageTextDirection_RotatAsianCharacters270
}PageTextDirection;

typedef enum
{
    SaveOption_None                         = 0x00,
    SaveOption_TempSave                     = 0x01,
    SaveOption_InfraPenDrawSave             = 0x02,
    SaveOption_BookmarkTableOfContents      = 0x04,
} SaveOption;

typedef enum
{
    // Success
    SaveResult_ProcessSuccess        = 0,
    SaveResult_PageTruncated,
    SaveResult_DocumentTruncated,
    SaveResult_RepairedPage,
    SaveResult_NoUpdateSuccess,
    
    // Error
    SaveResult_InternalError       = 10,
    SaveResult_MemoryError,
    SaveResult_FileCreateError,     // save as 시 용량 부족
    SaveResult_FileWriteError,
    SaveResult_FileStorageError,
    SaveResult_FileNotModified,
    SaveResult_UnknownError,
} SaveResultType;

typedef enum
{
    ObjectEditingControllerType_None = 0,
    ObjectEditingControllerType_Left = 2,
    ObjectEditingControllerType_Right = 3,
    ObjectEditingControllerType_Upper = 4,
    ObjectEditingControllerType_Lower = 5,
    ObjectEditingControllerType_UpperLeft = 6,
    ObjectEditingControllerType_UpperRight = 7,
    ObjectEditingControllerType_LowerRight = 8,
    ObjectEditingControllerType_LowerLeft = 9,
    ObjectEditingControllerType_UpperTop = 10,
    ObjectEditingControllerType_Center = 11
}ObjectEditingControllerType;

typedef enum
{
    PenMode_Normal,
    PenMode_Ink,
    PenMode_Pencle,
    PenMode_Crayon,
    
    PenMode_FreeHighlightInk,
    PenMode_FreeHighlight,
    
    PenMode_FreeErase,
    PenMode_Ush,
    PenMode_Linear,
    PenMode_Lasso,
    PenMode_Erase,
    
    //for PDF by cielc
    PenMode_Highlight,
    PenMode_Underline,
    PenMode_Strikeout,
    PenMode_StickyNote,
    
    PenMode_Arrow,
    PenMode_Line,
    PenMode_Rectangle,
    PenMode_Oval,
    PenMode_Polygon,
    PenMode_PolyLine,
    PenMode_Cloud,
    PenMode_FreeText,
    
    PenMode_TouchSelect,
    PenMode_DragSelect,
    
    PenMode_Reset,
    PenMode_Calligraphy,
}PenMode;

typedef enum WordBorderSelector
{
    WordBorderSelector_AutoTextPara = -1,
    WordBorderSelector_Text = 0,
    WordBorderSelector_Para = 1,
    WordBorderSelector_Page = 2,
    WordBorderSelector_Cell = 3,
    WordBorderSelector_Table = 4,
} WordBorderSelector;

typedef enum BorderLineType
{
    BorderLineType_None,
    BorderLineType_BoxBorder,
    BorderLineType_ShadowBorder,
    BorderLineType_3DBorder,
    BorderLineType_UserCustomBorder,
} BorderLineType;

typedef enum CellLineType
{
    CellLineType_None				= 0,
    CellLineType_BoxBorder			= 1,
    CellLineType_All				= 2,
    CellLineType_Grid				= 3,
    CellLineType_UserCustomBorder	= 4
}CellLineType;

typedef enum CellSelectedType
{
    CellSelectedType_None,
    CellSelectedType_OneCell,
    CellSelectedType_Hori,
    CellSelectedType_Verti,
    CellSelectedType_Multi,
} CellSelectedType;

typedef enum PageBorderApplyTo {
    PageBorderApplyTo_TheWholeThing,
    PageBorderApplyTo_ThisSection,
    PageBorderApplyTo_ThisSectionFirstPageOnly,
    PageBorderApplyTo_ThisSectionAllExceptFirstPage
} PageBorderApplyTo;

typedef enum PageBorderOffsetFrom {
    PageBorderOffsetFrom_Page,
    PageBorderOffsetFrom_Text
} PageBorderOffsetFrom;

typedef enum
{
    PrintOption_JPGImage                = 0x00,
    PrintOption_BMPPtr                  = 0x01,
    PrintOption_PNGImage                = 0x02,
    PrintOption_JPGMemory               = 0x04,
    PrintOption_PPGMemory               = 0x08,
    
    
    PrintOption_UseMargin               = 0x10,
    // 꽉 채워서 보여지는 것이 아니라 회색 여백 포함해서 만들어 달라고 해서 추가
    PrintOption_PrinterMargin           = 0x80,
    
    PrintOption_ExceptGraphicObject     = 0x100, // 그림과 기타 그래픽 개체를 제외하고 인쇄 (word only) //ZPD-1240
    PrintOption_ExceptBackground        = 0x200, // 배경 Contents를 제외하고 인쇄
    
    //Print Direction
    PrintOption_PaperDirectionPortrait  = 0x1000,
    PrintOption_PaperDirectionLandscape = 0x2000,
    
    //Print이벤트에서 직접 문서 오픈
    PrintOption_NewOpenPrint            = 0x4000,
    
    PrintOption_ForSaveAs               = 0x8000,
    
    //PRINT_CONVERTER_MODE
    PrintOtion_Output_FilePageName 		= 0x10000,
    PrintOtion_Output_Stream		 	= 0x20000,
    PrintOtion_Output_DirectGAPI		= 0x40000,
    PrintOtion_Output_Border			= 0x80000,
    
    //PRINT_SELECTION
    PrintOption_Selection               = 0x100000,
}PrintOption;

typedef enum
{
    PrintPageSize_A4        = 0, //210mm 297mm
    PrintPageSize_A3        = 1, //297mm 420mm
    PrintPageSize_A5        = 2, //148mm 210mm
    PrintPageSize_Letter    = 3, //216mm 279mm
    PrintPageSize_Legal     = 4, //216mm 356mm
    PrintPageSize_B5        = 5, //182mm 257mm
    PrintPageSize_Exceutive = 6, //184mm 534mm
    PrintPageSize_Pic3      = 7, //89mm 127mm
    PrintPageSize_Pic4      = 8, //102mm 152mm
    PrintPageSize_Pic5      = 9, //127mm 177mm
    PrintPageSize_Pic7      = 10, //178mm 1822mm
    PrintPageSize_Pic10     = 11, //203mm 254mm
    PrintPageSize_A6        = 12, //105mm 148mm
    PrintPageSize_B4        = 13, //257mm 364mm
}PrintPageSize;

typedef enum
{
    PrintResolution_Current = 0, // current screen size
    PrintResolution_A472    = 1, // A4 (72DPI)
    PrintResolution_A4100   = 2, // A4 (100DPI)
    PrintResolution_A4150   = 3, // A4 (150DPI)
    PrintResolution_A4200   = 4, // A4 (200DPI)
    PrintResolution_A4300   = 5, // A4 (300DPI)
    PrintResolution_A4600   = 6, // A4 (600DPI)
}PrintResolution;

typedef enum
{
    PrintRange_FullPages   = 0,
    PrintRange_CurrentPage = 1,
}PrintRange;

typedef enum    // For ISaveDocument()
{
    FileMenuOperation_Save      = 0,
    FileMenuOperation_SaveAs    = 1,
    FileMenuOperation_Export    = 2,
    FileMenuOperation_AutoSave  = 3,
    FileMenuOperation_ETC       = 4,
}FileMenuOperation;

typedef enum
{
    TablePenCommand_Off                     = 1,// 1[0x1]
    TablePenCommand_Is                      = 2,// 2[0x2]
    TablePenCommand_Draw                    = 3,// 3[0x3]
    TablePenCommand_Erease                  = 4,// 4[0x4]
    TablePenCommand_Type                    = 5,// 5[0x5]
    TablePenCommand_Width                   = 6,// 6[0x6]
    TablePenCommand_Color                   = 7,// 7[0x7]
    TablePenCommand_SetGrid                 = 8,// 8[0x8]
    TablePenCommand_GetGrid                 = 9,// 9[0x9]
    TablePenCommand_SetCurrentCellSize      = 10,// 10[0xa]
    TablePenCommand_GetCurrentCellSize      = 11,// 11[0xb]
    TablePenCommand_SetCurrentTableSize     = 12,// 12[0xc]
    TablePenCommand_GetCurrentTableSize     = 13,// 13[0xd]
    TablePenCommand_SetPreset               = 14,// 14[0xe]
    TablePenCommand_Copy                    = 15,// 15[0xf]
    TablePenCommand_Choice                  = 16,// 16[0x10]
    TablePenCommand_DeleteWordStyle         = 17,// 17[0x11]
    TablePenCommand_DeleteSlideStyle        = 18,// 18[0x12]
}TablePenCommand;

typedef enum
{
    SheetPrintArea_ActiveSheet		= 1, // 1[0x1]
    SheetPrintArea_EntireWorkbook	= 2,// 2[0x2]
    SheetPrintArea_SelectedArea    = 4,// 4[0x4]
}SheetPrintArea;

typedef enum SheetEdit
{
    SheetEdit_Insert = 0,// 0[0x0]
    SheetEdit_Select,// 1[0x1]
    SheetEdit_Delete,// 2[0x2]
    SheetEdit_Rename,// 3[0x3]
    SheetEdit_Move// 4[0x4]
}SheetEdit;

typedef enum
{
    DocumentInformation_Titile      = 0x0001,// 1[0x1]
    DocumentInformation_Author      = 0x0002,// 2[0x2]
    DocumentInformation_ModifiedBy  = 0x0004,// 4[0x4]
    DocumentInformation_SavePreview = 0x0008// 8[0x8]
}DocumentInformation;

typedef enum
{
    SheetEditorResult_Success                = 1,
    SheetEditorResult_InternalError          = 0,
    SheetEditorResult_NameIsAlreadyUsed      = -1,
    SheetEditorResult_IndexError             = -2,
    SheetEditorResult_DoesNotLoad            = -3,
    SheetEditorResult_MustBeAtLeastOne       = -4,
    SheetEditorResult_PasswordDocument       = -5,
    SheetEditorResult_CellsMustBeTheSameSize = -6,
}SheetEditorResult;

typedef enum{
    SlideAnimation_None = 0,
    SlideAnimation_Appear = 1,
    SlideAnimation_Fade = 2,
    SlideAnimation_FlyIn = 3,
    SlideAnimation_FloatIn = 4,
    SlideAnimation_Breaks = 5,
    SlideAnimation_Wipe = 6,
    SlideAnimation_Shapes = 7,
    SlideAnimation_Wheel = 8,
    SlideAnimation_RandomBars = 9,
    SlideAnimation_GrowTurn = 10,
    SlideAnimation_Zoom = 11,
    SlideAnimation_Rotate = 12,
    SlideAnimation_Bounce = 13,
    SlideAnimation_Pulse = 14,
    SlideAnimation_ColorPulse = 15,
    SlideAnimation_Teeter = 16,
    SlideAnimation_GrowShrink = 17,
    SlideAnimation_Desaturate = 18,
    SlideAnimation_Darken = 19,
    SlideAnimation_Lighten = 20,
    SlideAnimation_Transparency = 21,
    SlideAnimation_ObjectColor = 22,
    SlideAnimation_ComplementaryColor = 23,
    SlideAnimation_LineColor = 24,
    SlideAnimation_FillColor = 25,
    SlideAnimation_BrushColor = 26,
    SlideAnimation_FontColor = 27,
    SlideAnimation_Underline = 28,
    SlideAnimation_BoldFlash = 29,
    SlideAnimation_BoldReveal = 30,
    SlideAnimation_Waves = 31,
    SlideAnimation_Blink = 32,
    SlideAnimation_Disappear = 33,
    SlideAnimation_FlyOut = 34,
    SlideAnimation_FloatOut = 35,
    SlideAnimation_ShrinkTurn = 36,
    SlideAnimation_Line = 37,
    SlideAnimation_Oval = 38,
    SlideAnimation_Repeat = 39,
    SlideAnimation_4pointstar = 40,
    SlideAnimation_5pointstar = 41,
    SlideAnimation_6pointstar = 42,
    SlideAnimation_8pointstar = 43,
    SlideAnimation_Watermark = 44,
    SlideAnimation_Football = 45,
    SlideAnimation_Trapezoid = 46,
    SlideAnimation_Pentagon = 47,
    SlideAnimation_Hexagon = 48,
    SlideAnimation_Square = 49,
    SlideAnimation_Equaltriangle = 50,
    SlideAnimation_Righttriangle = 51,
    SlideAnimation_Crescentmoon = 52,
    SlideAnimation_Octagon = 53,
    SlideAnimation_Parallelogram = 54,
    SlideAnimation_Heart = 55,
    SlideAnimation_Stairsdown = 56,
    SlideAnimation_Funnel = 57,
    SlideAnimation_WavePath = 58,
    SlideAnimation_Heartbeat = 59,
    SlideAnimation_Sinewave = 60,
    SlideAnimation_Spring = 61,
    SlideAnimation_Linedown = 62,
    SlideAnimation_Rotatedown = 63,
    SlideAnimation_Ovaldown = 64,
    SlideAnimation_Diagonaldownright = 65,
    SlideAnimation_Rotatedownright = 66,
    SlideAnimation_Diagonalupright = 67,
    SlideAnimation_Rotateupright = 68,
    SlideAnimation_Ovalright = 69,
    SlideAnimation_Lineright = 70,
    SlideAnimation_Spiralright = 71,
    SlideAnimation_Bounceright = 72,
    SlideAnimation_Curvyright = 73,
    SlideAnimation_Ovalleft = 74,
    SlideAnimation_Lineleft = 75,
    SlideAnimation_Spiralleft = 76,
    SlideAnimation_Bounceleft = 77,
    SlideAnimation_Curvyleft = 78,
    SlideAnimation_Lineup = 79,
    SlideAnimation_Rotateup = 80,
    SlideAnimation_Ovalup = 81,
    SlideAnimation_Decayingwave = 82,
    SlideAnimation_Stagger = 83,
    SlideAnimation_Scurve1 = 84,
    SlideAnimation_Scurve2 = 85,
    SlideAnimation_Repeatverticalfigure = 86,
    SlideAnimation_Repeathorizontalfigu = 87,
    SlideAnimation_Repeatloopdeloop = 88,
    SlideAnimation_Curvystar = 89,
    SlideAnimation_Roundrect = 90,
    SlideAnimation_Curvedx = 91,
    SlideAnimation_Peanut = 92,
    SlideAnimation_Pointystar = 93,
    SlideAnimation_Swoosh = 94,
    SlideAnimation_Figure8four = 95,
    SlideAnimation_Invertedsquare = 96,
    SlideAnimation_Invertedtriangle = 97,
    SlideAnimation_Buzzsaw = 98,
    SlideAnimation_Neutron = 99,
    SlideAnimation_Bean = 100,
    SlideAnimation_Diamond = 101,
    SlideAnimation_Plus = 102,
    SlideAnimation_CustomPath = 103,
    SlideAnimation_NotSupport = 104
}SlideShowAnimationType;

typedef enum
{
    SlideAnimatioOption_Direction = 0,
    SlideAnimatioOption_ShapeType = 1,
    SlideAnimatioOption_SpokesType = 2,
    SlideAnimatioOption_VanishingPointType = 3,
    SlideAnimatioOption_PresetType = 4,
    SlideAnimatioOption_TriggerType = 5
}SlideAnimationOptionType;

typedef enum
{
    SlideAnimationDirection_None = 0,
    SlideAnimationDirection_FromBottom= 1,
    SlideAnimationDirection_FromLeft= 2,
    SlideAnimationDirection_FromRight= 3,
    SlideAnimationDirection_FromTop= 4,
    SlideAnimationDirection_FromBottomleft= 5,
    SlideAnimationDirection_FromBottomright= 6,
    SlideAnimationDirection_FromTopleft= 7,
    SlideAnimationDirection_FromTopright= 8,
    SlideAnimationDirection_ToBottom= 9,
    SlideAnimationDirection_Left= 10,
    SlideAnimationDirection_Right= 11,
    SlideAnimationDirection_ToTop= 12,
    SlideAnimationDirection_ToBottomleft= 13,
    SlideAnimationDirection_ToDownright= 14,
    SlideAnimationDirection_ToTopleft= 15,
    SlideAnimationDirection_ToTopright= 16,
    SlideAnimationDirection_FloatUp= 17,
    SlideAnimationDirection_FloatDown= 18,
    SlideAnimationDirection_Horizontal= 19,
    SlideAnimationDirection_Vertical= 20,
    SlideAnimationDirection_In= 21,
    SlideAnimationDirection_Out= 22,
    SlideAnimationDirection_HorizontalIn= 23,
    SlideAnimationDirection_HorizontalOut= 24,
    SlideAnimationDirection_VerticalIn= 25,
    SlideAnimationDirection_VerticalOut= 26
}SlideAnimationDirectionType;

typedef enum{
    SlideAnimationShapes_None = 0,// 0[0x0]
    SlideAnimationShapes_Circle = 1,// 1[0x1]
    SlideAnimationShapes_Box = 2,// 2[0x2]
    SlideAnimationShapes_Diamond = 3,// 3[0x3]
    SlideAnimationShapes_Plus = 4// 4[0x4]
}SlideAnimationShapesType;

typedef enum{
    SlideAnimationSpokes_None = 0,// 0[0x0]
    SlideAnimationSpokes_1 = 1,// 1[0x1]
    SlideAnimationSpokes_2 = 2,// 2[0x2]
    SlideAnimationSpokes_3 = 3,// 3[0x3]
    SlideAnimationSpokes_4 = 4,// 4[0x4]
    SlideAnimationSpokes_8 = 5// 5[0x5]
}SlideAnimationSpokesType;

typedef enum{
    SlideAnimationVanishingPoint_None = 0,
    SlideAnimationVanishingPoint_ObjectCenter = 1,
    SlideAnimationVanishingPoint_SlideCenter = 2,
}SlideAnimationVanishingPointType;

typedef enum{
    SlideAnimationPreset_None = 0,// 0[0x0]
    SlideAnimationPreset_Emphasis = 1,// 1[0x1]
    SlideAnimationPreset_Enterance = 2,// 2[0x2]
    SlideAnimationPreset_Exit = 3,// 3[0x3]
    SlideAnimationPreset_Mediacall = 4,// 4[0x4]
    SlideAnimationPreset_Path = 5,// 5[0x5]
    SlideAnimationPreset_CustomPath = 6,// 6[0x6]
    SlideAnimationPreset_Verb = 7// 7[0x7]OLE
}SlideAnimationPresetType;

typedef enum{
    SlideAnimationTrigger_ClickEffect = 0,// 0[0x0]
    SlideAnimationTrigger_WithEffect = 1,// 1[0x1]
    SlideAnimationTrigger_AfterEffect = 2// 2[0x2]
}SlideAnimationTriggerType;

typedef enum{
    SlideAnimationStyle_None = 0,// 0[0x0]
    SlideAnimationStyle_Instant = 1,// 1[0x1]
    SlideAnimationStyle_Rgbfade = 2,// 2[0x2]
    SlideAnimationStyle_Cycle_Clockwise = 3,// 3[0x3]
    SlideAnimationStyle_CycleCounter_Clockwise = 4,// 4[0x4]
    SlideAnimationStyle_Bold = 5,// 5[0x5]
    SlideAnimationStyle_Italic = 6,// 6[0x6]
    SlideAnimationStyle_Underline = 7,// 7[0x7]
    SlideAnimationStyle_Bold_Italic = 8,// 8[0x8]
    SlideAnimationStyle_Italic_Underline = 9,// 9[0x9]
    SlideAnimationStyle_Bold_Underline = 10,// 10[0xa]
    SlideAnimationStyle_BoldItalic_Underline = 11// 11[0xb]
}SlideAnimationStyleType;

typedef enum{
    SlideAnimationRotateAngle_Clockwise90_Degree = 90,// 90[0x5a]
    SlideAnimationRotateAngle_Clockwise180_Degree = 180,// 180[0xb4]
    SlideAnimationRotateAngle_Clockwise360_Degree = 360,// 360[0x168]
    SlideAnimationRotateAngle_Clockwise720_Degree = 720,// 720[0x2d0]
    SlideAnimationRotateAngle_Counterclockwise90_Degree = -90,// -90[0xffffffa6]
    SlideAnimationRotateAngle_Counterclockwise180_Degree = -180,// -180[0xffffff4c]
    SlideAnimationRotateAngle_Counterclockwise360_Degree = -360,// -360[0xfffffe98]
    SlideAnimationRotateAngle_Counterclockwise720_Degree = -720,// -720[0xfffffd30]
}SlideAnimationRotateAngleType;

typedef enum{
    SlideAnimationTransparent_None = 0,// 0[0x0] 0%
    SlideAnimationTransparent_Quarter = 25,// 25[0x19] 25%
    SlideAnimationTransparent_Half = 50,// 50[0x32] 50%
    SlideAnimationTransparentThree_Quarter = 75,// 75[0x4b] 75%
    SlideAnimationTransparent_Full = 100// 100[0x64] 100%
}SlideAnimationTransparentType;

typedef enum{ // 강조 크게/작게 옵션(nScale)
    SlideAnimationScale_Snippety = 25,// 25[0x19]
    SlideAnimationScale_Small = 50,// 50[0x32]
    SlideAnimationScale_Normal = 100,// 100[0x64]
    SlideAnimationScale_Large = 150,// 150[0x96]
    SlideAnimationScale_Huge = 400,// 400[0x190]
}SlideAnimationScaleType;

//BrSlideAnimationFrameType, PPT_ANIMATION_INFO use it.
typedef enum{
    SlideAnimationFrame_Normal = 0,// 0[0x0]도형
    SlideAnimationFrame_Line = 1,// 1[0x1]선
    SlideAnimationFrame_Straight_Connector = 2,// 2[0x2]직선 화살표 연결선
    SlideAnimationFrame_Elbow_Connector = 3,// 3[0x3]꺾인 연결선
    SlideAnimationFrame_Curved_Connector = 4,// 4[0x4]구부러진 연결선
    SlideAnimationFrame_Freeform = 5,// 5[0x5]자유형
    SlideAnimationFrame_Rectangle = 6,// 6[0x6]직사각형
    SlideAnimationFrame_Rounded_Rectangle = 7,// 7[0x7]모서리가 둥근 직사각형
    SlideAnimationFrame_SnipSingleCorner_Rectangle = 8,// 8[0x8]한쪽 모서리가 잘린 사각형
    SlideAnimationFrame_SnipSameSideCorner_Rectangle = 9,// 9[0x9]양쪽 모서리가 잘린 사각형
    SlideAnimationFrame_SnipDiagonalCorner_Rectangle = 10,// 10[0xa]대각선 방향의 모서리가 잘린 사각형
    SlideAnimationFrame_SnipAndRoundSingleCorner_Rectangle = 11,// 11[0xb]한쪽 모서리는 잘리고 다른 쪽 모서리는 둥근 사각형
    SlideAnimationFrame_RoundSingleCorner_Rectangle = 12,// 12[0xc]한쪽 모서리가 둥근 사각형
    SlideAnimationFrame_RoundSameSideCorner_Rectangle = 13,// 13[0xd]양쪽 모서리가 둥근 사각형
    SlideAnimationFrame_RoundDiagonalCorner_Rectangle = 14,// 14[0xe]대각선 방향의 모서리가 둥근 사각형
    SlideAnimationFrame_Text_Box = 15,// 15[0xf]텍스트 상자
    SlideAnimationFrame_VerticalText_Box = 16,// 16[0x10]세로 텍스트 상자
    SlideAnimationFrame_Oval = 17,// 17[0x11]타원
    SlideAnimationFrame_Isosceles_Triangle = 18,// 18[0x12]이등변 삼각형
    SlideAnimationFrame_Right_Triangle = 19,// 19[0x13]직각 삼각형
    SlideAnimationFrame_Parallelogram = 20,// 20[0x14]평행 사변형
    SlideAnimationFrame_Trapezoid = 21,// 21[0x15]사다리꼴
    SlideAnimationFrame_Diamond = 22,// 22[0x16]다이아몬드
    SlideAnimationFrame_Regular_Pentagon = 23,// 23[0x17]정오각형
    SlideAnimationFrame_Hexagon = 24,// 24[0x18]육각형
    SlideAnimationFrame_Heptagon = 25,// 25[0x19]칠각형
    SlideAnimationFrame_Octagon = 26,// 26[0x1a]팔각형
    SlideAnimationFrame_Decagon = 27,// 27[0x1b]십각형
    SlideAnimationFrame_Dodecagon = 28,// 28[0x1c]십이각형
    SlideAnimationFrame_Pie = 29,// 29[0x1d]원형
    SlideAnimationFrame_Chord = 30,// 30[0x1e]현
    SlideAnimationFrame_Teardrop = 31,// 31[0x1f]눈물 방울
    SlideAnimationFrame_Frame = 32,// 32[0x20]액자
    SlideAnimationFrame_Half_Frame = 33,// 33[0x21]1/2 액자
    SlideAnimationFrame_L_Shape = 34,// 34[0x22]L 도형
    SlideAnimationFrame_Diagonal_Stripe = 35,// 35[0x23]대각선 줄무늬
    SlideAnimationFrame_Plus = 36,// 36[0x24]십자형
    SlideAnimationFrame_Plaque = 37,// 37[0x25]배지
    SlideAnimationFrame_Can = 38,// 38[0x26]원통
    SlideAnimationFrame_Cube = 39,// 39[0x27]정육면체
    SlideAnimationFrame_Bevel = 40,// 40[0x28]빗면
    SlideAnimationFrame_Donut = 41,// 41[0x29]도넛
    SlideAnimationFrame_No_Symbol = 42,// 42[0x2a]"없음" 기호
    SlideAnimationFrame_Block_Arc = 43,// 43[0x2b]막힌 원호
    SlideAnimationFrame_Folded_Corner = 44,// 44[0x2c]모서리가 접힌 도형
    SlideAnimationFrame_Smiley_Face = 45,// 45[0x2d]웃는 얼굴
    SlideAnimationFrame_Heart = 46,// 46[0x2e]하트
    SlideAnimationFrame_Lightning_Bolt = 47,// 47[0x2f]번개
    SlideAnimationFrame_Sun = 48,// 48[0x30]해
    SlideAnimationFrame_Moon = 49,// 49[0x31]달
    SlideAnimationFrame_Cloud = 50,// 50[0x32]구름
    SlideAnimationFrame_Arc = 51,// 51[0x33]원호
    SlideAnimationFrame_Double_Bracket = 52,// 52[0x34]양쪽 대괄호
    SlideAnimationFrame_Double_Brace = 53,// 53[0x35]양쪽 중괄호
    SlideAnimationFrame_Left_Bracket = 54,// 54[0x36]왼쪽 대괄호
    SlideAnimationFrame_Right_Bracket = 55,// 55[0x37]오른쪽 대괄호
    SlideAnimationFrame_Left_Brace = 56,// 56[0x38]왼쪽 중괄호
    SlideAnimationFrame_Right_Brace = 57,// 57[0x39]오른쪽 중괄호
    SlideAnimationFrame_Right_Arrow = 58,// 58[0x3a]오른쪽 화살표
    SlideAnimationFrame_Left_Arrow = 59,// 59[0x3b]왼쪽 화살표
    SlideAnimationFrame_Up_Arrow = 60,// 60[0x3c]위쪽 화살표
    SlideAnimationFrame_Down_Arrow = 61,// 61[0x3d]아래쪽 화살표
    SlideAnimationFrame_LeftRight_Arrow = 62,// 62[0x3e]왼쪽/오른쪽 화살표
    SlideAnimationFrame_UpDown_Arrow = 63,// 63[0x3f]위쪽/아래쪽 화살표
    SlideAnimationFrame_Quad_Arrow = 64,// 64[0x40]왼쪽/오른쪽/위쪽/아래쪽 화살표
    SlideAnimationFrame_LeftRightUp_Arrow = 65,// 65[0x41]왼쪽/오른쪽/위쪽 화살표
    SlideAnimationFrame_Bent_Arrow = 66,// 66[0x42]굽은 화살표
    SlideAnimationFrame_UTurn_Arrow = 67,// 67[0x43]U자형 화살표
    SlideAnimationFrame_LeftUp_Arrow = 68,// 68[0x44]왼쪽/위쪽 화살표
    SlideAnimationFrame_BentUp_Arrow = 69,// 69[0x45]위로 굽은 화살표
    SlideAnimationFrame_CurvedRight_Arrow = 70,// 70[0x46]오른쪽으로 구부러진 화살표
    SlideAnimationFrame_CurvedLeft_Arrow = 71,// 71[0x47]왼쪽으로 구부러진 화살표
    SlideAnimationFrame_CurvedUp_Arrow = 72,// 72[0x48]위로 구부러진 화살표
    SlideAnimationFrame_CurvedDown_Arrow = 73,// 73[0x49]아래로 구부러진 화살표
    SlideAnimationFrame_StripedRight_Arrow = 74,// 74[0x4a]줄무늬가 있는 오른쪽 화살표
    SlideAnimationFrame_NotchedRight_Arrow = 75,// 75[0x4b]톱니 모양의 오른쪽 화살표
    SlideAnimationFrame_Pentagon = 76,// 76[0x4c]오각형
    SlideAnimationFrame_Chevron_Up = 77,// 77[0x4d]갈매기형 수장
    SlideAnimationFrame_RightArrow_Callout = 78,// 78[0x4e]오른쪽 화살표 설명선
    SlideAnimationFrame_DownArrow_Callout = 79,// 79[0x4f]아래쪽 화살표 설명선
    SlideAnimationFrame_LeftArrow_Callout = 80,// 80[0x50]왼쪽 화살표 설명선
    SlideAnimationFrame_UpArrow_Callout = 81,// 81[0x51]위쪽 화살표 설명선
    SlideAnimationFrame_LeftRightArrow_Callout = 82,// 82[0x52]왼쪽/오른쪽 화살표 설명선
    SlideAnimationFrame_QuadArrow_Callout = 83,// 83[0x53]왼쪽/오른쪽/위쪽/아래쪽 설명선
    SlideAnimationFrame_Circular_Arrow = 84,// 84[0x54]원형 화살표
    SlideAnimationFrame_Equation_Plus = 85,// 85[0x55]덧셈 기호
    SlideAnimationFrame_Equation_Minus = 86,// 86[0x56]뺄셈 기호
    SlideAnimationFrame_Equation_Multiply = 87,// 87[0x57]곱셈 기호
    SlideAnimationFrame_Equation_Division = 88,// 88[0x58]나눗셈 기호
    SlideAnimationFrame_Equation_Equal = 89,// 89[0x59]등호
    SlideAnimationFrame_EquationNot_Equal = 90,// 90[0x5a]부등호
    SlideAnimationFrame_Flowchart_Process = 91,// 91[0x5b]처리
    SlideAnimationFrame_FlowchartAlternate_Process = 92,// 92[0x5c]대체 처리
    SlideAnimationFrame_Flowchart_Decision = 93,// 93[0x5d]판단
    SlideAnimationFrame_Flowchart_Data = 94,// 94[0x5e]데이터
    SlideAnimationFrame_FlowchartPredefined_Process = 95,// 95[0x5f]종속 처리
    SlideAnimationFrame_FlowchartInternal_Storage = 96,// 96[0x60]내부 저장소
    SlideAnimationFrame_Flowchart_Document = 97,// 97[0x61]문서
    SlideAnimationFrame_Flowchart_Multidocument = 98,// 98[0x62]다중 문서
    SlideAnimationFrame_Flowchart_Terminator = 99,// 99[0x63]수행의 시작/종료
    SlideAnimationFrame_Flowchart_Preparation = 100,// 100[0x64]준비
    SlideAnimationFrame_FlowchartManual_Input = 101,// 101[0x65]수동 입력
    SlideAnimationFrame_FlowchartManual_Operation = 102,// 102[0x66]수동 연산
    SlideAnimationFrame_Flowchart_Connector = 103,// 103[0x67]연결자
    SlideAnimationFrame_FlowchartOffPage_Connector = 104,// 104[0x68]페이지 연결자
    SlideAnimationFrame_Flowchart_Card = 105,// 105[0x69]카드
    SlideAnimationFrame_FlowchartPunched_Tape = 106,// 106[0x6a]천공 테이프
    SlideAnimationFrame_FlowchartSumming_Junction = 107,// 107[0x6b]가산 접합
    SlideAnimationFrame_Flowchart_Or = 108,// 108[0x6c]논리합
    SlideAnimationFrame_Flowchart_Collate = 109,// 109[0x6d]대조
    SlideAnimationFrame_Flowchart_Sort = 110,// 110[0x6e]정렬/분류
    SlideAnimationFrame_Flowchart_Extract = 111,// 111[0x6f]추출
    SlideAnimationFrame_Flowchart_Merge = 112,// 112[0x70]병합
    SlideAnimationFrame_FlowchartStored_Data = 113,// 113[0x71]저장 데이터
    SlideAnimationFrame_Flowchart_Delay = 114,// 114[0x72]지연
    SlideAnimationFrame_FlowchartSequentialAccess_Storage = 115,// 115[0x73]순차적 액세스 저장소
    SlideAnimationFrame_FlowchartMagnetic_Disk = 116,// 116[0x74]자기 디스크
    SlideAnimationFrame_FlowchartDirectAccess_Storage = 117,// 117[0x75]직접 액세스 저장소
    SlideAnimationFrame_Flowchart_Display = 118,// 118[0x76]화면 표시
    SlideAnimationFrame_Explosion1 = 119,// 119[0x77]폭발 1
    SlideAnimationFrame_Explosion2 = 120,// 120[0x78]폭발 2
    SlideAnimationFrame_4point_Star = 121,// 121[0x79]포인트가 4개인 별
    SlideAnimationFrame_5point_Star = 122,// 122[0x7a]포인트가 5개인 별
    SlideAnimationFrame_6point_Star = 123,// 123[0x7b]포인트가 6개인 별
    SlideAnimationFrame_7point_Star = 124,// 124[0x7c]포인트가 7개인 별
    SlideAnimationFrame_8point_Star = 125,// 125[0x7d]포인트가 8개인 별
    SlideAnimationFrame_10point_Star = 126,// 126[0x7e]포인트가 10개인 별
    SlideAnimationFrame_12point_Star = 127,// 127[0x7f]포인트가 12개인 별
    SlideAnimationFrame_16point_Star = 128,// 128[0x80]포인트가 16개인 별
    SlideAnimationFrame_24point_Star = 129,// 129[0x81]포인트가 24개인 별
    SlideAnimationFrame_32point_Star = 130,// 130[0x82]포인트가 32개인 별
    SlideAnimationFrame_Up_Ribbon = 131,// 131[0x83]위쪽 리본
    SlideAnimationFrame_Down_Ribbon = 132,// 132[0x84]아래쪽 리본
    SlideAnimationFrame_CurvedUp_Ribbon = 133,// 133[0x85]위로 구부러진 리본
    SlideAnimationFrame_CurvedDown_Ribbon = 134,// 134[0x86]아래로 구부러진 리본
    SlideAnimationFrame_Vertical_Scroll = 135,// 135[0x87]세로로 말린 두루마리 모양
    SlideAnimationFrame_Horizontal_Scroll = 136,// 136[0x88]가로로 말린 두루마리 모양
    SlideAnimationFrame_Waves = 137,// 137[0x89]물결
    SlideAnimationFrame_Double_Wave = 138,// 138[0x8a]이중 물결
    SlideAnimationFrame_Rectangular_Callout = 139,// 139[0x8b]사각형 설명선
    SlideAnimationFrame_RoundedRectangular_Callout = 140,// 140[0x8c]모서리가 둥근 사각형 설명선
    SlideAnimationFrame_Oval_Callout = 141,// 141[0x8d]타원형 설명선
    SlideAnimationFrame_Cloud_Callout = 142,// 142[0x8e]구름 모양 설명선
    SlideAnimationFrame_Line_Callout1 = 143,// 143[0x8f]설명선 1
    SlideAnimationFrame_Line_Callout2 = 144,// 144[0x90]설명선 2
    SlideAnimationFrame_Line_Callout3 = 145,// 145[0x91]설명선 3
    SlideAnimationFrame_LineCallout1Accent_Bar = 146,// 146[0x92]설명선 1(강조선)
    SlideAnimationFrame_LineCallout2Accent_Bar = 147,// 147[0x93]설명선 2(강조선)
    SlideAnimationFrame_LineCallout3Accent_Bar = 148,// 148[0x94]설명선 3(강조선)
    SlideAnimationFrame_LineCallout1No_Border = 149,// 149[0x95]설명선 1(테두리 없음)
    SlideAnimationFrame_LineCallout2No_Border = 150,// 150[0x96]설명선 2(테두리 없음)
    SlideAnimationFrame_LineCallout3No_Border = 151,// 151[0x97]설명선 3(테두리 없음)
    SlideAnimationFrame_LineCallout1BorderAndAccent_Bar = 152,// 152[0x98]설명선 1(테두리 및 강조선)
    SlideAnimationFrame_LineCallout2BorderAndAccent_Bar = 153,// 153[0x99]설명선 2(테두리 및 강조선)
    SlideAnimationFrame_LineCallout3BorderAndAccent_Bar = 154,// 154[0x9a]설명선 3(테두리 및 강조선)
    SlideAnimationFrame_ActionbuttonsBackOr_Previous = 155,// 155[0x9b]뒤로 또는 이전
    SlideAnimationFrame_ActionbuttonsForwardOr_Next = 156,// 156[0x9c]앞으로 또는 다음
    SlideAnimationFrame_Actionbuttons_Beginning = 157,// 157[0x9d]시작
    SlideAnimationFrame_Actionbuttons_End = 158,// 158[0x9e]끝
    SlideAnimationFrame_Actionbuttons_Home = 159,// 159[0x9f]홈
    SlideAnimationFrame_Actionbuttons_Information = 160,// 160[0xa0]정보
    SlideAnimationFrame_Actionbuttons_Return = 161,// 161[0xa1]돌아가기
    SlideAnimationFrame_Actionbuttons_Movie = 162,// 162[0xa2]동영상
    SlideAnimationFrame_Actionbuttons_Document = 163,// 163[0xa3]문서
    SlideAnimationFrame_Actionbuttons_Sound = 164,// 164[0xa4]소리
    SlideAnimationFrame_Actionbuttons_Help = 165,// 165[0xa5]도움말
    SlideAnimationFrame_Actionbuttons_Custom = 166,// 166[0xa6]사용자 지정
    SlideAnimationFrame_Table = 167,// 167[0xa7]표
    SlideAnimationFrame_Picture = 168,// 168[0xa8]그림
    SlideAnimationFrame_Diagram = 169,// 169[0xa9]다이어그램
    SlideAnimationFrame_Chart = 170,// 170[0xaa]차트
    SlideAnimationFrame_Video = 171,// 171[0xab]비디오
    SlideAnimationFrame_Audio = 172,// 172[0xac]오디오
    SlideAnimationFrame_Group = 173,// 173[0xad]그룹
    SlideAnimationFrame_Object = 174,// 174[0xae]개체
    SlideAnimationFrame_Placeholder_Title = 175,// 175[0xaf]제목
    SlideAnimationFrame_Placeholder_Subtitle = 176,// 176[0xb0]부제목
    SlideAnimationFrame_Placeholder_Object = 177,// 177[0xb1]내용 개체 틀
    SlideAnimationFrame_Placeholder_Text = 178,// 178[0xb2]텍스트 개체 틀
    SlideAnimationFrame_Placeholder_Picture = 179,// 179[0xb3]그림 개체 틀
    SlideAnimationFrame_PlaceholderVertical_Title = 180,// 180[0xb4]세로 제목
    SlideAnimationFrame_PlaceholderVertical_Text = 181,// 181[0xb5]세로 텍스트 개체 틀
}SlideAnimationFrameType;

typedef enum {
    SlideAnimationOptionSize_Horizontal      = 0,
    SlideAnimationOptionSize_Vertical		= 1,
    SlideAnimationOptionSize_Both			= 2
}SlideAnimationOptionSize;

typedef enum {
    SlideAnimationOptionSet_None                = 0,
    SlideAnimationOptionSet_Direction			= 1,
    SlideAnimationOptionSet_Shape 				= 2,
    SlideAnimationOptionSet_Spoke 				= 3,
    SlideAnimationOptionSet_VanishingPoint      = 4,
    SlideAnimationOptionSet_Color 				= 5,
    SlideAnimationOptionSet_Angle				= 6,
    SlideAnimationOptionSet_Size				= 7,
    SlideAnimationOptionSet_Transparency		= 8
}SlideAnimationOptionSet;

typedef enum {
    SlideAnimationOptionAngle_Clockwise					= 0,
    SlideAnimationOptionAngle_CounterClockwise 			= 1,
    SlideAnimationOptionAngle_CounterClockwiseValue     = -1
}SlideAnimationOptionAngle;

typedef enum
{
    TrackMarkUpType_Memo = 0,
    TrackMarkUpType_InsertionsDeletions ,
}TrackMarkUpType;

typedef enum TrackReviewMode
{
    TrackChangeMode_SimpleMarkUp    = 0,
    TrackChangeMode_NoMarkUp        = 1,
    TrackChangeMode_AllMarkUp       = 2,
    TrackChangeMode_Source          = 3,
}TrackChangeMode;

typedef enum {
    TrackChangeApplyType_AcceptNone                     = 0,
    TrackChangeApplyType_AcceptThisChange               = 1,
    TrackChangeApplyType_AcceptAllChanges               = 2,
    TrackChangeApplyType_AcceptShownChanges             = 3,
    TrackChangeApplyType_RejectThisChange               = 4,
    TrackChangeApplyType_RejectAllChanges               = 5,
    TrackChangeApplyType_RejectShownChanges             = 6,
}TrackChangeApplyType;

typedef enum {
    TrackChangeMoveType_None       =0,
    TrackChangeMoveType_Next       =1,
    TrackChangeMoveType_Prev       =2,
}TrackChangeMoveType;

typedef enum {
    MemoCommandType_IsShow = 0,
    MemoCommandType_SetShow,
    MemoCommandType_Add,
    MemoCommandType_SetString,
    MemoCommandType_Delete,
    //MemoCommandType_GetStringCount,
    MemoCommandType_GetString = 6,
    MemoCommandType_GetId,
    MemoCommandType_GetActiveId,
    MemoCommandType_SetActiveId,
    MemoCommandType_GetPrev,
    MemoCommandType_GetNext,
    MemoCommandType_GotoMemo,
    MemoCommandType_GetFirstId,
    MemoCommandType_GetLastId,
    MemoCommandType_DeleteAll,
    MemoCommandType_PositionGetId,
    MemoCommandType_ReplyAdd,
    MemoCommandType_GetParentId,
}MemoCommandType;

typedef enum    //enumBrGetFlagType
{
    FlagType_Ppt_CanClone = 0,// 0[0x0]
    FlagType_Ppt_CanHyperlink = 1,// 1[0x1]
    FlagType_Hwp_DistributeDocument = 2,// 2[0x2]
    FlagType_Word_HasTableInTextbox = 3,// 3[0x3]워드 텍스트 박스안에 테이블이 존재하는 경우, 세로로 텍스트 방향 변경시 테이블 존재하는 지 확인 필요
    
    FlagType_Sheet_HasComment = 0x100,// 256[0x100]
    FlagType_Sheet_SelectionHaveComment,
    FlagType_Sheet_CondfmtCountAll,
    FlagType_Sheet_CondfmtRuleCountByCurrentSelectionRange,
    FlagType_Sheet_CondfmtRuleCountByCurrentWorkSheet,
    FlagType_Sheet_PrintOption,
    FlagType_Sheet_PageOrder,
    FlagType_Sheet_FitPageWidth,
    FlagType_Sheet_FitPageHeight,
    FlagType_Sheet_FitUserScale,
    FlagType_Sheet_FitIsAuto,
    FlagType_Sheet_AutoSaveAvailable,
    FlagType_Sheet_PrintArea,
    FlagType_Sheet_PrintFitScale,
    FlagType_Sheet_ProtectPasswordStatus,
    FlagType_Sheet_NewFile // [5/21/2015 hyunwook] 새파일 유무 확인
} FlagType;

typedef enum
{
    SheetCondfmtInsertRuleType_NoneCF = 0x00,// 0[0x0]
    SheetCondfmtInsertRuleType_AboveAverage,// 1[0x1]
    SheetCondfmtInsertRuleType_BeginsWith,// 2[0x2]
    SheetCondfmtInsertRuleType_CellIs,// 3[0x3]
    SheetCondfmtInsertRuleType_ColorScale,// 4[0x4]
    SheetCondfmtInsertRuleType_ContainsBlanks,// 5[0x5]
    SheetCondfmtInsertRuleType_ContainsErrors,// 6[0x6]
    SheetCondfmtInsertRuleType_ContainsText,// 7[0x7]
    SheetCondfmtInsertRuleType_DataBar,// 8[0x8]
    SheetCondfmtInsertRuleType_DuplicateValues,// 9[0x9]
    SheetCondfmtInsertRuleType_EndsWith,// 10[0xa]
    SheetCondfmtInsertRuleType_Expression,// 11[0xb]
    SheetCondfmtInsertRuleType_IconSet,// 12[0xc]
    SheetCondfmtInsertRuleType_NotContainsBlanks,// 13[0xd]
    SheetCondfmtInsertRuleType_NotContainsErrors,// 14[0xe]
    SheetCondfmtInsertRuleType_NotContainsText,// 15[0xf]
    SheetCondfmtInsertRuleType_TimePeriod,// 16[0x10]
    SheetCondfmtInsertRuleType_Top10,// 17[0x11]
    SheetCondfmtInsertRuleType_UniqueValues// 18[0x12]
}SheetCondfmtInsertRuleType; // BrSheetInsertCFRuleType

typedef enum
{
    SheetCondfmtValueObjectType_None = 0x00,// 0[0x0]
    SheetCondfmtValueObjectType_Formula,// 1[0x1]
    SheetCondfmtValueObjectType_Max,// 2[0x2]
    SheetCondfmtValueObjectType_Min,// 3[0x3]
    SheetCondfmtValueObjectType_Num,// 4[0x4]
    SheetCondfmtValueObjectType_Percent,// 5[0x5]
    SheetCondfmtValueObjectType_Percentile,// 6[0x6]
    SheetCondfmtValueObjectType_AutoMin,// 7[0x7]
    SheetCondfmtValueObjectType_AutoMax// 8[0x8]
}SheetCondfmtValueObjectType; //BrSheetCondfmtValueObjectType;

typedef enum
{
    SheetCondfmtIconSetType_Normal = 0x200,// 512[0x200]
    SheetCondfmtIconSetType_3Arrows,// 513[0x201]
    SheetCondfmtIconSetType_3ArrowsGray,// 514[0x202]
    SheetCondfmtIconSetType_3Flags,// 515[0x203]
    SheetCondfmtIconSetType_3Signs,// 516[0x204]
    SheetCondfmtIconSetType_3Symbols,// 517[0x205]
    SheetCondfmtIconSetType_3Symbols2,// 518[0x206]
    SheetCondfmtIconSetType_3TrafficLights1,// 519[0x207]
    SheetCondfmtIconSetType_3TrafficLights2,// 520[0x208]
    SheetCondfmtIconSetType_4Arrows,// 521[0x209]
    SheetCondfmtIconSetType_4ArrowsGray,// 522[0x20a]
    SheetCondfmtIconSetType_4Rating,// 523[0x20b]
    SheetCondfmtIconSetType_4RedToBlack,// 524[0x20c]
    SheetCondfmtIconSetType_4TrafficLights,// 525[0x20d]
    SheetCondfmtIconSetType_5Arrows,// 526[0x20e]
    SheetCondfmtIconSetType_5ArrowsGray,// 527[0x20f]
    SheetCondfmtIconSetType_5Quarters,// 528[0x210]
    SheetCondfmtIconSetType_5Rating,// 529[0x211]
    SheetCondfmtIconSetType_3TrianglesExtension,// 530[0x212]
    SheetCondfmtIconSetType_3StarsExtension,// 531[0x213]
    SheetCondfmtIconSetType_5BoxesExtension// 532[0x214]
}SheetCondfmtIconSetType;   // BrCFIconsetType;

typedef enum
{
    SheetCondfmtRuleOperator_Invalid = 0x100,
    SheetCondfmtRuleOperator_BeginsWith,
    SheetCondfmtRuleOperator_Between,
    SheetCondfmtRuleOperator_ContainsText,
    SheetCondfmtRuleOperator_EndsWith,
    SheetCondfmtRuleOperator_Equal,
    SheetCondfmtRuleOperator_GreaterThan,
    SheetCondfmtRuleOperator_GreaterThanOrEqual,
    SheetCondfmtRuleOperator_LessThan,
    SheetCondfmtRuleOperator_LessThanOrEqual,
    SheetCondfmtRuleOperator_NotBetween,
    SheetCondfmtRuleOperator_NotContainsText,
    SheetCondfmtRuleOperator_NotEqual
}SheetCondfmtRuleOperator;  //BrCondfmtRuleOperator;

typedef enum
{
    SheetCondfmtEditOption_Add = 0x01,// 1[0x1]
    SheetCondfmtEditOption_Replace,// 2[0x2]
    SheetCondfmtEditOption_DeleteWholeSheet,// 3[0x3]
    SheetCondfmtEditOption_DeleteSelectedCell,// 4[0x4]
    SheetCondfmtEditOption_DeleteSelectedRule// 5[0x5]
}SheetCondfmtEditOption;    //BrSheetEditCFOption;

typedef enum
{
    PagePosition_Previous = 0,
    PagePosition_Current = 1,
    PagePosition_Next = 2,
}PagePosition;

typedef enum
{
    AnnotationStyle_None            = 0,
    AnnotationStyle_Crossout        = 1,
    AnnotationStyle_Highlight       = 2,
    AnnotationStyle_Underline       = 3,
    AnnotationStyle_Brush           = 4,
    AnnotationStyle_Pen             = 5,
    AnnotationStyle_Pencil          = 6,
    AnnotationStyle_Polygon         = 7,
    AnnotationStyle_Connect         = 8, //POLYLINE
    AnnotationStyle_Link            = 9,
    AnnotationStyle_TextBox         = 10, //FREETEXT
    AnnotationStyle_Squiggly        = 11,
    AnnotationStyle_StrikeThrough   = 12, //STRIKEOUT
    AnnotationStyle_Stamp           = 13,
    AnnotationStyle_Caret           = 14,
    AnnotationStyle_Ink             = 15,
    AnnotationStyle_Popup           = 16,
    AnnotationStyle_FileAttachment  = 17,
    AnnotationStyle_Sound           = 18,
    AnnotationStyle_Movie           = 19,
    AnnotationStyle_Widget          = 20,
    AnnotationStyle_Screen          = 21,
    AnnotationStyle_Printermark     = 22,
    AnnotationStyle_Trapnet         = 23,
    AnnotationStyle_Watermark       = 24,
    AnnotationStyle_3D              = 25,
    AnnotationStyle_StickyNote      = 26, //TEXT
    AnnotationStyle_Line            = 27,
    AnnotationStyle_Square          = 28,
    AnnotationStyle_Oval            = 29, //CIRCLE
}AnnotationStyle; //BrPDFAnnotType

typedef enum
{
    ChartModify_Insert             = -0x0001,
    ChartModify_Type               = 0x0001,
    ChartModify_Mode               = 0x0002,
    ChartModify_Title              = 0x0004,
    ChartModify_XTitle             = 0x0008,
    ChartModify_YTitle             = 0x0010,
    ChartModify_Legend             = 0x0020,
    ChartModify_Dimension          = 0x0040,
    ChartModify_Item               = 0x0080,
    ChartModify_Column             = 0x0100,
    ChartModify_ValueData          = 0x0200,
    ChartModify_Style              = 0x0400,
    ChartModify_Border             = 0x0800,
    ChartModify_ColumnRowChange    = 0x1000,
    ChartModify_ShowHideData       = 0x2000,
}ChartModifyOperation;

typedef enum
{
    PDFBookmarkCommand_AddFirstBookmark,
    PDFBookmarkCommand_AddItem,
    PDFBookmarkCommand_AddSubItem,
    PDFBookmarkCommand_SetInformation,
    PDFBookmarkCommand_GetInformation,
    PDFBookmarkCommand_DeleteItem,
    PDFBookmarkCommand_MoveItem,
    PDFBookmarkCommand_MoveSubItem,
    PDFBookmarkCommand_MovePrevItem,
}PDFBookmarkCommand; //BrPDFBmkCMD;

typedef enum
{
    SlideManageEvent_Duplicate,
    SlideManageEvent_Insert,
    SlideManageEvent_Delete,
    SlideManageEvent_MoveNext,
    SlideManageEvent_MovePrev,
    SlideManageEvent_MoveExtend,
    SlideManageEvent_Layout,
    SlideManageEvent_Copy,
    SlideManageEvent_Cut,
    SlideManageEvent_Paste,
}SlideManageEventType;

typedef enum
{
    SheetFormulaType_Sum,   // 0
    SheetFormulaType_Max,
    SheetFormulaType_Min,
    SheetFormulaType_Average,
    SheetFormulaType_Count,
}SheetFormulaType;

typedef enum
{
    SlideShowType_None=0,
    SlideShowType_Presenter,//발표자가 진행
    SlideShowType_Browser,	//웹 형식으로 진행
    SlideShowType_Kiosk,	//대화형 자동 진행
} SlideShowType;    //BrSlideShowType;

typedef enum
{
    SlideShowStopType_Normal = 0,
    SlideShowStopType_NextWaiting = -1,
    SlideShowStopType_PrevWaiting = -2,
    SlideShowStopType_EndWaiting = -3,
}SlideShowStopType;

typedef enum
{
    SlideTemplateType_None      = 0,
    SlideTemplateType_Title,
    SlideTemplateType_TitleObject,
    SlideTemplateType_SectionHeader,
    SlideTemplateType_TwoObjects,
    SlideTemplateType_TwoTextTwoObjects,
    SlideTemplateType_TitleOnly,
    SlideTemplateType_Blank,
    SlideTemplateType_TitleObjectCaption,
    SlideTemplateType_PictureCaption,
    SlideTemplateType_VerticalText,
    SlideTemplateType_VerticalTitleText,
    SlideTemplateType_Object,
    SlideTemplateType_MasterLayout,
}SlideTemplateType;

typedef enum
{
    ResourceStringID_None = 0,// 0[0x0]
    ResourceStringID_ClickAddTitle = 1,// 1[0x1]
    ResourceStringID_ClickAddSubtitle = 2,// 2[0x2]
    ResourceStringID_ClickAddText = 3,// 3[0x3]
    ResourceStringID_HeaderFooterHolderText = 4,// 4[0x4]
    ResourceStringID_Date = 5,// 5[0x5]"날짜"  //string_filemanager_contextmenu_filesort_date
    ResourceStringID_SlideNumber = 6,// 6[0x6]"슬라이드 번호" //string_ribbon_slide_number
    ResourceStringID_SlideFooter = 7,// 7[0x7]"바닥글"  //string_word_page_layout_footer
    ResourceStringID_Title = 8,// 8[0x8] "Document title"
    ResourceStringID_Subtitle = 9,// 9[0x9] "Document subtitle"
    ResourceStringID_Author = 10,// 10[0xa] "Author name"
    ResourceStringID_School = 11,// 11[0xb] "Company"
    ResourceStringID_Page = 12,// 12[0xc] "Page"
    ResourceStringID_Pagedot = 13,// 13[0xd] "pg."
    ResourceStringID_Heading = 14,// 14[0xe] "Add a heading to your document"
    ResourceStringID_SlideHeader = 15,// 15[0xf] 머리글
    ResourceStringID_TypeChart = 16,// 16[0x10] 차트를 추가하려면 아이콘을 클릭하세요  //"Click icon to add chart"
    ResourceStringID_TypeTable = 17,// 17[0x11] 표를 추가하려면 아이콘을 클릭하세요  //"Click icon to add table"
    ResourceStringID_TypeMedia = 18,// 18[0x12] 미디어를 추가하려면 아이콘을 클릭하세요  //"Click icon to add media"
    ResourceStringID_TypePicture = 19,// 19[0x13] 그림을 추가하려면 아이콘을 클릭하세요 //"Click icon to add picture"
    ResourceStringID_TypeCamera = 20,// 20[0x14] 동영상을 추가하려면 아이콘을 클릭하세요   //"Click icon to add video"
    ResourceStringID_TypeMasterTitle = 21,// 21[0x15] Master View일때보일TITLE 글자
    ResourceStringID_TypeMasterSubtitle = 22,// 22[0x16] Master View일때보일SUBTITLE 글자
    ResourceStringID_TypeMasterChart = 23,// 23[0x17] Master View일때보일CHART 글자
    ResourceStringID_TypeMasterTable = 24,// 24[0x18] Master View일때보일TABLE 글자
    ResourceStringID_TypeMasterMedia = 25,// 25[0x19] Master View일때보일MEDIA 글자
    ResourceStringID_TypeMasterPicture = 26,// 26[0x1a] Master View일때보일PICTURE 글자
    ResourceStringID_TypeMasterCamera = 27,// 27[0x1b] Master View일때보일CAMERA 글자
    ResourceStringID_TypeMasterFooter = 28,// 28[0x1c] Master View일때보일FOOTER 글자
    ResourceStringID_MasterNameOfficeTheme    = 29,// 29[0x1d] Office Theme Master Defult Name  - Office 테마/Office Theme
    ResourceStringID_LayoutNameTitle           = 30,// 30[0x1e] Office Theme Layout Name 1 - 제목 슬라이드/Title Slide
    ResourceStringID_LayoutNameObj             = 31,// 31[0x1f] Office Theme Layout Name 2 - 제목 및 내용/Title and Content
    ResourceStringID_LayoutNameSechead         = 32,// 32[0x20] Office Theme Layout Name 3 - 구역 머리글/Section Header
    ResourceStringID_LayoutNameTwoobj          = 33,// 33[0x21] Office Theme Layout Name 4 - 컨텐츠 2개/Two Content
    ResourceStringID_LayoutNameTwotxtwoobj     = 34,// 34[0x22] Office Theme Layout Name 5 - 비교/Title Only
    ResourceStringID_LayoutNameTitleonly       = 35,// 35[0x23] Office Theme Layout Name 6 - 제목만/Title Only
    ResourceStringID_LayoutNameBlank           = 36,// 36[0x24] Office Theme Layout Name 7 - 빈 화면/Blank
    ResourceStringID_LayoutNameObjtx           = 37,// 37[0x25] Office Theme Layout Name 8 - 캡션 있는 컨텐츠/Content with Caption
    ResourceStringID_LayoutNamePictx           = 38,// 38[0x26] Office Theme Layout Name 9 - 캡션 있는 그림/Picture with Caption
    ResourceStringID_LayoutNameVertx           = 39,// 39[0x27] Office Theme Layout Name 10- 제목 및 세로 텍스트/Title and Vertical Text
    ResourceStringID_LayoutNameVertitleandtx   = 40,// 40[0x28] Office Theme Layout Name 11- 세로 제목 및 텍스트/Vertical Title and Text
    ResourceStringID_TypeMasterObject1Depth = 41,// 41[0x29] 마스터텍스트스타일을편집합니다.
    ResourceStringID_TypeMasterObject2Depth = 42,// 42[0x2a] 둘째수준
    ResourceStringID_TypeMasterObject3Depth = 43,// 43[0x2b] 셋째수준
    ResourceStringID_TypeMasterObject4Depth = 44,// 44[0x2c] 넷째수준
    ResourceStringID_TypeMasterObject5Depth = 45,// 45[0x2d] 다섯째수준
    ResourceStringID_MasterNameUserDesign = 46,// 46[0x2e]디자인 사용자 지정
} ResourceStringID;

typedef enum
{
    SheetEditorStatus_None                   = 0x0000,// 0[0x0]
    SheetEditorStatus_View                   = 0x0001,// 1[0x1]
    SheetEditorStatus_Edit                   = 0x0002,// 2[0x2]
    SheetEditorStatus_EditInField            = 0x0004,// 4[0x4]
    SheetEditorStatus_EditInCell             = 0x0008,// 8[0x8]
    SheetEditorStatus_Function               = 0x0010,// 16[0x10]
    SheetEditorStatus_Chart                  = 0x0020,// 32[0x20]
    SheetEditorStatus_EditInTextbox          = 0x0040,// 64[0x40]
}SheetEditorStatus;

typedef enum{
    ProtectNone             =	0,
    ProtectOpenProtect		=	0x00000001,
    ProtectOpenPassword     =	0x00000002,
    ProtectEditProtect		=	0x00000004, //BWP의 edit모드시
    ProtectEditPassword     =	0x00000008,
    ProtectReadOnly         =   0x00000010,
    ProtectMsWordEditRestriction    =   0x00000020, //MS의 편집 제한시
}ProtectInfo;

//#warning temp
//typedef enum
//{
//    SheetResultType_AutoFilterStatusChanged = 0x0000,// 0[0x0]
//    SheetResultType_AutoFilterMenuClicked,// 1[0x1]
//    SheetResultType_AutoFilterIndexCellRectUpdated,// 2[0x2]
//    SheetResultType_AutoFilterContextUpdated,// 3[0x3]breakfree:[20130228] 자동필터 context export 기능 추가
//    SheetResultType_PivotTableExistenceInformationUpdated,// 4[0x4]breakfree:[20130315] Pivot Table 원본 저장 및 시트 보호 기능 추가
//    SheetResultType_ControlButtonListComboControlClicked,// 5[0x5]breakfree: [20130913] PivotTable Filter 작업 서버 반영
//    SheetResultType_OleObjectClicked,// 6[0x6][2012.06.20][이상열][TID:7039]
//    SheetResultType_MmsOutOfMemoryEditBlock,// 7[0x7]
//    SheetResultType_MmsDynamicLoadingStart,// 8[0x8][2012.10.16][이상열][TID:9755]
//    SheetResultType_MmsDynamicLoadingComplete,// 9[0x9]
//    SheetResultType_MmsDynamicLoadingPaintStart,// 10[0xa]
//    SheetResultType_FormulaCircularReferencesWarning,// 11[0xb]
//    SheetResultType_ProtectionSheetCanNotEdit,// 12[0xc]
//#ifdef USE_SHEETTABLEFORMULA_DANDONG
//    SheetResultType_DataTableChangePart,// 13[0xd][2013.11.20][Dandong] 삭제하려는 Cell이 Table령역인 경우.
//    SheetResultType_ArrayChangePart,// 14[0xe]
//#endif //USE_SHEETTABLEFORMULA_DANDONG
//    SheetResultType_CommentNextSearchFinish,// 15[0xf]
//    SheetResultType_CommentPrevSearchFinish,// 16[0x10]
//    SheetResultType_FilterCommandResult,// 17[0x11]
//    SheetResultType_CellMoveResult,// 18[0x12][2014.02.25][yejiy] 셀 이동시 예외처리
//    SheetResultType_StatusBarFuncData,// 19[0x13] 상태표시줄 함수 관련 콜백 [4/4/2014 chunrans4]
//    SheetResultType_HyperlinkTooltip,// 20[0x14] 하이퍼 링크 PC 툴팁 관련 콜백 [6/8/2014 chunrans4]
//    SheetResultType_CellInsertDelete,// 21[0x15][2014-04-18][sohyunhwang] cell insert/delete
//    SheetResultType_TableTotalsRowMenuClicked,// 22[0x16] 테이블 요약행 목록 버튼 [5/30/2014 chunrans4]
//    SheetResultType_DataValidationMenuClicked,// 23[0x17] 데이터 유효성 목록 버튼 [5/30/2014 chunrans4]
//    SheetResultType_DataValidationError,// 24[0x18] 데이터 유효성 에러 메시지 관련 콜백 [6/8/2014 chunrans4]
//    SheetResultType_CalculateTimeOver,// 25[0x19] 연산 과정이 느릴 경우 "연산 종료 및 Calc 수동 모드 전환" 콜백  [11/10/2014 chunrans4]
//    SheetResultType_CommonErrors// 26[0x1a]breakfree:[20150212] 문자열로 정의된 에러 전달
//}SheetResultType;

typedef enum
{
    Caret_Up = 0,// 0[0x0]
    Caret_Down = 1,// 1[0x1]
    Caret_Left = 2,// 2[0x2]
    Caret_Right = 3,// 3[0x3]
    Caret_Home = 4,// 4[0x4]
    Caret_End = 5,// 5[0x5]
    Caret_Pageup = 6,// 6[0x6]
    Caret_Pagedown = 7// 7[0x7]
}CaretMoveMode;

typedef enum
{
    Protect_Normal = 0,// 0[0x0]
    Protect_Read = 1,// 1[0x1]
    Protect_Write = 2,// 2[0x2]
    Protect_ReadOnlyForWrite = 3,// 3[0x3]
    Protect_ReadOnlyRecommended = 4// 4[0x4]
}ProtectReadMode;

//BrAnimationPresetClassType, PPT_ANIMATION_INFO use it.
typedef enum AnimationPresetClassType
{
    SLIDE_ANIMATION_PRESET_CLASS_NONE = 0,
    SLIDE_ANIMATION_PRESET_CLASS_EMPH = 1,
    SLIDE_ANIMATION_PRESET_CLASS_ENTR = 2,
    SLIDE_ANIMATION_PRESET_CLASS_EXIT = 3,
    SLIDE_ANIMATION_PRESET_CLASS_MEDIACALL = 4,
    SLIDE_ANIMATION_PRESET_CLASS_PATH = 5,
    SLIDE_ANIMATION_PRESET_CLASS_VERB = 6,
}AnimationPresetClassType;

//BrSlideAnimationTimingType, PPT_ANIMATION_INFO use it.
typedef enum SlideAnimationTimingType
{
    SLIDE_ANIMATION_TIMING_CLICKEFFECT	= 0, //클릭할 때
    SLIDE_ANIMATION_TIMING_WITHEFFECT	= 1, //이전 효과와 함께
    SLIDE_ANIMATION_TIMING_AFTETEFFECT	= 2	 //이전 효과 다음에
}SlideAnimationTimingType;

//BrSlidePathAnimationEditModeType, PPT_ANIMATION_INFO use it.
typedef enum SlidePathAnimationEditModeType
{
    SLIDE_ANIMATION_PATH_ANIMATION_EDIT_TYPE_NONE = 0,
    SLIDE_ANIMATION_PATH_ANIMATION_EDIT_TYPE_FIXED,	//frame과 이동경로가 독립적인 형태
    SLIDE_ANIMATION_PATH_ANIMATION_EDIT_TYPE_RELATIVE	//frame과 이동경로가 그룹 형태
}SlidePathAnimationEditModeType;


//SlideTextAnimationType, PPT_ANIMATION_INFO use it.
typedef enum SlideTextAnimationType
{
    SLIDE_TEXT_ANIMATION_TYPE_NONE = 0,
    SLIDE_TEXT_ANIMATION_TYPE_PARAGRAPH, // para 단위
    SLIDE_TEXT_ANIMATION_TYPE_TEXTLETTER	 // text 단위
}SlideTextAnimationType;

typedef enum DataValidationErrorStyle
{
    DataValidationErrorStyle_Stop        = 0,
    DataValidationErrorStyle_Warning     = 1,
    DataValidationErrorStyle_Information = 2
}DataValidationErrorStyle;

typedef enum DataValidationErrorStyleEventType
{
    DataValidationErrorStyleEventType_Stop_Re            = 0,
    DataValidationErrorStyleEventType_Stop_Cancel        = 1,
    DataValidationErrorStyleEventType_Warning_Yes        = 2,
    DataValidationErrorStyleEventType_Warning_No         = 3,
    DataValidationErrorStyleEventType_Warning_Cancel     = 4,
    DataValidationErrorStyleEventType_Information_Ok     = 5,
    DataValidationErrorStyleEventType_Information_Cancel = 6
}DataValidationErrorStyleEventType;

typedef enum DataValidationAnswerErrorEventType
{
    DataValidationAnswerErrorEventType_OK           = 1,
    DataValidationAnswerErrorEventType_Restart_Edit = 2,
    DataValidationAnswerErrorEventType_Cancel       = 3
}DataValidationAnswerErrorEventType;

//in Android E.java, matching declared
//When it go from UI to Engine,it is changed to following value
// case 0: BoraEvent.nType = BRGUI_PPT_SLIDEANIMATION_ADD_EVENT; break;
// case 1: BoraEvent.nType = BRGUI_PPT_SLIDEANIMATION_DELETE_EVENT; break;
// case 2: BoraEvent.nType = BRGUI_PPT_SLIDEANIMATION_MOVE_EVENT; break;
// case 3: BoraEvent.nType = BRGUI_PPT_SLIDEANIMATION_CHANGE_EVENT; break;
// case 4: boraEvent.nType = BRGUI_PPT_SLIDEANIMATION_PREVIEW_EVENT; break;
//@see EvCompInterfaceMsg.mm ISetSlideAnimation
typedef enum EV_ANIMATION_EVENT_TYPE
{
    eEV_ANIMATION_ADD_EVENT = 0,
    eEV_ANIMATION_DELETE_EVENT = 1,
    eEV_ANIMATION_MOVE_EVENT = 2,
    eEV_ANIMATION_CHANGE_EVENT = 3,
    eEV_ANIMATION_PREVIEW_EVENT = 4
}EV_ANIMATION_EVENT_TYPE;

//BrAnimationSubType
//@see bmvinterface.h
typedef enum AnimationSubType
{
    ANIMATION_SUB_TYPE_NONE = 0,
    ANIMATION_SUB_TYPE_FROM_TOP = 1,					// 위에서
    ANIMATION_SUB_TYPE_FROM_RIGHT = 2,				// 오른쪽에서
    ANIMATION_SUB_TYPE_FROM_RIGHT_UP = 3,			// 오른쪽위에서(로)
    ANIMATION_SUB_TYPE_FROM_DOWN = 4,				// 아래에서
    ANIMATION_SUB_TYPE_VERTICAL = 5,					// 가로, 옆으로
    ANIMATION_SUB_TYPE_FROM_RIGHT_DOWN = 6,			// 오른쪽 아래에서(로)
    ANIMATION_SUB_TYPE_FROM_LEFT = 8,				// 왼쪽에서
    ANIMATION_SUB_TYPE_FROM_LEFT_UP = 9,				// 왼쪽 위에서(로)
    ANIMATION_SUB_TYPE_HORIZONTAL = 10,				// 세로, 아래쪽
    ANIMATION_SUB_TYPE_FROM_LEFT_DOWN = 12,			// 왼쪽 아래에서(로)
    ANIMATION_SUB_TYPE_IN = 16,						// 안쪽, 개체 센터 (나타내기)
    ANIMATION_SUB_TYPE_IN_TO_SCREEN_BOTTOM = 20,		// 아래화면으로
    ANIMATION_SUB_TYPE_VERTICAL_IN = 21,				// 세로 안쪽으로
    ANIMATION_SUB_TYPE_HORIZONTAL_IN = 26,			// 가로 안쪽으로
    ANIMATION_SUB_TYPE_OUT = 32,						// 바깥쪽, 개체 센터 (끝내기)
    ANIMATION_SUB_TYPE_OUT_FROM_SCREEN_BOTTOM = 36,	// 아래화면 밖에
    ANIMATION_SUB_TYPE_VERTICAL_OUT = 37,			// 세로 바깥쪽으로
    ANIMATION_SUB_TYPE_HORIZONTAL_OUT = 42,			// 가로 바깥쪽으로
    ANIMATION_SUB_TYPE_IN_SLIHTLY = 272,				// 약간 안에
    ANIMATION_SUB_TYPE_OUT_SLIHTLY = 288,			// 약간 밖에
    ANIMATION_SUB_TYPE_IN_FROM_SCREEN_CENTER = 528,	// 가운데 화면안에, 슬라이드 센터(나타내기)
    ANIMATION_SUB_TYPE_OUT_FROM_SCREEN_CENTER = 544,	// 가운데 화면밖으로, 슬라이드 센터(끝내기)
}AnimationSubType;

/* thumbnail event type */
typedef enum PreviewThumbnail
{
    PreviewThumbnailThemeFormatEffect,
    PreviewThumbnailShapeQuickStyle,
    PreviewThumbnailLineQuickStyle,
    PreviewThumbnailBackgroundStyle,
    PreviewThumbnailTableQuickStyle,
    PreviewThumbnailGlow,
    PreviewThumbnailGradientFillPresetGradients,			//그라데이션 preset (30개)
    PreviewThumbnailGradientFillDirection,					//그라데이션 방향 preset 선형(8개), 방사형(5개), 사각형(5개) 18개
    PreviewThumbnailPatternFillPreset,						//패턴 채우기 (48개)
    PreviewThumbnailImageColorSaturation,
    PreviewThumbnailImageColorScale,
    PreviewThumbnailImageColorRecolor,
    PreviewThumbnailImageColorArtistic,
    PreviewThumbnailImageModSharpen,
    PreviewThumbnailImageModBrightContrast,
    PreviewThumbnailCellStyile,
    PreviewThumbnailSheetTableQuickStyle,
    PreviewThumbnailWordartQuickStyleForWord,
    PreviewThumbnailWordartQuickStyleForPpt,
    PreviewThumbnailWordHeaderTemplate,						//머리글 템플릿 (24개)
    PreviewThumbnailWordFooterTemplate,						//바닥글 템플릿 (24개)
    PreviewThumbnailWordArtNeon,                            //wordart neon preview
    PreviewThumbnailCustomizeThemeColor,					//새 테마색 만들기 미리보기
    PreviewThumbnailBorderPatternShading,
    PreviewThumbnailGradientLineDirection,					//그라데이션 선 방향 preset 선형(8개), 방사형(5개), 사각형(5개) 18개 (ZPD-2943)
    PreviewThumbnailWordWatermark,							//Word 디자인 > 워터마크
    PreviewThumbnailWordFieldPagenum,						//Word 페이지 번호
    PreviewThumbnailWordToc,								//Word 목차
    PreviewThumbnailTextGradientFillDirection,				//텍스트 그라데이션 채우기 방향 preset 선형(8개), 방사형(5개), 사각형(5개) 18개 (ZPD-5647)
    PreviewThumbnailTextGradientLineDirection,				//텍스트 윤곽선 그라데이션 채우기 방향 preset 선형(8개), 방사형(5개), 사각형(5개) 18개 (ZPD-5647)
    PreviewThumbnailWordCellLine							//Word CellLine 미리보기 썸네일
}PreviewThumbnail;