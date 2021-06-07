//
//  UnionAdManager+splash.h
//  UnionSDK
//
//  Created by DHY on 2021/3/10.
//

#import <UnionSDK/UnionAdManager.h>
#import <UnionSDK/UnionSplashDelegate.h>

NS_ASSUME_NONNULL_BEGIN

/// 设置开屏广告请求超时时间
extern NSString * const kUnionSplashExtraTolerateTimeoutKey;

/// 设置开屏背景色（仅限于：GDT）
extern NSString * const kUnionSplashBackgroundColorKey;

/// 设置开屏广告bottomVIew（仅限于：GDT）
extern NSString * const kUnionSplashBottomViewKey;

/// 设置开屏广告skipView（仅限于：GDT）
extern NSString * const kUnionSplashSkipViewKey;


@interface UnionAdManager (splash)

/**
 判断开屏广告是否可以展示
 
 @param slotID     Union平台的广告key
 
 @return YES：可以展示了；NO：不可以展示
 */
+ (BOOL)splashReadyForAdSlotID:(NSString *)slotID;

/**
 展示开屏广告
 
 @param slotID                    Union平台的广告key
 @param window                    展示广告的主屏幕
 @param delegate                回调代理
 */
+ (void)showSplashWithAdSlotID:(NSString *)slotID inWindow:(UIWindow*)window delegate:(id<UnionSplashDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
