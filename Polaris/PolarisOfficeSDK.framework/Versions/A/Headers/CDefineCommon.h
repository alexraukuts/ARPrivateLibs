//
//  CDefineCommon.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 9. 15..
//  Copyright (c) 2014년 infraware. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import <QuartzCore/QuartzCore.h>

typedef enum
{
    BookmarkItemType_HasChild,
    BookmarkItemType_Key,
    BookmarkItemType_Title,
	BookmarkItemType_Page,
	BookmarkItemType_RectLeft,
	BookmarkItemType_RectTop,
	
    BookmarkItemType_Max,
}BookmarkItemType;

typedef enum
{
    ResultType_Success,
    ResultType_InvalidFilePath,
    ResultType_InvalidFileMemory,
    
    ResultType_Fail,
    ResultType_Max,
}ResultType;

typedef enum
{
    AlertType_Result,
    AlertType_Draw,
    AlertType_ReplaceAll,
    AlertType_Password,
    AlertType_PasswordDocument,
    AlertType_New_Folder,
    AlertType_UnSupport,
	AlertType_UnSupportMovieFile,
    AlertType_Text_Field,
	AlertType_Rename_PDFBookmark,
	AlertType_Can_Not_Edited,
	AlertType_Invalidfile,
	AlertType_Can_Not_Create_Folder,
	AlertType_InvalidText,
    
    AlertType_WritePassword,
    AlertType_Max,
}AlertType;

typedef enum
{
    // UI
    TextType_AlertTitle,
    TextType_AlertCancel,
    TextType_AlertDone,
    TextType_AlertDrawMessage,

    TextType_Max,
}TextType;

typedef enum {
    ClipboardAction_Copy = 0,
    ClipboardAction_Cut,
    ClipboardAction_Paste,
    ClipboardAction_BeforePaste,
}ClipboardActionType;

typedef enum {
    ClipboardContent_Text = 0,
    ClipboardContent_Image,
    ClipboardContent_Other,
}ClipboardContentType;

typedef enum {
    ZoomStatus_DEFAULT = 0,
    ZoomStatus_MIN,
    ZoomStatus_LEVEL1,
    ZoomStatus_LEVEL2,
    ZoomStatus_LEVEL3,
    ZoomStatus_MAX
}ZoomStatus;

typedef enum {
    OpenFailType_ERROR = 0,
    OpenFailType_PASSDIFF,
    OpenFailType_UNSUPPORT,
    OpenFailType_ETC,
}OpenFailType;

typedef enum {
    TitleTheme_Dark = 0,
    TitleTheme_Light
}TitleTheme;

// 배포 후 중요 이슈가 생겼을 경우 재 배포 없이 로그 레벨 값만 변경하여 필요 로그를 받기 위해
typedef enum
{
    LogType_Clear = 0,              // 로그를 남기지 않음

    ////////////////////////////////////////////////////////////////////////////////////////////////////
    // 아래 로그 레벨 타입 값으로 로그를 남겨주세요
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    LogType_Low,           // 로그 레벨에 따라 남김
    LogType_Medium,               // 로그 레벨에 따라 남김
    LogType_High,                // 로그 레벨에 따라 남김
    ////////////////////////////////////////////////////////////////////////////////////////////////////
    
    LogType_All,                // 모든 로그를 다 남김
    LogType_Max,
}LogType;

typedef enum
{
    FSET_DIRECTORY,
    FSET_DOC,
    FSET_DOCX,
    FSET_XLS,
    FSET_XLSX,
    FSET_PPT,
    FSET_PPTX,
    FSET_PDF,
    FSET_TXT,
    FSET_HWP,
    FSET_ODT,
    FSET_ODS,
    FSET_ODP,
    FSET_UPPER,
    FSET_UNKNOWN,
}FileSaveAsExtensionType;

