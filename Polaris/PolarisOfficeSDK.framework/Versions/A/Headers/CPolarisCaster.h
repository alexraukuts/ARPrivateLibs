//
//  CPolarisCaster.h
//  PolarisOffice
//
//  Created by succorer on 2015. 4. 25..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDefineCommon.h"

@protocol EVDocControllerDelegate
@required
- (NSString*)setLicenseKey;

@optional
- (void)completeNewDoc;
- (void)completeLoad;
- (void)completeClose;
- (void)documentOpenFail:(NSInteger)errorType;
- (void)changeScreenSize:(CGSize)size;
- (BOOL)fileExistInUserSpace:(NSString*)fileName;
- (void)completeSave:(NSString*)fileName :(BOOL)isDocClose;
- (void)completeSaveByMemory:(NSData*)fileData :(NSString*)fileNameExt :(BOOL)isDocClose;
- (void)cbDocThumbnail:(UIImage*)thumbImg;
- (void)printOut:(NSString*)log;
- (void)cbCustomMenuSelect:(NSString*)menu;
- (BOOL)openURLInDocument:(NSURL*)url;
- (void)ClipboardUpdateNotification:(NSInteger)type :(NSString*)textData;
- (void)ClipboardUpdateNotification:(NSInteger)type :(NSInteger)cType :(NSString*)textData; // for fasoo
- (NSString*)setDocumentTitle;
- (UIStatusBarStyle)setStatusBarStyle;

@end

@interface CPolarisCaster : NSObject

+ (instancetype)sharedPolarisCaster;
- (NSString*)getLicenseKey;
- (NSString*)getDocumentTitle;
- (UIStatusBarStyle)getStatusBarStyle;
- (void)onLoadFail:(NSInteger)errorType;
- (void)onChangeScreenSize:(CGSize)size;
- (void)onCompletedThumbnail:(UIImage *)image;
- (BOOL)onOpenURLInDocument:(NSURL*)url;
- (void)onCustomMenuSelect:(NSString*)menu;
- (BOOL)onFileExistInUserSpace:(NSString *)fileName;
- (void)onNotificationClipboard:(NSInteger)type :(NSString*)textData;

//////////////////////////////////////////////////
// Use this functions...
//////////////////////////////////////////////////
- (void)changedScreenSize:(void(^)(CGSize size))changedScreenSize;
- (void)completedNewDoc:(void(^)())completedNewDoc;
- (void)completedLoad:(void(^)())completedLoad;
- (void)completedSave:(void(^)(NSData *data))completedSave;
- (void)completedThumbnail:(void(^)(UIImage *image, CFileData *fileData))completedThumbnail;

@property (retain, nonatomic) UIViewController * delegate;
@property (retain, nonatomic) UIViewController * evDocVC;
@property BOOL * isNeedChangeModify;
@property NSString * cellText;

@end
