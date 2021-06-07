//
//  UnionAdManager+native.h
//  UnionSDK
//
//  Created by DHY on 2021/3/10.
//

#import <UnionSDK/UnionAdManager.h>
#import <UnionSDK/UnionNativeView.h>

NS_ASSUME_NONNULL_BEGIN

/// 设置原生广告尺寸
extern NSString * const kUnionNativeExtraAdSizeKey;
/// 设置加载的广告个数（上游不同，此处的限制不一样）
extern NSString * const kUnionNativeExtraAdLoadCountKey;

// 头条
extern NSString * const kUnionNativeExtraTTProposalSizeKey; // 仅仅对头条的信息流起作用，draw信息流无效
extern NSString * const kUnionNativeExtraTTProposalSize228_150; // 默认
extern NSString * const kUnionNativeExtraTTProposalSize690_388;


@interface UnionAdManager (native)

/**
 判断广告位ID placementID对应的广告是否可以展示
 
 @param slotID     Union平台的广告key
 
 @return YES：可以展示了；NO：不可以展示
 */
+ (BOOL)nativeAdReadyForAdSlotID:(NSString *)slotID;

/**
 获取信息流广告视图
 
 @param slotID         Union平台的广告key
 
 @return ready：YES 信息流广告视图列表不为空；ready：NO 信息流广告视图列表为空；
 */
+ (nullable NSArray<UnionNativeView *> *)retriveNativeAdViewWithAdSlotID:(NSString *)slotID;

@end

NS_ASSUME_NONNULL_END
