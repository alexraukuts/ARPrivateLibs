#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "RenderViewDefine.h"

#import "GLRenderer.h"
#import "GLExtraRenderer.h"

@interface GLRenderView : UIView <UIGestureRecognizerDelegate>
{
@private
    EAGLRenderingAPI    eaglAPI;
    
    
    
    GLRenderer *glRenderer;
    
    BOOL    isInit;
    
    CGSize renderViewSize;

@protected
    CAEAGLLayer        *eaglLayer;
    EAGLContext        *context;
    BOOL cancelTouchEnd;
    BOOL isFlicking;
    BOOL isDocViewMode;
    
    float lastScale;
    float currentScale;
    
    float zoomRatio;
    
    __strong GLExtraRenderer *glExtraRenderer;
}

- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)documentDidLoad;
- (void) willBeClosed;
- (void) didRender;
- (void)onFlickEnded;
- (void)onVirtualKeypad;

- (void)willRotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation duration:(NSTimeInterval)duration;

- (void)viewWillTransitionToSize:(CGSize)size withTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)coordinator;

- (void)viewWillTransitionWithTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)coordinator;

- (void)ignoreObjectRendering:(BOOL)ignore;

- (void)didSetupContext;

- (void)willRequestBuffer;
- (void)didRequestBuffer;

- (void)willPresentRenderbuffer;
- (void)didPresentRenderBuffer;

- (void)changeScreen;
- (void)forceRendering;

- (void)handlePageEvent;
- (void)checkFlickingLatency;

@end
