//
//  UponAdRequestInfo.h
//  UponSDK
//
//  Created by DHY on 2021/3/12.
//

#import <Foundation/Foundation.h>
#import <UponSDK/UponConstant.h>

NS_ASSUME_NONNULL_BEGIN

/// 请求的广告信息
@interface UponAdRequestInfo : NSObject

/// 请求ID
@property (nonatomic, readonly) NSString *requestID;
/// Upon平台广告位ID
@property (nonatomic, readonly) NSString *adSlotID;
/// 广告类型
@property (nonatomic, readonly) UponAdType adType;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithRequestID:(NSString *)requestID
                         adSlotID:(NSString *)adSlotID
                           adType:(UponAdType)adType NS_DESIGNATED_INITIALIZER;

+ (instancetype)newWithRequestID:(NSString *)requestID
                        adSlotID:(NSString *)adSlotID
                          adType:(UponAdType)adType;

@end

NS_ASSUME_NONNULL_END
