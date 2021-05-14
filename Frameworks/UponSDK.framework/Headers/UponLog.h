//
//  UponLog.h
//  UponSDK
//
//  Created by DHY on 2021/3/2.
//  Copyright © 2021 LongYun.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef UpLog
#define UpLog(format, ...) [UponLog printLog:@"TIME:%s (%d行)【UponSDK】%@", __TIME__, __LINE__, [NSString stringWithFormat:(format), ## __VA_ARGS__]]
#endif

NS_ASSUME_NONNULL_BEGIN

@interface UponLog : NSObject

+ (void)printLog:(NSString *)format, ... NS_FORMAT_FUNCTION(1,2);

@end

NS_ASSUME_NONNULL_END
