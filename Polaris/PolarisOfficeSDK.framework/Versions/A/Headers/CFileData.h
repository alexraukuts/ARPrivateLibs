//
//  CFileData.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 9. 15..
//  Copyright (c) 2014년 infraware. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CFileData : NSObject

typedef enum
{
    FileExtensionType_Unknown,
    // <VIEW/EDIT>
    FileExtensionType_DOC,
    FileExtensionType_DOCX,
    FileExtensionType_HWP,
    FileExtensionType_XLS,
    FileExtensionType_XLSX,
    FileExtensionType_PPT,
    FileExtensionType_PPTX,
    // <EDIT ONLY>
    FileExtensionType_TXT,
    FileExtensionType_ASC,
    // <VIEW ONLY>
    FileExtensionType_PDF,
    FileExtensionType_DOT,
    FileExtensionType_DOTX,
    FileExtensionType_RTF,
    FileExtensionType_XLT,
    FileExtensionType_XLTX,
    FileExtensionType_CSV,
    FileExtensionType_XLSM,
    FileExtensionType_POT,
    FileExtensionType_POTX,
    FileExtensionType_PPS,
    FileExtensionType_PPSX,
    FileExtensionType_ODT,
    FileExtensionType_PPTM,
    FileExtensionType_DOCM,
    // <VIEW ONLY - IMAGE>
    FileExtensionType_JPG,
    FileExtensionType_JPEG,
    FileExtensionType_BMP,
    FileExtensionType_DIB,
    FileExtensionType_TIFF,
    FileExtensionType_TIF,
    FileExtensionType_GIF,
    FileExtensionType_PNG,
    FileExtensionType_WMF,
    FileExtensionType_EMF,
    FileExtensionType_PCX,
    FileExtensionType_WBMP,
    // <ETC>
    FileExtensionType_ZIP,
} FileExtensionType;


@property (strong, nonatomic) NSString * uniqueKey;
@property (strong, nonatomic) NSString * filePath;
@property (strong, nonatomic) NSData * memoryData;
@property (strong, nonatomic) NSString * size;
@property (strong, nonatomic) NSString * date;
@property (strong, nonatomic) NSString * readPassword;
@property (strong, nonatomic) NSString * exportedFilePath;
@property BOOL isNewFile;
@property BOOL isBlankFile;
@property BOOL onSharePrintSaving;
@property NSInteger pptTemplateType;
@property BOOL hasPassword;
@property BOOL isSaveNotity;
@property BOOL isTotalLoadComplete;
@property BOOL isDocClose;
@property NSInteger saveType;

- (BOOL)hasMemoryData;

- (NSString *)fullName;
- (NSString *)name;
- (NSString *)extension;
- (NSString *)extensionLowercase;
- (NSString *)getExtensionWithFileExtensionType:(FileExtensionType)fileExtensionType;
- (NSString *)viewControllerName;
- (NSString *)themeKey;
- (NSString *)getThemeKeyWithFileExtensionType:(FileExtensionType)fileExtensionType;
- (NSString *)supportedModes;
- (NSString *)fileTypeDescription;
- (NSString *)fileTypeImageName;
- (NSString *)displayLocalPath;
- (FileExtensionType)fileExtensionType;
- (BOOL)isWord;
- (BOOL)isSheet;
- (BOOL)isSlide;
- (BOOL)isSlideShowType;
- (BOOL)is2003Document;
- (BOOL)isPdf;
- (BOOL)isHwp;
- (BOOL)isRtf;
- (BOOL)isOdt;
- (BOOL)isTxt;
- (BOOL)isAsc;
- (BOOL)isCsv;
- (BOOL)isXlsm;
- (BOOL)isPPtm;
- (BOOL)isDocm;
- (BOOL)isImage;
- (BOOL)isScan;
- (BOOL)isTempFile;
- (BOOL)isNotSupportedSave;

- (BOOL)isPot;
- (BOOL)isPotx;
- (BOOL)isXlt;
- (BOOL)isXltx;
- (BOOL)isDot;
- (BOOL)isDotx;

- (void)initialize;
- (void)updateWithFilePath:(NSString *)path memoryData:(NSData *)memoryData;
- (void)updateWithUniqueKey:(NSString *)uniqueKey memoryData:(NSData *)memoryData filePath:(NSString *)filePath size:(NSString *)size date:(NSString *)date newFile:(BOOL)newFile blankFile:(BOOL)blankFile pptTemplateType:(NSInteger)index hasPassword:(BOOL)hasPassword;
- (void)updateFileDataWithPath:(NSString *)path;
- (void)updateFileSaveNotity:(BOOL)saveNoti;
- (void)updateTotalLoadComplete:(BOOL)totalLoadComplete;
- (void)updateDocCloseStatus:(BOOL)docClose;
- (void)updateSaveType:(NSInteger)saveType;
- (void)updateFileReadPassword:(NSString*)readPassword;

+ (CFileData *)fileDataWithPath:(NSString *)path;
+ (CFileData *)fileDataWithMemoryData:(NSData *)memoryData path:(NSString *)path;
+ (CFileData *)sharedOpenFileData;
+ (NSMutableArray *)sharedFileDatas;
- (void)makeMemoryData;

- (BOOL)getEditable;

@end
