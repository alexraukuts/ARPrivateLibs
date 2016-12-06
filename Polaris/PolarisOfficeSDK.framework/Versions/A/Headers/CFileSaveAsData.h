//
//  CFileSaveAsData.h
//  PolarisOffice
//
//  Created by 강현석 on 2014. 12. 30..
//  Copyright (c) 2014년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CDefineCommon.h"

@interface CFileSaveAsData : NSObject

@property (strong, nonatomic) NSString * path;
@property (strong, nonatomic) NSString * name;
@property (strong, nonatomic) NSString * fullName;
@property (strong, nonatomic) NSString * extension;
@property (strong, nonatomic) NSString * filePath;
@property FileSaveAsExtensionType extensionType;
@property (strong, nonatomic) NSString * fileType;

+ (CFileSaveAsData *)fileDataWithPath:(NSString *)path name:(NSString *)name extension:(NSString *)extension filePath:(NSString *)filePath ;

- (BOOL)isFolder;
- (NSString *)fileTypeImageName;

+ (void)setFileExtensionTypeWithFileDataObject:(CFileSaveAsData *)fileData;

@end
