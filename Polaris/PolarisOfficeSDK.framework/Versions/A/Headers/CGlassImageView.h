
#import "CLensView.h"

@interface CGlassImageView : UIImageView
{
    @protected
	int glassOffsetY;
}

@property (strong, nonatomic) CLensView *lensView;
@property (strong, nonatomic) UIImageView *lensImageView;
@property (strong, nonatomic) UIView *renderView;

- (id)initWithView:(UIView*)view;
- (void)createGlass;
- (void)show:(CGPoint)point;
- (BOOL)move:(CGPoint)point :(BOOL)anim;
- (void)hide;

@end