typedef enum
{
    OfficeDriveType_Local,
    OfficeDriveType_iTunes,
    OfficeDriveType_GoogleDrive,
    OfficeDriveType_SkyDrive,
    OfficeDriveType_SugarSync,
    OfficeDriveType_WebDav,
    OfficeDriveType_Dropbox,
    OfficeDriveType_Box,
    OfficeDriveType_UCloud,
    
    OfficeDriveType_Max,
}OfficeDriveType;

typedef enum
{
    OfficeDriveResultType_Success,
    OfficeDriveResultType_Error,
    OfficeDriveResultType_ParserError,
    
    OfficeDriveResultType_Max,
}OfficeDriveResultType;

typedef enum
{
    GradationDirType_LeftTop,
    GradationDirType_CenterTop,
    GradationDirType_RightTop,
    GradationDirType_LeftCenter,
    GradationDirType_Center,
    GradationDirType_RightCenter,
    GradationDirType_LeftBottom,
    GradationDirType_CenterBottom,
    GradationDirType_RightBottom,
    
    GradationDirType_Max,
    
}GradationDirType;

typedef enum
{
    SearchOptionSectionType_Switch,
    SearchOptionSectionType_Button,
    
    SearchOptionSectionType_Max,
    
}SearchOptionSectionType;

typedef enum
{
    SearchOptionType_Case,
    SearchOptionType_Word,
    SearchOptionType_Bit,
    
    SearchOptionType_Max,
    
}SearchOptionType;

typedef enum
{
    SlideShow_General,
    SlideShow_Pointer,
    SlideShow_Pen
}SlideShowMode;

typedef enum {
    BlankObjectType_NONE,
    BlankObjectType_CAMERA,
    BlankObjectType_CHART,
    BlankObjectType_IMAGE,
    BlankObjectType_MOVIE,
    BlankObjectType_TABLE,
    BlankObjectType_VIDEO
}BlankObjectType;

typedef enum {
    ColorType_Red,
    ColorType_Green,
    ColorType_Blue,

    ColorType_Max,
}ColorType;

typedef enum {
    TextWaterMarkTableSectionType_Text,
    TextWaterMarkTableSectionType_FontFace,
    TextWaterMarkTableSectionType_Size,
    TextWaterMarkTableSectionType_Color,
    TextWaterMarkTableSectionType_Layout,

    TextWaterMarkTableSectionType_Max,
}TextWaterMarkTableSectionType;

typedef enum {
    BorderSectionType_Setting,
    BorderSectionType_Form,
    BorderSectionType_ApplyTo,
    
    BorderSectionType_Max,
}BorderSectionType;

typedef enum {
    PageBorderSectionType_Setting,
    PageBorderSectionType_Form,
    PageBorderSectionType_ApplyTo,
    
    PageBorderSectionType_Max,
}PageBorderSectionType;

typedef enum
{
    SlideAnimationTabType_None = -1,
    SlideAnimationTabType_Entrance = 0,
    SlideAnimationTabType_Emphasis,
    SlideAnimationTabType_Exit,
    
    SlideAnimationTabType_Max,
}SlideAnimationTabType;

typedef enum
{
    AnimationTableSectionType_Animate,
    AnimationTableSectionType_Option,
    AnimationTableSectionType_Timing,

    AnimationTableSectionType_Max,
}AnimationTableSectionType;

typedef enum
{
	PopoverPosistion_Up_From_Toolbar,
    PopoverPosistion_Up,
    PopoverPosistion_Left,
	PopoverPosistion_Down,
	PopoverPosistion_Without_Arrow
}PopoverPosistion;

typedef enum
{
	KeyType_Tap = 9,
	KeyType_Del = 127,
	
	KeyType_Max,
}KeyType;

typedef enum
{
	EventIndexType_KeyState = 2,
	EventIndexType_Flag = 12,
	EventIndexType_64Bit = 13,
	EventIndexType_32Bit = 15,
	
	EventIndexType_Max,
}EventIndexType;

