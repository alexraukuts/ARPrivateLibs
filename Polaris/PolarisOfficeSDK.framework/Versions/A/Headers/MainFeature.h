//
//  MainFeature.h
//  PolarisOffice5
//
//  Created by MacSuccorer on 2014. 7. 25..
//
//

#import <Foundation/Foundation.h>
//#import "PolarisOfficeAPI.h"

@interface MainFeature : NSObject

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSMutableArray * bundleID;

- (id)initWithName:(NSString *)name;

+ (MainFeature *)sharedMainFeature;

@end
