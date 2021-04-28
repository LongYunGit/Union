//
//  UponAdManager+banner.h
//  UponSDK
//
//  Created by DHY on 2021/3/10.
//

#import <UponSDK/UponAdManager.h>
#import <UponSDK/UponBannerDelegate.h>
#import <UponSDK/UponBannerView.h>

NS_ASSUME_NONNULL_BEGIN

/// 设置Banner尺寸
extern NSString * const kUponBannerExtraAdSizeKey;
/// 设置Banner是否采用动画切换：BOOL
extern NSString * const kUponBannerExtraAdAnimalKey;


@interface UponAdManager (banner)

/**
 判断广告位ID placementID对应的广告是否可以展示
 
 @param slotID     Upon平台的广告key
 
 @return YES：可以展示了；NO：不可以展示
 */
+ (BOOL)bannerAdReadyForAdSlotID:(NSString *)slotID;

/**
 获取banner广告视图
 
 @param slotID         Upon平台的广告key
 
 @return ready：YES banner广告视图不为空；ready：NO banner广告视图为空；
 */
+ (nullable UponBannerView *)retrieveBannerViewForAdSlotID:(NSString *)slotID;

@end

NS_ASSUME_NONNULL_END