typedef enum
{
	KeyInputType_Left = 80,
	KeyInputType_Up = 82,
	KeyInputType_Down = 81,
	KeyInputType_Right = 79,
	KeyInputType_F2 = 59,
	KeyInputType_F3 = 60,
	KeyInputType_F4 = 61,
	KeyInputType_F5 = 62,
	KeyInputType_F12 = 69,
	
	KeyInputType_A = 4,
	KeyInputType_B = 5,
	KeyInputType_C = 6,
	KeyInputType_D = 7,
	KeyInputType_E = 8,
	KeyInputType_F = 9,
	KeyInputType_G = 10,
	KeyInputType_H = 11,
	KeyInputType_I = 12,
	KeyInputType_J = 13,
	KeyInputType_K = 14,
	KeyInputType_L = 15,
	KeyInputType_M = 16,
	KeyInputType_N = 17,
	KeyInputType_O = 18,
	KeyInputType_P = 19,
	KeyInputType_Q = 20,
	KeyInputType_R = 21,
	KeyInputType_S = 22,
	KeyInputType_T = 23,
	KeyInputType_U = 24,
	KeyInputType_V = 25,
	KeyInputType_W = 26,
	KeyInputType_X = 27,
	KeyInputType_Y = 28,
	KeyInputType_Z = 29,
	
	KeyInputType_0 = 39,
	KeyInputType_1 = 30,
	KeyInputType_2 = 31,
	KeyInputType_3 = 32,
	KeyInputType_4 = 33,
	KeyInputType_5 = 34,
	KeyInputType_6 = 35,
	KeyInputType_7 = 36,
	KeyInputType_8 = 37,
	KeyInputType_9 = 38,
	
	KeyInputType_Escape = 41,
	KeyInputType_Backspace = 42,
	KeyInputType_Delete = 76,
	KeyInputType_Tab = 43,
	KeyInputType_Enter = 40,
	KeyInputType_Return = 88,
}KeyInputType;

typedef enum
{
    SaveType_Unknown,
    SaveType_Save,
    SaveType_SaveAs,
    SaveType_Export
} SaveType;

#import "CMacro.h"

// Datas
#import "CDocData.h"
#import "CFileData.h"
#import "COptionData.h"
#import "CPopoverData.h"
#import "CCheckBoxCellData.h"
#import "CColorHueData.h"
#import "CKeyboardState.h"
#import "CChangeData.h"
#import "CAnimationData.h"
#import "CAnimationOptionData.h"
#import "CBookmarkData.h"
#import "CShortCutData.h"

// Decorators
#import "NSString+Format.h"
#import "UIView+CustomAnimation.h"
#import "UIViewController+Modal.h"
#import "UIColor+Extension.h"
#import "UINavigationController+ThemeTint.h"
#import "UILabel+AttributedString.h"
#import "UIImage+Resize.h"
#import "NSURL+Custom.h"
#import "NSBundle+Custom.h"
#import "CImage.h"
#import "UIApplication+Hooking.h"
#import "UIButton+Stretchable.h"
#import "ALAssetsLibrary+DefaultAssetsLibrary.h"

// Engines
#import "CEngineHelper.h"
#import "CEngineReceiver.h"
#import "CoreTextFacade.h"


// FileManagers
#import "CFileManager.h"
#import "CFilePathManager.h"
#import "CFileMemoryManager.h"

// Flyweights
#import "CThemeFlyweight.h"

// Mediators
#import "CMenuMediator.h"

// Performs
#import "CDatePerform.h"
#import "CDevicePerform.h"
#import "CFilePerform.h"
#import "CImagePerform.h"
#import "CStoryboardPerform.h"
#import "CStringPerform.h"
#import "CLogPerform.h"

// Thirds
#import "CProgressHUD.h"
#import "AFBlurSegue.h"
#import "UIMenuItem+CXAImageSupport.h"
#import "ASValueTrackingSlider.h"
#import "UIView+Toast.h"
#import "CFloatingTextField.h"
#import "AKPickerView.h"
#import "CAlertView.h"
#import "CNumberPadCustomBtn.h"
#import "CNavigationBar.h"

// Custom UI
#import "CSwitch.h"
#import "CSegmentedControl.h"
#import "CTextField.h"
#import "CTextView.h"

