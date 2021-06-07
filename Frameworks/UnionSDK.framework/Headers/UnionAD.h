//
//  UnionAD.h
//  UnionSDK
//
//  Created by DHY on 2021/3/10.
//

#import <Foundation/Foundation.h>
#import <UnionSDK/UnionConstant.h>
#import <UnionSDK/UnionAdRequestInfo.h>
#import <UnionSDK/UnionAdLayeredInfo.h>
#import <UnionSDK/UnionAdPlatformInfo.h>

NS_ASSUME_NONNULL_BEGIN

@protocol UnionAD <NSObject>

/// Union平台广告位ID
@property (nonatomic, readonly) NSString *adSlotID;
/// 广告类型
@property (nonatomic, readonly) UnionAdType adType;
/// 是否需要预加载
@property (nonatomic, readonly) BOOL needPreload;

/// 请求的广告信息
@property (nonatomic, readonly) UnionAdRequestInfo *requestInfo;
/// 广告分层信息
@property (nonatomic, readonly) UnionAdLayeredInfo *layeredInfo;
/// 平台广告信息（即：上游广告信息）
@property (nonatomic, readonly) UnionAdPlatformInfo *platformInfo;
/// 广告展示所需的附加参数
@property (nonatomic, readonly) NSDictionary *extra;


- (instancetype)initWithRequestInfo:(UnionAdRequestInfo *)reqInfo
                        layeredInfo:(UnionAdLayeredInfo *)layer
                       platformInfo:(UnionAdPlatformInfo *)platform
                              extra:(NSDictionary *)extra;

@end

NS_ASSUME_NONNULL_END
