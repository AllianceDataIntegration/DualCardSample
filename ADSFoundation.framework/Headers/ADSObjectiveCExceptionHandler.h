//
//  ADSObjectiveCExceptionHandler.h
//  ADSFoundation
//
//  Created by MLS Discovery on 2/1/18.
//  Copyright © 2018 Alliance Data. All rights reserved.
//

#ifndef ADSObjectiveCExceptionHandler_h
#define ADSObjectiveCExceptionHandler_h

#import <Foundation/Foundation.h>

@interface ADSObjectiveCExceptionHandler : NSObject

+ (BOOL)catchException:(void(^)(void))tryBlock error:(__autoreleasing NSError **)error;

@end

#endif /* ADSObjectiveCExceptionHandler_h */
