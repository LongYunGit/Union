//
//  UponAdManager+native.h
//  UponSDK
//
//  Created by DHY on 2021/3/10.
//

#import <UponSDK/UponAdManager.h>
#import <UponSDK/UponNativeView.h>

NS_ASSUME_NONNULL_BEGIN

/// 设置原生广告尺寸
extern NSString * const kUponNativeExtraAdSizeKey;
/// 设置加载的广告个数（上游不同，此处的限制不一样）
extern NSString * const kUponNativeExtraAdLoadCountKey;

// 头条
extern NSString * const kUponNativeExtraTTProposalSizeKey; // 仅仅对头条的信息流起作用，draw信息流无效
extern NSString * const kUponNativeExtraTTProposalSize228_150; // 默认
extern NSString * const kUponNativeExtraTTProposalSize690_388;


@interface UponAdManager (native)

/**
 判断广告位ID placementID对应的广告是否可以展示
 
 @param slotID     Upon平台的广告key
 
 @return YES：可以展示了；NO：不可以展示
 */
+ (BOOL)nativeAdReadyForAdSlotID:(NSString *)slotID;

/**
 获取信息流广告视图
 
 @param slotID         Upon平台的广告key
 
 @return ready：YES 信息流广告视图列表不为空；ready：NO 信息流广告视图列表为空；
 */
+ (nullable NSArray<UponNativeView *> *)retriveNativeAdViewWithAdSlotID:(NSString *)slotID;

@end

NS_ASSUME_NONNULL_END
