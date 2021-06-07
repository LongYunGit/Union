//
//  UnionConstant.h
//  UnionSDK
//
//  Created by DHY on 2021/3/2.
//  Copyright © 2021 LongYun.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef _UnionConstant_
#define _UnionConstant_

/// 广告上游平台标记
typedef NS_ENUM(NSInteger, UnionAdPlatformMark) {
    /// 未知平台
    UnionAdPlatformMarkUnknown = 0,
    /// 云告SDK
    UnionAdPlatformMarkYungao = 1,
    /// 百度SDK
    UnionAdPlatformMarkBaidu = 2,
    /// 腾讯——广点通SDK
    UnionAdPlatformMarkGDT = 3,
    /// 头条——穿山甲SDK
    UnionAdPlatformMarkTouTiao = 4,
    /// 快手SDK
    UnionAdPlatformMarkKuaishou = 5,
};

/// 上游平台标记文本描述
FOUNDATION_EXTERN NSString * UnionAdPlatformMarkName(UnionAdPlatformMark mark);

/// 广告类型
typedef NS_ENUM(NSInteger, UnionAdType) {
    /// 未知类型
    UnionAdTypeUnknown = 0,
    /// 开屏广告
    UnionAdTypeSplash = 4,
    /// 插屏广告
    UnionAdTypeInterstitial = 6,
    /// 信息流广告
    UnionAdTypeNative = 11,
    /// 信息流广告（Draw）
    UnionAdTypeNativeDraw = 12,
    /// 横幅广告
    UnionAdTypeBanner = 9,
    /// 激励视频
    UnionAdTypeRewardVideo = 2,
    /// 视频贴片（在视频的片头片尾或插片播放的广告，以及背景广告等）
    UnionAdTypeInterstitialVideo = 14,
    /// 全屏视频
    UnionAdTypeFullscreenVideo = 7,
};

/// 广告类型枚举对应的文本描述
FOUNDATION_EXTERN NSString * UnionAdTypeName(UnionAdType type);

/// 广告分层类型
typedef NS_ENUM(NSInteger, UnionAdLayeredType) {
    /// 未知类型
    UnionAdLayeredTypeUnknown = 0,
    /// 默认分层
    UnionAdLayeredTypeDefault = 1,
    /// 首轮曝光
    UnionAdLayeredTypeFirstExposure = 2,
    /// 自定义
    UnionAdLayeredTypeCustom = 3
};

/// 广告分层类型枚举对应的文本描述
FOUNDATION_EXTERN NSString * UnionAdLayeredTypeName(UnionAdLayeredType type);


#endif /* _UnionConstant_ */
