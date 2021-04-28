//
//  UponAdPlatformInfo.h
//  UponSDK
//
//  Created by DHY on 2021/3/12.
//

#import <Foundation/Foundation.h>
#import <UponSDK/UponConstant.h>

/// 屏幕方向
typedef NS_ENUM(NSInteger, UponScreenDirection) {
    /// 竖屏
    UponScreenDirectionPortrait = 1,
    /// 横屏
    UponScreenDirectionLandscape = 2
};

/// 渲染方式
typedef NS_ENUM(NSInteger, UponRenderType) {
    /// 模板渲染
    UponRenderTypeTemplate = 1,
    /// 开发者自渲染
    UponRenderTypeCustom = 1,
};

/// 视频播放模式
typedef NS_ENUM(NSInteger, UponVideoPlayMode) {
    /// 点击播放（不自动播放）
    UponVideoPlayModeNone = 0,
    /// 总是自动播放
    UponVideoPlayModeAlways = 1,
    /// 仅在WIFI下自动播放
    UponVideoPlayModeWifi = 2
};

NS_ASSUME_NONNULL_BEGIN

/// 广告上游平台信息
@interface UponAdPlatformInfo : NSObject

/// 广告平台ID（即：上游ID）
@property (nonatomic, readonly) NSInteger ID;
/// 广告平台标示字符串
@property (nonatomic, readonly) NSString *markString;
/// 广告平台标示
@property (nonatomic, readonly) UponAdPlatformMark mark;

/// 广告平台appID（即：上游appID）
@property (nonatomic, readonly) NSString *appID;
/// 广告平台广告key
@property (nonatomic, readonly) NSString *adSlotID;

/// 是否开屏点睛
@property (nonatomic, assign, getter=isOpenFocus) BOOL openFocus;
/// 视频是否静音
@property (nonatomic, assign, getter=isMuteForVideo) BOOL muteForVideo;
/// 屏幕方向
@property (nonatomic, assign) UponScreenDirection direction;
/// 是否开屏V+
@property (nonatomic, assign, getter=isOpenScreen) BOOL openScreen;
/// 广告渲染方式
@property (nonatomic, assign) UponRenderType renderType;
/// 视频自动播放模式
@property (nonatomic, assign) UponVideoPlayMode videoPlayMode;
/// 视频最大时长限制（-1：不限制）
@property (nonatomic, assign) NSInteger maxVideoDuration;
/// 插屏广告中，是否全屏视频（仅限于优量汇）
@property (nonatomic, assign, getter=isFullscreenVideo) BOOL fullscreenVideo;


- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithID:(NSInteger)platformID
                markString:(NSString *)mark
                     appID:(NSString *)appID
                  adSlotID:(NSString *)slotID;

+ (instancetype)newWithID:(NSInteger)platformID
               markString:(NSString *)mark
                    appID:(NSString *)appID
                 adSlotID:(NSString *)slotID;

@end

NS_ASSUME_NONNULL_END