#import "CVersionFeature.h"

#import "CPolarisHelper.h"
#import "CPolarisCaster.h"

// UIViewController RemoveReference
#import "UIViewController+removeControllerReference.h"

// Define Numbers
#define MAX_HEAP_SIZE 1024
#define MAX_IDLE_LAYER 3
#define MAX_INLINE_ITEMS 5
#define MAX_DECELERATIONRATE 0.7
#define POPOVER_BORDER_SIZE 4
#define SHEET_CONTENT_FRAME_MULTIFLIER 8
#define ARROW_WIDTH 21
#define ARROW_HEIGHT 10
#define ARROW_LEFT_WIDTH 10
#define ARROW_LEFT_HEIGHT 21
#define ITEM_GAP_SIZE 20
#define HEIGHT_STATUSBAR 20
#define HEIGHT_TOOLBAR_MENU 44
#define HEIGHT_TOOLBAR 64
#define HEIGHT_DRAWTOOLBAR 44
#define HEIGHT_SEARCHTOOLBAR 44
#define HEIGHT_HEADERFOOTERTOOLBAR 44
#define HEIGHT_PHONE_REPLACETOOLBAR 70
#define HEIGHT_PHONE_LANDSCAPE_SEARCHTOOLBAR 44
#define HEIGHT_PHONE_PORTRAIT_SEARCHTOOLBAR 64
#define HEIGHT_SPINBUTTON 35
#define HEIGHT_SHEET_FORMULA_BAR 38
#define HEIGHT_SHEET_TAB_BAR 36
#define MAX_SPINITEM_COUNT 3
#define HEIGHT_SLIDE_PAGE_LAND 90
#define WIDTH_SLIDE_PAGE_LAND 116
#define HEIGHT_SLIDE_PAGE_PORT 112
#define WIDTH_SLIDE_PAGE_PORT 94
#define HEIGHT_PORTRAIT_SLIDE_NOTE 248
#define HEIGHT_LANDSCAPE_SLIDE_NOTE 116
#define HEIGHT_LANDSCAPE_SLIDE_NOTE_PHONE 96
#define REQUIRED_PRIORITY 1000
#define HIGH_PRIORITY 750
#define LOW_PRIORITY 250
#define HEIGHT_COLORPICKER 60
#define HEIGHT_COLORPICKER_WITHOUT_SWITCH 110
#define READ_LENGTH 1024
#define BLACK_COLOR 255
#define TRANSPARENT_COLOR 0
#define MAX_COLOR_RECENT_COUNT 8

// Define Strings
#define NAVIGATION_VIEWCONTROLLER @"navigationViewController"
#define MENU_VIEWCONTROLLER @"menuViewController"
#define PARENT_VIEWCONTROLLER @"parentViewController"
#define EDITOR_VIEWCONTROLLER @"editorViewController"
#define TOOLBAR_VIEWCONTROLLER @"toolbarViewController"
#define POPOVER_VIEWCONTROLLER @"CPopoverViewController"
#define POPOVER_POSITION @"popverPosistion"
#define CANVAS_STATE @"canvasState"
#define CANVAS_VIEW @"canvasView"
#define ALERT_VIEW @"alertView"
#define INLINEPOPUP_MEDIATOR @"inlinePopupMediator"
#define BAR_BUTTON_ITEM @"barButtonItem"
#define BAR_BUTTON @"barButton"
#define USERDEFAULT_RECENTCOLOR @"ColorRecentListKey"
#define USERDEFAULT_RECENTFONTBGCOLOR @"FontBGColorRecentListKey"
#define SLIDE_SHOW_PEN_SETTING @"SlideShowPenSetting"
#define SLIDE_SHOW_PEN_SETTING_COLOR @"SlideShowPenSettingColor"
#define SLIDE_SHOW_PEN_SETTING_TYPE @"SlideShowPenSettingType"
#define SLIDE_SHOW_PEN_INK_SETTING_THICKNESS @"SlideShowInkPenSettingThickness"
#define SLIDE_SHOW_PEN_HIGHLIGHT_SETTING_THICKNESS @"SlideShowHighlightPenSettingThickness"
#define SLIDE_SHOW_PEN_RULER_SETTING_THICKNESS @"SlideShowRulerPenSettingThickness"

