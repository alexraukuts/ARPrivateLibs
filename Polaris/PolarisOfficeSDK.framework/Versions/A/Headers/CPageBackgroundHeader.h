//
//  CPageBackgroundHeader.h
//  PolarisOffice
//
//  Created by infra_mac_mini_0211 on 2015. 2. 7..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#ifndef PolarisOffice_CPageBackgroundHeader_h
#define PolarisOffice_CPageBackgroundHeader_h

#define PAGE_COLOR_GRADATION_START_COLOR1      0xFFFFFFFF
#define PAGE_COLOR_GRADATION_END_COLOR1        0xFF9EC5F6
#define PAGE_COLOR_GRADATION_START_COLOR2      0xFFE6E6E6
#define PAGE_COLOR_GRADATION_END_COLOR2        0xFF828282

#define PAGE_COLOR_CLICK_NONE       -1
#define PAGE_COLOR_SOLID_COLOR       0
#define PAGE_COLOR_GRADATION         1
#define PAGE_COLOR_IMAGE             2

#define DEFAULT_SIZE 0
#define DEFAULT_COLOR 0xc0c0c0ff

typedef enum WatermarkIndex {
    WatermarkIndex_Selector,
    WatermarkIndex_Image,
    WatermarkIndex_Scale,
    WatermarkIndex_WashOut,
    WatermarkIndex_Text,
    WatermarkIndex_FontName,
    WatermarkIndex_TextSize,
    WatermarkIndex_Color,
    WatermarkIndex_Semitransparent,
    WatermarkIndex_LayoutHorizontal,
} WatermarkIndex;

typedef enum WatermarkType {
    Watermark_None,
    Watermark_Image,
    Watermark_Text,
    Watermark_Preset
} WatermarkType;

#endif
