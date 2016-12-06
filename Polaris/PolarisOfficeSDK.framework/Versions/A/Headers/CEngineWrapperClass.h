//
//  CEngineWrapperClass.h
//  PolarisOffice
//
//  Created by JIHYUN on 2015. 3. 12..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "E.h"
#import "CEngineStructArray.h"

@interface CEngineWrapperClass : NSObject
@end

@interface WRAPPER_PORANGE : NSObject
@property (nonatomic) int nRow1;
@property (nonatomic) int nCol1;
@property (nonatomic) int nRow2;
@property (nonatomic) int nCol2;
@property (nonatomic) int nLeft;
@property (nonatomic) int nTop;
@property (nonatomic) int nRight;
@property (nonatomic) int nBottom;
@end

@interface WRAPPER_PDF_BOOKMARK_LIST_ITEM : NSObject
@property (nonatomic) BOOL hasKids;
@property (nonatomic) long item;
@property (strong, nonatomic) NSString* title;
@property (nonatomic) int page;
@property (nonatomic) int rectLeft;
@property (nonatomic) int rectTop;
@end

@interface WRAPPER_CFVO_COLORSCALE_CUSTOM : NSObject
@property (nonatomic) SheetCondfmtValueObjectType nCfvoMinType;
@property (nonatomic) SheetCondfmtValueObjectType nCfvoMidType;
@property (nonatomic) SheetCondfmtValueObjectType nCfvoMaxType;
@property (nonatomic) int nMinColor;
@property (nonatomic) int nMidColor;
@property (nonatomic) int nMaxColor;
@property (strong, nonatomic) NSString* szCFRuleValueMin;
@property (strong, nonatomic) NSString* szCFRuleValueMid;
@property (strong, nonatomic) NSString* szCFRuleValueMax;
@end

@interface WRAPPER_CFVO_DATABAR_CUSTOM : NSObject
@property (nonatomic) SheetCondfmtValueObjectType nCfvoMinType;
@property (nonatomic) SheetCondfmtValueObjectType nCfvoMaxType;
@property (nonatomic) int nFillColor;
@property (nonatomic) int nBorderColor;
@property (nonatomic) BOOL bGradiant;
@property (nonatomic) BOOL bDrawBorder;
@property (nonatomic) BOOL bRTL;
@property (nonatomic) BOOL bShowValue;
@property (nonatomic) int nNegativeFillColor;
@property (nonatomic) int nNegativeBorderColor;
@property (nonatomic) int nAxisType;
@property (nonatomic) int nAxisColor;
@property (nonatomic) BOOL bSameAsPositiveFill;
@property (nonatomic) BOOL bSameAsPositiveBorder;
@property (strong, nonatomic) NSString* szCFRuleValueMin;
@property (strong, nonatomic) NSString* szCFRuleValueMax;
@end

@interface WRAPPER_CFVO_ICONSET_CUSTOM : NSObject
@property (nonatomic) SheetCondfmtIconSetType nIconType;
@property (nonatomic) SheetCondfmtValueObjectType nCfvoType1;
@property (nonatomic) SheetCondfmtValueObjectType nCfvoType2;
@property (nonatomic) SheetCondfmtValueObjectType nCfvoType3;
@property (nonatomic) SheetCondfmtValueObjectType nCfvoType4;
@property (nonatomic) BOOL bIconsetGte1;
@property (nonatomic) BOOL bIconsetGte2;
@property (nonatomic) BOOL bIconsetGte3;
@property (nonatomic) BOOL bIconsetGte4;
@property (nonatomic) BOOL bIconsetGte5;
@property (nonatomic) BOOL bIconsetGte6;
@property (nonatomic) BOOL bIconsetReverse;
@property (nonatomic) BOOL bShowValue;
@property (strong, nonatomic) NSString* szCFRuleValue1;
@property (strong, nonatomic) NSString* szCFRuleValue2;
@property (strong, nonatomic) NSString* szCFRuleValue3;
@property (strong, nonatomic) NSString* szCFRuleValue4;
@end

@interface WRAPPER_CONDFMT_CELL_VALUE_BASE : NSObject
@property (strong, nonatomic) WRAPPER_CFVO_COLORSCALE_CUSTOM* colorScaleCustomAttr;
@property (strong, nonatomic) WRAPPER_CFVO_DATABAR_CUSTOM* databarCustomAttr;
@property (strong, nonatomic) WRAPPER_CFVO_ICONSET_CUSTOM* iconsetCustomAttr;
@end