//file type
#define DOC_FILE    @"Microsoft Office Word 97-2003"
#define DOCX_FILE   @"Microsoft Office Word 2007"
#define DOT_FILE    @"Microsoft Office Word 97-2003 Template file"
#define DOTX_FILE   @"Microsoft Office Word 2007 Template file"
#define XLS_FILE    @"Microsoft Office Excel 97-2003"
#define XLSX_FILE   @"Microsoft Office Excel 2007"
#define XLT_FILE    @"Microsoft Office Excel 97-2003 Template file"
#define XLTX_FILE   @"Microsoft Office Excel 2007 Template file"
#define CSV_FILE    @"comma-separated values file"
#define PPT_FILE    @"Microsoft Office PowerPoint 97-2003"
#define PPTX_FILE   @"Microsoft Office PowerPoint 2007"
#define POT_FILE    @"Microsoft Office PowerPoint 97-2003 Template file"
#define POTX_FILE   @"Microsoft Office PowerPoint 2007 Template file"
#define PDF_FILE    @"Adobe Acrobat Document"
#define TXT_FILE    @"Text file"
#define ASC_FILE    @"ASC file"
#define HWP_FILE    @"HWP Document"
#define PPS_FILE    @"PowerPoint Show"
#define RTF_FILE    @"Rich Text File"
#define FOLDER_FILE @"Folder"
#define HTML_FILE   @"HTML Document"
#define IMAGE_FILE  @"Image file"
#define UNKNOWN_FILE @"Unknown file"
#define ZIP_FILE    @"Zip file"
#define ODT_FILE    @"OpenDocument Text"
#define ODP_FILE    @"OpenDocument Presentation"
#define ODS_FILE    @"OpenDocument Spread sheet"
#define IGNORE_FILE @"ignorefile"

