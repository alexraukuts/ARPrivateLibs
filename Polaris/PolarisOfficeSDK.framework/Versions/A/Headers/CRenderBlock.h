//
//  CRenderBlock.h
//  PolarisOffice
//
//  Created by starfisher on 2015. 1. 14..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import "CDefineCommon.h"
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void (^onShowInlineMenuBlock)(BOOL* notUsedAnymore, CGPoint touchPoint, BOOL isDoubleTap);
typedef void (^onHideInlineMenuBlock)(void);

@interface CRenderInlineMenuNotificationBlock : NSObject

@property (strong, nonatomic) onShowInlineMenuBlock showCB;
@property (strong, nonatomic) onHideInlineMenuBlock hideCB;

@end

/*------------------------------------------------------------------------------*/

typedef void (^onMinZoomBlock)(void);

@interface CRenderMinZoomNotificationBlock : NSObject

@property (strong, nonatomic) onMinZoomBlock minZoomCB;

@end

/*------------------------------------------------------------------------------*/

typedef void (^onChangePenModeBlock)(int penMode);

@interface CRenderPenModeNotificationBlock : NSObject

@property (strong, nonatomic) onChangePenModeBlock penModeCB;

@end

/*------------------------------------------------------------------------------*/

typedef void (^onHideKeyboardBlock)(void);
typedef void (^onShowKeyboardBlock)(void);

@interface CRenderKeyboardNotificationBlock : NSObject

@property (strong, nonatomic) onHideKeyboardBlock hideKeyboardCB;
@property (strong, nonatomic) onShowKeyboardBlock showKeyboardCB;

@end

/*------------------------------------------------------------------------------*/

typedef void (^onShowTextViewBlock)(void);
typedef void (^onHideTextViewBlock)(void);

@interface CSheetTextViewNotificationBlock : NSObject

@property (strong, nonatomic) onShowTextViewBlock showCB;
@property (strong, nonatomic) onHideTextViewBlock hideCB;

@end

/*------------------------------------------------------------------------------*/

typedef void (^onFinishSlideShowBlock)(void);

@interface CSlideShowFinishNotificationBlock : NSObject

@property (strong, nonatomic) onFinishSlideShowBlock finishCB;

@end

/*------------------------------------------------------------------------------*/

/*------------------------------------------------------------------------------*/

typedef void (^onStopEffectSlideShowBlock)(void);

@interface CSlideShowStopEffectNotificationBlock : NSObject

@property (strong, nonatomic) onStopEffectSlideShowBlock stopCB;

@end

/*------------------------------------------------------------------------------*/

typedef void (^onChangeDocumentAreaBlock)(void);

@interface CChangeDocumentAreaBlock : NSObject

@property (strong, nonatomic) onChangeDocumentAreaBlock changeDocumentAreaCB;

@end
/*------------------------------------------------------------------------------*/

typedef void (^onBlankObjectBlock)(BlankObjectType);

@interface CSlideBlankObjectBlock : NSObject

@property (strong, nonatomic) onBlankObjectBlock blankObjectCB;

@end
/*------------------------------------------------------------------------------*/

typedef void (^onShowStickyNoteBlock)(void);

@interface CStickyNoteNotificationBlock : NSObject

@property (strong, nonatomic) onShowStickyNoteBlock showCB;

@end

/*------------------------------------------------------------------------------*/

typedef BOOL (^onIgnoreChangeScreenBlock)(void);

@interface CIgnoreChangeScreenBlock : NSObject

@property (strong, nonatomic) onIgnoreChangeScreenBlock ignoreCB;

@end


/*------------------------------------------------------------------------------*/

typedef void (^onSlideShowFinishViewShowBlock)(void);

@interface CSlideShowFinishViewShowNotificationBlock : NSObject

@property (strong, nonatomic) onSlideShowFinishViewShowBlock showCB;

@end

/*------------------------------------------------------------------------------*/

typedef BOOL (^onIsDocInsideEditTextViewBlock)(void);

@interface CIsDocInsideEditTextViewNotificationBlock : NSObject

@property (strong, nonatomic) onIsDocInsideEditTextViewBlock isTextViewCB;

@end

/*------------------------------------------------------------------------------*/

typedef void (^onFreeFormShapeEnableBlock)(BOOL);

@interface CFreeFormShapeEnableNotificationBlock : NSObject

@property (strong, nonatomic) onFreeFormShapeEnableBlock enableCB;

@end

/*------------------------------------------------------------------------------*/

typedef void (^onCellEditEnableBlock)(BOOL);

@interface CCellEditEnableNotificationBlock : NSObject

@property (strong, nonatomic) onCellEditEnableBlock enableCB;

@end


/*------------------------------------------------------------------------------*/

typedef void (^onShowSheetTextBoxViewBlock)(void);
typedef void (^onHideSheetTextBoxViewBlock)(void);

@interface CShowSheetTextBoxViewNotificationBlock : NSObject

@property (strong, nonatomic) onShowSheetTextBoxViewBlock showCB;
@property (strong, nonatomic) onHideSheetTextBoxViewBlock hideCB;

@end

/*------------------------------------------------------------------------------*/

typedef void (^onSlideStopVideoBlock)(void);

@interface CSlideStopVideoNotificationBlock : NSObject

@property (strong, nonatomic) onSlideStopVideoBlock stopVideoCB;

@end
