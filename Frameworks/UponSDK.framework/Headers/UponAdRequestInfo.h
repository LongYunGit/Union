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
/// 请求错误码（用于请求上报接口参数）
@property (nonatomic, readonly) UponReportErrorCode errorCode;
/// Upon平台广告位ID
@property (nonatomic, readonly) NSString *adSlotID;
/// 广告类型
@property (nonatomic, readonly) UponAdType adType;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithRequestID:(NSString *)requestID
                        errorCode:(UponReportErrorCode)code
                         adSlotID:(NSString *)adSlotID
                           adType:(UponAdType)adType NS_DESIGNATED_INITIALIZER;

+ (instancetype)newWithRequestID:(NSString *)requestID
                       errorCode:(UponReportErrorCode)code
                        adSlotID:(NSString *)adSlotID
                          adType:(UponAdType)adType;

@end

NS_ASSUME_NONNULL_END
