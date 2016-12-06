//
//  CoreTrackFacde.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 3. 9..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief Word 변경 내용 추적 관련 Core 기능을 제공
 */

#import <Foundation/Foundation.h>
#import "CEngineHelper.h"

@interface CoreTrackFacde : NSObject

- (void)setTrackEnable:(BOOL)isOn;

- (void)setTrackReviewMode:(TrackChangeMode)trackChangeMode;
- (TrackChangeMode)getTrackReviewMode;

- (void)showMemoMarkUp:(BOOL)isShow;
- (BOOL)isShowMemoMarkup;

- (void)showInsDelMarkup:(BOOL)isShow;
- (BOOL)isShowInsDelMarkup;

- (BOOL)isTrackChangeData;
- (WORD_CHANGES_DATA)getTrackChangesContentInfo;

- (int)getTotalReviewersCount;
- (NSMutableDictionary *)getReviewerInfoWithIndex:(int)index;
- (void)setReviewerInfo:(NSInteger *)list withSize:(NSInteger)size;

- (void)moveTrackNext;
- (void)moveTrackPrev;

- (void)applyTrackCurrent;
- (void)applyTrackAll;
- (void)cancelTrackCurrent;
- (void)cancelTrackAll;
- (void)applyTrackCurrentAndMoveNext;
- (void)applyTrackShown;
- (void)cancelTrackCurrentAndMoveNext;
- (void)cancelTrackShown;
@end
