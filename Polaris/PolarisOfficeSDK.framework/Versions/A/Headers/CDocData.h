//
//  CDocData.h
//  PolarisOffice
//
//  Created by MacSuccorer on 2014. 9. 15..
//  Copyright (c) 2014년 infraware. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CDocData : NSObject

@property CGSize margineSize;
@property CGRect portraitPageFrame;
@property CGRect landscapePageFrame;

+ (CDocData *)sharedDocData;

@end
