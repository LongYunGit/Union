//
//  UnionAdManager+banner.h
//  UnionSDK
//
//  Created by DHY on 2021/3/10.
//

#import <UnionSDK/UnionAdManager.h>
#import <UnionSDK/UnionBannerDelegate.h>
#import <UnionSDK/UnionBannerView.h>

NS_ASSUME_NONNULL_BEGIN

/// 设置Banner尺寸
extern NSString * const kUnionBannerExtraAdSizeKey;
/// 设置Banner是否采用动画切换：BOOL
extern NSString * const kUnionBannerExtraAdAnimalKey;


@interface UnionAdManager (banner)

/**
 判断广告位ID placementID对应的广告是否可以展示
 
 @param slotID     Union平台的广告key
 
 @return YES：可以展示了；NO：不可以展示
 */
+ (BOOL)bannerAdReadyForAdSlotID:(NSString *)slotID;

/**
 获取banner广告视图
 
 @param slotID         Union平台的广告key
 
 @return ready：YES banner广告视图不为空；ready：NO banner广告视图为空；
 */
+ (nullable UnionBannerView *)retrieveBannerViewForAdSlotID:(NSString *)slotID;

@end

NS_ASSUME_NONNULL_END
