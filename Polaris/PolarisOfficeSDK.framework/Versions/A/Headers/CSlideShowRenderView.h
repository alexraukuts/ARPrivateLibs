//
//  CSlideShowRenderView.h
//  PolarisOffice
//
//  Created by 유선욱 on 2015. 2. 23..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import "GLRenderView.h"
#import "CSlideShowRenderAgent.h"
#import "CoreSlideShowFacde.h"

@interface CSlideShowRenderView : GLRenderView
<UIGestureRecognizerDelegate>
{
    UITapGestureRecognizer *singleTabGestureRecognizer;
    
    UISwipeGestureRecognizer *swipeLeftGestureRecognizer;
    UISwipeGestureRecognizer *swipeRightGestureRecognizer;
    
    __weak id<CSlideShowRenderAgentDelegate> renderAgent;
	
	@protected
	__strong CoreSlideShowFacde *coreSlideShowFacde;
}

@property (nonatomic, assign) int startPage;
@property (nonatomic, assign) int endPage;

- (void)setAgent:(id<CSlideShowRenderAgentDelegate>) agent;
- (void)initSlideShowFrame:(CGRect)frame;

- (void)setSlideShowMode:(SlideShowMode)mode;
- (void)setPointerWithImageName:(NSString *)imageName;

- (void)stopEffectEndWaiting;
- (void)slideShowStop;
@end