#define USERDEFAULT_REPLACEMODE @"ReplaceMode"
#define USERDEFAULT_SEARCHCASE @"SearchCase"
#define USERDEFAULT_SEARCHWORD @"SearchWord"
#define USERDEFAULT_SEARCHBIT @"SearchBit"
#define USERDEFAULT_SEARCHSHEETRANGE @"SearchSheetRange"
#define USERDEFAULT_SEARCHSHEETSUBRANGE @"SearchSheetSubRange"
#define USERDEFAULT_SEARCHALLCELL @"SearchAllCell"
#define USERDEFAULT_TXTFONTSIZE @"TxtFontSize"
#define USERDEFAULT_TXTFONTSIZE_INDEX @"TxtFontSizeIndex"
#define USERDEFAULT_TXTENCODING @"TxtEncoding"
#define USERDEFAULT_TXTENCODING_INDEX @"TxtEncodingIndex"
#define USERDEFAULT_PDF_SINGLE_PAGE_LAYOUT @"SinglePageLayout"
#define USERDEFAULT_PDF_REFLOW_TEXT @"ReflowText"
#define USERDEFAULT_RULER @"ShowRuler"
#define USERDEFAULT_FULLWIDTHVIEW @"FullWithView"
#define USERDEFAULT_REFLOWTEXT @"ReflowText"
#define USERDEFAULT_MEMO @"ShowMemo"
#define USERDEFAULT_ANIMATIONPATH @"ShowAnimPath"
#define USERDEFAULT_SMARTGUIDES @"ShowSmartGuides"
#define USERDEFAULT_SPELLING_CHECK_ON @"SpellingCheckOn"
#define USERDEFAULT_PROPERTY_FONT_SEGMENTED_IDENTIFIER @"PropertyFontSegmentedIdentifier"
#define USERDEFAULT_PROPERTY_LINE_SEGMENTED_IDENTIFIER @"PropertyLineSegmentedIdentifier"
#define USERDEFAULT_PROPERTY_IMAGE_SEGMENTED_IDENTIFIER @"PropertyImageSegmentedIdentifier"
#define USERDEFAULT_PROPERTY_SHAPE_SEGMENTED_IDENTIFIER @"PropertyShapeSegmentedIdentifier"
#define USERDEFAULT_PROPERTY_TABLE_SEGMENTED_IDENTIFIER @"PropertyTableSegmentedIdentifier"
#define USERDEFAULT_PROPERTY_CHART_SEGMENTED_IDENTIFIER @"PropertyChartSegmentedIdentifier"
#define USERDEFAULT_PROPERTY_CELL_SEGMENTED_IDENTIFIER @"PropertyCellSegmentedIdentifier"
#define USERDEFAULT_PROPERTY_VIDEO_SEGMENTED_IDENTIFIER @"PropertyVideoSegmentedIdentifier"
#define USERDEFAULT_PROPERTY_GROUP_SEGMENTED_IDENTIFIER @"PropertyGroupSegmentedIdentifier"
#define USERDEFAULT_PROPERTY_MULTI_SEGMENTED_IDENTIFIER @"PropertyMultiSegmentedIdentifier"
#define USERDEFAULT_PIVOTTABLE_IN_DOC @"pivotTableInDoc"
#define USERDEFAULT_PIVOTTABLE_IN_CURRENT_SHEET @"pivotTableInCurrentSheet"
#define USERDEFAULT_WRITE_PASSWORD_IN_DOC @"writePasswordInDoc"
#define USERDEFAULT_READ_PASSWORD_IN_DOC @"readPasswordInDoc"
#define USERDEFAULT_PROTECTED_DOC @"protectedDoc"
#define USERDEFAULT_READ_ONLY_FOR_WRITE_PASSWORD_IN_DOC @"readOnlyForWritePasswordInDoc"

//auto filter
#define ALL				@"All"				// 전체
#define ASC_TEXT	    @"Ascending"		// 텍스트 오름차순 정렬
#define DESC_TEXT	    @"Descending"	    // 텍스트 내림차순 정렬
#define ASC_NUM			@"AscendingN"		// 숫자 오름차순 정렬
#define DESC_NUM	    @"DescendingN"		// 숫자 내림차순 정렬
#define FILTER_CANCEL	@"FilterCancel"		// 필터 해제 가능 여부
#define EMPTY	        @""					// 필드 값 없음
#define APPLY	        @"Apply"			// 필드 값 없음

#define CLocalizedString(key, comment) \
[[NSBundle polarisOfficeBundle] localizedStringForKey:(key) value:@"" table:nil]

//Good transfer file service
#define kFileTransferServiceName    @"com.good.gdservice.transfer-file"
#define kFileTransferServiceVersion @"1.0.0.0"
#define kFileTransferMethod         @"transferFile"

// debug macro
//void poTrace(const char* pTag, const char* pFile, int nLine, const char* s, ...)
//{
//    char str[1024*1024];
//    va_list ap;
//    
//    va_start(ap, s);
//    if(s)
//    {
//        vsprintf(str, s, ap);
//        
//        char str2[1024*1024];
//        if( pFile && nLine > 0 )
//            sprintf(str2, "[%s]%s(%d) %s\n", pTag, pFile, nLine, str);
//        else
//            sprintf(str2, "[%s] %s\n", pTag, str);
//        POLog(LogType_Medium, @"%s", str2);
//    }
//    va_end(ap);
//}
//#define USE_DEBUG_FILE_LINE
//#ifdef USE_DEBUG_FILE_LINE
//#define TOUCH_DEBUG(...)  poTrace("TOUCH", __FILE__, __LINE__, __VA_ARGS__)
//#else
//#define TOUCH_DEBUG(...)  poTrace("TOUCH", NULL, 0, __VA_ARGS__)
//#endif

//#define TEST_MEMORY_OPEN //파일을 메모리로 오픈하는 기능
