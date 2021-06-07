//
//  UnionAdManager.h
//  UnionSDK
//
//  Created by DHY on 2021/3/2.
//

#import <UIKit/UIKit.h>
#import <UnionSDK/UnionAdPreloadConfig.h>

NS_ASSUME_NONNULL_BEGIN

@protocol UnionAdLoadingDelegate, UnionAD;
@interface UnionAdManager : NSObject

/// 是否打印log日志信息，默认NO（注：发布到appstore之前，请将其设置为：NO）
@property (nonatomic, assign, class) BOOL logEnable;
/// 是否允许log视图显示日志信息（注：发布到appstore之前，请将其设置为：NO）
@property (nonatomic, assign, class) BOOL logViewEnable;
/// 当前SDK版本号
@property (nonatomic, readonly, class) NSString *sdkVersion;
/// 渠道标示（默认：App Store）
@property (nonatomic, copy, class) NSString *channel;
/// Union平台的appid
@property (nonatomic, readonly, class) NSString *appId;
/// 允许获取定位信息
@property (nonatomic, assign, class) BOOL enableLocation;
/// 预加载配置信息（注：如果不配置，在初始化预加载的时候，某些类型的广告将无法预加载。请在startWithAppId: 调用之前设置）
@property (nonatomic, strong, class) UnionAdPreloadConfig *preloadConfig;


/// 集成SDK检查（检查缺少哪些framwork未导入）
+ (void)integrationChecking;

/// 打开日志页面
+ (void)openLogViewInRootViewController:(UIViewController *)controller;

/**
 启动Union SDK
 
 @discussion 建议在app didFinishLaunchingWithOptions中调用
 
 @param appId   Union平台的appid
 */
+ (void)startWithAppId:(NSString *)appId;

/**
 加载广告
 
 @param slotID         Union平台广告位ID
 @param extra           广告展示所需的扩展字段
 @param delegate    回调代理
 */
+ (void)loadADWithAdSlotID:(NSString *)slotID
                     extra:(nullable NSDictionary *)extra
                  delegate:(nullable id<UnionAdLoadingDelegate>)delegate;

@end

FOUNDATION_EXTERN CGSize UnionGetSizeValueForExtra(NSDictionary *extra, NSString *forKey);
FOUNDATION_EXTERN NSTimeInterval UnionGetTimeValueForExtra(NSDictionary *extra, NSString *forKey);
FOUNDATION_EXTERN NSString * UnionGetStringValueForExtra(NSDictionary *extra, NSString *forKey);
FOUNDATION_EXTERN NSInteger UnionGetIntegerValueForExtra(NSDictionary *extra, NSString *forKey);
FOUNDATION_EXTERN NSInteger UnionGetBoolValueForExtra(NSDictionary *extra, NSString *forKey);

FOUNDATION_EXTERN UIColor * UnionGetColorValueForExtra(NSDictionary *extra, NSString *forKey);
FOUNDATION_EXTERN UIView * UnionGetViewValueForExtra(NSDictionary *extra, NSString *forKey);

NS_ASSUME_NONNULL_END
