//
//  CSaveMediator.h
//  PolarisOffice
//
//  Created by ParkBeomsam on 2015. 2. 4..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CToolbarMenuViewController.h"
#import "CoreFileFacade.h"
#import "CoreEditFacade.h"

@interface CSaveMediator : NSObject

@property (weak, nonatomic) UIViewController *mainViewController;
@property (weak, nonatomic) CToolbarMenuViewController *toolbarViewController;
@property (strong, nonatomic) void (^completionBlock)(void);
@property (strong, nonatomic) CoreFileFacade *coreFileFacade;
@property (strong, nonatomic) CoreEditFacade *coreEditFacade;

- (void)saveDocument:(NSString *)filePath completion:(void(^)(void))completion;
- (void)saveDocumentForShare:(NSString *)filePath;
- (void)saveDocumentForShare:(NSString *)filePath completion:(void(^)(void))completion;
- (void)exportDocument:(NSString *)filePath exportType:(NSString *)type isIncludingInk:(BOOL)isIncludingInk completion:(void(^)(void))completion;
- (void)exportToImage:(NSString *)filePath exportRage:(NSInteger)range;
- (BOOL)isEnableExport;
- (void)createBackupFile:(NSString *)originalPath;
- (void)autoSaveDocument:(NSString *)filePath completion:(void(^)(void))completion;
- (void)savePPSFile:(NSString *)filePath completion:(void(^)(void))completion;
@end
