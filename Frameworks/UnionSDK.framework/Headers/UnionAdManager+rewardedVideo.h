//
//  UnionAdManager+rewardedVideo.h
//  UnionSDK
//
//  Created by DHY on 2021/3/10.
//

#import <UnionSDK/UnionAdManager.h>
#import <UnionSDK/UnionRewardedVideoDelegate.h>

NS_ASSUME_NONNULL_BEGIN

/// 设置用户唯一标示ID
extern NSString * const kUnionRewardedVideoExtraUserIDKey;
/// 设置自定义参数
extern NSString * const kUnionRewardedVideoExtraExtraKey;
/// 设置奖励名称
extern NSString * const kUnionRewardedVideoExtraRewardNameKey;
/// 设置奖励数量
extern NSString * const kUnionRewardedVideoExtraRewardAmountKey;


@interface UnionAdManager (rewardedVideo)

/**
 判断广告位ID placementID对应的广告是否可以展示
 
 @param slotID     Union平台的广告key
 
 @return YES：可以展示了；NO：不可以展示
 */
+ (BOOL)rewardedVideoReadyForAdSlotID:(NSString *)slotID;

/**
 展示激励视频广告
 
 @param slotID                     Union平台的广告key
 @param viewController  展示广告的视图控制器
 @param delegate                回调代理
 */
+ (void)showRewardedVideoWithAdSlotID:(NSString *)slotID
                     inViewController:(UIViewController *)viewController
                             delegate:(id<UnionRewardedVideoDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
