//
//  CMacro.h
//  PolarisOffice
//
//  Created by starfisher on 2014. 10. 22..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#ifndef PolarisOffice_CMacro_h
#define PolarisOffice_CMacro_h

#pragma mark - RGB
#define RGB(r, g, b)			[UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1]
#define RGBA(r, g, b, a)		[UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]
#define HEXRGB(hexRGB)          [UIColor colorWithRed:((float)((hexRGB & 0xFF0000) >> 16))/255.0 \
                                                green:((float)((hexRGB & 0x00FF00) >>  8))/255.0 \
                                                 blue:((float)((hexRGB & 0x0000FF) >>  0))/255.0 \
                                                alpha:1.0]                                              // usage HEXRGB(0xRRGGBB)
#define HEXRGBA(hexRGBA)        [UIColor colorWithRed:((float)((hexRGBA & 0xFF000000) >> 24))/255.0 \
                                                green:((float)((hexRGBA & 0x00FF0000) >> 16))/255.0 \
                                                 blue:((float)((hexRGBA & 0x0000FF00) >>  8))/255.0 \
                                                alpha:((float)((hexRGBA & 0x000000FF) >>  0))/255.0]    // usage HEXRGBA(0xRRGGBBAA)
#define HEXARGB(hexARGB)        HEXRGBA(ARGB_to_RGBA(hexARGB))                                          // usage HEXARGB(0xAARRGGBB)
#define ARGB_to_RGBA(hexARGB)     (((hexARGB & 0xFF000000) >> 24) | ((hexARGB & 0x00FF0000) << 8) | ((hexARGB & 0x0000FF00) << 8) | ((hexARGB & 0x000000FF) << 8))

#define PAGE_BG_COLOR                                       RGB(0xDC,0xDC,0xDC)//220,220,220

#pragma mark - LOG
#define LOG_FUN				POLog(LogType_Low, @"%s", __PRETTY_FUNCTION__);
#define LOG_FUN_LINE		POLog(LogType_Low, (@"%s [Line %d] " ), __PRETTY_FUNCTION__, __LINE__);
#define SMLog(fmt, ...)			POLog(LogType_Medium, (@"%s [Line %d] " fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);

// 아래 로그는 쌍으로 사용할 것.
#pragma mark - Time Log
#define TICK   NSDate *startTime = [NSDate date];
#define TOCK   POLog(LogType_Medium, @"Time: %f", -[startTime timeIntervalSinceNow]);

//#define CLOG(format, ...) CLogl(__PRETTY_FUNCTION__, __LINE__, format, ##__VA_ARGS__)
#define POLog(type, format, ...)     CLogl(type, __FUNCTION__, __LINE__, [NSString stringWithFormat:(format), ##__VA_ARGS__])

//버전 체크 관련 Macro (현재 개발 단계에서 8.0 버전 체크에 대한 부분만 필요해 보여 관련 자료는 주석처리 후 8.0만 따로 추가.
//#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
//#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
//#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
//#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
//#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

#define SYSTEM_VERSION_8_GREATER_THAN_OR_EQUAL_TO   ([[[UIDevice currentDevice] systemVersion] compare:@"8.0" options:NSNumericSearch] != NSOrderedAscending)

#define SYSTEM_VERSION_9_GREATER_THAN_OR_EQUAL_TO   ([[[UIDevice currentDevice] systemVersion] compare:@"9.0" options:NSNumericSearch] != NSOrderedAscending)

#endif
