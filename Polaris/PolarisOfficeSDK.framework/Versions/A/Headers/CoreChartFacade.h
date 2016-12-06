//
//  CoreChartFacade.h
//  PolarisOffice
//
//  Created by hys on 2015. 1. 15..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief 차트 속성 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "E.h"

@interface CoreChartFacade : NSObject

- (void)setChartStyle:(NSInteger)nChartStyleIndex;
- (void)setChartBorder:(int)nType isBorder:(bool)isBorder;
- (void)setChartFontSize:(NSInteger)chartFontIndex;
- (void)setChartFontName:(NSString *)chartFontName;
- (void)setChartOriginalData:(int)nEnableNumbFmt nNegativeType:(int)nNegativeType nDecPlaces:(int)nDecPlaces;
- (void)setChartNegative:(NSInteger)negativeType;
- (void)setChartDemicalType:(int)demicalType;
- (void)setObjectOrderPosition:(ObjectPosition)position;
- (void)setObjectArrangeTextWrap:(ObjectTextWrapType)textWrap;
- (void)setObjectArrangeAlign:(int)align;
- (void)setChartLayoutMajorAxis:(bool)isAxis;
- (void)setChartLayoutXAxisGuideLine:(bool)isAxis;
- (void)setChartLayoutYAxisGuideLine:(bool)isAxis;
- (void)setChartLayoutYAxisLog:(bool)isYAxisLog;
- (void)setChartLayoutAxisLine:(bool)isAxisLine;
- (void)setChartLayoutAxisLabel:(bool)isAxisLabel;
- (void)setChartLayoutXAxisLabelSlope:(NSInteger)index;
- (void)setChartLayoutYAxisLabelSlope:(NSInteger)index;
- (void)showChartStyleImage;
- (void)setChartDataWithSerialName:(NSArray*)serialNames ItemName:(NSArray*)itemNames SerialData:(NSArray*)serialDatas;
//- (void)setChartSerialName:(NSArray*)serialNames;
//- (void)setChartItemName:(NSArray*)itemNames;
//- (void)setChartSerialData:(NSArray*)serialDatas;

- (void)getChartStyleThumbnail:(int)nChartStyleCount nWidth:(int)nWidth nHeight:(int)nHeight;
- (bool)getChartFormatBorderFrame;
- (bool)getChartFormatBorderPlot;
- (NSInteger)getChartFontSize;
- (NSString *)getChartFontName;
- (bool)isChartDisplayFormatEnable;
- (int)chartFormatDisplayFormatNegativeType;
- (int)chartFormatDecimalPlacesValue;
- (bool)isChartOriginalData;
- (NSString *)getChartTitle;
- (NSString *)getChartXAxisTitle;
- (NSString *)getChartYAxisTitle;
- (int)getObjectArrangeTextwrap;
- (int)getChartLegend;
- (bool)getChartLayoutXAxisGuideLine;
- (bool)getChartLayoutYAxisGuideLine;
- (bool)getChartLayoutMajorAxisGridLine;
- (bool)getChartLayoutYAxisLog;
- (bool)getChartLayoutAxisLine;
- (bool)getChartLayoutAxisLabel;
- (int)getChartLayoutXAxisLabelSploe;
- (int)getChartLayoutYAxisLabelSploe;
- (int)getChartDataLabelPosition;
- (int)getChartType;
- (NSUInteger)getChartStyleIndexOfTotalIndex:(NSUInteger)totalIndex;
- (NSArray*)getChartSerialName;
- (NSArray*)getChartItemName;
- (NSArray*)getChartSerialData;

- (bool)isVerticalStickTypeChart;
- (bool)isVerticalStockTypeChart;
- (bool)isHorizontalStickTypeChart;
- (bool)isHorizontalStockTypeChart;
- (bool)isCircleTypeChart;
- (bool)isScatterTypeChart;
- (bool)isLineTypeChart;
- (bool)isSurfaceTypeChart;
- (bool)isDonutTypeChart;
- (bool)isRaderTypeChart;

@end
