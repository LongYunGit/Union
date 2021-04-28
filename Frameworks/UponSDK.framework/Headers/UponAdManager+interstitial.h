//
//  UponAdManager+interstitial.h
//  UponSDK
//
//  Created by DHY on 2021/3/10.
//

#import <UponSDK/UponAdManager.h>
#import <UponSDK/UponInterstitialDelegate.h>

NS_ASSUME_NONNULL_BEGIN

/// 设置插屏广告尺寸
extern NSString * const kUponInterstitialExtraAdSizeKey;


@interface UponAdManager (interstitial)

/**
 判断广告位ID placementID对应的广告是否可以展示
 
 @param slotID     Upon平台的广告key
 
 @return YES：可以展示了；NO：不可以展示
 */
+ (BOOL)interstitialReadyForAdSlotID:(NSString *)slotID;

/**
 展示插屏广告
 
 @param slotID                    Upon平台的广告key
 @param viewController  展示广告的视图控制器
 @param delegate                回调代理
 */
+ (void)showInterstitialWithAdSlotID:(NSString *)slotID
                    inViewController:(UIViewController*)viewController
                            delegate:(id<UponInterstitialDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
