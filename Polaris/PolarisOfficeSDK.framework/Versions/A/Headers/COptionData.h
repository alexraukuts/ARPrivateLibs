//
//  COptionData.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 10. 23..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//
// **************************************************************
//  각 업체 별 옵션 설정 데이터
// **************************************************************

#import <Foundation/Foundation.h>
#import "CDefineCommon.h"

@interface COptionData : NSObject

+ (instancetype)sharedOptionData;
- (BOOL)updateData:(NSDictionary*)optionData;

// Options...
- (BOOL)isDisableSaving;
- (BOOL)isDisableSaveAs;
- (BOOL)isDisableExport;
- (BOOL)isDisableEditing;
- (BOOL)isDisableDocumentShare;
- (BOOL)isDisableDocumentShareEmail;
- (BOOL)isDisableDocumentShareOpenIn;
- (BOOL)isDisablePrint;
- (BOOL)isDisableShare;
- (BOOL)isDisableWebSearch;
- (BOOL)isDisableCopyMenuInViewMode;
- (BOOL)isDisableHyperlink;
- (BOOL)isDisablePhoto;
- (BOOL)isDisableCamera;
- (BOOL)isDisableInfo;
- (BOOL)isDisableRuller;
- (BOOL)isDisableTrackChange;
- (BOOL)isDisableEditModeInPasswordDocument;
- (BOOL)isMemoryOpen;
- (BOOL)defaultViewMode;
- (BOOL)isPDFShowAnnotation;
- (BOOL)enableAnnotationInView;

- (NSString *)commentAuthorName;
- (NSString *)customFontPath;
- (NSString *)saveAsPDFBtnText;

- (NSArray *)leftMoreMenuName;
- (NSArray *)rightMoreMenuName;

@property (nonatomic, retain) UIImage *watermarkImage;
- (CGFloat)watermarkAlpha;

- (ZoomStatus)zoomStatus;
- (LogType)logType;

- (NSInteger)maximumAttachmentSize;
- (NSInteger)maximumFileOpenSize;
- (NSInteger)maximumTextFileOpenSize;
- (NSInteger)displayUnit;

@property (nonatomic, retain) UIColor *actionBarColor;
@property (nonatomic, retain) UIColor *fileNameColor;

@property (nonatomic, retain) UIViewController *saveBackVC;
@property (nonatomic, retain) UIImagePickerController *imagePickerVC;

@property (nonatomic, assign) BOOL isSBPresented;
@property (nonatomic, assign) BOOL isIPPresented;

@end
