//
//  CoreTextFacade.h
//  PolarisOffice
//
//  Created by JIHYUN on 2014. 12. 31..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

/**
 * @brief 글꼴,단락 속성 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "E.h"
#import "EV.h"

@interface CoreTextFacade : NSObject

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
- (void)changeTextToUpperCase;
- (void)changeTextToLowerCase;

- (void)setFontStyle:(int)fontStyleID;
- (int)getFontStyleID;


//ISetParaAttribute
- (void)setParagraphVerticalAlign:(NSInteger)alignType;
- (void)setParagraphHorizontalAlign:(NSInteger)alignType;
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
- (void)setParagraphLineSpaceType:(NSInteger)lineSpacingType;
- (void)setParagraphLineSpace:(LineSpaceUnit)spaceType lineSpacingValue:(double)value;
- (void)setParagraphLineSpace:(double)lineSpacingValue;
- (void)setParagraphBeforeSpacing:(NSInteger)nValue;
- (void)setParagraphAfterSpacing:(NSInteger)nValue;
- (void)setParagraphTextDirection:(NSInteger)textDirectionType;
- (void)setWordTextFlow:(NSInteger)textDirectionType;
- (void)setParagraphTextBiDirection:(NSInteger)textBiDirection;
- (void)setSheetWrap:(bool)bWrap;

//IGetParaAttInfo
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

// Edit
- (void)selectAll;
- (void)copyObject;
- (void)cutObject;
- (void)pasteObject:(NSString*)stringData;
- (void)copyFormat;
- (void)pasteFormat:(NSString*)stringData;
// 함수 구현부 작업 안해서 동작 안함
- (void)clearFormat;

// DocType
- (bool)isWordDocument;
- (bool)isSlideDocument;
- (bool)isSheetDocuemnt;
- (bool)isHwpDocument;
- (ObjectType)getObjectType;

- (bool)isEnableSymbol;

// Spelling check
- (void)setOnSpellCheckScreenMode:(BOOL)isOn;
- (void)markSpellCheckWrong:(LPSPELLCHECK_INFO)spellCheckInfo;
@end