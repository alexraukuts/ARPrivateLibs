//
//  CLicenseParser.h
//  PolarisOffice
//
//  Created by succorer on 2015. 4. 30..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CLicenseParser : NSXMLParser <NSXMLParserDelegate>
{
    NSMutableDictionary* root;
    NSMutableArray* dictStack;
    
    NSString* currentElement;
    NSString* value;
}

+ (NSDictionary*)parse:(NSData*)data;
- (NSDictionary*)result;

- (void)clear;

@end
