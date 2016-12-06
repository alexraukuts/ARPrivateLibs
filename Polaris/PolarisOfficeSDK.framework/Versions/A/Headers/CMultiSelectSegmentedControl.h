//
//  MultiSelectSegmentedControl.h
//
//  Created by Yonat Sharon on 19/4/13.
//
//  Multiple-Selection Segmented Control
//  No need for images - works with the builtin styles of UISegmentedControl.
//  To get/set multiple segments programmatically, use the property
//  myControl.selectedSegmentIndexes instead of myControl.selectedSegmentIndex
//

#import <UIKit/UIKit.h>
#import "CSegmentedControl.h"

@class CMultiSelectSegmentedControl;

@protocol CMultiSelectSegmentedControlDelegate <NSObject>
- (void)multiSelect:(CMultiSelectSegmentedControl *)multiSelecSegmendedControl didChangeValue:(BOOL)value atIndex:(NSUInteger)index;
@end

@interface CMultiSelectSegmentedControl : CSegmentedControl

@property (nonatomic, assign) NSIndexSet *selectedSegmentIndexes;
@property (nonatomic, weak) id<CMultiSelectSegmentedControlDelegate> delegate;

- (void)selectAllSegments:(BOOL)select; // pass NO to deselect all
- (void)deSelectSegment:(NSInteger)index;
- (void)selectSegment:(NSInteger)index;
- (BOOL)isSelected:(NSInteger)index;
- (void)removeSegmentAtIndex:(NSUInteger)segment animated:(BOOL)animated;

@end
