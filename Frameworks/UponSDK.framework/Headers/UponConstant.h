//
//  UponConstant.h
//  UponSDK
//
//  Created by DHY on 2021/3/2.
//  Copyright © 2021 LongYun.com. All rights reserved.
//

#import <Foundation/Foundation.h>

#ifndef _UponConstant_
#define _UponConstant_

/// 广告上游平台标记
typedef NS_ENUM(NSInteger, UponAdPlatformMark) {
    /// 未知平台
    UponAdPlatformMarkUnknown = 0,
    /// 云告SDK
    UponAdPlatformMarkYungao = 1,
    /// 百度SDK
    UponAdPlatformMarkBaidu = 2,
    /// 腾讯——广点通SDK
    UponAdPlatformMarkGDT = 3,
    /// 头条——穿山甲SDK
    UponAdPlatformMarkTouTiao = 4,
    /// 快手SDK
    UponAdPlatformMarkKuaishou = 5,
};

/// 上游平台标记文本描述
FOUNDATION_EXTERN NSString * UponAdPlatformMarkName(UponAdPlatformMark mark);

/// 广告类型
typedef NS_ENUM(NSInteger, UponAdType) {
    /// 未知类型
    UponAdTypeUnknown = 0,
    /// 开屏广告
    UponAdTypeSplash = 4,
    /// 插屏广告
    UponAdTypeInterstitial = 6,
    /// 信息流广告
    UponAdTypeNative = 11,
    /// 信息流广告（Draw）
    UponAdTypeNativeDraw = 12,
    /// 横幅广告
    UponAdTypeBanner = 9,
    /// 激励视频
    UponAdTypeRewardVideo = 2,
    /// 视频贴片（在视频的片头片尾或插片播放的广告，以及背景广告等）
    UponAdTypeInterstitialVideo = 14,
    /// 全屏视频
    UponAdTypeFullscreenVideo = 7,
};

/// 广告类型枚举对应的文本描述
FOUNDATION_EXTERN NSString * UponAdTypeName(UponAdType type);

/// 广告分层类型
typedef NS_ENUM(NSInteger, UponAdLayeredType) {
    /// 未知类型
    UponAdLayeredTypeUnknown = 0,
    /// 默认分层
    UponAdLayeredTypeDefault = 1,
    /// 首轮曝光
    UponAdLayeredTypeFirstExposure = 2,
    /// 自定义
    UponAdLayeredTypeCustom = 3
};

/// 广告分层类型枚举对应的文本描述
FOUNDATION_EXTERN NSString * UponAdLayeredTypeName(UponAdLayeredType type);


#endif /* _UponConstant_ */
