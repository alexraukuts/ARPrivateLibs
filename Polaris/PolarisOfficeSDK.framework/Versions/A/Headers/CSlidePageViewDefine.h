//
//  CSlidePageViewDefine.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 3. 16..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#pragma once

typedef enum {
    SLIDE_PAGE_MENU_TYPE_NONE = 0,
    SLIDE_PAGE_MENU_TYPE_FIRST_DEPTH_COMMON,
    SLIDE_PAGE_MENU_TYPE_FIRST_DEPTH_PASTE_ONLY,
    SLIDE_PAGE_MENU_TYPE_SECOND_DEPTH,
} SlidePageMenuType;

typedef enum {
    SLIDE_PAGE_MENU_NONE = 0,
    SLIDE_PAGE_MENU_CUT,
    SLIDE_PAGE_MENU_COPY,
    SLIDE_PAGE_MENU_PASTE,
    SLIDE_PAGE_MENU_DELETE,
    SLIDE_PAGE_MENU_MORE,
	SLIDE_PAGE_MENU_DUPLICATION,
    SLIDE_PAGE_MENU_HIDE,
    SLIDE_PAGE_MENU_UNHIDE,
    SLIDE_PAGE_MENU_LAYOUT,
    SLIDE_PAGE_MENU_BACKGROUND,
} SlideMenuIndex;

typedef void (^onOverlayViewDisapper)(void);

typedef void (^onShowSlidePageMenu)(SlidePageMenuType menuType);
typedef void (^onHideSlidePageMenu)(void);
typedef void (^onSlideMenuSelected)(SlideMenuIndex menuIndex);
