//
//  CEngineHelperEnum.h
//  PolarisOffice
//
//  Created by JIHYUN on 2015. 1. 19..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//
// UI에서만 사용하는 enum 
#ifndef PolarisOffice_CEngineHelperEnum_h
#define PolarisOffice_CEngineHelperEnum_h

typedef enum BorderType : NSUInteger
{
    BorderType_All						= 0,
    BorderType_Outside                  = 1,
    BorderType_Inside                   ,
    BorderType_None                     ,
    BorderType_Top                      ,
    BorderType_Bottom                   ,
    BorderType_Left                     ,
    BorderType_Right                    ,
    BorderType_HorizontalInside         ,
    BorderType_VerticalInside			,
    BorderType_DownDiagonal				,
    BorderType_UpDiagonal				,
    
    /* Engine
     BorderType_None						= 0,
     BorderType_Left						= 1,
     BorderType_Top						,
     BorderType_Right						,
     BorderType_Bottom					,
     BorderType_VerticalInside			,
     BorderType_HorizontalInside			,
     BorderType_DownDiagonal				,
     BorderType_UpDiagonal				,
     BorderType_All						, // BorderType_LEFT | BorderType_TOP | BorderType_RIGHT | BorderType_BOTTOM | BorderType_VERTICAL_INSIDE | BorderType_HORIZONTAL_INSIDE (except diagonal)
     BorderType_AllIncludeDiagnal		  // BorderType_LEFT | BorderType_TOP | BorderType_RIGHT | BorderType_BOTTOM | BorderType_VERTICAL_INSIDE | BorderType_HORIZONTAL_INSIDE | BorderType_DOWN_DIAGONAL | BorderType_UP_DIAGONAL
     */
}BorderType;

typedef enum CellStylePreset
{
    CellStylePreset_Standard =0,
    CellStylePreset_Bad =27,
    CellStylePreset_Normal =28,
    CellStylePreset_Good =26,
    CellStylePreset_Warnning =11,
    CellStylePreset_Calculate =22,
    CellStylePreset_Memo =10,
    CellStylePreset_InfoText =53,
    CellStylePreset_CellConfirm =23,
    CellStylePreset_LinkedCell =24,
    CellStylePreset_Input =20,
    CellStylePreset_Output =21,
    CellStylePreset_BlueEmphasis20 =30,
    CellStylePreset_BlueEmphasis40 =31,
    CellStylePreset_BlueEmphasis100 =29,
    CellStylePreset_GreenEmphasis20 =34,
    CellStylePreset_GreenEmphasis40 =35,
    CellStylePreset_GreenEmphasis100 =33,
    CellStylePreset_OrangeEmphasis20 =38,
    CellStylePreset_OrangeEmphasis40 =39,
    CellStylePreset_OrangeEmphasis100=37,
    CellStylePreset_YellowEmphasis20 =42,
    CellStylePreset_YellowEmphasis40 =43,
    CellStylePreset_YellowEmphasis100 =41,
    CellStylePreset_Summary =25,
    CellStylePreset_Title =14,
    CellStylePreset_Title1 =16,
    CellStylePreset_Title2 =17,
    CellStylePreset_Title3 =18,
    
} CellStylePreset;

typedef enum
{
    ObjectBase_None = 0,
    ObjectBase_Cell = 1,
    ObjectBase_Rectangle = 2,
    ObjectBase_Textmark = 3,
    ObjectBase_Line = 4,
    ObjectBase_Multi = 5, //ui only
    ObjectBase_InfraPen = 6,
    ObjectBase_InfraPenMulti = 7,
}ObjectBasicTypes;


typedef enum
{
    SlideBullet_None            = -1,
    SlideBullet_SmallCircle     = 1,
    SlideBullet_FilledDiamond   = 2,
    SlideBullet_Square          = 3,
    SlideBullet_BigCircle       = 4,
    SlideBullet_Star            = 5,
    SlideBullet_RightArrow      = 6,
    SlideBullet_CheckMark       = 7,
}SlideEngineBulletIndex;

typedef enum
{
    SlideNumbering_None                 = -1,
    SlideNumbering_DigitDot             = 1,
    SlideNumbering_CircleDigit          = 2,
    SlideNumbering_UpperRoman           = 3,
    SlideNumbering_UpperAlpabet         = 4,
    SlideNumbering_DigitParanethesis    = 5,
    SlideNumbering_LowerAlpabet         = 6,
    SlideNumbering_ChineseNumber        = 7
}SlideEngineNumberingIndex;

typedef enum
{
    Bullet_None				= -1,
    Bullet_Circle			= 1,
    Bullet_Quadrangle		= 2,
    Bullet_FilledDiamond	= 3,
    Bullet_Image			= 4,
    Bullet_CheckMark		= 5,
    Bullet_RightArrow		= 6,
    Bullet_Star				= 7
}WordEngineBulletIndex;

