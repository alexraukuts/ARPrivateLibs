//
//  CAirPrint.h
//  PolarisOffice
//
//  Created by ParkBeomsam on 2015. 2. 3..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CAirPrint : NSObject<UIPrintInteractionControllerDelegate, UIApplicationDelegate, UITableViewDelegate>

@property BOOL alreadyPrint;

+ (CAirPrint *) sharedAirPrint;
//- (void) print:(UIView *)mainView;
- (void)print:(UIView *)mainView isLandscape:(BOOL)isLandscape;
- (void) pdfPrint:(UIView *)mainView pdfPath:(NSString *)pdfPath;
//- (void) dismissPrintPopOver;
- (void) printError;

//- (void) onPrintResult:(void*)pResult;

@end