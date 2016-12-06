#import <UIKit/UIKit.h>


@protocol CNumberPadCustomDelegate <NSObject>

- (void)inputCustomKey:(UITextField *)textField;

@end

@interface CNumberPadCustomBtn : UIView

@property (weak, nonatomic) id<CNumberPadCustomDelegate> delegate;

- (id) initWithFrame:(CGRect)frame textField:(UITextField *)textField delegate:(id)delegate title:(NSString *)title;

@end

@interface CNumberPadButton : UIButton

@end