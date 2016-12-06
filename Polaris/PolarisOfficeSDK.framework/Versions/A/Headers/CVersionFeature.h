//
//  CVersionFeature.h
//  PolarisOffice5
//
//  Created by MacSuccorer on 2014. 9. 1..
//
//

#import <Foundation/Foundation.h>

@interface CVersionFeature : NSObject

@property (retain, nonatomic) NSString * keyboardContainerViewName;

+ (CVersionFeature *)sharedCVersionFeature;

- (CGRect)getScreenBounds;
- (CGRect)getScreenApplicationFrame;
- (CGRect)updateKeypadFrameWithUserInfo:(NSDictionary *)userInfo;
- (UITableViewCell *)getTableViewCell:(UIView *)view;

@end