typedef enum
{
    Numbering_SpaceNumber       = 1,		// 스페이스 숫자 (앞 띄어쓰기)
    Numbering_NormalNumber      = 2,		// 숫자
    Numbering_CircledNumber     = 3,		// 동그라미 숫자
    Numbering_UpperRomanNumber  = 4,		// 로마 숫자 대문자
    Numbering_HangelNumber1     = 5,		// 한글 (ex : 가) 나) 다) )
    Numbering_HangelNumber2     = 6,		// 한글 (ex : (ㄱ) (ㄴ) (ㄷ) )
    Numbering_UpperEngNumber    = 7,        // 영어 대문자
    Numbering_SmallRomanNumber  = 8         // 로마숫자
}WordEngineNumberingIndex;

typedef enum
{
    SheetInput_Confirm      = 0, // = SHEET_INPUT_CONFIRM_DOWN
    SheetInput_Cancel       = 1,
    SheetInput_ConfirmDown  = 2,
    SheetInput_ConfirmRight = 3,
    SheetInput_ConfirmUp    = 4,
    SheetInput_ConfirmLeft  = 5,
    SheetInput_ConfirmNone  = 6, // 셀 위치 유지
}SheetInputConfirmType;

typedef enum
{
    Footnote_Insert	= 0,
    Footnote_Preve	= 1,
    Footnote_Next	= 2,
    Endnote_Insert	= 3,
    Endnote_Prev	= 4,
    Endnote_Next	= 5,
    Footnote_Form	= 6,
    Endnote_Form	= 7,
    Footnote_Start	= 8,//,
    Endnote_Start	= 9,
    Footnote_View  = 10,// 각주 표시
    Endnote_View   = 11,// 미주 표시
    Change_FENOTE  = 12, // 각주와 미주 맞바꾸기
    Change_F_TO_E  = 13, // 모든 각주를 미주로 변환
    Change_E_TO_F  = 14 // 모든 미주를 각주로 변환
    
}RefNoteType;

typedef enum {
    CaretMode_Off           = 0,
    CaretMode_Normal        = 1,
    CaretMode_Marking       = 2,
    CaretMode_WordMarking   = 3,
    CaretMode_ColMark       = 4,
    CaretMode_Anchor        = 5,
    CaretMode_Overflow      = 6,
    CaretMode_Arrow         = 7,
}CaretModeType;

typedef enum {
    SheetLinkType_None,
    SheetLinkType_File,
    SheetLinkType_Url,
    SheetLinkType_Unc,
    SheetLinkType_Mail,
    SheetLinkType_Phone,
    SheetLinkType_Curbook,
    SheetLinkType_Newbook,
    SheetLinkType_SheetCell
}SheetLinkType;

typedef enum {
    WordSlideLinkType_StartDoc,
    WordSlideLinkType_Bookmark,
    WordSlideLinkType_Url,
    WordSlideLinkType_Email,
    WordSlideLinkType_Memo,
    WordSlideLinkType_FirstPage,
    WordSlideLinkType_LastPage,
    WordSlideLinkType_NextPage,
    WordSlideLinkType_PrevPage,
    WordSlideLinkType_SlideGotoPage,
    WordSlideLinkType_CustomShow,
    WordSlideLinkType_Heading,
    WordSlideLinkType_Remove
}WordSlideLinkType;

typedef enum {
    SheetFindReplaceOption_InValues           = 0x0000,
    SheetFindReplaceOption_InFormulas         = 0x0001,
    SheetFindReplaceOption_MatchCase          = 0x0002,
    SheetFindReplaceOption_MatchCells        = 0x0004,
    SheetFindReplaceOption_Backward           = 0x0008,
    SheetFindReplaceOption_ReplaceAll         = 0x0010,
    SheetFindReplaceOption_ReplaceOne         = 0x0020,
    SheetFindReplaceOption_StartFirst         = 0x0040,
    SheetFindReplaceOption_FindColumn         = 0x0080,
    SheetFindReplaceOption_WholeFind          = 0x0100,
    SheetFindReplaceOption_Memo               = 0x0200,
    SheetFindReplaceOption_FindRow            = 0x0400,
    SheetFindReplaceOption_FullWitdh          = 0x0800
}SheetFindReplaceOption;

