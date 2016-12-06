//
//  CSheetInlinPopupFactory.h
//  PolarisOffice
//
//  Created by dowith4 on 2015. 2. 4..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import "CInlinePopupFactory.h"

@interface CSheetInlinePopupFactory : CInlinePopupFactory
-(NSArray*)makeInlinePopupItemsForSheetTab;
- (bool)isFormatCopiedForSheet;
- (void)setFormatCopiedForSheet:(bool)isFormatCopied;

@property (readwrite, assign) bool isFormatCopiedForSheet;
@end
