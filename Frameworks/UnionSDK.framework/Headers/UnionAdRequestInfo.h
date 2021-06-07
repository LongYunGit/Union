//
//  UnionAdRequestInfo.h
//  UnionSDK
//
//  Created by DHY on 2021/3/12.
//

#import <Foundation/Foundation.h>
#import <UnionSDK/UnionConstant.h>

NS_ASSUME_NONNULL_BEGIN

/// 请求的广告信息
@interface UnionAdRequestInfo : NSObject

/// 请求ID
@property (nonatomic, readonly) NSString *requestID;
/// Union平台广告位ID
@property (nonatomic, readonly) NSString *adSlotID;
/// 广告类型
@property (nonatomic, readonly) UnionAdType adType;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithRequestID:(NSString *)requestID
                         adSlotID:(NSString *)adSlotID
                           adType:(UnionAdType)adType NS_DESIGNATED_INITIALIZER;

+ (instancetype)newWithRequestID:(NSString *)requestID
                        adSlotID:(NSString *)adSlotID
                          adType:(UnionAdType)adType;

@end

NS_ASSUME_NONNULL_END
