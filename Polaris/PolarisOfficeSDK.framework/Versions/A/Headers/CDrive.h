//
//  CDrive.h
//  PolarisOffice
//
//  Created by 강현석 on 2014. 12. 30..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDefineCommon.h"
#ifdef GOOD_FEATURE
#import "CGDFileManager.h"
#endif

@class CFileSaveAsData;

@protocol DriveDelegate <NSObject>

- (void)driveOnConnect:(OfficeDriveType)driveType;
- (void)driveOnRefresh:(OfficeDriveResultType)resultType files:(NSArray *)files;
- (void)driveOnCreateFolder;

@end

@interface CDrive : NSObject

@property (strong, nonatomic) NSString * rootPath;
@property (strong, nonatomic) NSString * refreshPath;
#ifdef GOOD_FEATURE
@property (strong, nonatomic) CGDFileManager * fileManager;
#else
@property (strong, nonatomic) NSFileManager * fileManager;
#endif
@property (weak, nonatomic) id<DriveDelegate> delegate;
@property (strong, nonatomic) NSString * targetPath;
@property (strong, nonatomic) NSMutableDictionary * fileDict;

@property OfficeDriveType driveType;

- (OfficeDriveResultType)connect:(id)sender;
- (OfficeDriveResultType)refresh:(id)sender uniqueKey:(NSString *)uniqueKey;
- (OfficeDriveResultType)createFolder:(id)sender parentPath:(NSString *)parentPath folderName:(NSString *)name;

- (BOOL)isRoot:(NSString *)uniqueKey;
- (NSString *)upFolderPath:(NSString *)currentFolder;
- (BOOL)isIgnoreFolderName:(NSString *)name;

+ (instancetype)sharedDrive:(OfficeDriveType)driveType;

@end