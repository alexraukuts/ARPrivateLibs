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

@class CToggleSegmentedControl;

@protocol CToggleSegmentedControlDelegate <NSObject>
-(void)toggleSelected:(CToggleSegmentedControl*)segmendedControl didChangeValue:(BOOL) value atIndex: (NSUInteger) index;
@end

@interface CToggleSegmentedControl : CSegmentedControl

@property (nonatomic, assign) NSIndexSet *selectedSegmentIndexes;
@property (nonatomic, weak) id<CToggleSegmentedControlDelegate> delegate;

@end
