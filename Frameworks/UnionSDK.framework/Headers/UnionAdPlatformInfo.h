//
//  UnionAdPlatformInfo.h
//  UnionSDK
//
//  Created by DHY on 2021/3/12.
//

#import <Foundation/Foundation.h>
#import <UnionSDK/UnionConstant.h>

/// 屏幕方向
typedef NS_ENUM (NSInteger, UnionScreenDirection) {
    /// 竖屏
    UnionScreenDirectionPortrait  = 1,
    /// 横屏
    UnionScreenDirectionLandscape = 2
};

/// 渲染方式
typedef NS_ENUM (NSInteger, UnionRenderType) {
    /// 模板渲染
    UnionRenderTypeTemplate = 1,
    /// 开发者自渲染
    UnionRenderTypeCustom   = 1,
};

/// 视频播放模式
typedef NS_ENUM (NSInteger, UnionVideoPlayMode) {
    /// 点击播放（不自动播放）
    UnionVideoPlayModeNone   = 0,
    /// 总是自动播放
    UnionVideoPlayModeAlways = 1,
    /// 仅在WIFI下自动播放
    UnionVideoPlayModeWifi   = 2
};

/// 优量汇-广告样式
typedef NS_ENUM (NSInteger, UnionGDTAdStyle) {
    /// 平台模板1.0(SDK渲染)
    UnionGDTAdStyleUnified = 1,
    /// 平台模板2.0
    UnionGDTAdStyleExpress = 2
};

/// 穿山甲-代码位样式
typedef NS_ENUM (NSInteger, UnionSnssdkAdSlotStyle) {
    /// 插屏
    UnionSnssdkAdSlotStyleInterstitial    = 1,
    /// 新插屏
    UnionSnssdkAdSlotStyleInterstitialNew = 2
};

NS_ASSUME_NONNULL_BEGIN

/// 广告上游平台信息
@interface UnionAdPlatformInfo : NSObject

/// 广告平台ID（即：上游ID）
@property (nonatomic, readonly) NSInteger ID;
/// 广告平台标示字符串
@property (nonatomic, readonly) NSString *markString;
/// 广告平台标示
@property (nonatomic, readonly) UnionAdPlatformMark mark;

/// 广告平台appID（即：上游appID）
@property (nonatomic, readonly) NSString *appID;
/// 广告平台广告key
@property (nonatomic, readonly) NSString *adSlotID;

/// 是否开屏点睛
@property (nonatomic, assign, getter = isOpenFocus) BOOL openFocus;
/// 视频是否静音
@property (nonatomic, assign, getter = isMuteForVideo) BOOL muteForVideo;
/// 屏幕方向
@property (nonatomic, assign) UnionScreenDirection direction;
/// 是否开屏V+
@property (nonatomic, assign, getter = isOpenScreen) BOOL openScreen;
/// 广告渲染方式
@property (nonatomic, assign) UnionRenderType renderType;
/// 视频自动播放模式
@property (nonatomic, assign) UnionVideoPlayMode videoPlayMode;
/// 广告平台广告key自增ID
@property (nonatomic, assign) NSInteger adKey;
/// 视频最大时长限制（-1：不限制）
@property (nonatomic, assign) NSInteger maxVideoDuration;
/// 插屏广告中，是否全屏视频（仅限于优量汇）
@property (nonatomic, assign, getter = isFullscreenVideo) BOOL fullscreenVideo;
/// 优量汇广告样式（仅限于优量汇）
@property (nonatomic, assign) UnionGDTAdStyle gdtAdStyle;
/// 穿山甲代码位样式（仅限于穿山甲）
@property (nonatomic, assign) UnionSnssdkAdSlotStyle snssdkAdSlotStyle;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithID:(NSInteger)platformID
                markString:(NSString *)mark
                     appID:(NSString *)appID
                  adSlotID:(NSString *)slotID
                     adKey:(NSInteger)adKey;

+ (instancetype)newWithID:(NSInteger)platformID
               markString:(NSString *)mark
                    appID:(NSString *)appID
                 adSlotID:(NSString *)slotID
                    adKey:(NSInteger)adKey;

@end

NS_ASSUME_NONNULL_END
