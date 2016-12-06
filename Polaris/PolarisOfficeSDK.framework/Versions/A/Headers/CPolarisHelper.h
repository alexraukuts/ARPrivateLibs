//
//  CPolarisHelper.h
//  PolarisOffice
//
//  Created by succorer on 2015. 4. 25..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#ifdef USE_PRINT_OUT_LOG_FUNCTION
#define NSLog(format, ...) [[CPolarisHelper sharedPolarisHelper].evDocDelegate printOut:[NSString stringWithFormat:(format), ##__VA_ARGS__]]
#endif

@class CFileData;
@interface CPolarisHelper : NSObject

@property (assign) id evDocDelegate;
+ (instancetype)sharedPolarisHelper;


//////////////////////////////////////////////////
// APIs...
//////////////////////////////////////////////////
- (void)CloseDocument;
- (void)NewDocument:(NSString*)fileExt :(id)delegate completedController:(void(^)(UIViewController *editorViewController))completedController;
- (void)OpenDocument:(NSString*)fileExt :(NSData*)fileData :(id)delegate completedController:(void(^)(UIViewController *editorViewController))completedController;
- (BOOL)isModified;

//////////////////////////////////////////////////
- (void)saveBackDocumentPath:(NSString*)filePath;
- (void)getEditedData;
- (void)saveBackDidCancel;
- (void)getThumbnail:(NSString*)filePath frame:(CGRect)frame completion:(void(^)(UIImage *image))completion;
// internal api
- (void)completedClose;

@end
