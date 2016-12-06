//
//  CBookmarkData.h
//  PolarisOffice
//
//  Created by succorer on 2015. 3. 16..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CBookmarkData : NSObject

@property (strong, nonatomic) NSNumber *key;
@property (strong, nonatomic) NSString *title;
@property BOOL hasChild;
@property (strong, nonatomic) NSNumber *page;
@property (strong, nonatomic) NSNumber *rectLeft;
@property (strong, nonatomic) NSNumber *rectTop;
@property NSInteger depth;

- (BOOL)canSwap:(CBookmarkData *)toBookmarkData;
- (NSNumber *)parentKey;
- (NSInteger)row;
- (BOOL)isEqualToBookmarkData:(CBookmarkData*)bookmarkData;
//- (NSNumber *)upRowKey;
//- (NSNumber *)downRowKey;

+ (CBookmarkData *)searchBookmarkDataWithKey:(NSNumber *)key searchKey:(NSNumber *)searchKey;
+ (CBookmarkData *)bookmarkDataWithParentKey:(NSNumber *)parentKey key:(NSNumber *)key title:(NSString *)title hasChild:(BOOL)hasChild page:(NSNumber *)page rectLeft:(NSNumber *)rectLeft rectTop:(NSNumber *)rectTop;
+ (NSMutableDictionary *)sharedBookmarkDataDict;
+ (CBookmarkData *)bookmarkDataWithIndex:(NSInteger)index;
+ (void)removeWithParentKey:(NSNumber *)parentKey;
+ (void)reloadBookmarkDataDict;

@end
