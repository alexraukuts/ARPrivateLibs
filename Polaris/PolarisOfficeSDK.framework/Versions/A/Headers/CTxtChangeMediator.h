//
//  CTxtChangeMediator.h
//  PolarisOffice
//
//  Created by succorer on 2015. 3. 9..
//  Copyright (c) 2015년 MacSuccorer. All rights reserved.
//

#import <Foundation/Foundation.h>

@class CChangeData;
@class CEditTxtViewController;
@interface CTxtChangeMediator : NSObject

@property (strong, nonatomic) NSMutableDictionary *dict;

- (instancetype)initWithSender:(CEditTxtViewController *)sender;
- (void)registUndoRedo:(NSString *)identifier completion:(void(^)(BOOL isUndo, BOOL isRedo))completion;
- (void)inputData:(CChangeData *)changeData;
- (void)onUndoButtonTouched;
- (void)onRedoButtonTouched;
- (void)completedClose;

@end
