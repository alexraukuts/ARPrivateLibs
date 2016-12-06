//
//  CMenuMediator.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 11. 5..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CMenuMediator : NSObject

@property (retain, nonatomic) NSMutableDictionary * dict;

- (instancetype)initWithDict:(NSMutableDictionary *)dict;
- (void)showMenu:(CGRect)frame;
- (void)updateMenu:(UIInterfaceOrientation)orientation;
- (void)showActionSheetMenu:(CGRect)frame;
- (void)didSelect:(NSString *)identifier eventDict:(NSDictionary *)dict completion:(void (^)(void))completion;
- (void)dismissView;
- (void)viewDidChangeSize;
- (void)registChangeSize:(NSString *)key value:(id)value;
- (void)unregistChangeSize:(NSString *)key;
- (void)subMenuChanged:(NSString *)identifier;
- (void)updatePopoverHeightWithNavigationCntroller:(UINavigationController *)navigationController withViewController:(UIViewController *)controller;
- (void)updatePopoverHeightWithNavigationCntroller:(UINavigationController *)navigationController withViewController:(UIViewController *)controller withHeight:(NSInteger)height;
- (CGFloat)contentsHeight;

+ (CMenuMediator *)executeMenuMediator:(UIViewController *)viewController;

@end