typedef enum {
    SearchType_Fail         = 0x00,
    SearchType_Move         = 0x01,
    SearchType_No           = 0x02,
    SearchType_Progress     = 0x03,
    SearchType_End          = 0x10,
    SearchType_Cancel       = 0x11,
    SearchType_Nextpage     = 0x20,
    SearchType_Last         = 0x30,
    SearchType_ReplaceAll   = 0x31,
    SearchType_NoPrev       = 0x32,
    SearchType_Replace      = 0x33,
    SearchType_Result       = 0x40,
    SearchType_ResultAndGoComplete = 0x41,
    SearchType_FileEndPart  = 0x42,
    SearchType_ListMake     = 0x43,
    SearchType_ReplaceAllExceedLimit = 0x50,
    SearchType_Start        = 0xff
}SearchType;

 typedef enum  {
     ReplaceOption_None,
     ReplaceOption_One,
     ReplaceOption_All
 }ReplaceOption;

typedef enum{
    SheetRangeOption_Current,
    SheetRangeOption_Whole
}SheetRangeOption;

typedef enum{
    SheetTypeOption_Formula,
    SheetTypeOption_Value,
    SheetTypeOption_Memo
}SheetTypeOption;

typedef enum{
    SheetClear_Content     = 0,
    SheetClear_Format      = 1,
    SheetClear_All        = 2
}SheetClarType;

typedef enum
{
    FrameSizeModify_Height  = 0x00000001,
    FrameSizeModify_Width = 0x00000002,
    FrameSizeModify_Rotation = 0x00000004,
}SheetSizeRotateType;

typedef enum
{
    Engine_SetPageEvent             = 11,       // BRGUI_BRSETPAGE_EVENT            11
    Engine_ScrollEvent              = 27,       // BRGUI_BRSCROLL_EVENT             27
    Engine_PivotScreenEvent         = 33,       // BRGUI_BRPIVOTSCREEN_EVENT        33
    Engine_ChangeScreenEvent        = 44,       // BRGUI_CHANGESCREEN_EVENT         44
	Engine_TIMER					= 46,		// BRGUI_TIMER						46
    Engine_FlickEvent               = 61,       // BRGUI_FLICK_EVENT                61
	Engine_UndoEvent				= 0x0107,   // BRGUI_UNDO_EVENT					0x0107
	Engine_RedoEvent				= 0x0108,   // BRGUI_REDO_EVENT					0x0108
    Engine_HIDActionEvent           = 0x011C,   // BRGUI_HID_ACTION_EVENT           0x011C
    Engine_SheetFunctionEvent       = 0x0303,   // BRGUI_SHEET_FUNCTION_EVENT       0x0303
    Engine_SheetEditEvent           = 0x0305,   // BRGUI_SHEET_EDIT_EVENT			0x0305,
    Engine_SheetFixFrameEvent       = 0x0306,   // BRGUI_SHEET_FIXFRAME_EVENT       0x0306
    Engine_SheetPageBreakEvent      = 0x0307,   // BRGUI_SHEET_PAGEBREAK_EVENT      0x0307
    Engine_SheetProtectionEvent     = 0x0308,   // BRGUI_SHEET_PROTECTION_EVENT     0x0308
    Engine_SheetRowHeightEvent      = 0x030E,   // BRGUI_SHEET_ROW_HEIGHT_EVENT     0x030E
    Engine_SheetColumnWidthEvent    = 0x030F,   // BRGUI_SHEET_COLUMN_WIDTH_EVENT   0x030F
	Engine_SheetFocusEvent			= 0x0314,	// BRGUI_SHEET_FOCUS_EVENT			0x0314
    Engine_SheetInputFieldEvent     = 0x0315,   // BRGUI_SHEET_INPUTFIELD_EVENT     0x0315
    Engine_SheetGoToCellEvent       = 0x0364,   // BRGUI_SHEET_GOTOCELL_EVENT       0x0364
	Engine_SlideInsertEvent			= 0x0400,   // BRGUI_PPT_SLIDEINSERT_EVENT      0x0400
    Engine_SlideDeleteEvent         = 0x0401,   // BRGUI_PPT_SLIDEDELETE_EVENT      0x0401
    Engine_SlideShowGlSetSyncEvent	= 0x041A,	// BRGUI_PPT_SLIDESHOW_GL_SETSYNC_EVENT     0x041A
    Engine_SlideShowEndEvent		= 0x0438,	// BRGUI_PPT_SLIDESHOWEND_EVENT		0x0438
	
}EngineEvent;

typedef enum
{
    SlideMemoDeleteRange_AllSlide,
    SlideMemoDeleteRange_CurrentSlide,
}SlideMemoDeleteRange;

typedef enum
{
	ObjectMultiType_None       = -1,
	ObjectMultiType_Multi      =  0,
	ObjectMultiType_Shape,
	ObjectMultiType_Line,
	ObjectMultiType_Image,
	ObjectMultiType_Video,
	ObjectMultiType_Group,
} ObjectMultiType;

typedef enum
{
    LicenseType_Invaild	= 0,
    LicenseType_Expired	= 1,
    LicenseType_vaild	= 2,
    LicenseType_update	= 3,
    LicenseType_error	= 4
} LicenseType;

#endif
