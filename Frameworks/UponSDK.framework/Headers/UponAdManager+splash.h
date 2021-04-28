//
//  UponAdManager+splash.h
//  UponSDK
//
//  Created by DHY on 2021/3/10.
//

#import <UponSDK/UponAdManager.h>
#import <UponSDK/UponSplashDelegate.h>

NS_ASSUME_NONNULL_BEGIN

/// 设置开屏广告请求超时时间
extern NSString * const kUponSplashExtraTolerateTimeoutKey;

/// 设置开屏背景色（仅限于：GDT）
extern NSString * const kUponSplashBackgroundColorKey;

/// 设置开屏广告bottomVIew（仅限于：GDT）
extern NSString * const kUponSplashBottomViewKey;

/// 设置开屏广告skipView（仅限于：GDT）
extern NSString * const kUponSplashSkipViewKey;


@interface UponAdManager (splash)

/**
 判断开屏广告是否可以展示
 
 @param slotID     Upon平台的广告key
 
 @return YES：可以展示了；NO：不可以展示
 */
+ (BOOL)splashReadyForAdSlotID:(NSString *)slotID;

/**
 展示开屏广告
 
 @param slotID                    Upon平台的广告key
 @param window                    展示广告的主屏幕
 @param delegate                回调代理
 */
+ (void)showSplashWithAdSlotID:(NSString *)slotID inWindow:(UIWindow*)window delegate:(id<UponSplashDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