@interface WRAPPER_CONDFMT_CONTAIN_FORMAT_OPTION : NSObject
@property (nonatomic) SheetCondfmtRuleOperator nOperatorType;
@property (nonatomic) int nTextColor;
@property (nonatomic) int nFillColor;
@property (nonatomic) int nBorderColor;
@property (strong, nonatomic) NSString* szCFRuleFormula1;
@property (strong, nonatomic) NSString* szCFRuleFormula2;
@property (strong, nonatomic) NSString* szCFRuleTimePeriod;
@end

@interface WRAPPER_CONDFMT_TOP10 : NSObject
@property (nonatomic) BOOL bPercent;
@property (nonatomic) int nRank;
@property (nonatomic) BOOL bBottom;
@property (nonatomic) int nTextColor;
@property (nonatomic) int nFillColor;
@property (nonatomic) int nBorderColor;
@end

@interface WRAPPER_CONDFMT_ABOVE_AVERAGE : NSObject
@property (nonatomic) BOOL bAboveAverage;
@property (nonatomic) BOOL bEqualAverage;
@property (nonatomic) int nStdDev;
@property (nonatomic) int nTextColor;
@property (nonatomic) int nFillColor;
@property (nonatomic) int nBorderColor;
@end

@interface WRAPPER_CONDFMT_DUP_UNIQUE_VAL_FORMAT : NSObject
@property (nonatomic) int nTextColor;
@property (nonatomic) int nFillColor;
@property (nonatomic) int nBorderColor;
@end

@interface WRAPPER_CONDFMT_EXPRESSION : NSObject
@property (nonatomic) int nTextColor;
@property (nonatomic) int nFillColor;
@property (nonatomic) int nBorderColor;
@property (strong, nonatomic) NSString* szCFRuleExpression;
@end

@interface WRAPPER_SHEET_EDIT_C_F : NSObject
@property (strong, nonatomic) WRAPPER_PORANGE* tCFtargetRuleRange;
@property (nonatomic) SheetCondfmtInsertRuleType eRuleType;
@property (nonatomic) BOOL bStopIfTrue;
@property (strong, nonatomic) NSString* pRangeText;
@property (strong, nonatomic) WRAPPER_CONDFMT_CELL_VALUE_BASE* cellValueBaseProperty;
@property (strong, nonatomic) WRAPPER_CONDFMT_CONTAIN_FORMAT_OPTION* containFormatOptionProperty;
@property (strong, nonatomic) WRAPPER_CONDFMT_TOP10* top10Property;
@property (strong, nonatomic) WRAPPER_CONDFMT_ABOVE_AVERAGE* aboveAverageProperty;
@property (strong, nonatomic) WRAPPER_CONDFMT_DUP_UNIQUE_VAL_FORMAT* dupUniqueProperty;
@property (strong, nonatomic) WRAPPER_CONDFMT_EXPRESSION* expressionProperty;
@end

@interface WRAPPER_SHEET_EDIT_CFS_INFO : NSObject
@property (nonatomic) int nCfListSize;
@property (nonatomic) float nAverageValue;
@property (nonatomic) int nDeleteRuleIndex;
@property (nonatomic) bool bDisplayRuleInfoByWholeSheet;
@property (strong, nonatomic) NSArray_WRAPPER_SHEET_EDIT_C_F* pCFList; //WRAPPER_SHEET_EDIT_C_F* pCFList;
@property (nonatomic) SheetCondfmtEditOption nEditOption;
@end

@interface WRAPPER_POFRECT : NSObject
@property (nonatomic) float left;
@property (nonatomic) float top;
@property (nonatomic) float right;
@property (nonatomic) float bottom;
@end

@interface WRAPPER_PDF_ANNOT_ITEM : NSObject
@property (nonatomic) int nPageNum;
@property (nonatomic) int nIndex;
@property (nonatomic) int nType;
@property (strong, nonatomic) WRAPPER_POFRECT* rect;
@property (strong, nonatomic) NSString* pText;
@property (nonatomic) void* pAnnot;
@property (nonatomic) int style;
@property (strong, nonatomic) NSString* szContents;
@property (strong, nonatomic) NSString* szAuthor;
@property (strong, nonatomic) NSString* szSubject;
@property (nonatomic) int time;
@property (nonatomic) int nSubType;
@end

@interface WRAPPER_SORTING_INFO : NSObject
@property (nonatomic) int nHandle;
@property (nonatomic) BOOL bCaseSensitive;
@property (nonatomic) BOOL bColumnSort;
@property (strong, nonatomic) NSNumberArray* nKeyArray;
@property (nonatomic) int nKeyCount;
@property (nonatomic) BOOL bGetSortKeyInfo;
@end

