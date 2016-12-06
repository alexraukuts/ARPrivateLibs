//
//  CLicenseRequester.h
//  PolarisOffice
//
//  Created by succorer on 2015. 4. 30..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "CDefineCommon.h"

#ifdef TEST_LICENSE

#define BASECODE_URL @"http://api.polariskit.com/basecode"
#define AUTHCRFM_URL @"http://api.polariskit.com/auth"
#define MACRGIST_URL @"http://api.polariskit.com/regist"

#else

#define BASECODE_URL @"https://api.polariskit.com/basecode"
#define AUTHCRFM_URL @"https://api.polariskit.com/auth"
#define MACRGIST_URL @"https://api.polariskit.com/regist"

#endif

/****************	Immutable Dictionary	****************/

@interface NSDictionary(extends)
- (id)objectForKeyPath: (NSString*)path;
- (NSArray*)arrayForKeyPath: (NSString*)path;
@end


@interface CLicenseRequester : NSObject<UIAlertViewDelegate> {
    enum ENUM_REQUEST_STATUS {
        eRequestNone = 0,
        eRequestGetAuth,
        eRequestConfirmAuth,
        eRequestRegist,
    } eRequestStatus;
    
    enum ENUM_ALERT_TAG {
        eAlertNone = 0,
        eAlertNetworkError,
        eAlertCheckError,
        eAlertCheckFail,
    } eAlertStatus;
}

@property (nonatomic, retain) NSMutableURLRequest* urlRequest;
@property (nonatomic, assign) NSURLConnection* urlConnection;
@property (nonatomic, retain) NSMutableData* received;
@property (nonatomic, retain) NSString* authString;
@property (strong, nonatomic) void (^completedLicenseCheck)(void);
@property (nonatomic, retain) UIViewController *mainViewCtlr;

- (LicenseType)checkLicense;
- (void)msgToAlert:(NSInteger)tag :(NSInteger)error;
- (void)macToInfraRequest:(void (^)(void))completedLicenseCheck;
- (void)getAuth;
- (void)confirmAuth;
- (void)startRequest;
- (NSString*)getMacAddress;
- (NSString*) md5:(NSString*)srcStr;

@end
