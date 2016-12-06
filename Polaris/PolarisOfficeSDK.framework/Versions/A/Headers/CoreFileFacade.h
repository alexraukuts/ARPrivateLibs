//
//  CoreFileFacade.h
//  PolarisOffice
//
//  Created by JIHYUN on 2015. 2. 3..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

/**
 * @brief File menu 내 Core 기능을 제공
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CDefineCommon.h"

@interface CoreFileFacade : NSObject
// new
- (void)createWordDocument;
- (void)createSlideDocumentWithTemplate:(int) NewTemplatePPT;
- (void)createSheetDocument;
- (void)createHwpDocument;
// open
- (ResultType)openDocumentWithFilePath:(NSString *)filePath isEditMode:(bool)isEditMode;
- (ResultType)openDocumentWithFilePath:(NSString *)filePath password:(NSString *)password writePassword:(NSString *)writePassword protectDocumentReadMode:(int)protectReadMode;
- (ResultType)openDocumentWithDocumentType:(DOCUMENT_TYPE)nType Memory:(NSData *)memoryData isEditMode:(bool)isEditMode;
- (ResultType)openDocumentWithDocumentType:(DOCUMENT_TYPE)nType Memory:(NSData *)memoryData password:(NSString *)password writePassword:(NSString *)writePassword protectDocumentReadMode:(int)protectReadMode;

// password
- (NSString*)getDocumentPassword:(bool)readMode;
- (void)setDocumentPassword:(NSString*)password writePassword:(NSString*)writePassword readOnlyRecommended:(bool)readOnlyRecommended;

// close
- (void)closeDocument;

// save
- (BOOL)isEnableSave;
- (void)setDocumentModified:(BOOL)modified;
- (void)saveDocument;
- (void)saveAsDocument:(NSString*)documentSavePath;
- (void)autoSaveDocument:(NSString*)documentSaveTempPath;

// file temp path
- (void)setDocumentTempPath:(NSString*)tempPath;

// export
- (void)exportToPDF:(NSString*)exportFilePath isIncludingInk:(BOOL)includingInk;
- (void)exportToTXT:(NSString*)exportFilePath;
- (void)exportToPowerPointShow:(NSString*)exportFilePath;
- (void)exportToImage:(NSString*)exportFilePath exportRange:(PrintRange)exportRange;
- (BOOL)isEnableExportToPDF;

// request document thumbnail - callback : onPrintCompleted
- (void)requestDocumentThumbnailInDocument:(NSString*)documentPath thumbnailWidth:(int)width thumbnailHeight:(int)height;
- (void)requestDocumentThumbnailInFileManager:(NSString*)documentPath thumbnailWidth:(int)width thumbnailHeight:(int)height Memory:(NSData*)memoryData Password:(NSString*) password;

// print
- (int)getTotalSheetPageInPrintActiveSheet;
- (int)getTotalSheetPageInPrintEntireSheet;

// File Info
- (SUMMARY_DATA)getDocumentInformation;
- (WORD_COUNT_STATISTICS)getWordDocumentProperties;
- (void)setDocumentAuthor:(NSString*)author;
- (void)setDocumentLastModifiedBy:(NSString*)modifiedBy;
- (NSString*)getPDFAuthor;
- (NSString*)getPDFTitle;
- (NSString*)getPDFProducer;

@end