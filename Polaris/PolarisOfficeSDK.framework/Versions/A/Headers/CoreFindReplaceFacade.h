//
//  CoreFindReplaceFacade.h
//  PolarisOffice
//
//  Created by 고 명부 on 2015. 2. 5..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief 찾기/바꾸기 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>

@interface CoreFindReplaceFacade : NSObject
- (void) searchStart:(NSString*)findText MatchWhole:(int)matchWhole MatchCase:(int)matchCase halfFullWidth:(int)halfFullWidth directionUp:(int)direction;
- (void) searchStop;
- (void) setReplace:(NSString*)a_sFind matchWholeWord:(int)a_bMathchWord matchCase:(int)a_bCase directionUp:(int)a_bDirUp replaceText:(NSString*)a_sReplace replaceMode:(int)bReplaceMode halfFullWidth:(int)a_bHalfFullWidth;
- (void) sheetFind:(NSString*)a_pszFindText nFlag:(int)a_nFlag;
- (void) sheetReplace:(NSString*)a_pszFindText replaceText:(NSString*)a_pszReplaceText nFlag:(int)a_nFlag;
@end
