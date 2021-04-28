//
//  UponAD.h
//  UponSDK
//
//  Created by DHY on 2021/3/10.
//

#import <Foundation/Foundation.h>
#import <UponSDK/UponConstant.h>
#import <UponSDK/UponAdRequestInfo.h>
#import <UponSDK/UponAdLayeredInfo.h>
#import <UponSDK/UponAdPlatformInfo.h>

NS_ASSUME_NONNULL_BEGIN

@protocol UponAD <NSObject>

/// Upon平台广告位ID
@property (nonatomic, readonly) NSString *adSlotID;
/// 广告类型
@property (nonatomic, readonly) UponAdType adType;
/// 是否需要预加载
@property (nonatomic, readonly) BOOL needPreload;

/// 请求的广告信息
@property (nonatomic, readonly) UponAdRequestInfo *requestInfo;
/// 广告分层信息
@property (nonatomic, readonly) UponAdLayeredInfo *layeredInfo;
/// 平台广告信息（即：上游广告信息）
@property (nonatomic, readonly) UponAdPlatformInfo *platformInfo;
/// 广告展示所需的附加参数
@property (nonatomic, readonly) NSDictionary *extra;


- (instancetype)initWithRequestInfo:(UponAdRequestInfo *)reqInfo
                        layeredInfo:(UponAdLayeredInfo *)layer
                       platformInfo:(UponAdPlatformInfo *)platform
                              extra:(NSDictionary *)extra;

@end

NS_ASSUME_NONNULL_END
