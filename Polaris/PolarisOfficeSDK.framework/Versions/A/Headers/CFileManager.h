//
//  CFileManager.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 9. 18..
//  Copyright (c) 2014년 infraware. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CoreFileFacade.h"

@class CoreFileFacade;
@interface CFileManager : NSObject

@property (strong, nonatomic) CoreFileFacade *coreFileFacade;

- (ResultType)openDocument;
- (ResultType)openDocumentWithPassword:(NSString *)password writePassword:(NSString *)writePassword protectDocumentReadMode:(int)protectReadMode;

@end
