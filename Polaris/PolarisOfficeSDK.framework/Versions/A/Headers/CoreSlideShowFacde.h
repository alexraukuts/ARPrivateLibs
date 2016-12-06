//
//  CoreSlideShowFacde.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 3. 17..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief Slide show 관련 Core 기능을 제공
 */

#import "CEngineHelper.h"
#import "CDefineCommon.h"

@interface CoreSlideShowFacde : NSObject

- (void)slideShowWithWidth:(int)a_Width Height:(int)a_Height StartPage:(int)a_StartPage;
- (void)pdfSlideShowStart:(int)startPage;
- (void)slideShowGlSetSync;
- (void)slideShowStop;

- (bool)IsNoneSlideEffect:(SlideShowPlayType)a_PlayType page:(int)a_nPage;

- (void)slideShowPlay:(SlideShowPlayType)playType page:(int)page;

- (int)pageNumber;
- (int)totalPageNumber;

- (void)stopSlideeffect:(SlideShowStopType)stopType;

- (void)setSlideShowRangeWithStartPage:(int)startPage withEndPage:(int)endPage;
- (SLIDE_SHOW_SETTING)getSlideShowSetting;
@end
